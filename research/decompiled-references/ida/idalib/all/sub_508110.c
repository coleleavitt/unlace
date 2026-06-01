__int64 __fastcall sub_508110(_QWORD *a1, __int64 a2, const char *a3, __int64 a4, int a5, double a6, double a7)
{
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void **p_ptr; // [rsp+0h] [rbp-478h]
  int v18; // [rsp+8h] [rbp-470h]
  unsigned __int8 v19; // [rsp+Fh] [rbp-469h]
  void *ptr; // [rsp+10h] [rbp-468h] BYREF
  int v21[4]; // [rsp+18h] [rbp-460h]
  int v22; // [rsp+28h] [rbp-450h]
  __int64 v23; // [rsp+30h] [rbp-448h] BYREF
  __int64 v24; // [rsp+38h] [rbp-440h]
  int v25; // [rsp+40h] [rbp-438h]
  int v26; // [rsp+48h] [rbp-430h]
  __int64 v27; // [rsp+50h] [rbp-428h]
  unsigned __int64 v28; // [rsp+438h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v19 = sub_507E70(a1, a2, a3, a4, a5);
  if ( v19 )
  {
    v9 = *(_QWORD *)a2;
    v10 = netnode_supfirst(*(_QWORD *)a2, 83);
    if ( v10 != -1 )
    {
      p_ptr = &ptr;
      do
      {
        v11 = node2ea(v10);
        v12 = netnode_supval(v9, v10, &v23, 1024, 83);
        if ( v12 > 0 )
        {
          sub_507300(a2, a6, a7, a4, v10, (unsigned __int64 *)&v23, v12);
        }
        else
        {
          a6 = 0.0;
          ptr = nullptr;
          *(_OWORD *)v21 = 0;
          netnode_get_name(v9, p_ptr);
          sub_84F5B0(
            "no range %s:%a (node=%a)\n",
            (__int64)p_ptr,
            v18,
            (int)ptr,
            v21[0],
            v21[2],
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          __memset_chk(&v23, 0, *(unsigned __int16 *)(a2 + 8), 1024);
          v23 = v11;
          v24 = v11 + 1;
          sub_503C80(a2, &v23, v13, v14, v15, v16);
          if ( ptr )
          {
            *(_QWORD *)v21 = 0;
            qfree(ptr);
          }
        }
        v10 = netnode_supnext(v9, v10, 83);
      }
      while ( v10 != -1 );
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL) = **(_QWORD **)(a2 + 32) + 16LL * *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL);
    *(_BYTE *)(*(_QWORD *)(a2 + 32) + 36LL) = 1;
  }
  return v19;
}
