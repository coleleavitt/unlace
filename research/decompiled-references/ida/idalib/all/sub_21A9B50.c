_QWORD *__fastcall sub_21A9B50(_QWORD *a1, __int64 a2, __int64 a3)
{
  char *v5; // r14
  char *v6; // rsi
  char **v7; // rbp
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  char *v10; // rax
  int v11; // eax
  int v12; // r12d
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  char *v16; // rdi
  char *v17; // rdi
  char *v18; // rsi
  int v19; // eax
  int v20; // r12d
  unsigned int v21; // eax
  __int64 v22; // rdx
  char *v23; // rsi
  unsigned __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdx
  char *v27; // rsi
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  const __m128i *v30; // rsi
  __int8 *v31; // rsi
  int v32; // eax
  int v33; // r12d
  unsigned int v34; // eax
  __int64 v35; // rdx
  char *v36; // rsi
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rax
  const __m128i *v39; // rsi
  __int8 *v40; // rsi
  int v41; // eax
  int v43; // eax
  int v44; // r12d
  unsigned int v45; // eax
  __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  char *v48; // rdi
  char *v49; // rdi
  __m128i v51; // [rsp+20h] [rbp-88h] BYREF
  __int64 v52; // [rsp+30h] [rbp-78h]
  __m128i v53; // [rsp+40h] [rbp-68h] BYREF
  __m128i v54; // [rsp+50h] [rbp-58h] BYREF
  __int64 v55; // [rsp+60h] [rbp-48h]

  *(_BYTE *)(a2 + 613) = 1;
  v5 = *(char **)(a3 + 16);
  v6 = *(char **)(a3 + 8);
  if ( v6 < v5 )
  {
    v7 = (char **)(a3 + 8);
    do
    {
      *(_QWORD *)(a3 + 16) = v5;
      *(_QWORD *)(a3 + 8) = v6 + 1;
      v8 = (unsigned __int8)*v6;
      v9 = sub_21A29A0(v7, v5);
      if ( v9 > 0xFFFFFFFF )
LABEL_48:
        sub_2221C70("LEB is outside Varuint32 range", 1);
      v10 = (char *)(*(_QWORD *)(a3 + 8) + v9);
      v6 = v10;
      *(_QWORD *)(a3 + 16) = v10;
      switch ( v8 )
      {
        case 1LL:
          *(_DWORD *)(a2 + 96) = sub_21A2A40(a3);
          *(_DWORD *)(a2 + 100) = sub_21A2A40(a3);
          *(_DWORD *)(a2 + 104) = sub_21A2A40(a3);
          v41 = sub_21A2A40(a3);
          v6 = *(char **)(a3 + 16);
          *(_DWORD *)(a2 + 108) = v41;
          goto LABEL_26;
        case 2LL:
          v43 = sub_21A2A40(a3);
          v44 = v43 - 1;
          if ( !v43 )
            goto LABEL_18;
          v6 = *(char **)(a3 + 16);
          while ( 1 )
          {
            v45 = sub_21A29A0(v7, v6);
            v46 = *(_QWORD *)(a3 + 8);
            v6 = *(char **)(a3 + 16);
            v47 = v46 + v45;
            if ( v47 > (unsigned __int64)v6 )
              goto LABEL_47;
            *(_QWORD *)(a3 + 8) = v47;
            v48 = *(char **)(a2 + 120);
            v53.m128i_i64[0] = v46;
            v53.m128i_i64[1] = v45;
            if ( v48 != *(char **)(a2 + 128) )
            {
              *(_QWORD *)v48 = v46;
              --v44;
              v49 = v48 + 16;
              *((_QWORD *)v49 - 1) = v45;
              *(_QWORD *)(a2 + 120) = v49;
              if ( v44 == -1 )
                goto LABEL_26;
              continue;
            }
            --v44;
            sub_1075D80(a2 + 112, v48, &v53);
            v6 = *(char **)(a3 + 16);
            if ( v44 == -1 )
              goto LABEL_26;
          }
        case 3LL:
          v32 = sub_21A2A40(a3);
          v33 = v32 - 1;
          if ( !v32 )
            goto LABEL_18;
          do
          {
            while ( 1 )
            {
              v34 = sub_21A29A0(v7, *(char **)(a3 + 16));
              v35 = *(_QWORD *)(a3 + 8);
              v36 = *(char **)(a3 + 16);
              v37 = v35 + v34;
              if ( v37 > (unsigned __int64)v36 )
                goto LABEL_47;
              *(_QWORD *)(a3 + 8) = v37;
              v51.m128i_i64[0] = v35;
              v51.m128i_i64[1] = v34;
              v38 = sub_21A29A0(v7, v36);
              if ( v38 > 0xFFFFFFFF )
                goto LABEL_48;
              LODWORD(v52) = v38;
              v39 = *(const __m128i **)(a2 + 168);
              if ( v39 == *(const __m128i **)(a2 + 176) )
                break;
              v40 = &v39[1].m128i_i8[8];
              --v33;
              *(__m128i *)(v40 - 24) = _mm_load_si128(&v51);
              *((_QWORD *)v40 - 1) = v52;
              *(_QWORD *)(a2 + 168) = v40;
              if ( v33 == -1 )
              {
                v6 = *(char **)(a3 + 16);
                goto LABEL_26;
              }
            }
            --v33;
            sub_21A9820(a2 + 160, v39, &v51);
          }
          while ( v33 != -1 );
          v6 = *(char **)(a3 + 16);
          goto LABEL_26;
        case 4LL:
          v19 = sub_21A2A40(a3);
          v20 = v19 - 1;
          if ( !v19 )
            goto LABEL_18;
          do
          {
            while ( 1 )
            {
              v21 = sub_21A29A0(v7, *(char **)(a3 + 16));
              v22 = *(_QWORD *)(a3 + 8);
              v23 = *(char **)(a3 + 16);
              v24 = v22 + v21;
              if ( v24 > (unsigned __int64)v23 )
                goto LABEL_47;
              *(_QWORD *)(a3 + 8) = v24;
              v53.m128i_i64[0] = v22;
              v53.m128i_i64[1] = v21;
              v25 = sub_21A29A0(v7, v23);
              v26 = *(_QWORD *)(a3 + 8);
              v27 = *(char **)(a3 + 16);
              v28 = v26 + v25;
              if ( v28 > (unsigned __int64)v27 )
                goto LABEL_47;
              *(_QWORD *)(a3 + 8) = v28;
              v54.m128i_i64[0] = v26;
              v54.m128i_i64[1] = v25;
              v29 = sub_21A29A0(v7, v27);
              if ( v29 > 0xFFFFFFFF )
                goto LABEL_48;
              LODWORD(v55) = v29;
              v30 = *(const __m128i **)(a2 + 144);
              if ( v30 == *(const __m128i **)(a2 + 152) )
                break;
              v31 = &v30[2].m128i_i8[8];
              --v20;
              *(__m128i *)(v31 - 40) = _mm_load_si128(&v53);
              *(__m128i *)(v31 - 24) = _mm_load_si128(&v54);
              *((_QWORD *)v31 - 1) = v55;
              *(_QWORD *)(a2 + 144) = v31;
              if ( v20 == -1 )
              {
LABEL_18:
                v6 = *(char **)(a3 + 16);
                goto LABEL_26;
              }
            }
            --v20;
            sub_21A99B0(a2 + 136, v30, &v53);
          }
          while ( v20 != -1 );
          v6 = *(char **)(a3 + 16);
          goto LABEL_26;
        case 5LL:
          v11 = sub_21A2A40(a3);
          v12 = v11 - 1;
          if ( !v11 )
            goto LABEL_18;
          v6 = *(char **)(a3 + 16);
          break;
        default:
          *(_QWORD *)(a3 + 8) = v10;
          continue;
      }
      do
      {
        while ( 1 )
        {
          v13 = sub_21A29A0(v7, v6);
          v14 = *(_QWORD *)(a3 + 8);
          v6 = *(char **)(a3 + 16);
          v15 = v14 + v13;
          if ( v15 > (unsigned __int64)v6 )
LABEL_47:
            sub_2221C70("EOF while reading string", 1);
          *(_QWORD *)(a3 + 8) = v15;
          v16 = *(char **)(a2 + 192);
          v53.m128i_i64[0] = v14;
          v53.m128i_i64[1] = v13;
          if ( v16 == *(char **)(a2 + 200) )
            break;
          *(_QWORD *)v16 = v14;
          --v12;
          v17 = v16 + 16;
          *((_QWORD *)v17 - 1) = v13;
          *(_QWORD *)(a2 + 192) = v17;
          if ( v12 == -1 )
          {
            if ( *(char **)(a3 + 8) == v6 )
              goto LABEL_27;
LABEL_11:
            v18 = "dylink.0 sub-section ended prematurely";
            goto LABEL_30;
          }
        }
        --v12;
        sub_1075D80(a2 + 184, v16, &v53);
        v6 = *(char **)(a3 + 16);
      }
      while ( v12 != -1 );
LABEL_26:
      if ( *(char **)(a3 + 8) != v6 )
        goto LABEL_11;
LABEL_27:
      ;
    }
    while ( v5 > v6 );
  }
  if ( *(char **)(a3 + 16) == v6 )
  {
    *a1 = 0;
    return a1;
  }
  else
  {
    v18 = "dylink.0 section ended prematurely";
LABEL_30:
    sub_21A2C10(v53.m128i_i64, v18);
    *a1 = v53.m128i_i64[0];
    return a1;
  }
}
