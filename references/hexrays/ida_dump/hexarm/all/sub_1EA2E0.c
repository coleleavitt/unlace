__int64 __fastcall sub_1EA2E0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // ecx
  __int64 v6; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __int64 v16; // rdx
  int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // r12
  int v22; // r8d
  int v23; // r9d
  char v24; // al
  int v25; // r8d
  int v26; // r9d
  char v27; // al
  __int64 v28; // rsi
  int v29; // eax
  unsigned int v30; // r13d
  int v31; // r8d
  int v32; // r9d
  int v33; // [rsp+1Ch] [rbp-10Ch]
  __int64 v34; // [rsp+20h] [rbp-108h]
  __int64 v35; // [rsp+30h] [rbp-F8h]
  unsigned int v36; // [rsp+30h] [rbp-F8h]
  char v37; // [rsp+3Bh] [rbp-EDh]
  unsigned int v38; // [rsp+3Ch] [rbp-ECh]
  int v39; // [rsp+40h] [rbp-E8h] BYREF
  int v40; // [rsp+44h] [rbp-E4h] BYREF
  __int64 v41; // [rsp+48h] [rbp-E0h] BYREF
  __m128i v42; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-C8h] BYREF
  char v44; // [rsp+68h] [rbp-C0h]
  __int64 v45; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+78h] [rbp-B0h]
  __int64 v47; // [rsp+80h] [rbp-A8h]
  __m128i v48; // [rsp+88h] [rbp-A0h] BYREF
  int v49; // [rsp+A0h] [rbp-88h] BYREF
  int v50; // [rsp+A4h] [rbp-84h]
  __int128 v51; // [rsp+A8h] [rbp-80h]
  __int64 v52; // [rsp+B8h] [rbp-70h]
  int v53; // [rsp+C0h] [rbp-68h] BYREF
  int v54; // [rsp+C4h] [rbp-64h]
  __int128 v55; // [rsp+C8h] [rbp-60h]
  __int64 v56; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v57; // [rsp+E8h] [rbp-40h]

  v3 = *a2;
  v4 = *(_DWORD *)a3;
  v57 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v3 + 1504);
  if ( v4 > 0x14 )
    goto LABEL_6;
  v9 = 1LL << v4;
  if ( ((1LL << v4) & 0x181310) != 0 )
  {
    v10 = a3 + 64;
  }
  else
  {
    v10 = a3 + 48;
    if ( (v9 & 0x78000) == 0 )
    {
LABEL_6:
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      return a1;
    }
  }
  v11 = *(_QWORD *)(v3 + 1504);
  v42.m128i_i64[0] = 0;
  v42.m128i_i8[8] = 0;
  if ( !(unsigned __int8)sub_1E02F0((__int64)&v42, v11, &v39, v10) )
    goto LABEL_6;
  v44 = 0;
  v43 = 0;
  v34 = v42.m128i_i64[0];
  v49 = 0;
  v37 = v42.m128i_i8[8];
  v52 = 0;
  v33 = v39;
  v50 = v39;
  v12 = *(_DWORD *)a3;
  v51 = 0;
  switch ( v12 )
  {
    case 4u:
      v21 = (char *)(a3 + 32);
      if ( (unsigned __int8)sub_11F7C0(v21, &v41, 0) )
      {
        sub_313520(&v49, v41);
        goto LABEL_17;
      }
      if ( !(unsigned __int8)sub_1E02F0((__int64)&v43, v6, &v40, (__int64)v21) )
        goto LABEL_9;
      v24 = sub_1E0540((_DWORD)a2, (unsigned int)&v49, (unsigned int)&v43, 0, v22, v23);
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      if ( v24 )
        goto LABEL_18;
      goto LABEL_10;
    case 8u:
    case 9u:
      if ( (unsigned __int8)sub_1E02F0((__int64)&v43, v6, &v40, a3 + 32) )
      {
        v17 = v40;
        v38 = *(_DWORD *)a3;
        v53 = 0;
        v36 = v50;
        v54 = v40;
        v56 = 0;
        v55 = 0;
        sub_313150(&v49, &v53);
        sub_312F40(&v53);
        if ( (unsigned __int8)sub_1E0540((_DWORD)a2, (unsigned int)&v49, (unsigned int)&v43, 0, v25, v26)
          && (unsigned __int8)sub_313F70(&v49, v36, v38 == 8) )
        {
          goto LABEL_17;
        }
        v53 = 0;
        v55 = 0;
        v54 = v36;
        v56 = 0;
        sub_313150(&v49, &v53);
        sub_312F40(&v53);
      }
      else
      {
        if ( *(_BYTE *)(a3 + 32) == 4 && (unsigned int)(**(_DWORD **)(a3 + 40) - 32) <= 9 )
        {
          sub_313B80(&v49, 0, 1, 1);
          goto LABEL_17;
        }
        v17 = *(_DWORD *)(a3 + 36);
        v40 = v17;
      }
      if ( *(_DWORD *)a3 == 9 )
      {
        v18 = -1;
        if ( v17 != 8 )
          v18 = (1LL << (8 * (unsigned __int8)v17)) - 1;
        sub_313B80(&v49, 0, v18, 1);
      }
      else
      {
        sub_313E50(&v49, (unsigned int)(8 * v17 - 1));
      }
      goto LABEL_17;
    case 0xCu:
      if ( !(unsigned __int8)sub_11F7C0((char *)(a3 + 48), &v41, 0) )
        goto LABEL_9;
      if ( *(_BYTE *)(a3 + 32) != 4 )
        goto LABEL_9;
      v19 = *(_QWORD *)(a3 + 40);
      if ( *(_DWORD *)v19 != 20 )
        goto LABEL_9;
      v35 = v41;
      if ( !(unsigned __int8)sub_11F7C0((char *)(v19 + 48), &v45, 0)
        || !sub_11F9E0((char *)(*(_QWORD *)(a3 + 40) + 32LL), v6) )
      {
        v45 = 0;
        v46 = 0;
        v47 = 0;
        v48 = 0;
        goto LABEL_10;
      }
      if ( v50 == 8 )
        v20 = -1;
      else
        v20 = (1LL << (8 * (unsigned __int8)v50)) - 1;
      sub_313520(&v49, v20 & (v45 + v35));
      v53 = 0;
      v54 = v50;
      v56 = 0;
      v55 = 0;
      sub_313520(&v53, v35);
      sub_314FC0(&v49, &v53);
      sub_312F40(&v53);
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      goto LABEL_18;
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
      sub_3135C0(&v49, 0, 0);
      sub_1EA180((__int64)a2, &v42, &v49);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      goto LABEL_11;
    case 0x13u:
    case 0x14u:
      if ( !(unsigned __int8)sub_11F7C0((char *)(a3 + 48), &v41, 0) )
        goto LABEL_9;
      if ( *(_DWORD *)a3 != 20 )
      {
        v16 = v41;
LABEL_16:
        sub_313CD0(&v49, 0, v16);
        goto LABEL_17;
      }
      v27 = sub_1E02F0((__int64)&v43, v6, &v40, a3 + 32);
      v16 = v41;
      if ( !v27 )
        goto LABEL_50;
      switch ( v41 )
      {
        case 0xFFLL:
          v29 = 1;
          break;
        case 0xFFFFLL:
          v29 = 2;
          break;
        case 0xFFFFFFFFLL:
          v29 = 4;
          break;
        default:
          v40 = 0;
          goto LABEL_50;
      }
      v40 = v29;
      v54 = v29;
      v30 = v50;
      v53 = 0;
      v56 = 0;
      v55 = 0;
      sub_313150(&v49, &v53);
      sub_312F40(&v53);
      if ( (unsigned __int8)sub_1E0540((_DWORD)a2, (unsigned int)&v49, (unsigned int)&v43, 0, v31, v32)
        && (unsigned __int8)sub_313F70(&v49, v30, 0) )
      {
        goto LABEL_17;
      }
      v54 = v30;
      v53 = 0;
      v56 = 0;
      v55 = 0;
      sub_313150(&v49, &v53);
      sub_312F40(&v53);
      v16 = v41;
LABEL_50:
      v28 = v16;
      if ( *(_DWORD *)a3 != 20 )
        goto LABEL_16;
      if ( (unsigned __int64)(8 * v33) <= 0x3F )
        v28 = (-1LL << (8 * (unsigned __int8)v33)) | v16;
      sub_313CD0(&v49, ~v28, 0);
LABEL_17:
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
LABEL_18:
      sub_1E9FF0((__int64)a2, &v42, &v49);
      sub_1DFB40(v34, v37, v3, &v45, v33);
LABEL_10:
      sub_63A00((__int64 *)a1, (__int64)&v45);
      v14 = v45;
      v15 = _mm_loadu_si128(&v48);
      *(_QWORD *)(a1 + 16) = v47;
      *(__m128i *)(a1 + 24) = v15;
      qfree(v14);
LABEL_11:
      sub_312F40(&v49);
      break;
    default:
LABEL_9:
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      goto LABEL_10;
  }
  return a1;
}
