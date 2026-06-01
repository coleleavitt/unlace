__int64 __fastcall sub_3211A0(__int64 a1, const char **a2, int a3, int a4)
{
  __m128i *v6; // rax
  __m128i si128; // xmm0
  const char *v8; // rdi
  const char *v9; // rdx
  __int64 v10; // rax
  int v11; // r13d
  const char *v12; // r15
  char v13; // al
  int utf8_char; // r14d
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rcx
  _DWORD *v18; // rax
  const char *v19; // rdx
  const char *v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  const char *v23; // rdi
  const char *v24; // rax
  __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v28; // r14
  const char *v29; // rax
  __int64 v30; // rax
  const char *v31; // rdx
  unsigned __int8 v32; // cl
  char v33; // r14
  unsigned int v34; // r8d
  __int64 v35; // rcx
  unsigned int *v36; // rdx
  unsigned int *v37; // rax
  char v38; // cl
  unsigned int v39; // r14d
  unsigned int *v40; // rcx
  unsigned int *v41; // rdx
  _QWORD *v42; // rdx
  _DWORD *v43; // rax
  _DWORD *v45; // rdx
  _DWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  _QWORD *v49; // rsi
  _DWORD *v50; // rax
  __int64 v51; // rax
  struct _Unwind_Exception *v52; // rbx
  unsigned int v54; // [rsp+1Ch] [rbp-FCh]
  const char *v55; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v56; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v57; // [rsp+38h] [rbp-E0h]
  _QWORD v58[16]; // [rsp+50h] [rbp-C8h] BYREF
  char v59; // [rsp+D0h] [rbp-48h] BYREF
  unsigned __int64 v60; // [rsp+D8h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  qword_8CDA38 = qword_8CDA40;
  if ( a4 != -1 )
  {
    v45 = (_DWORD *)(qword_8CDA60 + 8 * xmmword_8CDA68);
    if ( (_DWORD *)qword_8CDA60 == v45 )
      goto LABEL_107;
    v46 = (_DWORD *)qword_8CDA60;
    while ( a4 != *v46 || v46[1] != 1 )
    {
      v46 += 2;
      if ( v45 == v46 )
        goto LABEL_107;
    }
    if ( v45 == v46 )
    {
LABEL_107:
      if ( *((_QWORD *)&xmmword_8CDA68 + 1) < (unsigned __int64)(xmmword_8CDA68 + 1) )
      {
        qword_8CDA60 = qvector_reserve(&qword_8CDA60, qword_8CDA60, xmmword_8CDA68 + 1, 8);
        v45 = (_DWORD *)(qword_8CDA60 + 8 * xmmword_8CDA68);
      }
      *v45 = a4;
      v45[1] = 1;
      *(_QWORD *)&xmmword_8CDA68 = xmmword_8CDA68 + 1;
    }
    LODWORD(qword_8CDA38) = a4;
    HIDWORD(qword_8CDA38) = 1;
  }
  sub_203890();
  sub_320ED0(a1, (unsigned int *)&qword_8CDA38);
  v6 = (__m128i *)v58;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD030);
  do
  {
    *v6 = si128;
    v6 += 2;
    v6[-1] = si128;
  }
  while ( v6 != (__m128i *)&v59 );
  if ( a2[1] )
  {
    v9 = *a2;
    v55 = v9;
    v10 = *(unsigned __int8 *)v9;
    if ( (_BYTE)v10 )
    {
      v11 = 0;
      while ( 1 )
      {
        switch ( v10 )
        {
          case 1LL:
            v30 = v11;
            if ( (unsigned __int64)v11 <= 0xF )
            {
              ++v11;
              v58[v30] = qword_8CDA50;
            }
            v24 = v9 + 1;
            v31 = v9 + 17;
            v55 = v24;
            v32 = *(v31 - 16);
            if ( v32 == 40 )
            {
              while ( *v24 )
              {
                if ( v31 == ++v24 )
                  goto LABEL_76;
              }
              v31 = v24;
LABEL_76:
              v55 = v31;
              v24 = v31;
              v38 = *v31;
            }
            else
            {
              if ( v32 != 19 )
              {
                v33 = *(v31 - 16);
                if ( (unsigned __int8)(v32 - 41) <= 7u )
                  goto LABEL_35;
                v34 = (char)v32;
                if ( v32 > 0x27u )
                {
                  v34 = 18;
                  v33 = 18;
                }
                v35 = xmmword_8CDA68;
                v36 = (unsigned int *)(qword_8CDA60 + 8 * xmmword_8CDA68);
                if ( (unsigned int *)qword_8CDA60 == v36 )
                  goto LABEL_114;
                v37 = (unsigned int *)qword_8CDA60;
                while ( *v37 != v34 || v37[1] )
                {
                  v37 += 2;
                  if ( v36 == v37 )
                    goto LABEL_114;
                }
                if ( v37 == v36 )
                {
LABEL_114:
                  if ( *((_QWORD *)&xmmword_8CDA68 + 1) < (unsigned __int64)(xmmword_8CDA68 + 1) )
                  {
                    v54 = v34;
                    v51 = qvector_reserve(&qword_8CDA60, qword_8CDA60, xmmword_8CDA68 + 1, 8);
                    v34 = v54;
                    qword_8CDA60 = v51;
                    v36 = (unsigned int *)(v51 + 8 * xmmword_8CDA68);
                  }
                  *v36 = v34;
                  v36[1] = 0;
                  v47 = xmmword_8CDA68 + 1;
                  *(_QWORD *)&xmmword_8CDA68 = xmmword_8CDA68 + 1;
                  if ( v33 != 18 )
                  {
LABEL_71:
                    v24 = v55;
                    qword_8CDA48 = v34;
                    v38 = *v55;
                    goto LABEL_72;
                  }
                  v48 = qword_8CDA60;
                  v35 = v47;
                  v49 = (_QWORD *)(qword_8CDA60 + 8 * v47);
                  if ( (_QWORD *)qword_8CDA60 != v49 )
                  {
                    v50 = (_DWORD *)qword_8CDA60;
                    goto LABEL_129;
                  }
LABEL_118:
                  if ( *((_QWORD *)&xmmword_8CDA68 + 1) < (unsigned __int64)(v35 + 1) )
                  {
                    qword_8CDA60 = qvector_reserve(&qword_8CDA60, v48, v35 + 1, 8);
                    v49 = (_QWORD *)(qword_8CDA60 + 8 * xmmword_8CDA68);
                  }
                  *v49 = 0x1FF0000FFLL;
                  *(_QWORD *)&xmmword_8CDA68 = xmmword_8CDA68 + 1;
                }
                else
                {
                  if ( v33 != 18 )
                    goto LABEL_71;
                  v50 = (_DWORD *)qword_8CDA60;
                  v49 = (_QWORD *)(qword_8CDA60 + 8 * xmmword_8CDA68);
                  v48 = qword_8CDA60;
LABEL_129:
                  while ( *v50 != -16776961 || v50[1] != 1 )
                  {
                    v50 += 2;
                    if ( v49 == (_QWORD *)v50 )
                      goto LABEL_118;
                  }
                  if ( v50 == (_DWORD *)v49 )
                    goto LABEL_118;
                }
                v56 = 0x1FF0000FFLL;
                sub_320ED0(a1, (unsigned int *)&v56);
                v24 = v55;
                v38 = *v55;
                goto LABEL_72;
              }
              if ( a3 == -1 )
                goto LABEL_35;
              v39 = (char)(a3 + 40);
              v40 = (unsigned int *)(qword_8CDA60 + 8 * xmmword_8CDA68);
              if ( (unsigned __int8)a3 >= 0xDu )
                v39 = 47;
              if ( (unsigned int *)qword_8CDA60 == v40 )
                goto LABEL_124;
              v41 = (unsigned int *)qword_8CDA60;
              while ( *v41 != v39 || v41[1] )
              {
                v41 += 2;
                if ( v40 == v41 )
                  goto LABEL_124;
              }
              if ( v41 == v40 )
              {
LABEL_124:
                if ( *((_QWORD *)&xmmword_8CDA68 + 1) < (unsigned __int64)(xmmword_8CDA68 + 1) )
                {
                  qword_8CDA60 = qvector_reserve(&qword_8CDA60, qword_8CDA60, xmmword_8CDA68 + 1, 8);
                  v40 = (unsigned int *)(qword_8CDA60 + 8 * xmmword_8CDA68);
                }
                *v40 = v39;
                v40[1] = 0;
                v24 = v55;
                *(_QWORD *)&xmmword_8CDA68 = xmmword_8CDA68 + 1;
              }
              qword_8CDA48 = v39;
              v38 = *v24;
            }
LABEL_72:
            if ( !v38 )
              goto LABEL_37;
LABEL_35:
            v9 = v24 + 1;
            v55 = v24 + 1;
            v10 = *((unsigned __int8 *)v24 + 1);
LABEL_36:
            if ( !(_BYTE)v10 )
              goto LABEL_37;
            break;
          case 2LL:
            if ( v11 > 0 )
            {
              --v11;
              if ( v9[1] == 18 )
                sub_320ED0(a1, (unsigned int *)&qword_8CDA38);
              else
                qword_8CDA48 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v58[v11]), _mm_cvtsi32_si128(HIDWORD(v58[v11]))).m128i_u64[0];
            }
            v29 = v55++;
            if ( !*v55 )
              goto LABEL_37;
            v9 = v29 + 2;
            v55 = v29 + 2;
            v10 = *((unsigned __int8 *)v29 + 2);
            goto LABEL_36;
          case 3LL:
            v12 = v9 + 1;
            v55 = v9 + 1;
            v13 = v9[1];
            if ( v13 )
              goto LABEL_11;
            if ( (_DWORD)qword_8CDA30 == (_DWORD)qword_8CDA40 )
              goto LABEL_50;
            goto LABEL_38;
          case 4LL:
            v28 = qword_8CDA30;
            v55 = v9 + 1;
            sub_320ED0(a1, (unsigned int *)&qword_8CDA48);
            v9 = v55;
            qword_8CDA48 = v28;
            v10 = *(unsigned __int8 *)v55;
            goto LABEL_36;
          case 34LL:
            v22 = a1;
            v23 = "&quot;";
            goto LABEL_34;
          case 38LL:
            v22 = a1;
            v23 = "&amp;";
            goto LABEL_34;
          case 39LL:
            v22 = a1;
            v23 = "&#039;";
            goto LABEL_34;
          case 60LL:
            v22 = a1;
            v23 = "&lt;";
            goto LABEL_34;
          case 62LL:
            v22 = a1;
            v23 = "&gt;";
LABEL_34:
            qfputs(v23, v22);
            v24 = v55;
            goto LABEL_35;
          default:
            v12 = v55;
            v13 = *v55;
LABEL_11:
            if ( v13 == 32 )
            {
              v55 = v12 + 1;
              qfputc((unsigned int)*v12, a1);
              v9 = v55;
              v10 = *(unsigned __int8 *)v55;
              goto LABEL_36;
            }
            utf8_char = get_utf8_char(&v55);
            if ( utf8_char == -1 )
              ++v55;
            v15 = (unsigned int)qword_8CDA48;
            if ( (_DWORD)qword_8CDA48 == (_DWORD)qword_8CDA50 )
            {
              v16 = HIDWORD(qword_8CDA48);
              if ( HIDWORD(qword_8CDA48) == HIDWORD(qword_8CDA50) )
                goto LABEL_27;
              if ( !byte_8CDA59 )
                goto LABEL_16;
            }
            else
            {
              v16 = HIDWORD(qword_8CDA48);
              if ( !byte_8CDA59 )
                goto LABEL_16;
            }
            sub_199CF0(a1, (__int64)"</span>");
            v42 = (_QWORD *)(qword_8CDA60 + 8 * xmmword_8CDA68);
            if ( (_QWORD *)qword_8CDA60 == v42 )
              goto LABEL_111;
            v43 = (_DWORD *)qword_8CDA60;
            while ( *v43 != 1 || v43[1] )
            {
              v43 += 2;
              if ( v42 == (_QWORD *)v43 )
                goto LABEL_111;
            }
            if ( v43 != (_DWORD *)v42 )
              goto LABEL_96;
LABEL_111:
            if ( *((_QWORD *)&xmmword_8CDA68 + 1) < (unsigned __int64)(xmmword_8CDA68 + 1) )
            {
              qword_8CDA60 = qvector_reserve(&qword_8CDA60, qword_8CDA60, xmmword_8CDA68 + 1, 8);
              v42 = (_QWORD *)(qword_8CDA60 + 8 * xmmword_8CDA68);
            }
            *v42 = 1;
            *(_QWORD *)&xmmword_8CDA68 = xmmword_8CDA68 + 1;
LABEL_96:
            v15 = (unsigned int)qword_8CDA48;
            qword_8CDA50 = 1;
            byte_8CDA59 = 0;
            v16 = HIDWORD(qword_8CDA48);
            if ( (_DWORD)qword_8CDA48 == 1 )
            {
              if ( !HIDWORD(qword_8CDA48) )
                goto LABEL_27;
              v56 = 0;
              v57 = 0;
              goto LABEL_17;
            }
LABEL_16:
            v56 = 0;
            v57 = 0;
            if ( !(_DWORD)v16 )
            {
              sub_169A50(&v56, (__int64)"c%d", v15);
              goto LABEL_23;
            }
LABEL_17:
            v17 = qword_8CDA60 + 8 * xmmword_8CDA68;
            if ( qword_8CDA60 == v17 )
            {
LABEL_134:
              v52 = (struct _Unwind_Exception *)sub_3183B0(0.0, qword_8CDA60, v16, v15, v17);
              if ( v56 )
              {
                *(_QWORD *)&v57 = 0;
                qfree(v56, (const char *)v16);
              }
              _Unwind_Resume(v52);
            }
            v18 = (_DWORD *)qword_8CDA60;
            while ( (_DWORD)v15 != *v18 || (_DWORD)v16 != v18[1] )
            {
              v18 += 2;
              if ( (_DWORD *)v17 == v18 )
                goto LABEL_134;
            }
            sub_169A50(&v56, (__int64)"c%zu", ((__int64)v18 - qword_8CDA60 + 424) >> 3);
LABEL_23:
            v19 = &s1;
            if ( (_QWORD)v57 )
              v19 = (const char *)v56;
            sub_199CF0(a1, (__int64)"<span class=\"%s\">", v19);
            byte_8CDA59 = 1;
            qword_8CDA50 = qword_8CDA48;
            if ( v56 )
            {
              *(_QWORD *)&v57 = 0;
              qfree(v56, "<span class=\"%s\">", v20);
            }
LABEL_27:
            if ( utf8_char == 8593 )
            {
              qfputs("&#8593;", a1);
              v9 = v55;
              v10 = *(unsigned __int8 *)v55;
            }
            else if ( utf8_char == 8595 )
            {
              qfputs("&#8595;", a1);
              v9 = v55;
              v10 = *(unsigned __int8 *)v55;
            }
            else
            {
              while ( 1 )
              {
                v9 = v55;
                if ( v12 >= v55 )
                  break;
                v21 = (unsigned int)*v12++;
                qfputc(v21, a1);
              }
              v10 = *(unsigned __int8 *)v55;
            }
            goto LABEL_36;
        }
      }
    }
LABEL_37:
    if ( (_DWORD)qword_8CDA30 != (_DWORD)qword_8CDA40 )
      goto LABEL_38;
  }
  else
  {
    v55 = &s1;
    if ( (_DWORD)qword_8CDA40 != (_DWORD)qword_8CDA30 )
    {
LABEL_6:
      v8 = &s1;
      goto LABEL_40;
    }
  }
LABEL_50:
  if ( HIDWORD(qword_8CDA30) == HIDWORD(qword_8CDA40) )
    goto LABEL_42;
LABEL_38:
  if ( !a2[1] )
    goto LABEL_6;
  v8 = *a2;
LABEL_40:
  v25 = tag_strlen(v8) + 1;
  v26 = (int)(get_last_pfxlen() + 77);
  while ( v26 >= v25 )
  {
    ++v25;
    qfputc(32, a1);
  }
LABEL_42:
  sub_320ED0(a1, (unsigned int *)&qword_8CDA40);
  qfputc(10, a1);
  return 1;
}
