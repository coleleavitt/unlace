unsigned __int64 __fastcall sub_6440A0(__int64 *a1, __int64 *a2, __int16 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  const char *v7; // r15
  __int64 v8; // rax
  size_t v9; // r14
  unsigned __int64 v10; // r15
  size_t v11; // r10
  unsigned __int64 v12; // r9
  __int64 v13; // rsi
  size_t v14; // rdx
  __m128i *v16; // rax
  const char *v17; // rsi
  unsigned __int64 v18; // r8
  _BYTE *v19; // r15
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // r9
  _BYTE *v24; // rsi
  size_t v25; // r10
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  _BYTE *v28; // rsi
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  _BYTE *v31; // rsi
  unsigned __int64 v32; // r8
  __int64 v33; // r9
  _BYTE *v34; // r15
  unsigned __int64 v35; // rdx
  _BYTE *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r9
  _BYTE *v39; // rsi
  size_t v40; // r10
  __int64 v41; // r9
  size_t v42; // r11
  _BYTE *v43; // rsi
  __int64 v44; // r8
  __int64 v45; // rdx
  _BYTE *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r8
  _BYTE *v49; // rsi
  __int64 v50; // r15
  __int64 v51; // r8
  __int64 v52; // rdx
  _BYTE *v53; // rsi
  char *v54; // r15
  __m128i v55; // xmm0
  void *v56; // rax
  void *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rax
  size_t v60; // r15
  _BYTE *v61; // rsi
  __int64 v62; // r9
  size_t v63; // r11
  _BYTE *v64; // rsi
  size_t v65; // [rsp+10h] [rbp-98h]
  size_t v66; // [rsp+10h] [rbp-98h]
  size_t v67; // [rsp+10h] [rbp-98h]
  size_t v68; // [rsp+10h] [rbp-98h]
  size_t v69; // [rsp+10h] [rbp-98h]
  size_t v70; // [rsp+10h] [rbp-98h]
  size_t v71; // [rsp+10h] [rbp-98h]
  size_t v72; // [rsp+10h] [rbp-98h]
  size_t v73; // [rsp+10h] [rbp-98h]
  size_t v74; // [rsp+10h] [rbp-98h]
  size_t v75; // [rsp+10h] [rbp-98h]
  size_t v76; // [rsp+10h] [rbp-98h]
  size_t v77; // [rsp+10h] [rbp-98h]
  size_t v78; // [rsp+10h] [rbp-98h]
  size_t v79; // [rsp+10h] [rbp-98h]
  unsigned __int64 v80; // [rsp+18h] [rbp-90h]
  __int64 v81; // [rsp+18h] [rbp-90h]
  unsigned __int64 v82; // [rsp+18h] [rbp-90h]
  __int64 v83; // [rsp+18h] [rbp-90h]
  unsigned __int64 v84; // [rsp+18h] [rbp-90h]
  unsigned __int64 v85; // [rsp+18h] [rbp-90h]
  __int64 v86; // [rsp+18h] [rbp-90h]
  __int64 v87; // [rsp+18h] [rbp-90h]
  __int64 v88; // [rsp+18h] [rbp-90h]
  unsigned __int64 v89; // [rsp+18h] [rbp-90h]
  __int64 v90; // [rsp+18h] [rbp-90h]
  size_t v91; // [rsp+18h] [rbp-90h]
  size_t v92; // [rsp+20h] [rbp-88h]
  __int64 v93; // [rsp+20h] [rbp-88h]
  __int64 v94; // [rsp+20h] [rbp-88h]
  __int64 v95; // [rsp+20h] [rbp-88h]
  __int64 v96; // [rsp+20h] [rbp-88h]
  size_t v97; // [rsp+20h] [rbp-88h]
  size_t v98; // [rsp+20h] [rbp-88h]
  size_t v99; // [rsp+28h] [rbp-80h]
  __int64 v100; // [rsp+28h] [rbp-80h]
  void *src; // [rsp+30h] [rbp-78h] BYREF
  __m128i n; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __m128i v104; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v105; // [rsp+68h] [rbp-40h]

  v105 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = *a2;
    v4 = *a2 + 48 * a2[1];
    if ( *a2 != v4 )
    {
      while ( 1 )
      {
        src = nullptr;
        n = 0;
        sub_643970((__int64)&src, v3);
        v8 = *(_QWORD *)(v3 + 8);
        if ( (a3 & 8) != 0 )
        {
          if ( !v8 )
            goto LABEL_28;
          v7 = *(const char **)v3;
          if ( !strcmp(*(const char **)v3, "__org_arrdim") || !strcmp(v7, "__org_typedef") )
          {
            if ( src )
            {
              n.m128i_i64[0] = 0;
              qfree(src);
            }
            goto LABEL_9;
          }
        }
        else
        {
          if ( !v8 )
            goto LABEL_28;
          v7 = *(const char **)v3;
        }
        if ( *v7 == 1 && !v7[1] )
        {
          v9 = n.m128i_i64[0];
          if ( (a3 & 1) != 0 )
          {
            if ( (a3 & 0x800) == 0 && n.m128i_i64[0] > 1uLL )
            {
              tag_remove();
              v9 = n.m128i_i64[0];
            }
LABEL_17:
            v10 = a1[1];
            v11 = 0;
            if ( v10 )
              v11 = --v10;
            goto LABEL_19;
          }
          v60 = 2;
          if ( n.m128i_i64[0] )
          {
            v60 = n.m128i_i64[0] + 1;
            v61 = src;
            v9 = n.m128i_i64[0] - 1;
            if ( n.m128i_i64[1] >= (unsigned __int64)(n.m128i_i64[0] + 1) )
              goto LABEL_83;
          }
          else
          {
            v61 = src;
            if ( n.m128i_i64[1] >= 2uLL )
            {
LABEL_83:
              n.m128i_i64[0] = v60;
              v61[v9] = 32;
              *((_BYTE *)src + v9 + 1) = 0;
              v9 = n.m128i_i64[0];
              if ( (a3 & 0x800) == 0 && n.m128i_i64[0] > 1uLL )
              {
                tag_remove();
                v9 = n.m128i_i64[0];
              }
              goto LABEL_80;
            }
          }
          src = (void *)qvector_reserve(&src, v61, v60, 1);
          v61 = src;
          goto LABEL_83;
        }
LABEL_28:
        v104 = 0;
        ptr = nullptr;
        v16 = (__m128i *)qvector_reserve(&ptr, 0, 28, 1);
        ptr = v16;
        v104.m128i_i64[0] = 28;
        *v16 = _mm_load_si128((const __m128i *)&xmmword_2383DF0);
        v17 = (const char *)ptr;
        *(__m128i *)((char *)v16 + 11) = _mm_load_si128((const __m128i *)&xmmword_2383E00);
        *((_BYTE *)v17 + 27) = 0;
        v18 = *(_QWORD *)(v3 + 8);
        if ( !v18 )
        {
          if ( !byte_2CA12E1 )
            goto LABEL_52;
          v19 = nullptr;
          goto LABEL_31;
        }
        v70 = *(_QWORD *)(v3 + 8);
        v19 = (_BYTE *)qalloc_or_throw(v70, v17);
        memcpy(v19, *(const void **)v3, v70);
        if ( *v19 )
        {
          v17 = (const char *)ptr;
          v18 = v70;
LABEL_31:
          v20 = v104.m128i_i64[0];
          v21 = 2;
          if ( v104.m128i_i64[0] )
          {
            v21 = v104.m128i_i64[0] + 1;
            v20 = v104.m128i_i64[0] - 1;
          }
          if ( v104.m128i_i64[1] < v21 )
          {
            v94 = v20;
            v84 = v18;
            v72 = v21;
            ptr = (void *)qvector_reserve(&ptr, v17, v21, 1);
            v20 = v94;
            v17 = (const char *)ptr;
            v18 = v84;
            v21 = v72;
          }
          v104.m128i_i64[0] = v21;
          v22 = 2;
          v17[v20] = 1;
          *((_BYTE *)ptr + v20 + 1) = 0;
          v23 = v104.m128i_i64[0];
          if ( v104.m128i_i64[0] )
          {
            v22 = v104.m128i_i64[0] + 1;
            v23 = v104.m128i_i64[0] - 1;
          }
          v24 = ptr;
          if ( v104.m128i_i64[1] < v22 )
          {
            v95 = v23;
            v85 = v18;
            v73 = v22;
            ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
            v23 = v95;
            v24 = ptr;
            v18 = v85;
            v22 = v73;
          }
          v104.m128i_i64[0] = v22;
          v24[v23] = 23;
          *((_BYTE *)ptr + v23 + 1) = 0;
          if ( v18 )
          {
            v25 = v18 - 1;
            if ( v18 != 1 )
            {
              v62 = v104.m128i_i64[0];
              v63 = v18 - 1;
              if ( v104.m128i_i64[0] )
              {
                v62 = v104.m128i_i64[0] - 1;
                v63 = v25 + v104.m128i_i64[0] - 1;
                v18 += v104.m128i_i64[0] - 1;
              }
              v64 = ptr;
              if ( v104.m128i_i64[1] < v18 )
              {
                v99 = v25;
                v97 = v63;
                v90 = v62;
                v78 = v18;
                ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
                v25 = v99;
                v64 = ptr;
                v63 = v97;
                v62 = v90;
                v18 = v78;
              }
              v104.m128i_i64[0] = v18;
              v64[v63] = 0;
              memcpy((char *)ptr + v62, v19, v25);
            }
          }
          v26 = v104.m128i_i64[0];
          v27 = 2;
          if ( v104.m128i_i64[0] )
          {
            v27 = v104.m128i_i64[0] + 1;
            v26 = v104.m128i_i64[0] - 1;
          }
          v28 = ptr;
          if ( v104.m128i_i64[1] < v27 )
          {
            v83 = v26;
            v71 = v27;
            ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
            v26 = v83;
            v28 = ptr;
            v27 = v71;
          }
          v104.m128i_i64[0] = v27;
          v29 = 2;
          v28[v26] = 2;
          *((_BYTE *)ptr + v26 + 1) = 0;
          v30 = v104.m128i_i64[0];
          if ( v104.m128i_i64[0] )
          {
            v29 = v104.m128i_i64[0] + 1;
            v30 = v104.m128i_i64[0] - 1;
          }
          v31 = ptr;
          if ( v104.m128i_i64[1] < v29 )
          {
            v86 = v30;
            v74 = v29;
            ptr = (void *)qvector_reserve(&ptr, ptr, v29, 1);
            v30 = v86;
            v31 = ptr;
            v29 = v74;
          }
          v104.m128i_i64[0] = v29;
          v31[v30] = 23;
          *((_BYTE *)ptr + v30 + 1) = 0;
        }
        if ( v19 )
          qfree(v19);
LABEL_52:
        if ( !*(_QWORD *)(v3 + 32) )
          goto LABEL_74;
        sub_641C10((__int64 *)&ptr, 40);
        v32 = n.m128i_i64[0];
        if ( n.m128i_i64[0] )
        {
          v68 = n.m128i_i64[0];
          v34 = (_BYTE *)qalloc_or_throw(n.m128i_i64[0], (const char *)&qword_28);
          memcpy(v34, src, v68);
          v32 = v68;
          if ( !*v34 )
            goto LABEL_71;
          v33 = v104.m128i_i64[0];
          v35 = 2;
          if ( v104.m128i_i64[0] )
          {
LABEL_94:
            v35 = v33 + 1;
            v36 = ptr;
            --v33;
            if ( v104.m128i_i64[1] < v35 )
            {
LABEL_95:
              v93 = v33;
              v82 = v32;
              v69 = v35;
              ptr = (void *)qvector_reserve(&ptr, v36, v35, 1);
              v33 = v93;
              v36 = ptr;
              v32 = v82;
              v35 = v69;
            }
LABEL_57:
            v104.m128i_i64[0] = v35;
            v37 = 2;
            v36[v33] = 1;
            *((_BYTE *)ptr + v33 + 1) = 0;
            v38 = v104.m128i_i64[0];
            if ( v104.m128i_i64[0] )
            {
              v37 = v104.m128i_i64[0] + 1;
              v39 = ptr;
              v38 = v104.m128i_i64[0] - 1;
              if ( v104.m128i_i64[1] >= (unsigned __int64)(v104.m128i_i64[0] + 1) )
                goto LABEL_59;
            }
            else
            {
              v39 = ptr;
              if ( v104.m128i_i64[1] >= 2uLL )
              {
LABEL_59:
                v104.m128i_i64[0] = v37;
                v39[v38] = 23;
                *((_BYTE *)ptr + v38 + 1) = 0;
                if ( v32 )
                {
                  v40 = v32 - 1;
                  if ( v32 != 1 )
                  {
                    v41 = v104.m128i_i64[0];
                    v42 = v32 - 1;
                    if ( v104.m128i_i64[0] )
                    {
                      v41 = v104.m128i_i64[0] - 1;
                      v42 = v40 + v104.m128i_i64[0] - 1;
                      v32 += v104.m128i_i64[0] - 1;
                    }
                    v43 = ptr;
                    if ( v104.m128i_i64[1] < v32 )
                    {
                      v100 = v41;
                      v98 = v40;
                      v91 = v42;
                      v79 = v32;
                      ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
                      v41 = v100;
                      v43 = ptr;
                      v40 = v98;
                      v42 = v91;
                      v32 = v79;
                    }
                    v104.m128i_i64[0] = v32;
                    v43[v42] = 0;
                    memcpy((char *)ptr + v41, v34, v40);
                  }
                }
                v44 = v104.m128i_i64[0];
                v45 = 2;
                if ( v104.m128i_i64[0] )
                {
                  v45 = v104.m128i_i64[0] + 1;
                  v46 = ptr;
                  v44 = v104.m128i_i64[0] - 1;
                  if ( v104.m128i_i64[1] < (unsigned __int64)(v104.m128i_i64[0] + 1) )
                    goto LABEL_108;
                }
                else
                {
                  v46 = ptr;
                  if ( v104.m128i_i64[1] >= 2uLL )
                    goto LABEL_68;
LABEL_108:
                  v88 = v44;
                  v76 = v45;
                  ptr = (void *)qvector_reserve(&ptr, v46, v45, 1);
                  v44 = v88;
                  v46 = ptr;
                  v45 = v76;
                }
LABEL_68:
                v104.m128i_i64[0] = v45;
                v47 = 2;
                v46[v44] = 2;
                *((_BYTE *)ptr + v44 + 1) = 0;
                v48 = v104.m128i_i64[0];
                if ( v104.m128i_i64[0] )
                {
                  v47 = v104.m128i_i64[0] + 1;
                  v49 = ptr;
                  v48 = v104.m128i_i64[0] - 1;
                  if ( v104.m128i_i64[1] < (unsigned __int64)(v104.m128i_i64[0] + 1) )
                    goto LABEL_106;
                }
                else
                {
                  v49 = ptr;
                  if ( v104.m128i_i64[1] >= 2uLL )
                    goto LABEL_70;
LABEL_106:
                  v87 = v48;
                  v75 = v47;
                  ptr = (void *)qvector_reserve(&ptr, v49, v47, 1);
                  v48 = v87;
                  v49 = ptr;
                  v47 = v75;
                }
LABEL_70:
                v104.m128i_i64[0] = v47;
                v49[v48] = 23;
                *((_BYTE *)ptr + v48 + 1) = 0;
LABEL_71:
                if ( v34 )
                  qfree(v34);
                goto LABEL_73;
              }
            }
            v96 = v38;
            v89 = v32;
            v77 = v37;
            ptr = (void *)qvector_reserve(&ptr, v39, v37, 1);
            v38 = v96;
            v39 = ptr;
            v32 = v89;
            v37 = v77;
            goto LABEL_59;
          }
LABEL_56:
          v36 = ptr;
          if ( v104.m128i_i64[1] < 2uLL )
            goto LABEL_95;
          goto LABEL_57;
        }
        if ( byte_2CA12E1 )
        {
          v33 = v104.m128i_i64[0];
          v34 = nullptr;
          v35 = 2;
          if ( v104.m128i_i64[0] )
            goto LABEL_94;
          goto LABEL_56;
        }
LABEL_73:
        sub_641C10((__int64 *)&ptr, 41);
LABEL_74:
        v50 = v104.m128i_i64[0];
        if ( v104.m128i_i64[0] )
        {
          v51 = v104.m128i_i64[0] + 10;
          v52 = v104.m128i_i64[0] + 11;
          v53 = ptr;
          v50 = v104.m128i_i64[0] - 1;
          if ( v104.m128i_i64[1] >= (unsigned __int64)(v104.m128i_i64[0] + 11) )
            goto LABEL_76;
        }
        else
        {
          v53 = ptr;
          v52 = 12;
          v51 = 11;
          if ( v104.m128i_i64[1] >= 0xCuLL )
            goto LABEL_76;
        }
        v81 = v51;
        v67 = v52;
        ptr = (void *)qvector_reserve(&ptr, v53, v52, 1);
        v51 = v81;
        v53 = ptr;
        v52 = v67;
LABEL_76:
        v104.m128i_i64[0] = v52;
        v53[v51] = 0;
        v54 = (char *)ptr + v50;
        *(_QWORD *)v54 = 0x2909010902290901LL;
        *(_DWORD *)(v54 + 7) = 537461289;
        v55 = _mm_loadu_si128(&v104);
        v56 = ptr;
        v57 = src;
        v58 = n.m128i_i64[1];
        v9 = v55.m128i_i64[0];
        n = v55;
        ptr = src;
        v104.m128i_i64[1] = v58;
        src = v56;
        if ( ptr )
        {
          v104.m128i_i64[0] = 0;
          qfree(v57);
          v9 = n.m128i_i64[0];
        }
        if ( (a3 & 0x800) == 0 && v9 > 1 )
        {
          tag_remove();
          v9 = n.m128i_i64[0];
        }
        if ( (a3 & 1) != 0 )
          goto LABEL_17;
LABEL_80:
        v11 = 0;
        v10 = (a1[1] == 0) + a1[1] - 1;
LABEL_19:
        v12 = v10;
        if ( v9 )
          v12 = --v9 + v10;
        v13 = *a1;
        v14 = v12 + 1;
        if ( a1[2] < v12 + 1 )
        {
          v92 = v11;
          v80 = v12;
          v66 = v12 + 1;
          v59 = qvector_reserve(a1, v13, v14, 1);
          *a1 = v59;
          v11 = v92;
          v13 = v59;
          v12 = v80;
          v14 = v66;
        }
        a1[1] = v14;
        *(_BYTE *)(v13 + v12) = 0;
        if ( v11 < v10 )
        {
          v65 = v11;
          memmove((void *)(v11 + *a1 + v9), (const void *)(v11 + *a1), v10 - v11);
          v10 = v65;
        }
        memcpy((void *)(v10 + *a1), src, v9);
        if ( src )
        {
          n.m128i_i64[0] = 0;
          v3 += 48;
          qfree(src);
          if ( v4 == v3 )
            return v105 - __readfsqword(0x28u);
        }
        else
        {
LABEL_9:
          v3 += 48;
          if ( v4 == v3 )
            return v105 - __readfsqword(0x28u);
        }
      }
    }
  }
  return v105 - __readfsqword(0x28u);
}

