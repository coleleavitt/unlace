void __fastcall sub_B76540(__int64 a1, const __m128i *a2, __int64 a3)
{
  const __m128i *v5; // rbx
  unsigned __int64 v6; // rbp
  char v7; // al
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  __int64 v10; // r12
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rbp
  char *v16; // r14
  char *v17; // rbp
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int *v21; // rsi
  void *v22; // rdi
  size_t v23; // rbx
  const char *v24; // rsi
  unsigned int *v25; // rbx
  __int64 v26; // rax
  size_t v27; // rax
  void *v28; // rdi
  size_t v29; // rbx
  __int64 v30; // r15
  unsigned __int8 v31; // al
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i *v34; // rdx
  __int64 v35; // rax
  size_t v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rax
  void *v40; // rdx
  __int64 v41; // rbx
  unsigned int v42; // eax
  const __m128i *v43; // rax
  _BYTE *v44; // rdi
  size_t v45; // rdx
  size_t v46; // r12
  unsigned __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // r14
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rsi
  unsigned __int64 v56; // rdx
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  __int64 i; // rdx
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int8 v62; // al
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  _BYTE *v68; // rax
  __int64 v69; // rdx
  _BYTE *v70; // rax
  int v71; // eax
  __int64 v72; // r12
  __int64 j; // rbp
  __int64 v74; // [rsp+8h] [rbp-F0h]
  __int64 v75; // [rsp+8h] [rbp-F0h]
  __int64 v76; // [rsp+20h] [rbp-D8h]
  char *v77; // [rsp+28h] [rbp-D0h]
  __int64 v78; // [rsp+38h] [rbp-C0h] BYREF
  char v79[32]; // [rsp+40h] [rbp-B8h] BYREF
  __int16 v80; // [rsp+60h] [rbp-98h]
  char *v81; // [rsp+70h] [rbp-88h] BYREF
  __int64 v82; // [rsp+78h] [rbp-80h]
  _BYTE v83[120]; // [rsp+80h] [rbp-78h] BYREF

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v6 = *(_QWORD *)v6;
  v7 = *(_BYTE *)(a1 + 28) & 0x7F;
  switch ( v7 )
  {
    case 18:
      v8 = sub_BA85D0(a1);
      if ( v8 )
        v6 = v8 + 48;
      break;
    case 75:
      v48 = *(_QWORD *)(a1 + 104);
      if ( v48 )
      {
        v49 = sub_BA85D0(v48);
        if ( v49 )
          v6 = v49 + 48;
      }
      break;
    case 50:
      v63 = sub_BA8BD0(a1);
      if ( v63 )
        v6 = v63 + 48;
      break;
  }
  v9 = *(_BYTE *)(v6 + 8) & 0x7F;
  if ( v9 > 0x12u )
  {
    if ( ((v9 + 94) & 0x7Fu) <= 5 )
      return;
  }
  else if ( ((1LL << v9) & 0x40182) != 0 )
  {
    return;
  }
  v10 = *(_QWORD *)(a1 + 40);
  v81 = v83;
  v82 = 0x800000000LL;
  do
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(a3 + 1) & 0x10) == 0
        || (*(_BYTE *)(v6 + 8) & 0x7F) != 0x18
        || (v35 = *(_QWORD *)(v6 - 8), (v35 & 7) == 0) && (v35 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( !(unsigned __int8)sub_B8E160(v6) || !v10 )
          goto LABEL_136;
        v11 = *(_BYTE *)(a3 + 1) & 0x60;
        if ( v11 != 64 )
        {
          if ( v11 != 32 || (*(_BYTE *)(v6 + 9) & 0x20) == 0 )
            goto LABEL_136;
          v50 = sub_B94670(v6, v10);
          v51 = sub_B72690(v6);
          v52 = sub_B8E650(v51);
          v53 = sub_B94670(v52, v10);
          if ( v50 )
          {
            v54 = 1;
            if ( (v50 & 4) != 0 )
            {
              v55 = 2;
              v56 = v50 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v50 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                do
                {
                  v57 = *(_QWORD *)(v56 + 8);
                  v54 = v55 - 1;
                  if ( !v57 )
                    break;
                  v54 = v55;
                  if ( (v57 & 4) == 0 )
                    break;
                  ++v55;
                  v56 = v57 & 0xFFFFFFFFFFFFFFF8LL;
                }
                while ( v56 );
              }
            }
          }
          else
          {
            v54 = 0;
          }
          if ( v53 )
          {
            a2 = (const __m128i *)(&dword_0 + 1);
            if ( (v53 & 4) != 0 )
            {
              v58 = v53 & 0xFFFFFFFFFFFFFFF8LL;
              for ( i = 2; v58; v58 = v60 & 0xFFFFFFFFFFFFFFF8LL )
              {
                v60 = *(_QWORD *)(v58 + 8);
                a2 = (const __m128i *)(i - 1);
                if ( !v60 )
                  break;
                a2 = (const __m128i *)i;
                if ( (v60 & 4) == 0 )
                  break;
                ++i;
              }
            }
          }
          else
          {
            a2 = nullptr;
          }
          if ( a2 != (const __m128i *)v54 )
          {
LABEL_136:
            if ( !(unsigned __int8)sub_B8E490(v6) && (*(_BYTE *)(v6 + 8) & 0x7Fu) - 18 <= 0x3F )
            {
              v12 = sub_B8C1B0(v6);
              if ( v12 )
              {
                v13 = (unsigned int)v82;
                a2 = (const __m128i *)HIDWORD(v82);
                v14 = (unsigned int)v82 + 1LL;
                if ( v14 > HIDWORD(v82) )
                {
                  a2 = (const __m128i *)v83;
                  v75 = v12;
                  sub_2237220(&v81, v83, v14, 8);
                  v13 = (unsigned int)v82;
                  v12 = v75;
                }
                *(_QWORD *)&v81[8 * v13] = v6;
                v10 = *(_QWORD *)(v12 + 40);
                LODWORD(v82) = v82 + 1;
              }
            }
          }
        }
      }
      v15 = *(_QWORD *)(sub_B8C1B0(v6) + 16);
      if ( (v15 & 4) != 0 )
        break;
      v6 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v6 )
        goto LABEL_23;
    }
    v6 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
  }
  while ( v6 );
