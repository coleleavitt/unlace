__int64 __fastcall sub_13BEA60(_BYTE *a1, unsigned __int8 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx
  char v6; // r8
  __int64 v7; // r13
  unsigned int v8; // r14d
  unsigned __int32 v9; // eax
  unsigned __int8 *v10; // rdx
  int v11; // r12d
  unsigned int i; // r14d
  __int64 v13; // rdi
  unsigned int v14; // edx
  unsigned __int32 v15; // ebp
  unsigned __int32 v16; // r15d
  unsigned __int32 v17; // eax
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rdx
  unsigned int v20; // edx
  unsigned int v21; // eax
  void *v22; // r13
  bool v23; // zf
  const void *v24; // r12
  size_t v25; // rbp
  __int64 v26; // rdx
  size_t v27; // rdi
  char *v28; // rbp
  __int64 result; // rax
  __int64 v30; // [rsp+8h] [rbp-B0h]
  __int64 v31; // [rsp+10h] [rbp-A8h]
  unsigned int v32; // [rsp+18h] [rbp-A0h]
  char v33; // [rsp+1Fh] [rbp-99h]
  unsigned __int8 *v35; // [rsp+30h] [rbp-88h] BYREF
  __int64 v36; // [rsp+38h] [rbp-80h]
  void *src; // [rsp+40h] [rbp-78h] BYREF
  size_t n; // [rsp+48h] [rbp-70h]
  char v39; // [rsp+50h] [rbp-68h]
  void *v40[2]; // [rsp+60h] [rbp-58h] BYREF
  char v41; // [rsp+70h] [rbp-48h]

  v5 = *(_QWORD *)a1;
  v6 = a1[8];
  v36 = a3;
  v35 = a2;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_DWORD *)(v7 + 16);
  v9 = _byteswap_ulong(v8);
  if ( v6 )
    v8 = v9;
  v10 = &a2[a3];
  v11 = 0;
  for ( i = v8 - 1; a2 != v10; v11 += 13 * (char)(v13 + 32) )
  {
    while ( 1 )
    {
      v13 = *a2;
      if ( (byte_2411740[2 * v13] & 0x20) != 0 )
        break;
      ++a2;
      v11 += 13 * (char)v13;
      if ( v10 == a2 )
        goto LABEL_14;
    }
    ++a2;
  }
  while ( 1 )
  {
LABEL_14:
    v14 = *(_DWORD *)(v7 + 12LL * (i & v11) + 24);
    v16 = *(_DWORD *)(v7 + 12LL * (i & v11) + 32);
    v15 = *(_DWORD *)(v7 + 12LL * (i & v11) + 28);
    if ( v6 )
    {
      v14 = _byteswap_ulong(v14);
      v15 = _byteswap_ulong(v15);
      v16 = _byteswap_ulong(v16);
      if ( !v14 )
        return 0;
      v17 = _byteswap_ulong(*(_DWORD *)(v7 + 8));
    }
    else
    {
      if ( !v14 )
        return 0;
      v17 = *(_DWORD *)(v7 + 8);
    }
    v18 = v17 + v14;
    v19 = *(_QWORD *)(v5 + 16) - v7;
    if ( v18 < v19 )
    {
      v20 = v19 - v18;
      if ( v20 )
      {
        v33 = v6;
        v31 = v5;
        v32 = v20;
        v30 = v7 + v18;
        v21 = strnlen((const char *)(v7 + v18), v20);
        v5 = v31;
        v6 = v33;
        if ( (v32 != v21 || !*(_BYTE *)(v30 + v32 - 1)) && v36 == v21 )
          break;
      }
    }
LABEL_13:
    ++v11;
  }
  if ( (unsigned int)sub_22462B0(&v35, v30, v21) )
  {
    v5 = *(_QWORD *)a1;
    v6 = a1[8];
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    goto LABEL_13;
  }
  sub_13BE9E0((__int64)&src, a1, v15);
  v22 = src;
  sub_13BE9E0((__int64)v40, a1, v16);
  v23 = v39 == 0;
  v24 = v40[0];
  a4[1] = 0;
  if ( v23 || !v41 )
    return *a4;
  v25 = n;
  v26 = 0;
  if ( n > a4[2] )
  {
    sub_2236E10(a4, a4 + 3, n, 1);
    v26 = a4[1];
  }
  if ( v25 )
  {
    memcpy((void *)(v26 + *a4), v22, v25);
    v26 = a4[1];
  }
  v27 = v25 + v26;
  v28 = (char *)v40[1];
  a4[1] = v27;
  if ( (unsigned __int64)&v28[v27] > a4[2] )
  {
    sub_2236E10(a4, a4 + 3, &v28[v27], 1);
    v27 = a4[1];
  }
  result = *a4;
  if ( v28 )
  {
    memcpy((void *)(result + v27), v24, (size_t)v28);
    v27 = a4[1];
    result = *a4;
  }
  a4[1] = &v28[v27];
  return result;
}
