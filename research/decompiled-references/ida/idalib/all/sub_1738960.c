__int64 __fastcall sub_1738960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned int v12; // esi
  unsigned int v13; // eax
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  bool v16; // zf
  int v17; // r10d
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // [rsp+0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+8h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-50h] BYREF
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  __int128 v25; // [rsp+30h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 32);
  if ( !v6 )
    return 1;
  if ( ((*(__int64 *)(v6 + 8) >> 1) & 3) != 2 )
    return 1;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(v6 + 16);
  if ( !v8 )
    return 1;
  if ( !v9 )
    return 1;
  if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v8 + 8) )
    return 1;
  v10 = *(_QWORD *)(a2 + 40);
  if ( !v10 )
    return 1;
  v11 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)ptr = 0;
  v24 = 0;
  v25 = 0;
  v12 = *(_DWORD *)(v11 + 16);
  v22 = v10;
  if ( !v12 )
  {
    v21 = 0;
    goto LABEL_24;
  }
  a5 = v12 - 1;
  v13 = a5 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
  v14 = *(_QWORD *)v11 + ((unsigned __int64)v13 << 6);
  v15 = *(_QWORD *)v14;
  if ( v10 == *(_QWORD *)v14 )
    goto LABEL_10;
  v17 = 1;
  a6 = 0;
  if ( v15 == -4096 )
  {
LABEL_18:
    v18 = *(_DWORD *)(v11 + 8);
    a4 = 3 * v12;
    v21 = v14;
    v19 = v18 + 1;
    if ( 4 * v19 < (unsigned int)a4 )
    {
      v20 = v12 - *(_DWORD *)(v11 + 12) - v19;
      if ( (unsigned int)v20 > v12 >> 3 )
      {
LABEL_20:
        v16 = *(_QWORD *)v14 == -4096;
        *(_DWORD *)(v11 + 8) = v19;
        if ( !v16 )
          --*(_DWORD *)(v11 + 12);
        *(_QWORD *)v14 = v10;
        v10 = v22;
        *(_OWORD *)(v14 + 40) = 0;
        *(_OWORD *)(v14 + 8) = 0;
        *(_OWORD *)(v14 + 24) = 0;
        *(_QWORD *)(v14 + 56) = 0;
        *(_DWORD *)(v14 + 48) = 2;
        goto LABEL_13;
      }
      sub_1737F80((__int64 **)v11, v12, v10, v20, a5, a6);
LABEL_25:
      sub_16FE800((__int64 *)v11, &v22, &v21);
      v10 = v22;
      v14 = v21;
      v19 = *(_DWORD *)(v11 + 8) + 1;
      goto LABEL_20;
    }
LABEL_24:
    sub_1737F80((__int64 **)v11, 2 * v12, v10, a4, a5, a6);
    goto LABEL_25;
  }
  while ( 1 )
  {
    if ( !a6 && v15 == -8192 )
      a6 = v14;
    v13 = a5 & (v17 + v13);
    v14 = *(_QWORD *)v11 + ((unsigned __int64)v13 << 6);
    v15 = *(_QWORD *)v14;
    if ( v10 == *(_QWORD *)v14 )
      break;
    if ( v15 == -4096 )
    {
      if ( a6 )
        v14 = a6;
      goto LABEL_18;
    }
    ++v17;
  }
LABEL_10:
  if ( !*(_BYTE *)(v14 + 40) && !*(_QWORD *)(v14 + 56) && *(int *)(v14 + 48) < 0 )
  {
LABEL_13:
    *(_QWORD *)(v14 + 8) = v10;
    sub_17125C0(v14 + 16, (__int64)ptr);
    v16 = BYTE8(v24) == 0;
    *(_DWORD *)(v14 + 48) = v25;
    *(_QWORD *)(v14 + 56) = *((_QWORD *)&v25 + 1);
    if ( !v16 && ptr[0] != &v24 )
      free(ptr[0]);
  }
  return 1;
}
