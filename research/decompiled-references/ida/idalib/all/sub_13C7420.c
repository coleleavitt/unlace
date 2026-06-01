__int64 __fastcall sub_13C7420(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r11d
  unsigned __int8 v7; // r15
  __int64 *v8; // r13
  unsigned __int64 v9; // r12
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edi
  unsigned __int64 v17; // rsi
  __int64 v18; // r8
  int v20; // r14d
  unsigned __int64 v21; // r10
  int v22; // edi
  int v23; // edi
  char v24; // r9
  __int64 v25; // r8
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v35; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v36; // [rsp+1Ch] [rbp-5Ch]
  __int64 v37; // [rsp+20h] [rbp-58h] BYREF
  char v38; // [rsp+28h] [rbp-50h]
  __m128 v39[4]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a5;
  v7 = a3;
  v8 = (__int64 *)(a1 + 1344);
  v9 = (unsigned __int64)a2;
  v12 = (__int64)a2;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 8);
    if ( !v13 )
      break;
    v13 &= 0xFFFFFFFFFFFFFFF8LL;
    v14 = *(_QWORD *)(v12 + 8) & 4LL;
    v12 = v13;
    if ( !v14 || !v13 )
      goto LABEL_5;
  }
  v12 = 0;
LABEL_5:
  v15 = *(unsigned int *)(a1 + 1360);
  v37 = v12;
  v38 = 1;
  if ( !(_DWORD)v15 )
  {
    v39[0].m128_u64[0] = 0;
LABEL_24:
    v36 = v6;
    sub_13C70D0(v8, 2 * v15, a3, v12, a5, a6);
    goto LABEL_25;
  }
  a3 = *(_QWORD *)(a1 + 1344);
  v16 = (v15 - 1) & (((unsigned int)v13 >> 4) ^ ((unsigned int)v13 >> 9));
  v17 = a3 + 16LL * v16;
  v18 = *(_QWORD *)v17;
  if ( v12 == *(_QWORD *)v17 )
  {
LABEL_7:
    sub_13C5300(v39, (_QWORD *)v17, (_QWORD *)(16 * v15 + a3), (__int64)v8, 1);
    return *(_BYTE *)(v39[0].m128_u64[0] + 8) == 0 ? 3 : 0;
  }
  v20 = 1;
  v21 = 0;
  if ( v18 != -4096 )
  {
    while ( 1 )
    {
      if ( !v21 && v18 == -8192 )
        v21 = v17;
      v16 = (v15 - 1) & (v20 + v16);
      v17 = a3 + 16LL * v16;
      v18 = *(_QWORD *)v17;
      if ( v12 == *(_QWORD *)v17 )
        goto LABEL_7;
      if ( v18 == -4096 )
      {
        if ( v21 )
          v17 = v21;
        break;
      }
      ++v20;
    }
  }
  v22 = *(_DWORD *)(a1 + 1352);
  a5 = (unsigned int)(3 * v15);
  v39[0].m128_u64[0] = v17;
  v23 = v22 + 1;
  a6 = (unsigned int)(4 * v23);
  if ( (unsigned int)a6 >= (unsigned int)a5 )
    goto LABEL_24;
  v24 = 1;
  v25 = (unsigned int)(v15 - *(_DWORD *)(a1 + 1356) - v23);
  if ( (unsigned int)v25 > (unsigned int)v15 >> 3 )
    goto LABEL_12;
  v36 = v6;
  sub_13C70D0(v8, v15, a3, v12, v25, 1);
LABEL_25:
  sub_13C2B30(v8, &v37, v39);
  v12 = v37;
  v24 = v38;
  a3 = *(_QWORD *)(a1 + 1344);
  v15 = *(unsigned int *)(a1 + 1360);
  v23 = *(_DWORD *)(a1 + 1352) + 1;
  v17 = v39[0].m128_u64[0];
  v6 = v36;
LABEL_12:
  v26 = *(_QWORD *)v17 == -4096;
  *(_DWORD *)(a1 + 1352) = v23;
  if ( !v26 )
    --*(_DWORD *)(a1 + 1356);
  *(_QWORD *)v17 = v12;
  *(_BYTE *)(v17 + 8) = v24;
  v35 = v6;
  sub_13C5300(v39, (_QWORD *)v17, (_QWORD *)(16 * v15 + a3), (__int64)v8, 1);
  if ( (unsigned __int8)sub_13FF1F0(a1 + 632, a2, v7, a4, v35, 0) )
  {
    while ( 1 )
    {
      v32 = *(_QWORD *)(v9 + 8);
      if ( !v32 )
        break;
      v9 = v32 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v32 & 4) == 0 || !v9 )
        goto LABEL_21;
    }
  }
  else
  {
    v31 = sub_13C3750(a2, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 32), 1);
    if ( !v31 || !(unsigned __int8)sub_13FF1F0(a1 + 632, v31, v7, a4, 0, 0) )
      return 1;
    while ( 1 )
    {
      v33 = *(_QWORD *)(v9 + 8);
      if ( !v33 )
        break;
      v9 = v33 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v33 & 4) == 0 || !v9 )
        goto LABEL_21;
    }
  }
  v9 = 0;
LABEL_21:
  v39[0].m128_u64[0] = v9;
  *(_BYTE *)sub_13C72E0((__int64)v8, (__int64 *)v39, v27, v28, v29, v30) = 0;
  return 3;
}
