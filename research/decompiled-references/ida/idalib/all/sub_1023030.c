__int64 __fastcall sub_1023030(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 *v3; // r12
  __int64 v6; // r9
  unsigned __int64 *v7; // r12
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned __int64 *v10; // rdx
  int v11; // eax
  int v12; // esi
  __int64 v13; // r8
  bool v14; // zf
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 *v23; // rsi
  __int64 v24; // r10
  unsigned __int64 v25; // r14
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  char v31; // dl
  __int64 v32; // rdx
  int v33; // esi
  int v34; // r10d
  __int64 v35; // r11
  unsigned __int64 v36[2]; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 *v37; // [rsp+18h] [rbp-40h] BYREF
  __m128 v38[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = (__int64 *)(a1 + 120);
  v36[0] = a2;
  if ( !(unsigned __int8)sub_101E210((__int64 *)(a1 + 120), v36, &v37) )
  {
    v9 = *(unsigned int *)(a1 + 136);
    v10 = v37;
    v11 = *(_DWORD *)(a1 + 128) + 1;
    v12 = 2 * v9;
    v13 = (unsigned int)(4 * v11);
    v38[0].m128_u64[0] = (unsigned __int64)v37;
    if ( (unsigned int)v13 < 3 * (int)v9 )
    {
      if ( (int)v9 - *(_DWORD *)(a1 + 132) - v11 > (unsigned int)v9 >> 3 )
      {
LABEL_6:
        v14 = *v10 == -4096;
        *(_DWORD *)(a1 + 128) = v11;
        if ( !v14 )
          --*(_DWORD *)(a1 + 132);
        v15 = v36[0];
        v10[1] = 0;
        v7 = v10 + 1;
        *v10 = v15;
        goto LABEL_9;
      }
      v12 = v9;
    }
    sub_1022EC0((__int64)v3, v12, (__int64)v37, v9, v13, v6);
    sub_101E210(v3, v36, (unsigned __int64 **)v38);
    v10 = (unsigned __int64 *)v38[0].m128_u64[0];
    v11 = *(_DWORD *)(a1 + 128) + 1;
    goto LABEL_6;
  }
  v7 = v37 + 1;
  result = v37[1];
  if ( result )
    return result;
LABEL_9:
  result = sub_9C3B30((__int64 *)(a1 + 24), 56, 3u);
  v16 = *(_QWORD *)(a1 + 152);
  *v7 = result;
  if ( !v16 )
  {
    v28 = v36[0];
LABEL_22:
    *(_BYTE *)(result + 48) &= 0xF0u;
    *(_QWORD *)result = 0;
    *(_QWORD *)(result + 8) = v28;
    *(_QWORD *)(result + 16) = v28;
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 32) = 0;
    *(_QWORD *)(result + 40) = 0;
    goto LABEL_23;
  }
  v17 = v36[0];
  while ( 1 )
  {
    v18 = *(_QWORD *)(v17 + 8);
    if ( !v18 )
      break;
    v18 &= 0xFFFFFFFFFFFFFFF8LL;
    v19 = *(_QWORD *)(v17 + 8) & 4LL;
    v17 = v18;
    if ( !v19 || !v18 )
      goto LABEL_14;
  }
  v17 = 0;
LABEL_14:
  v20 = *(unsigned int *)(v16 + 16);
  v21 = *(_QWORD *)v16;
  if ( (_DWORD)v20 )
  {
    v22 = (v20 - 1) & (((unsigned int)v18 >> 4) ^ ((unsigned int)v18 >> 9));
    v23 = (__int64 *)(v21 + 16LL * v22);
    v24 = *v23;
    if ( *v23 == v17 )
    {
LABEL_16:
      sub_101E8E0(v38, v23, (_QWORD *)(16 * v20 + v21), v16, 1);
      v25 = v38[0].m128_u64[0];
      goto LABEL_17;
    }
    v33 = 1;
    if ( v24 != -4096 )
    {
      do
      {
        v34 = v33 + 1;
        v22 = (v20 - 1) & (v33 + v22);
        v23 = (__int64 *)(v21 + 16LL * v22);
        v35 = *v23;
        if ( *v23 == v17 )
          goto LABEL_16;
        v33 = v34;
      }
      while ( v35 != -4096 );
    }
  }
  sub_101E8E0(v38, (_QWORD *)(v21 + 16LL * (unsigned int)v20), (_QWORD *)(v21 + 16LL * (unsigned int)v20), v16, 1);
  v25 = v38[0].m128_u64[0];
LABEL_17:
  v26 = *(_QWORD *)(a1 + 152);
  v27 = (_QWORD *)(*(_QWORD *)v26 + 16LL * *(unsigned int *)(v26 + 16));
  sub_101E8E0(v38, v27, v27, v26, 1);
  if ( v38[0].m128_u64[0] == v25 )
  {
    v28 = v36[0];
    result = *v7;
    goto LABEL_22;
  }
  v28 = v36[0];
  v29 = *(_QWORD *)(v25 + 8);
  result = *v7;
  v30 = v36[0];
  if ( !*(_BYTE *)(a1 + 144) )
    v30 = *(_QWORD *)(v25 + 8);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 16) = v29;
  *(_QWORD *)(result + 8) = v30;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_BYTE *)(result + 48) &= 0xF0u;
LABEL_23:
  v31 = *(_BYTE *)(result + 48) & 0xFD | (2 * (((a3 | *(_BYTE *)(a1 + 145) ^ 1) ^ 1) & 1));
  *(_BYTE *)(result + 48) = v31;
  *(_BYTE *)(result + 48) = (4 * (*(_BYTE *)(a1 + 146) & 1)) | v31 & 0xFB;
  while ( 1 )
  {
    v32 = *(_QWORD *)(v28 + 8);
    if ( !v32 )
      break;
    v28 = v32 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v32 & 4) == 0 || !v28 )
      goto LABEL_27;
  }
  v28 = 0;
LABEL_27:
  *(_BYTE *)(result + 48) = *(_BYTE *)(v28 + 76) & 1 | *(_BYTE *)(result + 48) & 0xFE;
  return result;
}
