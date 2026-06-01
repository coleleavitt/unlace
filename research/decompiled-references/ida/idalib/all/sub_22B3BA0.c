__int64 __fastcall sub_22B3BA0(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5)
{
  bool v6; // r13
  int v8; // eax
  int v9; // eax
  __int64 *v10; // rsi
  __int64 *v11; // r14
  int v12; // eax
  int v13; // eax
  char **v15; // rbx
  char **v16; // r13
  char **v17; // rax
  int v18; // ecx
  unsigned int v19; // ecx
  const char *v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // r13d
  __int64 *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 *v27; // [rsp+0h] [rbp-78h]
  __int64 *v28; // [rsp+8h] [rbp-70h]
  __int64 *v29; // [rsp+18h] [rbp-60h] BYREF
  __int64 *v30[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  if ( *(_DWORD *)(a4 + 32) == 26 )
  {
    if ( a3 )
    {
      v15 = &off_2BF5820;
      while ( 1 )
      {
        v16 = v15;
        if ( (char *)a3 == v15[1] && !memcmp(a2, *v15, a3) )
          break;
        v15 += 5;
        if ( &unk_2BF6310 == (_UNKNOWN *)v15 )
          goto LABEL_19;
      }
    }
    else
    {
      v17 = &off_2BF5820;
      while ( 1 )
      {
        v16 = v17;
        if ( !v17[1] )
          break;
        v17 += 5;
        if ( &unk_2BF6310 == (_UNKNOWN *)v17 )
        {
LABEL_19:
          v6 = 0;
          goto LABEL_2;
        }
      }
    }
    v18 = *((_DWORD *)v16 + 8);
    v6 = 0;
    v19 = v18 - 41;
    if ( v19 <= 0x1A )
      v6 = ((1LL << v19) & 0x7BFFFFF) != 0;
  }
LABEL_2:
  sub_EC0F90(v30, (__int64 *)(*(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8)), 1);
  v27 = v30[0];
  v8 = sub_2244B30((__int64)"wavefrontsize32", 15);
  v9 = sub_2244E60((__int64 *)a5, "wavefrontsize32", 0xFu, v8);
  if ( v9 == -1 )
    v10 = (__int64 *)(*(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8));
  else
    v10 = (__int64 *)(*(_QWORD *)a5 + 8LL * v9);
  sub_EC0F90(v30, v10, 1);
  v28 = v30[0];
  sub_EC0F90(v30, (__int64 *)(*(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8)), 1);
  v11 = v30[0];
  v12 = sub_2244B30((__int64)"wavefrontsize64", 15);
  v13 = sub_2244E60((__int64 *)a5, "wavefrontsize64", 0xFu, v12);
  if ( v13 == -1 )
    sub_EC0F90(v30, (__int64 *)(*(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8)), 1);
  else
    sub_EC0F90(v30, (__int64 *)(*(_QWORD *)a5 + 8LL * v13), 1);
  if ( v11 == v30[0] )
  {
    if ( a3 && v27 != v28 )
    {
      if ( !v6 )
      {
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = "wavefrontsize32";
        *(_QWORD *)(a1 + 16) = 15;
        return a1;
      }
      goto LABEL_10;
    }
    if ( a3 && v27 == v28 )
    {
      v30[1] = (_QWORD *)(byte_9 + 6);
      v20 = "wavefrontsize32";
      if ( !v6 )
        v20 = "wavefrontsize64";
      v30[0] = (__int64 *)v20;
      v21 = sub_2244B30((__int64)v20, 15);
      v22 = sub_2244CB0(a5, v20, 0xFu, v21);
      v23 = (__int64 *)(*(_QWORD *)a5 + 8LL * v22);
      if ( *v23 )
      {
        if ( *v23 != -8 )
        {
          sub_10298F0(&v29, v23, 0);
          goto LABEL_10;
        }
        --*(_DWORD *)(a5 + 16);
      }
      v24 = sub_22300B0(32, 8);
      v25 = *(_QWORD *)v20;
      *(_BYTE *)(v24 + 31) = 0;
      *(_QWORD *)(v24 + 16) = v25;
      LODWORD(v25) = *((_DWORD *)v20 + 2);
      *(_QWORD *)v24 = 15;
      *(_DWORD *)(v24 + 24) = v25;
      LOWORD(v25) = *((_WORD *)v20 + 6);
      *(_BYTE *)(v24 + 8) = 1;
      *(_WORD *)(v24 + 28) = v25;
      *(_BYTE *)(v24 + 30) = v20[14];
      *v23 = v24;
      ++*(_DWORD *)(a5 + 12);
      v26 = sub_22450D0(a5, v22);
      sub_10298F0(&v29, (__int64 *)(*(_QWORD *)a5 + 8LL * v26), 0);
    }
  }
  else if ( v27 != v28 )
  {
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = "'wavefrontsize32' and 'wavefrontsize64' are mutually exclusive";
    *(_QWORD *)(a1 + 16) = 62;
    return a1;
  }
LABEL_10:
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return a1;
}
