void __fastcall sub_2159900(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, void **a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  size_t v13; // r14
  size_t v14; // rax
  unsigned __int64 v15; // rcx
  __m128i si128; // xmm0
  __m128i *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  void *v24; // rsi
  size_t v25; // rbp
  _QWORD *v26; // rax
  size_t v27; // rbp
  unsigned __int64 v28; // r9
  _QWORD *v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rsi
  char v32; // al
  _QWORD *v33; // rdi
  void *v34; // r12
  __int64 v35; // rcx
  size_t v36; // rbp
  _QWORD *v37; // rax
  size_t v38; // rbp
  _QWORD **v39; // rdx
  char v40; // al
  __int64 v41; // [rsp+0h] [rbp-1D8h]
  void *v42; // [rsp+0h] [rbp-1D8h]
  size_t v43; // [rsp+18h] [rbp-1C0h]
  __int64 v44; // [rsp+20h] [rbp-1B8h]
  __int64 v45; // [rsp+28h] [rbp-1B0h]
  __int64 v46; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v47[2]; // [rsp+40h] [rbp-198h] BYREF
  char v48; // [rsp+50h] [rbp-188h]
  void *v49[2]; // [rsp+60h] [rbp-178h] BYREF
  _BYTE v50[16]; // [rsp+70h] [rbp-168h] BYREF
  void *src; // [rsp+80h] [rbp-158h]
  size_t n; // [rsp+88h] [rbp-150h]
  __m128i v53; // [rsp+90h] [rbp-148h] BYREF
  __m128i *v54; // [rsp+A0h] [rbp-138h] BYREF
  size_t v55; // [rsp+A8h] [rbp-130h]
  __m128i v56; // [rsp+B0h] [rbp-128h] BYREF
  _QWORD *v57; // [rsp+C0h] [rbp-118h] BYREF
  size_t v58; // [rsp+C8h] [rbp-110h]
  _QWORD v59[2]; // [rsp+D0h] [rbp-108h] BYREF
  void *v60; // [rsp+E0h] [rbp-F8h] BYREF
  size_t v61; // [rsp+E8h] [rbp-F0h]
  _QWORD v62[2]; // [rsp+F0h] [rbp-E8h] BYREF
  _QWORD *v63; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+108h] [rbp-D0h]
  _QWORD *v65; // [rsp+110h] [rbp-C8h]
  __int64 v66; // [rsp+118h] [rbp-C0h]
  __int64 v67; // [rsp+120h] [rbp-B8h]
  _QWORD v68[4]; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+150h] [rbp-88h]
  __int64 (__fastcall **v70)(); // [rsp+160h] [rbp-78h] BYREF
  int v71; // [rsp+168h] [rbp-70h]
  __int128 v72; // [rsp+170h] [rbp-68h]
  __int64 v73; // [rsp+180h] [rbp-58h]
  char v74; // [rsp+188h] [rbp-50h]
  int v75; // [rsp+18Ch] [rbp-4Ch]
  void **v76; // [rsp+190h] [rbp-48h]

  a1[1] = a2;
  a1[2] = a3;
  *a1 = off_2C737A0;
  if ( a3 )
  {
    v41 = a2;
    if ( a4 <= 0x3B )
    {
      sub_2159760(&v70, a1, a3, a4);
      *a5 = v70;
      return;
    }
    if ( (*(_BYTE *)(a3 + 58) != 96 || *(_BYTE *)(a3 + 59) != 10) && a5 )
    {
      v49[0] = v50;
      v50[0] = 0;
      v76 = v49;
      v72 = 0;
      v70 = &off_2BEBE68;
      v49[1] = nullptr;
      v71 = 0;
      v74 = 0;
      v75 = 1;
      v73 = 0;
      sub_227B8B0(&v70, 0, 0, 0);
      v8 = a1[2] + 58LL;
      sub_227BA90(&v70, v8, 2, 0);
      if ( v73 != (_QWORD)v72 )
        sub_227B9F0(&v70, v8, v9, v10, v11, v12, v41);
      sub_C05100((__int64)&v54, "terminator characters in archive member \"", (__int64)v49);
      v13 = v55;
      if ( 0x7FFFFFFFFFFFFFFFLL - v55 <= 0x3C )
        goto LABEL_80;
      v14 = v55 + 61;
      if ( v54 == &v56 )
        v15 = 15;
      else
        v15 = v56.m128i_i64[0];
      if ( v14 > v15 )
      {
        v43 = v55 + 61;
        sub_998B30((__int64)&v54, v55, 0, "\" not the correct \"`\\n\" values for the archive member header ", 0x3Du);
        v14 = v43;
      }
      else
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AB530);
        v17 = (__m128i *)((char *)v54 + v55);
        qmemcpy(&v54[3].m128i_i8[v55], "ember header ", 13);
        *v17 = si128;
        v17[1] = _mm_load_si128((const __m128i *)&xmmword_23AB540);
        v17[2] = _mm_load_si128((const __m128i *)&xmmword_23AB550);
      }
      v55 = v14;
      v54[3].m128i_i8[v13 + 13] = 0;
      src = &v53;
      if ( v54 == &v56 )
      {
        v53 = _mm_load_si128(&v56);
      }
      else
      {
        src = v54;
        v53.m128i_i64[0] = v56.m128i_i64[0];
      }
      v18 = (__int64)a1;
      n = v55;
      sub_2158300((__int64)v47, a1, a4);
      if ( (v48 & 1) != 0 )
      {
        v21 = (_QWORD *)v47[0];
        v47[0] = 0;
        v63 = v21;
        sub_A05760(v68, &v63);
        if ( v63 )
          (*(void (__fastcall **)(_QWORD *))(*v63 + 8LL))(v63);
        v22 = sub_215DEC0(v41);
        v24 = src;
        LOWORD(v69) = 267;
        v46 = a3 - v22;
        v25 = n;
        v68[0] = &v46;
        v57 = v59;
        if ( !((char *)src + n) || src )
        {
          if ( n <= 0xF )
          {
            if ( n == 1 )
            {
              LOBYTE(v59[0]) = *(_BYTE *)src;
              v26 = v59;
              goto LABEL_22;
            }
            v26 = v59;
            if ( !n )
            {
LABEL_22:
              v58 = v25;
              *((_BYTE *)v26 + v25) = 0;
              v27 = v58;
              if ( 0x7FFFFFFFFFFFFFFFLL - v58 > 9 )
              {
                v28 = v58 + 10;
                if ( v57 == v59 )
                  v29 = (_QWORD *)(byte_9 + 6);
                else
                  v29 = (_QWORD *)v59[0];
                if ( v28 > (unsigned __int64)v29 )
                {
                  v31 = v58;
                  sub_998B30((__int64)&v57, v58, 0, "at offset ", 0xAu);
                  v28 = v27 + 10;
                }
                else
                {
                  v30 = 8308;
                  v31 = 0x657366666F207461LL;
                  qmemcpy((char *)v57 + v58, "at offset ", 10);
                }
                v58 = v28;
                *((_BYTE *)v57 + v27 + 10) = 0;
                v32 = v69;
                if ( (_BYTE)v69 )
                {
                  if ( (_BYTE)v69 == 1 )
                  {
                    v31 = 260;
                    v63 = &v57;
                    LOWORD(v67) = 260;
                  }
                  else
                  {
                    if ( BYTE1(v69) == 1 )
                    {
                      v29 = (_QWORD *)v68[0];
                      v45 = v68[1];
                    }
                    else
                    {
                      v29 = v68;
                      v32 = 2;
                    }
                    v31 = v45;
                    v63 = &v57;
                    v65 = v29;
                    v66 = v45;
                    LOBYTE(v67) = 4;
                    BYTE1(v67) = v32;
                  }
                }
                else
                {
                  LOWORD(v67) = 256;
                }
                sub_2158040(&v60, v31, (__int64)v29, v23, v30, v28, (char)v63);
                v33 = v57;
                *a5 = v60;
                if ( v33 == v59 )
                  goto LABEL_56;
                goto LABEL_55;
              }
              goto LABEL_80;
            }
LABEL_62:
            memcpy(v26, v24, v25);
            v26 = v57;
            goto LABEL_22;
          }
          if ( (n & 0x8000000000000000LL) == 0LL )
          {
            v42 = src;
            v26 = (_QWORD *)operator new(n + 1);
            v59[0] = v25;
            v24 = v42;
            v57 = v26;
            goto LABEL_62;
          }
LABEL_81:
          std::__throw_length_error("basic_string::_M_create");
        }
LABEL_82:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
      v34 = src;
      v35 = 261;
      v36 = n;
      LOWORD(v67) = 261;
      v63 = (_QWORD *)v47[0];
      v64 = v47[1];
      v60 = v62;
      if ( (char *)src + n && !src )
        goto LABEL_82;
      if ( n > 0xF )
      {
        if ( (n & 0x8000000000000000LL) != 0LL )
          goto LABEL_81;
        v37 = (_QWORD *)operator new(n + 1);
        v62[0] = v36;
        v60 = v37;
      }
      else
      {
        if ( n == 1 )
        {
          LOBYTE(v62[0]) = *(_BYTE *)src;
          v37 = v62;
          goto LABEL_44;
        }
        v37 = v62;
        if ( !n )
        {
LABEL_44:
          v61 = v36;
          *((_BYTE *)v37 + v36) = 0;
          v38 = v61;
          if ( 0x7FFFFFFFFFFFFFFFLL - v61 > 3 )
          {
            if ( v60 == v62 )
              v39 = (_QWORD **)(byte_9 + 6);
            else
              v39 = (_QWORD **)v62[0];
            if ( v61 + 4 > (unsigned __int64)v39 )
            {
              v18 = v61;
              sub_998B30((__int64)&v60, v61, 0, "for ", 4u);
            }
            else
            {
              *(_DWORD *)((char *)v60 + v61) = 544370534;
            }
            v61 = v38 + 4;
            *((_BYTE *)v60 + v38 + 4) = 0;
            v40 = v67;
            if ( (_BYTE)v67 )
            {
              if ( (_BYTE)v67 == 1 )
              {
                v68[0] = &v60;
                LOWORD(v69) = 260;
              }
              else
              {
                if ( BYTE1(v67) == 1 )
                {
                  v39 = (_QWORD **)v63;
                  v44 = v64;
                }
                else
                {
                  v39 = &v63;
                  v40 = 2;
                }
                v18 = v44;
                v68[0] = &v60;
                v68[2] = v39;
                v68[3] = v44;
                LOBYTE(v69) = 4;
                BYTE1(v69) = v40;
              }
            }
            else
            {
              v39 = (_QWORD **)&qword_100;
              LOWORD(v69) = 256;
            }
            sub_2158040(&v57, v18, (__int64)v39, v35, v19, v20, v68[0]);
            v33 = v60;
            *a5 = v57;
            if ( v33 == v62 )
            {
LABEL_56:
              sub_111DFC0(v47);
              if ( src != &v53 )
                operator delete(src);
              v70 = &off_2BEBE68;
              sub_227B7A0(&v70);
              if ( v49[0] != v50 )
                operator delete(v49[0]);
              return;
            }
LABEL_55:
            operator delete(v33);
            goto LABEL_56;
          }
LABEL_80:
          std::__throw_length_error("basic_string::append");
        }
      }
      v18 = (__int64)v34;
      memcpy(v37, v34, v36);
      v37 = v60;
      goto LABEL_44;
    }
  }
}
