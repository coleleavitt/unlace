__int64 __fastcall sub_102E730(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rbp
  __int64 *v6; // r13
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  bool v15; // cc
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __m128i *v18; // rax
  __m128i *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  _BYTE *v55; // rsi
  __m128i *v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rdx
  unsigned __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  _QWORD v70[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 *v71; // [rsp+20h] [rbp-98h] BYREF
  __int64 v72; // [rsp+28h] [rbp-90h]
  _BYTE v73[16]; // [rsp+30h] [rbp-88h] BYREF
  void *v74; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v75; // [rsp+48h] [rbp-70h]
  _BYTE v76[16]; // [rsp+50h] [rbp-68h] BYREF
  __m128i v77; // [rsp+60h] [rbp-58h] BYREF
  __m128i v78; // [rsp+70h] [rbp-48h] BYREF

  *(_OWORD *)a1 = 0;
  v70[1] = a4;
  v70[0] = a3;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  if ( a4 == 7
    && *(_DWORD *)v70[0] == 1634100580
    && *(_WORD *)(v70[0] + 4LL) == 27765
    && *(_BYTE *)(v70[0] + 6LL) == 116 )
  {
    return a1;
  }
  v71 = (__int64 *)v73;
  v72 = 0x100000000LL;
  sub_22471D0(v70, &v71, ",", 1, 0xFFFFFFFFLL, 1);
  v5 = &v71[2 * (unsigned int)v72];
  if ( v71 != v5 )
  {
    v6 = v71;
    while ( 1 )
    {
      v7 = 0;
      v8 = sub_2246FB0(v6, asc_22E1692, 6, 0);
      v9 = v6[1];
      if ( v8 < v9 )
      {
        v7 = v9 - v8;
        v9 = v8;
      }
      v10 = *v6 + v9;
      v77.m128i_i64[1] = v7;
      v77.m128i_i64[0] = v10;
      v11 = sub_2247130(&v77, asc_22E1692, 6, -1);
      v12 = v77.m128i_u64[1];
      v13 = v77.m128i_i64[0];
      v14 = v11 + 1;
      v15 = v14 <= v77.m128i_i64[1];
      v16 = v77.m128i_i64[1];
      *v6 = v77.m128i_i64[0];
      if ( !v15 )
        v14 = v12;
      v17 = v16 - v7 + v14;
      if ( v17 > v12 )
        v17 = v12;
      v6[1] = v17;
      if ( v17 > 6 )
      {
        if ( *(_DWORD *)v13 == 1634562150 && *(_WORD *)(v13 + 4) == 26740 && *(_BYTE *)(v13 + 6) == 61 )
        {
LABEL_24:
          v6 += 2;
          if ( v5 == v6 )
            goto LABEL_25;
        }
        else
        {
          if ( v17 <= 0x11 )
            goto LABEL_12;
          if ( *(_QWORD *)v13 ^ 0x702D68636E617262LL | *(_QWORD *)(v13 + 8) ^ 0x6F69746365746F72LL
            || *(_WORD *)(v13 + 16) != 15726 )
          {
            goto LABEL_32;
          }
          LOBYTE(v74) = 61;
          v22 = sub_2246AB0(v6, &v74, 1, 0);
          if ( v22 == -1 )
          {
            v47 = *v6;
            v48 = v6[1];
            v78 = 0u;
            v77.m128i_i64[0] = v47;
            v77.m128i_i64[1] = v48;
          }
          else
          {
            v23 = v6[1];
            v24 = v22 + 1;
            if ( v22 + 1 > v23 )
            {
              v24 = v6[1];
              v25 = 0;
            }
            else
            {
              v25 = v23 - v24;
            }
            v26 = *v6;
            v78.m128i_i64[1] = v25;
            if ( v22 > v23 )
              v22 = v23;
            v77.m128i_i64[0] = v26;
            v77.m128i_i64[1] = v22;
            v78.m128i_i64[0] = v24 + v26;
          }
          v27 = 0;
          v28 = sub_2246FB0(&v78, asc_22E1692, 6, 0);
          v29 = v78.m128i_i64[1];
          if ( v28 < v78.m128i_i64[1] )
          {
            v27 = v78.m128i_i64[1] - v28;
            v29 = v28;
          }
          v75 = v27;
          v74 = (void *)(v78.m128i_i64[0] + v29);
          v30 = sub_2247130(&v74, asc_22E1692, 6, -1);
          v31 = v75;
          v32 = v30 + 1;
          v15 = v32 <= v75;
          *(_QWORD *)(a1 + 56) = v74;
          if ( !v15 )
            v32 = v31;
          v33 = v31 - v27 + v32;
          if ( v33 > v31 )
            v33 = v31;
          v6 += 2;
          *(_QWORD *)(a1 + 64) = v33;
          if ( v5 == v6 )
          {
LABEL_25:
            v5 = v71;
            break;
          }
        }
      }
      else
      {
LABEL_12:
        if ( v17 <= 4 )
        {
          if ( v17 > 2 )
          {
LABEL_34:
            if ( *(_WORD *)v13 != 28526 || *(_BYTE *)(v13 + 2) != 45 )
              goto LABEL_35;
            v51 = sub_2246AB0(v6, "-", 1, 0);
            if ( v51 == -1 )
              goto LABEL_114;
            v52 = v51 + 1;
            v53 = v6[1];
            v54 = 0;
            if ( v52 <= v53 )
            {
              v54 = v53 - v52;
              v53 = v52;
            }
            v55 = (_BYTE *)(*v6 + v53);
            if ( !v55 )
            {
LABEL_114:
              v76[0] = 0;
              v75 = 0;
              v74 = v76;
            }
            else
            {
              v74 = v76;
              sub_102BE20(&v74, v55, (__int64)&v55[v54]);
            }
            v56 = (__m128i *)sub_99BDC0(&v74, 0, 0, "-", 1u);
            v77.m128i_i64[0] = (__int64)&v78;
            if ( (__m128i *)v56->m128i_i64[0] == &v56[1] )
            {
              v78 = _mm_loadu_si128(v56 + 1);
            }
            else
            {
              v77.m128i_i64[0] = v56->m128i_i64[0];
              v78.m128i_i64[0] = v56[1].m128i_i64[0];
            }
            v77.m128i_i64[1] = v56->m128i_i64[1];
            v56[1].m128i_i8[0] = 0;
            v19 = *(__m128i **)(a1 + 8);
            v56->m128i_i64[0] = (__int64)v56[1].m128i_i64;
            v56->m128i_i64[1] = 0;
            if ( v19 == *(__m128i **)(a1 + 16) )
              goto LABEL_83;
            v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
            v20 = v77.m128i_i64[0];
            if ( (__m128i *)v77.m128i_i64[0] == &v78 )
              goto LABEL_95;
LABEL_20:
            v19->m128i_i64[0] = v20;
            v19[1].m128i_i64[0] = v78.m128i_i64[0];
LABEL_21:
            v19->m128i_i64[1] = v77.m128i_i64[1];
            *(_QWORD *)(a1 + 8) += 32LL;
          }
          else
          {
            if ( !v13 )
            {
              v76[0] = 0;
              v75 = 0;
              v74 = v76;
              goto LABEL_16;
            }
LABEL_35:
            v74 = v76;
            sub_102BE20(&v74, (_BYTE *)v13, v13 + v17);
LABEL_16:
            v18 = (__m128i *)sub_99BDC0(&v74, 0, 0, "+", 1u);
            v77.m128i_i64[0] = (__int64)&v78;
            if ( (__m128i *)v18->m128i_i64[0] == &v18[1] )
            {
              v78 = _mm_loadu_si128(v18 + 1);
            }
            else
            {
              v77.m128i_i64[0] = v18->m128i_i64[0];
              v78.m128i_i64[0] = v18[1].m128i_i64[0];
            }
            v77.m128i_i64[1] = v18->m128i_i64[1];
            v18[1].m128i_i8[0] = 0;
            v19 = *(__m128i **)(a1 + 8);
            v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
            v18->m128i_i64[1] = 0;
            if ( v19 != *(__m128i **)(a1 + 16) )
            {
              v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
              v20 = v77.m128i_i64[0];
              if ( (__m128i *)v77.m128i_i64[0] != &v78 )
                goto LABEL_20;
LABEL_95:
              v19[1] = _mm_load_si128(&v78);
              goto LABEL_21;
            }
LABEL_83:
            sub_A82970((void ***)a1, v19, &v77);
            if ( (__m128i *)v77.m128i_i64[0] != &v78 )
              operator delete((void *)v77.m128i_i64[0]);
          }
          if ( v74 != v76 )
            operator delete(v74);
          goto LABEL_24;
        }
LABEL_32:
        if ( *(_DWORD *)v13 == 1751347809 && *(_BYTE *)(v13 + 4) == 61 )
        {
          v34 = *(_QWORD *)(a1 + 32);
          if ( v34 )
          {
            v6 += 2;
            *(_QWORD *)(a1 + 80) = 5;
            *(_QWORD *)(a1 + 72) = "arch=";
            if ( v5 == v6 )
              goto LABEL_25;
          }
          else
          {
            v35 = sub_2246AB0(v6, "=", 1, 0);
            if ( v35 == -1 )
            {
              v49 = *v6;
              v50 = v6[1];
              v78 = 0u;
              v77.m128i_i64[0] = v49;
              v77.m128i_i64[1] = v50;
            }
            else
            {
              v36 = v6[1];
              v37 = v35 + 1;
              if ( v35 + 1 > v36 )
              {
                v37 = v6[1];
                v38 = 0;
              }
              else
              {
                v38 = v36 - v37;
              }
              v39 = *v6;
              v78.m128i_i64[1] = v38;
              if ( v35 > v36 )
                v35 = v36;
              v77.m128i_i64[0] = v39;
              v77.m128i_i64[1] = v35;
              v78.m128i_i64[0] = v37 + v39;
            }
            v40 = sub_2246FB0(&v78, asc_22E1692, 6, 0);
            v41 = v78.m128i_i64[1];
            if ( v40 < v78.m128i_i64[1] )
            {
              v34 = v78.m128i_i64[1] - v40;
              v41 = v40;
            }
            v75 = v34;
            v74 = (void *)(v78.m128i_i64[0] + v41);
            v42 = sub_2247130(&v74, asc_22E1692, 6, -1);
            v43 = v75;
            v44 = v42 + 1;
            v15 = v44 <= v75;
            *(_QWORD *)(a1 + 24) = v74;
            if ( !v15 )
              v44 = v43;
            v45 = v43 - v34 + v44;
            if ( v45 > v43 )
              v45 = v43;
            v6 += 2;
            *(_QWORD *)(a1 + 32) = v45;
            if ( v5 == v6 )
              goto LABEL_25;
          }
        }
        else
        {
          if ( *(_DWORD *)v13 != 1701737844 || *(_BYTE *)(v13 + 4) != 61 )
            goto LABEL_34;
          v46 = *(_QWORD *)(a1 + 48);
          if ( v46 )
          {
            v6 += 2;
            *(_QWORD *)(a1 + 80) = 5;
            *(_QWORD *)(a1 + 72) = "tune=";
            if ( v5 == v6 )
              goto LABEL_25;
          }
          else
          {
            v57 = sub_2246AB0(v6, "=", 1, 0);
            if ( v57 == -1 )
            {
              v68 = *v6;
              v69 = v6[1];
              v78 = 0u;
              v77.m128i_i64[0] = v68;
              v77.m128i_i64[1] = v69;
            }
            else
            {
              v58 = v6[1];
              v59 = v57 + 1;
              if ( v57 + 1 > v58 )
              {
                v59 = v6[1];
                v60 = 0;
              }
              else
              {
                v60 = v58 - v59;
              }
              v61 = *v6;
              v78.m128i_i64[1] = v60;
              if ( v57 > v58 )
                v57 = v58;
              v77.m128i_i64[0] = v61;
              v77.m128i_i64[1] = v57;
              v78.m128i_i64[0] = v59 + v61;
            }
            v62 = sub_2246FB0(&v78, asc_22E1692, 6, 0);
            v63 = v78.m128i_i64[1];
            if ( v62 < v78.m128i_i64[1] )
            {
              v46 = v78.m128i_i64[1] - v62;
              v63 = v62;
            }
            v75 = v46;
            v74 = (void *)(v78.m128i_i64[0] + v63);
            v64 = sub_2247130(&v74, asc_22E1692, 6, -1);
            v65 = v75;
            v66 = v64 + 1;
            v15 = v66 <= v75;
            *(_QWORD *)(a1 + 40) = v74;
            if ( !v15 )
              v66 = v65;
            v67 = v65 - v46 + v66;
            if ( v67 > v65 )
              v67 = v65;
            v6 += 2;
            *(_QWORD *)(a1 + 48) = v67;
            if ( v5 == v6 )
              goto LABEL_25;
          }
        }
      }
    }
  }
  if ( v5 != (__int64 *)v73 )
    free(v5);
  return a1;
}
