__int64 __fastcall sub_FEB080(char *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r14d
  char v6; // r13
  __int64 v10; // rax
  char v11; // si
  char v12; // cl
  unsigned int v13; // edx
  char v14; // di
  bool v15; // r8
  char v16; // si
  char v17; // di
  char v18; // si
  int v19; // esi
  bool v20; // cl
  char v21; // r9
  char v22; // cl
  char v23; // cl
  char v24; // cl
  __int16 v25; // ax
  bool v26; // si
  char v27; // al
  __m128i *v28; // rsi
  __int64 v29; // rax
  bool v30; // al
  char v31; // al
  char v32; // al
  char v33; // dl
  __int64 result; // rax
  __int16 v35; // ax
  __m128i *v36; // rsi
  __int64 v37; // [rsp+8h] [rbp-60h]
  __m128i v38; // [rsp+10h] [rbp-58h] BYREF
  __m128i v39; // [rsp+20h] [rbp-48h] BYREF

  v5 = a5;
  v6 = a2;
  if ( (_BYTE)a2 == 1 )
  {
    a1[4] |= 2u;
  }
  else if ( (unsigned __int8)(a2 - 6) <= 1u )
  {
    a1[2] |= 4u;
    if ( a5 != 42 )
      goto LABEL_4;
    goto LABEL_24;
  }
  if ( a5 != 42 )
    goto LABEL_4;
LABEL_24:
  v5 = sub_FECD80(a2, a3);
LABEL_4:
  v10 = sub_FEB790(v5);
  v11 = *a1;
  v12 = a1[3];
  *((_DWORD *)a1 + 54) = v5;
  v13 = *(_DWORD *)(v10 + 16);
  *((_DWORD *)a1 + 2) = 0;
  v14 = a1[1];
  *a1 = (16 * ((v13 & 0x20) != 0))
      | (8 * ((v13 & 0x10) != 0)) & 0xEF
      | (4 * ((v13 & 8) != 0)) & 0xEF
      | (2 * ((v13 & 4) != 0)) & 0xE3
      | ((v13 & 2) != 0)
      | v11 & 0xE0;
  v15 = (v13 & 0x40) != 0;
  v16 = a1[2] & 0xFC;
  a1[1] = ((unsigned __int8)(v13 >> 10) << 7)
        | (32 * (BYTE1(v13) & 1)) & 0x7F
        | (16 * ((v13 & 0x80) != 0)) & 0x1F
        | v14 & 7
        | (8 * v15) & 0x1F
        | (((v13 & 0x200) != 0) << 6) & 0x7F;
  v17 = ((v13 & 0x800) != 0) | v16 | (2 * ((v13 & 0x1000) != 0));
  v18 = a1[4];
  a1[2] = v17;
  a1[4] = (4 * ((v13 & 0x4000) != 0)) | v18 & 0xFB;
  v19 = (4 * ((v13 >> 15) & 1)) | a1[12] & 0xF9;
  a1[3] = (2 * (v13 & 1)) | v12 & 0xED | (16 * v15);
  v20 = 1;
  a1[12] = (2 * ((v13 & 0x2000) != 0)) | v19;
  if ( (v13 & 0x80) == 0 )
    v20 = (v13 & 0x4000) != 0 && (v13 & 2) != 0 && (v13 & 0x40) == 0;
  v21 = (32 * v20) | a1[164] & 0xDF;
  v22 = a1[89];
  a1[164] = v21;
  v23 = (v6 == 12) | v22 & 0xFE;
  a1[89] = v23;
  if ( (v23 & 1) != 0 && (a1[108] & 8) != 0 )
  {
    v36 = *(__m128i **)(a4 + 8);
    strcpy(v39.m128i_i8, "hlsl.h");
    v38.m128i_i64[0] = (__int64)&v39;
    v38.m128i_i64[1] = 6;
    if ( v36 == *(__m128i **)(a4 + 16) )
    {
      v37 = v10;
      sub_A82970((void ***)a4, v36, &v38);
      v10 = v37;
      if ( (__m128i *)v38.m128i_i64[0] != &v39 )
      {
        operator delete((void *)v38.m128i_i64[0]);
        v10 = v37;
      }
    }
    else
    {
      v36->m128i_i64[0] = (__int64)v36[1].m128i_i64;
      if ( (__m128i *)v38.m128i_i64[0] == &v39 )
      {
        v36[1] = _mm_load_si128(&v39);
      }
      else
      {
        v36->m128i_i64[0] = v38.m128i_i64[0];
        v36[1].m128i_i64[0] = v39.m128i_i64[0];
      }
      v36->m128i_i64[1] = v38.m128i_i64[1];
      *(_QWORD *)(a4 + 8) += 32LL;
    }
    v13 = *(_DWORD *)(v10 + 16);
  }
  a1[47] = a1[47] & 0xDF | (32 * (BYTE2(v13) & 1));
  switch ( v5 )
  {
    case 0x1Bu:
      *((_DWORD *)a1 + 12) = 100;
      break;
    case 0x1Cu:
      *((_DWORD *)a1 + 12) = 110;
      break;
    case 0x1Du:
      *((_DWORD *)a1 + 12) = 120;
      break;
    case 0x1Eu:
      *((_DWORD *)a1 + 12) = 200;
      break;
    case 0x1Fu:
      *((_DWORD *)a1 + 12) = 300;
      break;
    case 0x20u:
      *((_DWORD *)a1 + 14) = 100;
      break;
    case 0x21u:
      *((_DWORD *)a1 + 14) = 202100;
      break;
    case 0x23u:
      *((_WORD *)a1 + 102) = 2015;
      break;
    case 0x24u:
      *((_WORD *)a1 + 102) = 2016;
      break;
    case 0x25u:
      *((_WORD *)a1 + 102) = 2017;
      break;
    case 0x26u:
      *((_WORD *)a1 + 102) = 2018;
      break;
    case 0x27u:
      *((_WORD *)a1 + 102) = 2021;
      break;
    case 0x28u:
      *((_WORD *)a1 + 102) = 2028;
      break;
    case 0x29u:
      *((_WORD *)a1 + 102) = 2029;
      break;
  }
  v24 = a1[47] & 0x20;
  if ( v24 )
  {
    v25 = *((_WORD *)a1 + 103);
    a1[13] &= 0xF9u;
    v25 &= 0xFE7Fu;
    LOBYTE(v25) = v25 | 0x80;
    *((_WORD *)a1 + 103) = v25;
    LOBYTE(v25) = ((a1[1] & 8) != 0) | a1[52] & 0xFE;
    a1[52] = v25;
    v26 = (v25 & 1) != 0 ? *((_DWORD *)a1 + 14) == 100 : *((_DWORD *)a1 + 12) == 200;
    a1[60] = (2 * v26) | a1[60] & 0xFD;
    a1[60] = v26 | a1[60] & 0xFE;
    v27 = a1[108];
    if ( (v27 & 8) != 0 )
    {
      v39.m128i_i64[0] = 0x632D6C636E65706FLL;
      v38.m128i_i64[0] = (__int64)&v39;
      if ( (v27 & 0x10) != 0 )
      {
        v28 = *(__m128i **)(a4 + 8);
        v39.m128i_i64[1] = 0x682E657361622DLL;
        v38.m128i_i64[1] = 15;
        if ( v28 != *(__m128i **)(a4 + 16) )
        {
          v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
          v29 = v38.m128i_i64[0];
          if ( (__m128i *)v38.m128i_i64[0] != &v39 )
            goto LABEL_33;
          goto LABEL_57;
        }
      }
      else
      {
        v28 = *(__m128i **)(a4 + 8);
        v39.m128i_i16[4] = 26670;
        v38.m128i_i64[1] = 10;
        v39.m128i_i8[10] = 0;
        if ( v28 != *(__m128i **)(a4 + 16) )
        {
          v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
          v29 = v38.m128i_i64[0];
          if ( (__m128i *)v38.m128i_i64[0] != &v39 )
          {
LABEL_33:
            v28->m128i_i64[0] = v29;
            v28[1].m128i_i64[0] = v39.m128i_i64[0];
LABEL_34:
            v28->m128i_i64[1] = v38.m128i_i64[1];
            *(_QWORD *)(a4 + 8) += 32LL;
LABEL_35:
            v24 = a1[47] & 0x20;
            goto LABEL_36;
          }
LABEL_57:
          v28[1] = _mm_load_si128(&v39);
          goto LABEL_34;
        }
      }
      sub_A82970((void ***)a4, v28, &v38);
      if ( (__m128i *)v38.m128i_i64[0] != &v39 )
        operator delete((void *)v38.m128i_i64[0]);
      goto LABEL_35;
    }
  }
LABEL_36:
  v30 = ((32 * (v6 == 11)) & 0x20) != 0;
  if ( v6 == 10 )
    v30 = 1;
  v31 = (32 * (v6 == 11)) | a1[60] & 0xCF | (16 * v30);
  a1[60] = v31;
  if ( (v31 & 0x20) != 0 )
  {
    *((_WORD *)a1 + 103) |= 0x180u;
  }
  else if ( (v31 & 0x10) != 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a3 + 32) - 49) <= 2 )
      *((_DWORD *)a1 + 12) = 200;
    v35 = *((_WORD *)a1 + 103) & 0xFE7F;
    HIBYTE(v35) |= 1u;
    *((_WORD *)a1 + 103) = v35;
    if ( !v24 )
      goto LABEL_41;
LABEL_47:
    a1[3] |= 4u;
    v33 = 1;
    v32 = a1[89];
    goto LABEL_42;
  }
  if ( v24 )
    goto LABEL_47;
LABEL_41:
  a1[3] = (4 * ((*(_WORD *)a1 & 0x808) != 0)) | a1[3] & 0xFB;
  v32 = a1[89];
  v33 = v32 & 1;
LABEL_42:
  a1[3] = (8 * v33) | a1[3] & 0xF7;
  result = a1[200] & 0xDF | (32 * (v32 & 1u));
  a1[200] = result;
  return result;
}
