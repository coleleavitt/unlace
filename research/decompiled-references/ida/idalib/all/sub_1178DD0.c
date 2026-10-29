void __fastcall sub_1178DD0(__int64 a1, __int64 *a2, __int64 a3)
{
  void **v5; // rbx
  void **v6; // r15
  const char *v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rsi
  void *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  _BYTE *v15; // rdi
  void **v16; // rbp
  __int64 v17; // [rsp+8h] [rbp-270h]
  const char *v18; // [rsp+18h] [rbp-260h]
  __int64 v19; // [rsp+18h] [rbp-260h]
  void *v20[2]; // [rsp+20h] [rbp-258h] BYREF
  _BYTE v21[16]; // [rsp+30h] [rbp-248h] BYREF
  void **v23; // [rsp+50h] [rbp-228h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-220h]
  __int64 v25; // [rsp+60h] [rbp-218h] BYREF

  sub_1178A10(&v23, a1, (__int64)a2);
  v5 = &v23[5 * v24];
  if ( v23 != v5 )
  {
    v6 = v23;
    v17 = a3 + 16;
    do
    {
      while ( 1 )
      {
        v20[0] = v21;
        sub_1177F80(v20, *v6, (__int64)v6[1] + (_QWORD)*v6);
        v7 = "-mlink-bitcode-file";
        v8 = *(unsigned int *)(a3 + 12);
        if ( *((_BYTE *)v6 + 32) )
          v7 = "-mlink-builtin-bitcode";
        v9 = *(unsigned int *)(a3 + 8);
        if ( v9 + 1 > v8 )
        {
          v18 = v7;
          sub_2237220(a3, v17, v9 + 1, 8);
          v9 = *(unsigned int *)(a3 + 8);
          v7 = v18;
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v9) = v7;
        v10 = *a2;
        v11 = v20[0];
        v12 = v20[1];
        ++*(_DWORD *)(a3 + 8);
        v13 = (*(__int64 (__fastcall **)(__int64 *, void *, void *))(v10 + 16))(a2, v11, v12);
        v14 = *(unsigned int *)(a3 + 8);
        if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          v19 = v13;
          sub_2237220(a3, v17, v14 + 1, 8);
          v14 = *(unsigned int *)(a3 + 8);
          v13 = v19;
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v14) = v13;
        v15 = v20[0];
        ++*(_DWORD *)(a3 + 8);
        if ( v15 == v21 )
          break;
        operator delete(v15);
        v6 += 5;
        if ( v5 == v6 )
          goto LABEL_11;
      }
      v6 += 5;
    }
    while ( v5 != v6 );
LABEL_11:
    v16 = v23;
    v5 = &v23[5 * v24];
    if ( v23 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v5 -= 5;
          if ( *v5 == v5 + 2 )
            break;
          operator delete(*v5);
          if ( v16 == v5 )
            goto LABEL_14;
        }
      }
      while ( v16 != v5 );
LABEL_14:
      v5 = v23;
    }
  }
  if ( v5 != (void **)&v25 )
    free(v5);
}
