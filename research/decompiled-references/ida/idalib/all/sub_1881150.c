__int64 __fastcall sub_1881150(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 *v4; // rbp
  char v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rdx
  unsigned int v11; // edi
  _QWORD *v12; // rsi
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbp
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // r12
  int v32; // eax
  _QWORD *v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdi
  __int64 v43; // rbp
  unsigned __int64 v44; // rsi
  __int64 v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdi
  __int64 v55; // rbp
  unsigned __int64 v56; // rbp
  unsigned __int64 v57; // rax
  unsigned int *v58; // [rsp+8h] [rbp-50h]
  unsigned __int64 v59; // [rsp+18h] [rbp-40h] BYREF
  __m128 v60[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1;
  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_BYTE *)a1;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL);
  v59 = v7;
  v8 = v6 & 1;
  if ( (_DWORD)v8 )
  {
    v9 = a1 + 8;
    v10 = 32;
    v11 = ((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 9)) & 3;
    v12 = (_QWORD *)(v9 + 8LL * (((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 9)) & 3));
    v13 = *v12;
    if ( v7 == *v12 )
    {
LABEL_3:
      sub_1848540(v60, v12, (_QWORD *)(v9 + v10), v3, 1);
      return 0;
    }
    v16 = 3;
  }
  else
  {
    v15 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v15 )
    {
      v60[0].m128_u64[0] = 0;
      v17 = *(_DWORD *)a1;
      v18 = (v17 >> 1) + 1;
LABEL_9:
      v19 = (unsigned int)(3 * v15);
      goto LABEL_10;
    }
    v9 = *(_QWORD *)(a1 + 8);
    v16 = v15 - 1;
    v11 = (v15 - 1) & (v7 ^ (v7 >> 9));
    v12 = (_QWORD *)(v9 + 8LL * v11);
    v13 = *v12;
    if ( v7 == *v12 )
    {
LABEL_7:
      v10 = 8 * v15;
      goto LABEL_3;
    }
  }
  v32 = 1;
  v33 = nullptr;
  if ( !v13 )
    goto LABEL_27;
  while ( 1 )
  {
    if ( !v33 && v13 == -1 )
      v33 = v12;
    v11 = v16 & (v32 + v11);
    v12 = (_QWORD *)(v9 + 8LL * v11);
    v13 = *v12;
    if ( v7 == *v12 )
    {
      if ( (_BYTE)v8 )
      {
        v10 = 32;
        goto LABEL_3;
      }
      v15 = *(unsigned int *)(v3 + 16);
      goto LABEL_7;
    }
    if ( !v13 )
      break;
    ++v32;
  }
  if ( v33 )
    v12 = v33;
LABEL_27:
  v17 = *(_DWORD *)v3;
  v60[0].m128_u64[0] = (unsigned __int64)v12;
  v18 = (v17 >> 1) + 1;
  if ( !(_BYTE)v8 )
  {
    LODWORD(v15) = *(_DWORD *)(v3 + 16);
    goto LABEL_9;
  }
  v19 = 12;
  LODWORD(v15) = 4;
LABEL_10:
  if ( (unsigned int)v19 <= 4 * (int)v18 )
  {
    v58 = (unsigned int *)v3;
    sub_1880CD0((char *)v3, 2 * v15, v18, v3, v19, v8);
  }
  else
  {
    v20 = (unsigned int)(v15 - *(_DWORD *)(v3 + 4) - v18);
    if ( (unsigned int)v20 > (unsigned int)v15 >> 3 )
      goto LABEL_12;
    v58 = (unsigned int *)v3;
    sub_1880CD0((char *)v3, v15, v20, v3, v19, v8);
  }
  sub_1847880((__int64)v58, (__int64 *)&v59, v60);
  v3 = (__int64)v58;
  v17 = *v58;
LABEL_12:
  v21 = (unsigned __int64 *)v60[0].m128_u64[0];
  *(_DWORD *)v3 = (2 * (v17 >> 1) + 2) | v17 & 1;
  if ( *v21 )
    --*(_DWORD *)(v3 + 4);
  *v21 = v59;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    v22 = v3 + 8;
    v23 = 32;
  }
  else
  {
    v22 = *(_QWORD *)(v3 + 8);
    v23 = 8LL * *(unsigned int *)(v3 + 16);
  }
  sub_1848540(v60, v21, (_QWORD *)(v23 + v22), v3, 1);
  v28 = *v4;
  while ( 2 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v28 + 16) - 2) <= 4u )
    {
LABEL_17:
      v28 = *(_QWORD *)(*(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      continue;
    }
    break;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v29 = sub_F63050(v28, v21, v24, v25);
    if ( v29 )
    {
      v28 = v29;
      goto LABEL_17;
    }
  }
  v30 = sub_F63270(v28, (__int64)v21, v24, v25, v26, v27);
  v31 = (__int64)v30;
  if ( !v30 || (*((_BYTE *)v30 + 74) & 1) == 0 )
    return 1;
  if ( !sub_B9C260((__int64)v30) )
    return 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104), v34, v35, v36, v37);
  v42 = *(_QWORD *)(v31 + 128);
  if ( (*(_BYTE *)(v42 + 24) & 1) != 0 )
    v43 = sub_B96980(v42);
  else
    v43 = *(_QWORD *)(v42 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104), v38, v39, v40, v41);
  v44 = *(_QWORD *)(v31 + 104);
  v45 = v43 + 24LL * *(unsigned int *)(*(_QWORD *)(v31 + 128) + 16LL);
  sub_7052B0((__int64 *)(v44 + 96), v44, v46, v47, v48, v49);
  v54 = *(_QWORD *)(v31 + 128);
  if ( (*(_BYTE *)(v54 + 24) & 1) != 0 )
    v55 = sub_B96980(v54);
  else
    v55 = *(_QWORD *)(v54 + 24);
  for ( ; v55 != v45; v55 += 24 )
  {
    v44 = sub_1839D10(*(__int64 **)(v55 + 16), v44, v50, v51, v52);
    result = sub_1881150(*a3, v44, a3);
    if ( !(_BYTE)result )
      return result;
  }
  v56 = sub_B7E900(v31, v44, v50, v51, v52, v53);
  if ( !v56 )
    return 1;
LABEL_38:
  if ( !(unsigned __int8)sub_1881150(*a3, *(_QWORD *)(v56 + 48), a3) )
    return 0;
  while ( 1 )
  {
    v57 = *(_QWORD *)(v56 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v56 = v57;
    if ( !v57 )
      return 1;
    if ( (*(_BYTE *)(v57 + 28) & 0x7Fu) - 49 <= 2 )
      goto LABEL_38;
  }
}