LABEL_23:
  v16 = v81;
  v17 = &v81[8 * (unsigned int)v82];
  if ( v81 != v17 )
  {
    v18 = (__int64)v5;
    v74 = a3;
    while ( 1 )
    {
      v30 = *((_QWORD *)v17 - 1);
      v31 = *(_BYTE *)(v30 + 8) & 0x7F;
      if ( (unsigned int)v31 - 60 <= 1 )
        break;
      if ( v31 == 24 )
      {
        if ( v30 == 48 )
        {
LABEL_39:
          v32 = sub_B8C1B0(*((_QWORD *)v17 - 1));
          a2 = (const __m128i *)v18;
          sub_B72CF0(v32, v18);
        }
        else
        {
LABEL_48:
          v33 = *(_QWORD *)(v30 - 8);
          if ( (v33 & 7) == 0 && (v33 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            a2 = (const __m128i *)v18;
            sub_B72CF0(v30 - 48, v18);
          }
          else
          {
            a2 = (const __m128i *)"(anonymous namespace)";
            v34 = *(__m128i **)(v18 + 32);
            if ( (*(_BYTE *)(v74 + 4) & 0x10) != 0 )
              a2 = (const __m128i *)"`anonymous namespace'";
            if ( *(_QWORD *)(v18 + 24) - (_QWORD)v34 > 0x14u )
            {
              v61 = _mm_loadu_si128(a2);
              v34[1].m128i_i32[0] = a2[1].m128i_i32[0];
              v62 = a2[1].m128i_i8[4];
              *v34 = v61;
              v34[1].m128i_i8[4] = v62;
              *(_QWORD *)(v18 + 32) += 21LL;
            }
            else
            {
              sub_227BF10(v18, a2, 21);
            }
          }
        }
        goto LABEL_32;
      }
      v37 = (unsigned int)v31 - 58;
      if ( (unsigned int)v37 <= 3 )
      {
        v38 = v30 - 64;
        if ( v30 != 64 )
        {
          v39 = *(_QWORD *)(v30 - 24);
          if ( (v39 & 7) != 0 || (v39 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v40 = *(void **)(v18 + 32);
            if ( *(_QWORD *)(v18 + 24) - (_QWORD)v40 > 0xAu )
            {
              v41 = v18;
              qmemcpy(v40, "(anonymous ", 11);
              *(_QWORD *)(v18 + 32) += 11LL;
            }
            else
            {
              a2 = (const __m128i *)"(anonymous ";
              v41 = sub_227BF10(v18, "(anonymous ", 11);
            }
            v42 = sub_F58620(*(_BYTE *)(v30 + 9) >> 5);
            v43 = (const __m128i *)sub_F58640(v42);
            v44 = *(_BYTE **)(v41 + 32);
            v46 = v45;
            v47 = *(_QWORD *)(v41 + 24);
            if ( v46 > v47 - (unsigned __int64)v44 )
            {
              a2 = v43;
              v41 = sub_227BF10(v41, v43, v46);
              v44 = *(_BYTE **)(v41 + 32);
              v47 = *(_QWORD *)(v41 + 24);
            }
            else if ( v46 )
            {
              a2 = v43;
              memcpy(v44, v43, v46);
              v47 = *(_QWORD *)(v41 + 24);
              v44 = (_BYTE *)(v46 + *(_QWORD *)(v41 + 32));
              *(_QWORD *)(v41 + 32) = v44;
            }
            if ( v47 <= (unsigned __int64)v44 )
            {
              a2 = (const __m128i *)(&qword_28 + 1);
              sub_227BA10(v41, 41);
            }
            else
            {
              *(_QWORD *)(v41 + 32) = v44 + 1;
              *v44 = 41;
            }
            goto LABEL_32;
          }
          goto LABEL_76;
        }
LABEL_72:
        if ( v31 != 62 || v30 == 64 )
          goto LABEL_39;
        goto LABEL_74;
      }
      if ( (unsigned int)v31 - 34 > 5 )
        goto LABEL_72;
      if ( v30 != 72 )
      {
        if ( (*(_BYTE *)(v30 + 10) & 0x20) == 0 )
          goto LABEL_118;
        v64 = *(_QWORD *)(*(_QWORD *)(v30 - 24) & 0xFFFFFFFFFFFFFFF0LL);
        v65 = *(unsigned __int8 *)(v64 + 16);
        if ( (unsigned int)(v65 - 25) > 1 )
        {
          v66 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v30 - 24) & 0xFFFFFFFFFFFFFFF0LL), a2, v65, v37);
          LOBYTE(v65) = *(_BYTE *)(v66 + 16);
          v64 = v66;
        }
        if ( (_BYTE)v65 != 26 )
LABEL_118:
          v64 = 0;
        a2 = (const __m128i *)v18;
        sub_B72CF0(v30 - 72, v18);
        v68 = *(_BYTE **)(v18 + 32);
        if ( (unsigned __int64)v68 >= *(_QWORD *)(v18 + 24) )
        {
          a2 = (const __m128i *)&qword_28;
          sub_227BA10(v18, 40);
          if ( !v64 )
            goto LABEL_116;
        }
        else
        {
          v69 = (__int64)(v68 + 1);
          *(_QWORD *)(v18 + 32) = v68 + 1;
          *v68 = 40;
          if ( !v64 )
            goto LABEL_116;
        }
        v71 = sub_B76070(v30 - 72, (__int64)a2, v69, v67);
        if ( !v71 )
        {
          if ( *(char *)(v64 + 19) >= 0 )
            goto LABEL_116;
          goto LABEL_129;
        }
        v76 = v64;
        v72 = (unsigned int)(v71 - 1);
        v77 = v17;
        for ( j = 0; ; ++j )
        {
          a2 = (const __m128i *)v18;
          v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 48) + 8 * j) + 48LL);
          v80 = 257;
          sub_F74830(&v78, v18, v74, v79, 0);
          if ( v72 == j )
            break;
          if ( (_DWORD)j != -1 )
            sub_995540(v18, ", ");
        }
        v17 = v77;
        if ( *(char *)(v76 + 19) < 0 )
        {
          sub_995540(v18, ", ");
LABEL_129:
          a2 = (const __m128i *)"...";
          sub_995540(v18, "...");
        }
