/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047680
// Address: 0x0000000100047680

//----- (0000000100047680) ----------------------------------------------------
__int64 __fastcall sub_100047680(__int64 a1, __int64 a2, _BYTE *a3)
{
  const char *v4; // rsi
  __int64 **v5; // rax
  __int64 **v6; // r15
  __int64 result; // rax
  __int64 v8; // rbx
  _DWORD *v9; // r12
  const char *v11; // r13
  size_t v12; // rax
  unsigned __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // xmm0
  char v19; // bl
  void *v20; // rdi
  unsigned int v21; // r14d
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // r13
  void *v25; // rdi
  _BYTE *v26; // [rsp+8h] [rbp-68h]
  char v27; // [rsp+1Fh] [rbp-51h] BYREF
  _OWORD v28[2]; // [rsp+20h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a2 + 8) )
    v4 = *(const char **)a2;
  else
    v4 = _s1;
  v5 = sub_100045D60(a1, v4);
  v26 = a3;
  *a3 = 0;
  if ( !v5 )
    return 0;
  v6 = v5;
  result = (unsigned int)(*(_DWORD *)(a1 + 64) - 1);
  if ( (int)result >= 0 )
  {
    v8 = (unsigned int)result + 1LL;
    v9 = (_DWORD *)(56LL * (unsigned int)result + *(_QWORD *)(a1 + 56) + 48);
    do
    {
      result = *((_QWORD *)v9 - 1);
      if ( (__int64 **)result == v6 )
      {
        if ( *((_BYTE *)v6 + 25) != 1 )
          return 0;
        v11 = _s1;
        if ( *(_QWORD *)(result + 8) )
          v11 = *(const char **)result;
        v12 = strlen(v11);
        v13 = *(_QWORD *)(a1 + 8);
        if ( (unsigned __int64)v11 <= v13 && v13 <= (unsigned __int64)&v11[v12] )
          return 0;
        result = *(unsigned int *)(a1 + 80);
        if ( (int)result > *v9 )
          return 0;
      }
      v9 -= 14;
    }
    while ( v8-- > 1 );
  }
  memset(v28, 0, 24);
  if ( *((_BYTE *)v6 + 25) != 1 )
    goto LABEL_20;
  result = sub_100047080(a1, (__int64)v28, (__int64)&v27);
  if ( (_DWORD)result || (result = 0, !v27) )
  {
LABEL_29:
    v19 = 0;
    goto LABEL_30;
  }
  result = *((unsigned __int8 *)v6 + 24);
  if ( *((_QWORD *)&v28[0] + 1) != result )
  {
    set_error_string(0, v4);
    result = set_qerrno();
    goto LABEL_29;
  }
LABEL_20:
  if ( (unsigned __int64)v6[1] >= 2 )
  {
    v14 = *(char **)(a1 + 56);
    v15 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v15 + 1) )
    {
      v14 = (char *)qvector_reserve(a1 + 56, v14, v15 + 1, 0x38u);
      *(_QWORD *)(a1 + 56) = v14;
      v15 = *(_QWORD *)(a1 + 64);
    }
    v16 = 56 * v15;
    *(_OWORD *)&v14[v16] = 0;
    *(_QWORD *)&v14[v16 + 16] = 0;
    ++*(_QWORD *)(a1 + 64);
    *(_QWORD *)&v14[v16 + 24] = *(_QWORD *)a1;
    *(_QWORD *)&v14[v16 + 32] = *(_QWORD *)(a1 + 8);
    *(_DWORD *)&v14[v16 + 48] = *(_DWORD *)(a1 + 80);
    *(_QWORD *)&v14[v16 + 40] = v6;
    v17 = *(_QWORD *)&v28[0];
    v18 = *(_OWORD *)((char *)v28 + 8);
    v28[0] = *(_OWORD *)&v14[v16];
    *(_QWORD *)&v28[1] = *(_QWORD *)&v14[v16 + 16];
    *(_QWORD *)&v14[v16] = v17;
    *(_OWORD *)&v14[v16 + 8] = v18;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 64) - 1;
    if ( v6[1] )
      result = (__int64)*v6;
    else
      result = (__int64)_s1;
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)a1 = result;
  }
  *v26 = 1;
  v19 = 1;
LABEL_30:
  v20 = *(void **)&v28[0];
  if ( *(_QWORD *)&v28[0] )
  {
    v21 = result;
    v22 = *((_QWORD *)&v28[0] + 1);
    if ( *((_QWORD *)&v28[0] + 1) )
    {
      v23 = 0;
      do
      {
        v24 = *(_QWORD *)&v28[0];
        v25 = *(void **)(*(_QWORD *)&v28[0] + v23);
        if ( v25 )
        {
          *(_QWORD *)(*(_QWORD *)&v28[0] + v23 + 8) = 0;
          qfree(v25);
          *(_QWORD *)(v24 + v23) = 0;
          *(_QWORD *)(v24 + v23 + 16) = 0;
        }
        v23 += 24;
        --v22;
      }
      while ( v22 );
      v20 = *(void **)&v28[0];
    }
    *((_QWORD *)&v28[0] + 1) = 0;
    qfree(v20);
    result = v21;
  }
  if ( v19 )
    return 0;
  return result;
}
