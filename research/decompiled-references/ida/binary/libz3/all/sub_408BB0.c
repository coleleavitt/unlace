void __fastcall sub_408BB0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned int i; // ebx
  unsigned int v15; // eax
  __int64 v16; // r10
  unsigned __int64 v17; // rdi
  int *v18; // rax
  unsigned int v19; // ecx
  int *v20; // r8
  __int64 v21; // r10
  int *v22; // rax
  int *v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rsi
  char v28; // cl
  int *v29; // rax
  int *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // r13
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  char *v44; // r11
  unsigned int v45; // eax
  unsigned int v46; // edx
  __int64 v47; // rsi
  int v48; // [rsp+0h] [rbp-188h]
  int v49[2]; // [rsp+8h] [rbp-180h]
  void **p_src; // [rsp+10h] [rbp-178h]
  unsigned int v51; // [rsp+10h] [rbp-178h]
  __int64 v52; // [rsp+18h] [rbp-170h]
  int *v53; // [rsp+20h] [rbp-168h]
  int v54[2]; // [rsp+28h] [rbp-160h]
  int *v55; // [rsp+30h] [rbp-158h]
  int *v56; // [rsp+38h] [rbp-150h]
  int v57[2]; // [rsp+40h] [rbp-148h] BYREF
  int v58[4]; // [rsp+48h] [rbp-140h] BYREF
  int v59; // [rsp+58h] [rbp-130h]
  void *src; // [rsp+60h] [rbp-128h] BYREF
  int v61[4]; // [rsp+68h] [rbp-120h] BYREF
  int v62; // [rsp+78h] [rbp-110h]
  int v63[4]; // [rsp+80h] [rbp-108h] BYREF
  int v64[4]; // [rsp+90h] [rbp-F8h] BYREF
  int v65[4]; // [rsp+A0h] [rbp-E8h]
  int v66[4]; // [rsp+B0h] [rbp-D8h] BYREF
  int v67[4]; // [rsp+C0h] [rbp-C8h]
  int v68[4]; // [rsp+D0h] [rbp-B8h]
  int v69[4]; // [rsp+E0h] [rbp-A8h]
  int v70[4]; // [rsp+F0h] [rbp-98h]
  int v71[4]; // [rsp+100h] [rbp-88h]
  __m128i si128; // [rsp+110h] [rbp-78h]
  __m128i v73; // [rsp+120h] [rbp-68h]
  __m128i v74[5]; // [rsp+130h] [rbp-58h]

  v9 = *(_DWORD *)(a3 + 96);
  sub_407990((_QWORD *)a3, a2, a3, a4, a5, a6);
  v10 = *(_QWORD *)(a3 + 80);
  strcpy((char *)&v58[2], "none");
  *(_QWORD *)v57 = &v58[2];
  v11 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)v58 = 4;
  if ( v10 )
  {
    v12 = **(_DWORD **)(v10 + 24);
    if ( v12 <= 9 )
    {
      LOBYTE(v61[2]) = 0;
      v16 = 1;
      src = &v61[2];
      v23 = &v61[2];
    }
    else
    {
      v13 = **(_DWORD **)(v10 + 24);
      for ( i = 1; ; i += 4 )
      {
        if ( v13 <= 0x63 )
        {
          v15 = i + 1;
          goto LABEL_10;
        }
        if ( v13 <= 0x3E7 )
        {
          v15 = i + 2;
          ++i;
          goto LABEL_10;
        }
        if ( v13 <= 0x270F )
        {
          v15 = i + 3;
          i += 2;
          goto LABEL_10;
        }
        v15 = i + 4;
        if ( v13 <= 0x1869F )
          break;
        v13 /= 0x2710u;
      }
      i += 3;
LABEL_10:
      LOBYTE(v61[2]) = 0;
      v16 = v15;
      src = &v61[2];
      *(_QWORD *)v61 = 0;
      if ( v15 <= 0xF )
      {
        v23 = &v61[2];
      }
      else
      {
        if ( v15 <= 0x1DuLL )
        {
          *(_QWORD *)v49 = 30;
          v17 = 31;
        }
        else
        {
          *(_QWORD *)v49 = v15;
          v17 = v15 + 1LL;
        }
        v52 = v15;
        v51 = v12;
        v18 = (int *)operator new(v17);
        v19 = v51;
        v20 = v18;
        v21 = v52;
        if ( *(_QWORD *)v61 )
        {
          if ( *(_QWORD *)v61 != -1 )
          {
            v22 = (int *)memcpy(v18, src, *(_QWORD *)v61 + 1LL);
            v21 = v52;
            v19 = v51;
            v20 = v22;
          }
        }
        else
        {
          *(_BYTE *)v18 = *(_BYTE *)src;
        }
        v56 = &v61[2];
        v55 = &v58[2];
        *(_QWORD *)v54 = v21;
        v53 = v20;
        LODWORD(v52) = v19;
        p_src = &src;
        sub_233E40((__int64)&src);
        v23 = v53;
        v12 = v52;
        v16 = *(_QWORD *)v54;
        src = v53;
        *(_QWORD *)&v61[2] = *(_QWORD *)v49;
      }
      *(__m128i *)v63 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
      *(__m128i *)v64 = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
      *(__m128i *)v65 = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
      *(__m128i *)v66 = _mm_load_si128((const __m128i *)&xmmword_18B6400);
      *(__m128i *)v67 = _mm_load_si128((const __m128i *)&xmmword_18B6410);
      *(__m128i *)v68 = _mm_load_si128((const __m128i *)&xmmword_18B6420);
      *(__m128i *)v69 = _mm_load_si128((const __m128i *)&xmmword_18B6430);
      *(__m128i *)v70 = _mm_load_si128((const __m128i *)&xmmword_18B6440);
      *(__m128i *)v71 = _mm_load_si128((const __m128i *)&xmmword_18B6450);
      si128 = _mm_load_si128((const __m128i *)&xmmword_18B6460);
      v73 = _mm_load_si128((const __m128i *)&xmmword_18B6470);
      v74[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
      *(__m128i *)((char *)v74 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
      if ( v12 <= 0x63 )
        goto LABEL_36;
      v49[0] = v9;
      do
      {
        v24 = v12 % 0x64;
        v25 = v12;
        v12 /= 0x64u;
        v26 = 2 * v24;
        *((_BYTE *)v23 + i) = *((_BYTE *)v63 + (unsigned int)(v26 + 1));
        v27 = i - 1;
        i -= 2;
        *((_BYTE *)v23 + v27) = *((_BYTE *)v63 + v26);
      }
      while ( v25 > 0x270F );
      if ( v25 > 0x3E7 )
      {
LABEL_36:
        v42 = 2 * v12;
        *((_BYTE *)v23 + 1) = *((_BYTE *)v63 + (unsigned int)(v42 + 1));
        v28 = *((_BYTE *)v63 + v42);
LABEL_22:
        *(_BYTE *)v23 = v28;
        *(_QWORD *)v61 = v16;
        *((_BYTE *)src + v16) = 0;
        v29 = *(int **)v57;
        v30 = *(int **)v57;
        if ( *(int **)v57 == &v58[2] )
        {
          if ( src != &v61[2] )
          {
            *(_QWORD *)v57 = src;
            *(__m128i *)v58 = _mm_loadu_si128((const __m128i *)v61);
            goto LABEL_42;
          }
          v31 = *(_QWORD *)v61;
          v32 = *(_QWORD *)v61;
        }
        else
        {
          v31 = *(_QWORD *)v61;
          v32 = *(_QWORD *)v61;
          if ( src != &v61[2] )
          {
            *(_QWORD *)v57 = src;
            v33 = *(_QWORD *)&v58[2];
            *(__m128 *)v58 = _mm_loadh_ps((const double *)&v61[2]);
            if ( v29 )
            {
              src = v29;
              *(_QWORD *)&v61[2] = v33;
LABEL_26:
              *(_QWORD *)v61 = 0;
              *(_BYTE *)v29 = 0;
              sub_233E40((__int64)&src);
              goto LABEL_27;
            }
LABEL_42:
            src = &v61[2];
            v29 = &v61[2];
            goto LABEL_26;
          }
        }
        if ( !v31 )
        {
LABEL_53:
          *(_QWORD *)v58 = v32;
          *((_BYTE *)v29 + v32) = 0;
          v29 = (int *)src;
          goto LABEL_26;
        }
        if ( v31 == 1 )
        {
          **(_BYTE **)v57 = v61[2];
          v32 = *(_QWORD *)v61;
          v29 = *(int **)v57;
          goto LABEL_53;
        }
        if ( (unsigned int)v31 >= 8 )
        {
          **(_QWORD **)v57 = *(_QWORD *)&v61[2];
          *(_QWORD *)((char *)v30 + (unsigned int)v31 - 8) = *(_QWORD *)((char *)v61 + (unsigned int)v31);
          v43 = (unsigned __int64)(v30 + 2) & 0xFFFFFFFFFFFFFFF8LL;
          v44 = (char *)((char *)&v61[2] - ((char *)v30 - v43));
          if ( (((_DWORD)v31 + (_DWORD)v30 - (_DWORD)v43) & 0xFFFFFFF8) >= 8 )
          {
            v45 = (v31 + (_DWORD)v30 - v43) & 0xFFFFFFF8;
            v46 = 0;
            do
            {
              v47 = v46;
              v46 += 8;
              *(_QWORD *)(v43 + v47) = *(_QWORD *)&v44[v47];
            }
            while ( v46 < v45 );
          }
        }
        else
        {
          if ( (v31 & 4) != 0 )
          {
            **(_DWORD **)v57 = v61[2];
            *(int *)((char *)v30 + (unsigned int)v31 - 4) = *(int *)((char *)&v61[1] + (unsigned int)v31);
            v31 = *(_QWORD *)v61;
            v30 = *(int **)v57;
            goto LABEL_52;
          }
          if ( !(_DWORD)v31 )
          {
LABEL_52:
            v32 = v31;
            v29 = v30;
            goto LABEL_53;
          }
          **(_BYTE **)v57 = v61[2];
          if ( (v31 & 2) != 0 )
          {
            *(_WORD *)((char *)v30 + (unsigned int)v31 - 2) = *(_WORD *)((char *)&v61[1] + (unsigned int)v31 + 2);
            v31 = *(_QWORD *)v61;
            v30 = *(int **)v57;
            goto LABEL_52;
          }
        }
        v31 = *(_QWORD *)v61;
        v30 = *(int **)v57;
        goto LABEL_52;
      }
    }
    v28 = v12 + 48;
    goto LABEL_22;
  }
LABEL_27:
  if ( *(_QWORD *)(a1 + 704) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v9 > 0xFFFE )
      std::__ostream_insert<char,std::char_traits<char>>();
    else
      std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v34 = std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v35 = sub_39A600(v34, *(const char **)(*(_QWORD *)(a2 + 24) + 16LL));
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_3DAEE0((__int64 *)v63, v11, *(_QWORD *)(a1 + 152), 0, 0, 0);
    sub_160E8B0(v35, v63);
    std::operator<<<std::char_traits<char>>();
    v36 = *(_QWORD *)v67;
    sub_3FCDF0(*(__int64 *)&v66[2], *(__int64 *)v67);
    sub_18572D0(v66);
    sub_18572D0(v64);
    sub_407990((_QWORD *)a3, v36, v37, v38, v39, v40);
    if ( *(_WORD *)(*(_QWORD *)(a3 + 16) + 4LL) == 2 )
    {
      v41 = *(_QWORD *)(a1 + 704) + 16LL;
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_160C9A0(
        v41,
        v48,
        v49[0],
        (int)p_src,
        v52,
        (int)v53,
        v54[0],
        (int)v55,
        (int)v56,
        v57[0],
        v58[0],
        v58[2],
        v59,
        (int)src,
        v61[0],
        v61[2],
        v62,
        v63[0],
        v63[2],
        v64[0],
        v64[2],
        v65[0],
        v65[2],
        v66[0],
        v66[2],
        v67[0],
        v67[2],
        v68[0],
        v68[2],
        v69[0],
        v69[2],
        v70[0],
        v70[2],
        v71[0],
        v71[2]);
      std::operator<<<std::char_traits<char>>();
    }
    std::operator<<<std::char_traits<char>>();
  }
  sub_233E40((__int64)v57);
}

