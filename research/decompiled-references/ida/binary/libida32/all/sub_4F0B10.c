__int64 __fastcall sub_4F0B10(_QWORD *a1, __m128i *a2, const char *a3, __int64 a4, int a5, double a6, double a7)
{
  unsigned __int32 v9; // r12d
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  __int64 v12; // r8
  void **p_ptr; // [rsp+0h] [rbp-478h]
  int v14; // [rsp+8h] [rbp-470h]
  unsigned __int8 v15; // [rsp+Fh] [rbp-469h]
  void *ptr; // [rsp+10h] [rbp-468h] BYREF
  int v17[4]; // [rsp+18h] [rbp-460h]
  int v18; // [rsp+28h] [rbp-450h]
  unsigned int v19[8]; // [rsp+30h] [rbp-448h] BYREF
  __int64 v20; // [rsp+50h] [rbp-428h]
  unsigned __int64 v21; // [rsp+438h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v15 = sub_4F0870(a1, a2, a3, a4, a5);
  if ( v15 )
  {
    v9 = a2->m128i_i32[0];
    v10 = netnode_supfirst(a2->m128i_u32[0], 83);
    if ( v10 != -1 )
    {
      p_ptr = &ptr;
      do
      {
        v11 = node2ea(v10);
        v12 = netnode_supval(v9, v10, v19, 1024, 83);
        if ( v12 > 0 )
        {
          sub_4EFD10((__int64)a2, a6, a7, a4, v10, v19, v12);
        }
        else
        {
          a6 = 0.0;
          ptr = nullptr;
          *(_OWORD *)v17 = 0;
          netnode_get_name(v9, p_ptr);
          sub_82BC50(
            "no range %s:%a (node=%a)\n",
            (__int64)p_ptr,
            v14,
            (int)ptr,
            v17[0],
            v17[2],
            v18,
            v19[0],
            v19[2],
            v19[4],
            v19[6],
            v20);
          __memset_chk();
          v19[0] = v11;
          v19[1] = v11 + 1;
          sub_4EC7A0((unsigned int *)a2, v19);
          if ( ptr )
          {
            *(_QWORD *)v17 = 0;
            qfree(ptr);
          }
        }
        v10 = netnode_supnext(v9, v10, 83);
      }
      while ( v10 != -1 );
    }
    *(_QWORD *)(a2[1].m128i_i64[1] + 24) = *(_QWORD *)a2[1].m128i_i64[1] + 16LL * *(_QWORD *)(a2[1].m128i_i64[1] + 8);
    *(_BYTE *)(a2[1].m128i_i64[1] + 36) = 1;
  }
  return v15;
}

