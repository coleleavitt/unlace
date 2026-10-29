void __fastcall sub_15A19D0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, unsigned int a6, unsigned __int8 a7)
{
  __int64 v9; // rbp
  __int64 v10; // rdi
  __m128i *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 (__fastcall *v15)(__int64); // rax
  _BOOL4 v16; // r9d
  __int64 v17; // rcx
  unsigned __int16 *v18; // rbx
  __int64 v19; // r13
  void *v20; // rdx
  __int64 v21; // r14
  unsigned __int16 *v22; // rbx
  unsigned int v23; // eax
  __int64 (__fastcall ***v24)(); // rbp
  size_t v25; // rax
  char *v26; // rdi
  const char *v27; // rsi
  size_t v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  _BYTE *v31; // rdx
  size_t v32; // rax
  const char *v33; // rsi
  __int64 (__fastcall ***v34)(); // rbp
  size_t v35; // rax
  char *v36; // rdi
  const char *v37; // rsi
  size_t v38; // r8
  unsigned __int64 v39; // rax
  __int64 (__fastcall **v40)(); // rax
  __int64 (__fastcall **v41)(); // rax
  int v42; // eax
  __m128i si128; // xmm0
  int v44; // [rsp+8h] [rbp-E0h]
  const char *src; // [rsp+18h] [rbp-D0h]
  const char *srca; // [rsp+18h] [rbp-D0h]
  const char *srcb; // [rsp+18h] [rbp-D0h]
  void *srcc; // [rsp+18h] [rbp-D0h]
  void *srcd; // [rsp+18h] [rbp-D0h]
  void *srce; // [rsp+18h] [rbp-D0h]
  _BOOL4 srcf; // [rsp+18h] [rbp-D0h]
  __int64 v53; // [rsp+28h] [rbp-C0h]
  int v54; // [rsp+30h] [rbp-B8h]
  __int64 v55; // [rsp+38h] [rbp-B0h]
  unsigned int v56; // [rsp+4Ch] [rbp-9Ch] BYREF
  void *v57; // [rsp+50h] [rbp-98h] BYREF
  __int64 v58; // [rsp+58h] [rbp-90h]
  _BYTE v59[16]; // [rsp+60h] [rbp-88h] BYREF
  __int64 (__fastcall **v60)(); // [rsp+70h] [rbp-78h] BYREF
  int v61; // [rsp+78h] [rbp-70h]
  __int128 v62; // [rsp+80h] [rbp-68h]
  void *dest; // [rsp+90h] [rbp-58h]
  char v64; // [rsp+98h] [rbp-50h]
  int v65; // [rsp+9Ch] [rbp-4Ch]
  void **v66; // [rsp+A0h] [rbp-48h]

  v9 = a1;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(__m128i **)(v10 + 32);
  v12 = *(_QWORD *)(v10 + 24);
  v44 = a2;
  v56 = a6;
  if ( (unsigned __int64)(v12 - (_QWORD)v11) > 0x12 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA7B0);
    v11[1].m128i_i8[2] = 32;
    v11[1].m128i_i16[0] = 14915;
    *v11 = si128;
    *(_QWORD *)(v10 + 32) += 19LL;
  }
  else
  {
    sub_227BF10(v10, "OPENING_PAREN_LOC: ", 19);
  }
  sub_101AC40(&v56, *(_QWORD *)(v9 + 16), *(_QWORD *)(a2 + 272));
  v13 = *(_QWORD *)(v9 + 16);
  v14 = *(_BYTE **)(v13 + 32);
  if ( *(_BYTE **)(v13 + 24) == v14 )
  {
    sub_227BF10(v13, "\n", 1);
  }
  else
  {
    *v14 = 10;
    ++*(_QWORD *)(v13 + 32);
  }
  if ( a5 )
  {
    v54 = v9 + 24;
    v53 = a4 + 24LL * (unsigned int)(a5 - 1) + 24;
    do
    {
      v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL);
      v16 = (*(_BYTE *)(v9 + 8) & 0x10) != 0;
      if ( v15 == sub_15A1850 )
      {
        v17 = *(_QWORD *)(v9 + 48);
      }
      else
      {
        srcf = (*(_BYTE *)(v9 + 8) & 0x10) != 0;
        v42 = v15(v9);
        v16 = srcf;
        LODWORD(v17) = v42;
      }
      v18 = (unsigned __int16 *)sub_171C450(a4, a3, v44, v17, v54, v16, a7);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v9 + 16);
        v20 = *(void **)(v19 + 32);
        if ( *(_QWORD *)(v19 + 24) - (_QWORD)v20 > 9u )
        {
          qmemcpy(v20, "OVERLOAD: ", 10);
          *(_QWORD *)(v19 + 32) += 10LL;
        }
        else
        {
          v19 = sub_227BF10(*(_QWORD *)(v9 + 16), "OVERLOAD: ", 10);
        }
        v59[0] = 0;
        v57 = v59;
        v58 = 0;
        v61 = 0;
        v60 = &off_2BEBE68;
        v64 = 0;
        v66 = &v57;
        v65 = 1;
        dest = nullptr;
        v62 = 0;
        sub_227B8B0(&v60, 0, 0, 0);
        v21 = (__int64)&v18[8 * *v18 + 16];
        v22 = v18 + 16;
        if ( v22 != (unsigned __int16 *)v21 )
        {
          v55 = v9;
          while ( 1 )
          {
            while ( 1 )
            {
              v23 = *(_DWORD *)v22;
              if ( *(_DWORD *)v22 > 5u )
                break;
              if ( v23 >= 4 )
              {
                if ( *((_QWORD *)&v62 + 1) - (_QWORD)dest > 1u )
                {
                  v34 = &v60;
                  *(_WORD *)dest = 9051;
                  dest = (char *)dest + 2;
                }
                else
                {
                  v34 = (__int64 (__fastcall ***)())sub_227BF10(&v60, "[#", 2);
                }
                if ( *((_QWORD *)v22 + 1) )
                {
                  srcb = *((const char **)v22 + 1);
                  v35 = strlen(srcb);
                  v36 = (char *)v34[4];
                  v37 = srcb;
                  v38 = v35;
                  v39 = (char *)v34[3] - v36;
                  if ( v38 > v39 )
                  {
                    v34 = (__int64 (__fastcall ***)())sub_227BF10(v34, srcb, v38);
                    goto LABEL_42;
                  }
                  if ( v38 )
                  {
                    srcd = (void *)v38;
                    memcpy(v36, v37, v38);
                    v40 = v34[3];
                    v36 = (char *)v34[4] + (_QWORD)srcd;
                    v34[4] = (__int64 (__fastcall **)())v36;
                    v39 = (char *)v40 - v36;
                  }
                }
                else
                {
LABEL_42:
                  v36 = (char *)v34[4];
                  v39 = (char *)v34[3] - v36;
                }
                if ( v39 > 1 )
                {
                  *(_WORD *)v36 = 23843;
                  v34[4] = (__int64 (__fastcall **)())((char *)v34[4] + 2);
                }
                else
                {
                  sub_227BF10(v34, "#]", 2);
                }
                goto LABEL_16;
              }
              if ( v23 != 2 )
                goto LABEL_34;
LABEL_16:
              v22 += 8;
              if ( (unsigned __int16 *)v21 == v22 )
                goto LABEL_27;
            }
            if ( v23 != 6 )
            {
LABEL_34:
              if ( *((_QWORD *)v22 + 1) )
              {
                srca = *((const char **)v22 + 1);
                v32 = strlen(srca);
                v33 = srca;
                if ( v32 <= *((_QWORD *)&v62 + 1) - (_QWORD)dest )
                {
                  if ( v32 )
                  {
                    srcc = (void *)v32;
                    memcpy(dest, v33, v32);
                    dest = (char *)dest + (_QWORD)srcc;
                  }
                }
                else
                {
                  sub_227BF10(&v60, srca, v32);
                }
              }
              goto LABEL_16;
            }
            if ( *((_QWORD *)&v62 + 1) - (_QWORD)dest > 1u )
            {
              v24 = &v60;
              *(_WORD *)dest = 9020;
              dest = (char *)dest + 2;
            }
            else
            {
              v24 = (__int64 (__fastcall ***)())sub_227BF10(&v60, "<#", 2);
            }
            if ( !*((_QWORD *)v22 + 1) )
              goto LABEL_24;
            src = *((const char **)v22 + 1);
            v25 = strlen(src);
            v26 = (char *)v24[4];
            v27 = src;
            v28 = v25;
            v29 = (char *)v24[3] - v26;
            if ( v28 > v29 )
              break;
            if ( v28 )
            {
              srce = (void *)v28;
              memcpy(v26, v27, v28);
              v41 = v24[3];
              v26 = (char *)v24[4] + (_QWORD)srce;
              v24[4] = (__int64 (__fastcall **)())v26;
              v29 = (char *)v41 - v26;
            }
LABEL_25:
            if ( v29 > 1 )
            {
              *(_WORD *)v26 = 15907;
              v24[4] = (__int64 (__fastcall **)())((char *)v24[4] + 2);
              goto LABEL_16;
            }
            v22 += 8;
            sub_227BF10(v24, "#>", 2);
            if ( (unsigned __int16 *)v21 == v22 )
            {
LABEL_27:
              v9 = v55;
              goto LABEL_28;
            }
          }
          v24 = (__int64 (__fastcall ***)())sub_227BF10(v24, src, v28);
LABEL_24:
          v26 = (char *)v24[4];
          v29 = (char *)v24[3] - v26;
          goto LABEL_25;
        }
LABEL_28:
        v60 = &off_2BEBE68;
        sub_227B7A0(&v60);
        v30 = sub_227BF10(v19, v57, v58);
        v31 = *(_BYTE **)(v30 + 32);
        if ( *(_BYTE **)(v30 + 24) == v31 )
        {
          sub_227BF10(v30, "\n", 1);
        }
        else
        {
          *v31 = 10;
          ++*(_QWORD *)(v30 + 32);
        }
        if ( v57 != v59 )
          operator delete(v57);
      }
      a4 += 24;
    }
    while ( v53 != a4 );
  }
}
