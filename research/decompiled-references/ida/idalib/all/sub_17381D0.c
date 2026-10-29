__int64 __fastcall sub_17381D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // esi
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  int v19; // r10d
  unsigned __int64 v20; // r13
  int v21; // edi
  bool v22; // zf
  __int64 v23; // rdx
  char v24; // al
  int v25; // edx
  int v26; // edx
  unsigned __int64 v27; // [rsp+8h] [rbp-70h] BYREF
  __int64 v28; // [rsp+10h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+18h] [rbp-60h] BYREF
  __int128 v30; // [rsp+28h] [rbp-50h] BYREF
  __int128 v31; // [rsp+38h] [rbp-40h]

  if ( !a2 )
    return sub_BC85A0(a1, a2, a3);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return sub_BC85A0(a1, a2, a3);
  if ( ((*(__int64 *)(v10 + 8) >> 1) & 3) != 2 )
    return sub_BC85A0(a1, a2, a3);
  v12 = *(_QWORD *)(v10 + 16);
  v13 = *(_QWORD *)(a1 + 24);
  if ( !v12 )
    return sub_BC85A0(a1, a2, a3);
  if ( !v13 )
    return sub_BC85A0(a1, a2, a3);
  if ( *(_QWORD *)(v12 + 8) != *(_QWORD *)(v13 + 8) )
    return sub_BC85A0(a1, a2, a3);
  if ( (v9 & 6) != 0 )
    return sub_BC85A0(a1, a2, a3);
  v14 = *(_QWORD *)(a2 + 16);
  if ( !v14 )
    return sub_BC85A0(a1, a2, a3);
  v15 = *(_QWORD *)(a1 + 16);
  v28 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)ptr = 0;
  v30 = 0;
  v31 = 0;
  v16 = *(_DWORD *)(v15 + 16);
  if ( !v16 )
  {
    v27 = 0;
LABEL_30:
    v16 *= 2;
    goto LABEL_31;
  }
  a5 = v16 - 1;
  v17 = a5 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
  v18 = *(_QWORD *)v15 + ((unsigned __int64)v17 << 6);
  a6 = *(_QWORD *)v18;
  if ( v14 == *(_QWORD *)v18 )
  {
LABEL_12:
    if ( !*(_BYTE *)(v18 + 40) && !*(_QWORD *)(v18 + 56) && *(int *)(v18 + 48) < 0 )
    {
      *(_QWORD *)(v18 + 8) = v14;
      *(_DWORD *)(v18 + 48) = v31;
      *(_QWORD *)(v18 + 56) = *((_QWORD *)&v31 + 1);
    }
    return sub_BC85A0(a1, a2, a3);
  }
  v19 = 1;
  v20 = 0;
  if ( a6 != -4096 )
  {
    while ( 1 )
    {
      if ( !v20 && a6 == -8192 )
        v20 = v18;
      v17 = a5 & (v19 + v17);
      v18 = *(_QWORD *)v15 + ((unsigned __int64)v17 << 6);
      a6 = *(_QWORD *)v18;
      if ( v14 == *(_QWORD *)v18 )
        goto LABEL_12;
      if ( a6 == -4096 )
      {
        if ( v20 )
          goto LABEL_18;
        break;
      }
      ++v19;
    }
  }
  v20 = v18;
LABEL_18:
  v21 = *(_DWORD *)(v15 + 8);
  v12 = 3 * v16;
  v27 = v20;
  v13 = (unsigned int)(v21 + 1);
  if ( 4 * (int)v13 >= (unsigned int)v12 )
    goto LABEL_30;
  v12 = v16 - *(_DWORD *)(v15 + 12) - (unsigned int)v13;
  if ( (unsigned int)v12 <= v16 >> 3 )
  {
LABEL_31:
    sub_1737F80((__int64 **)v15, v16, v13, v12, a5, a6);
    sub_16FE800((__int64 *)v15, &v28, &v27);
    v14 = v28;
    v20 = v27;
    LODWORD(v13) = *(_DWORD *)(v15 + 8) + 1;
  }
  v22 = *(_QWORD *)v20 == -4096;
  *(_DWORD *)(v15 + 8) = v13;
  if ( !v22 )
    --*(_DWORD *)(v15 + 12);
  *(_QWORD *)v20 = v14;
  v23 = v28;
  *(_OWORD *)(v20 + 8) = 0;
  *(_OWORD *)(v20 + 24) = 0;
  v24 = BYTE8(v30);
  *(_OWORD *)(v20 + 40) = 0;
  *(_QWORD *)(v20 + 56) = 0;
  *(_DWORD *)(v20 + 48) = 2;
  *(_QWORD *)(v20 + 8) = v23;
  if ( v24 )
  {
    *(_QWORD *)(v20 + 16) = v20 + 32;
    v25 = (int)ptr[1];
    *(_QWORD *)(v20 + 24) = 0x100000000LL;
    if ( v25 )
    {
      sub_1712470((char ***)(v20 + 16), (char ***)ptr);
      v24 = BYTE8(v30);
    }
    v26 = v31;
    *(_BYTE *)(v20 + 40) = 1;
    *(_DWORD *)(v20 + 48) = v26;
    *(_QWORD *)(v20 + 56) = *((_QWORD *)&v31 + 1);
    if ( v24 && ptr[0] != &v30 )
      free(ptr[0]);
  }
  else
  {
    *(_DWORD *)(v20 + 48) = v31;
    *(_QWORD *)(v20 + 56) = *((_QWORD *)&v31 + 1);
  }
  return sub_BC85A0(a1, a2, a3);
}
