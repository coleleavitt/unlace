__int64 *__fastcall sub_40F1D0(__int64 *a1, int *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v6)(__int64); // rax
  unsigned __int64 *v7; // rax
  char *v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  char *v11; // rax
  void *v12; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, int); // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)a2;
  v17 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = *(__int64 (__fastcall **)(__int64))(v4 + 32);
  v16 = 0;
  if ( v6 == sub_3D58E0 )
    v7 = (unsigned __int64 *)(a2 + 4);
  else
    v7 = (unsigned __int64 *)v6((__int64)a2);
  if ( a3 >= *v7 && a3 < v7[1] )
  {
    v14 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a2 + 40LL);
    if ( v14 == sub_40E2E0 )
    {
      if ( !*(_DWORD *)(*(_QWORD *)(switch_dbctx(a2[2]) + 1448) + 72LL) || a3 )
        goto LABEL_5;
    }
    else if ( a3 != v14((__int64)a2, a3, 0) )
    {
      goto LABEL_5;
    }
    sub_40EE00(a2, (__int64 *)&ptr, a3);
  }
LABEL_5:
  sub_40E680(a1, (__int64 *)&ptr, ",");
  v8 = (char *)ptr;
  if ( ptr )
  {
    v9 = v16;
    if ( (_QWORD)v16 )
    {
      v10 = 0;
      do
      {
        v11 = &v8[24 * v10];
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          qfree(v12);
          v8 = (char *)ptr;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v16 = 0;
    qfree(v8);
  }
  return a1;
}