LABEL_116:
        v70 = *(_BYTE **)(v18 + 32);
        if ( (unsigned __int64)v70 >= *(_QWORD *)(v18 + 24) )
        {
          a2 = (const __m128i *)(&qword_28 + 1);
          sub_227BA10(v18, 41);
        }
        else
        {
          *(_QWORD *)(v18 + 32) = v70 + 1;
          *v70 = 41;
        }
LABEL_32:
        v27 = j__strlen("::");
        v28 = *(void **)(v18 + 32);
        v29 = v27;
        if ( v27 > *(_QWORD *)(v18 + 24) - (_QWORD)v28 )
        {
          a2 = (const __m128i *)"::";
          sub_227BF10(v18, "::", v27);
        }
        else if ( v27 )
        {
          a2 = (const __m128i *)"::";
          memcpy(v28, "::", v27);
          *(_QWORD *)(v18 + 32) += v29;
        }
        goto LABEL_35;
      }
      if ( v31 != 62 )
        goto LABEL_39;
LABEL_74:
      if ( *(char *)(v30 + 12) < 0 )
      {
        v38 = v30 - 64;
LABEL_76:
        a2 = (const __m128i *)v18;
        sub_B72CF0(v38, v18);
        goto LABEL_32;
      }
LABEL_35:
      v17 -= 8;
      if ( v16 == v17 )
      {
        v17 = v81;
        goto LABEL_41;
      }
    }
    if ( v30 != 64 )
    {
      v19 = *(_QWORD *)(v30 - 24);
      if ( (v19 & 7) != 0 || (v20 = v19 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        v36 = j__strlen(&byte_22F0C30);
        v22 = *(void **)(v18 + 32);
        v24 = &byte_22F0C30;
        v23 = v36;
        if ( v36 <= *(_QWORD *)(v18 + 24) - (_QWORD)v22 )
          goto LABEL_29;
      }
      else
      {
        v21 = *(unsigned int **)(v20 + 16);
        v22 = *(void **)(v18 + 32);
        v23 = *v21;
        v24 = (const char *)(v21 + 4);
        if ( v23 <= *(_QWORD *)(v18 + 24) - (_QWORD)v22 )
        {
LABEL_29:
          if ( v23 )
          {
            memcpy(v22, v24, v23);
            *(_QWORD *)(v18 + 32) += v23;
          }
          goto LABEL_31;
        }
      }
      sub_227BF10(v18, v24, v23);
LABEL_31:
      v25 = *(unsigned int **)(v30 + 104);
      v26 = sub_BBF290(v30 - 64);
      a2 = (const __m128i *)(v25 + 2);
      sub_F712D0(v18, v25 + 2, *v25, v74, *(_QWORD *)(v26 + 56));
      goto LABEL_32;
    }
    if ( v31 == 24 )
      goto LABEL_48;
    goto LABEL_72;
  }
LABEL_41:
  if ( v17 != v83 )
    free(v17);
}
