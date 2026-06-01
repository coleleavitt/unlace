__m128i *__fastcall sub_1C67180(__int64 *a1, _WORD *a2, const __m128i *a3, __m128 a4, __m128 a5)
{
  const __m128i *v5; // r8
  __int64 v8; // rcx
  __int64 v9; // rdi
  _DWORD *v10; // rbx
  unsigned int *v11; // rax
  __int64 v12; // rdx
  char *v13; // rsi
  __int16 v14; // ax
  __m128i *v15; // rax
  signed __int64 v16; // rcx
  unsigned int v17; // eax
  __int16 v19; // r9
  __int64 v20; // rdi
  __int32 v21; // edx
  __int32 v22; // r13d
  __int16 v23; // r9
  __int64 v24; // r9
  unsigned int v25; // r12d
  int v26; // eax
  unsigned __int64 v27; // r14
  unsigned int *v28; // rcx
  __int64 v29; // rax
  int v30; // edx
  char v31; // di
  char v32; // di
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbp
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int16 v46; // r9
  unsigned int v47; // eax
  __int64 v48; // r8
  char v49; // al
  _BOOL4 v50; // r13d
  _BOOL4 v51; // r13d
  const __m128i *v52; // [rsp+0h] [rbp-F8h]
  __int32 v53; // [rsp+0h] [rbp-F8h]
  const __m128i *v54; // [rsp+0h] [rbp-F8h]
  const __m128i *v55; // [rsp+0h] [rbp-F8h]
  const __m128i *v56; // [rsp+8h] [rbp-F0h]
  __int64 v57; // [rsp+18h] [rbp-E0h] BYREF
  void *v58; // [rsp+20h] [rbp-D8h]
  signed __int64 v59; // [rsp+28h] [rbp-D0h]
  __m128 v60; // [rsp+30h] [rbp-C8h] BYREF
  void *v61; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v62; // [rsp+48h] [rbp-B0h]
  _QWORD v63[2]; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int8 *v64; // [rsp+60h] [rbp-98h] BYREF
  char v65; // [rsp+B8h] [rbp-40h]
  unsigned int v66; // [rsp+C0h] [rbp-38h]
  char v67; // [rsp+C4h] [rbp-34h]

  v5 = a3;
  v8 = a3[5].m128i_i64[1];
  v9 = a3[6].m128i_i64[0];
  v10 = (_DWORD *)(a3[6].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
  v11 = *(unsigned int **)(*(_QWORD *)((a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
  v12 = *v11;
  v13 = (char *)(v11 + 4);
  switch ( v12 )
  {
    case 6LL:
      if ( v11[4] == 1869770357 && *((_WORD *)v11 + 10) == 27756 )
      {
        v24 = (unsigned __int16)*a2;
        LOWORD(v24) = v24 & 0x1FF;
        if ( (_WORD)v24 == 1 || (_WORD)v24 == 252 || (LOWORD(v24) = (v24 + 269) & 0x1FF, (unsigned __int16)v24 <= 1u) )
        {
          if ( v11[4] == 1869770357 && *((_WORD *)v11 + 10) == 27756 )
          {
            v20 = a1[31];
            if ( v10 )
            {
              v21 = 2;
              v22 = 5;
              if ( (*v10 & 0x20000) == 0 )
              {
                v52 = v5;
                sub_C3DC60((__int64)&v61, (unsigned __int64)v10, a1[31], 0, (__int64)v5, v24);
                v25 = v62;
                v5 = v52;
                if ( v62 <= 0x40 )
                {
                  if ( v61 )
                  {
                    v51 = v61 != (char *)&dword_0 + 1;
                    v21 = v51 + 1;
                    v22 = v51 + 4;
                  }
                  else
                  {
                    v21 = 1;
                    v22 = 4;
                  }
                }
                else
                {
                  v26 = sub_2206780(&v61);
                  v5 = v52;
                  if ( v25 == v26 )
                  {
                    v21 = 1;
                    v22 = 4;
                  }
                  else
                  {
                    v50 = v26 != v25 - 1;
                    v21 = v50 + 1;
                    v22 = v50 + 4;
                  }
                  if ( v61 )
                  {
                    v56 = v52;
                    v53 = v21;
                    operator delete[](v61);
                    v21 = v53;
                    v5 = v56;
                  }
                }
                v20 = a1[31];
              }
            }
            else
            {
              v21 = 0;
              v22 = 4;
            }
            return sub_B26EE0(v20, v22, v21, (__int64)v10, v5);
          }
          break;
        }
LABEL_6:
        v61 = v63;
        sub_1C5EE20(&v61, v13, (__int64)&v13[v12]);
        v15 = (__m128i *)sub_99BDC0(&v61, 0, 0, "#pragma ", 8u);
        v58 = &v60;
        if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
        {
          a4 = (__m128)_mm_loadu_si128(v15 + 1);
          v60 = a4;
        }
        else
        {
          v58 = (void *)v15->m128i_i64[0];
          v60.m128_u64[0] = v15[1].m128i_u64[0];
        }
        v16 = v15->m128i_i64[1];
        v15[1].m128i_i8[0] = 0;
        v59 = v16;
        v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
        v15->m128i_i64[1] = 0;
        if ( v61 != v63 )
          operator delete(v61);
        v17 = sub_EEB7E0((unsigned __int64)a2, 0, *(double *)a4.m128_u64);
        sub_168B9F0((__int64)&v61, a1 + 1, v17, 0x12DCu, 0);
        if ( v65 )
        {
          sub_AEC220(&v64, v58, v59);
        }
        else if ( v67 )
        {
          v41 = sub_168B9E0(&v61);
          v44 = v63[0];
          if ( v63[0] )
            v44 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v63[0] + 32LL))(v63[0]);
          v57 = v44;
          v45 = sub_1587BC0(v41, &v57, v39, v40, v42, v43);
          sub_AEC220((unsigned __int8 **)(*v45 + 32LL * v66 + 8), v58, v59);
        }
        sub_15F7200(&v61);
        if ( v58 != &v60 )
          operator delete(v58);
        return nullptr;
      }
LABEL_3:
      v14 = *a2 & 0x1FF;
      if ( v14 == 1 || v14 == 252 || ((v14 + 269) & 0x1FFu) <= 1 )
        break;
      v12 = 10;
      v13 = "clang loop";
      goto LABEL_6;
    case 8LL:
      if ( *((_QWORD *)v11 + 2) != 0x6C6C6F726E756F6ELL )
        goto LABEL_3;
      v19 = *a2 & 0x1FF;
      if ( v19 != 1 && v19 != 252 && ((v19 + 269) & 0x1FFu) > 1 )
        goto LABEL_6;
      if ( *((_QWORD *)v11 + 2) == 0x6C6C6F726E756F6ELL )
      {
        v20 = a1[31];
        v21 = 1;
        v22 = 4;
        return sub_B26EE0(v20, v22, v21, (__int64)v10, v5);
      }
      break;
    case 14LL:
      if ( *((_QWORD *)v11 + 2) != 0x615F6C6C6F726E75LL || v11[6] != 1784636526 || *((_WORD *)v11 + 14) != 28001 )
        goto LABEL_3;
      v23 = *a2 & 0x1FF;
      if ( v23 != 252 && v23 != 1 && ((v23 + 269) & 0x1FFu) > 1 )
        goto LABEL_6;
      if ( *((_QWORD *)v11 + 2) == 0x615F6C6C6F726E75LL && v11[6] == 1784636526 && *((_WORD *)v11 + 14) == 28001 )
      {
        v20 = a1[31];
        v21 = v10 != nullptr ? 2 : 0;
        v22 = 7 - (v10 == nullptr);
        return sub_B26EE0(v20, v22, v21, (__int64)v10, v5);
      }
      break;
    default:
      if ( v12 != 16 || *((_QWORD *)v11 + 2) ^ 0x6C6C6F726E756F6ELL | *((_QWORD *)v11 + 3) ^ 0x6D616A5F646E615FLL )
        goto LABEL_3;
      v46 = *a2 & 0x1FF;
      if ( v46 != 1 && v46 != 252 && ((v46 + 269) & 0x1FFu) > 1 )
        goto LABEL_6;
      v13 = (char *)(*((_QWORD *)v11 + 2) ^ 0x6C6C6F726E756F6ELL | *((_QWORD *)v11 + 3) ^ 0x6D616A5F646E615FLL);
      if ( !v13 )
      {
        v20 = a1[31];
        v21 = 1;
        v22 = 6;
        return sub_B26EE0(v20, v22, v21, (__int64)v10, v5);
      }
      break;
  }
  v27 = v9 & 0xFFFFFFFFFFFFFFFCLL;
  v28 = *(unsigned int **)(*(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
  v29 = *v28;
  LOBYTE(v13) = v29 != 10;
  if ( v29 == 9 )
  {
    if ( *((_QWORD *)v28 + 2) != 0x7A69726F74636576LL || (v30 = 1, *((_BYTE *)v28 + 24) != 101) )
      v30 = 0;
    v22 = 0;
LABEL_49:
    v31 = v30 | (v29 != 16);
    goto LABEL_54;
  }
  if ( v29 == 15 )
  {
    if ( *((_QWORD *)v28 + 2) != 0x7A69726F74636576LL
      || v28[6] != 1769430885
      || *((_WORD *)v28 + 14) != 29796
      || (v22 = 1, v30 = 1, *((_BYTE *)v28 + 30) != 104) )
    {
      v22 = 1;
      v30 = 0;
    }
    goto LABEL_49;
  }
  if ( v29 != 10 )
  {
    if ( v29 == 19 )
    {
      if ( *((_QWORD *)v28 + 2) ^ 0x7A69726F74636576LL | *((_QWORD *)v28 + 3) ^ 0x6369646572705F65LL
        || *((_WORD *)v28 + 16) != 29793
        || (v22 = 11, v30 = 1, *((_BYTE *)v28 + 34) != 101) )
      {
        v22 = 0;
        v30 = 0;
      }
      goto LABEL_76;
    }
    v22 = 0;
    v30 = 0;
    goto LABEL_49;
  }
  if ( *((_QWORD *)v28 + 2) == 0x61656C7265746E69LL )
  {
    v22 = 2;
    v30 = 1;
    if ( *((_WORD *)v28 + 12) == 25974 )
    {
LABEL_55:
      if ( v29 == 6 && !(_BYTE)v30 )
      {
        if ( v28[4] == 1869770357 && *((_WORD *)v28 + 10) == 27756 )
        {
          v30 = 1;
          v22 = 4;
          goto LABEL_60;
        }
        v32 = 1;
        goto LABEL_59;
      }
      goto LABEL_76;
    }
  }
  v31 = 1;
  v30 = 0;
  v22 = 0;
LABEL_54:
  if ( v31 )
    goto LABEL_55;
  if ( !(*((_QWORD *)v28 + 2) ^ 0x61656C7265746E69LL | *((_QWORD *)v28 + 3) ^ 0x746E756F635F6576LL) )
  {
    v30 = 1;
    v22 = 3;
    goto LABEL_77;
  }
LABEL_76:
  if ( (unsigned __int8)v30 | (v29 != 12) )
  {
LABEL_77:
    v32 = v30 | (v29 != 8);
LABEL_59:
    if ( !v32 )
    {
      v33 = v30 | (unsigned int)v13;
      if ( *((_QWORD *)v28 + 2) == 0x656E696C65706970LL )
      {
        v22 = 8;
        goto LABEL_90;
      }
LABEL_62:
      if ( !(_BYTE)v33 )
      {
        if ( *((_QWORD *)v28 + 2) == 0x7562697274736964LL )
        {
          v22 = 10;
          if ( *((_WORD *)v28 + 12) == 25972 )
            goto LABEL_90;
        }
        goto LABEL_89;
      }
LABEL_63:
      if ( (_BYTE)v30 )
      {
        if ( v22 == 1 )
        {
          if ( !v10
            || (v55 = v5,
                v47 = sub_EEB7E0((unsigned __int64)a2, v33, *(double *)a4.m128_u64),
                v49 = sub_1915F50(a1, (__int64)v10, v47, 0, v48, a4, a5),
                v5 = v55,
                !v49) )
          {
            v20 = a1[31];
            v21 = 3;
            if ( v27 )
            {
              v34 = *(_QWORD *)(v27 + 8);
              v21 = 3;
              if ( v34 )
              {
                v35 = *(_QWORD *)(v34 + 16);
                if ( *(_DWORD *)v35 == 8 )
                  v21 = (*(_QWORD *)(v35 + 16) == 0x656C62616C616373LL) + 3;
              }
            }
            return sub_B26EE0(v20, v22, v21, (__int64)v10, v5);
          }
          return nullptr;
        }
        if ( ((v22 - 3) & 0xFFFFFFFD) != 0 )
        {
LABEL_90:
          v20 = a1[31];
          v21 = 1;
          v38 = **(_QWORD **)(*(_QWORD *)(v27 + 8) + 16LL);
          if ( (_DWORD)v38 != 7 )
          {
            v21 = 5;
            if ( (_DWORD)v38 != 13 )
            {
              v21 = 6;
              if ( (_DWORD)v38 != 4 )
                v21 = 0;
            }
          }
          return sub_B26EE0(v20, v22, v21, (__int64)v10, v5);
        }
        goto LABEL_82;
      }
LABEL_89:
      v22 = 0;
      goto LABEL_90;
    }
    goto LABEL_60;
  }
  if ( *((_QWORD *)v28 + 2) == 0x635F6C6C6F726E75LL && v28[6] == 1953396079 )
  {
    v30 = 1;
    v22 = 5;
    goto LABEL_61;
  }
LABEL_60:
  if ( (unsigned __int8)v30 | (v29 != 28) )
  {
LABEL_61:
    v33 = v30 | (unsigned int)v13;
    goto LABEL_62;
  }
  v33 = *((_QWORD *)v28 + 2) ^ 0x656E696C65706970LL | *((_QWORD *)v28 + 3) ^ 0x74616974696E695FLL;
  if ( v33 || *((_QWORD *)v28 + 4) != 0x65746E695F6E6F69LL || v28[10] != 1818326642 )
    goto LABEL_63;
  v22 = 9;
LABEL_82:
  v54 = v5;
  v36 = sub_EEB7E0((unsigned __int64)a2, v33, *(double *)a4.m128_u64);
  if ( (unsigned __int8)sub_1915F50(a1, (__int64)v10, v36, 0, v37, a4, a5) )
    return nullptr;
  v20 = a1[31];
  v21 = 2;
  v5 = v54;
  return sub_B26EE0(v20, v22, v21, (__int64)v10, v5);
}
