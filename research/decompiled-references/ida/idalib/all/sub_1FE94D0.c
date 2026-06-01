void __fastcall sub_1FE94D0(__int64 a1)
{
  unsigned __int64 v2; // rcx
  char v3; // al
  _BYTE *v4; // r14
  _QWORD *v5; // rdx
  __m128i *v6; // rax
  __m128i *v7; // r12
  __m128i *v8; // rdi
  __int64 v9; // rdx
  void *v10; // rdi
  unsigned __int64 v11; // rcx
  char v12; // al
  _BYTE *v13; // r14
  _QWORD *v14; // rdx
  __m128i *v15; // rax
  __m128i *v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // esi
  char v19; // al
  _BYTE *v20; // r14
  _QWORD *v21; // rax
  __m128i *v22; // rax
  __m128i *v23; // rdi
  __int64 v24; // rdx
  void *v25; // rdi
  unsigned __int64 v26; // rcx
  char v27; // al
  _BYTE *v28; // r14
  _QWORD *v29; // rdx
  __m128i *v30; // rax
  __m128i *v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  char v34; // al
  _BYTE *v35; // r14
  _QWORD *v36; // rdx
  __m128i *v37; // rax
  __m128i *v38; // rdi
  __int64 v39; // rdx
  size_t v40; // rsi
  __m128i *v41; // rdi
  unsigned __int64 v42; // r13
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  char v45; // al
  char *v46; // rcx
  _QWORD *v47; // rdx
  __m128i *v48; // rax
  size_t v49; // rsi
  __m128i *v50; // rdi
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // rax
  char *v53; // rbp
  _BYTE *v54; // r12
  _QWORD *v55; // rax
  char *v56; // rbp
  _BYTE *v57; // r12
  _QWORD *v58; // rax
  char *v59; // rbp
  _BYTE *v60; // r12
  _QWORD *v61; // rax
  char *v62; // rbp
  unsigned __int64 i; // rcx
  _BYTE *v64; // r12
  char *v65; // rbp
  _BYTE *v66; // r12
  _QWORD *v67; // rax
  char *v68; // r13
  char *v69; // r15
  _QWORD *v70; // rax
  __int8 *v71; // rdi
  __int8 *v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rdx
  char *v78; // [rsp+8h] [rbp-1C0h] BYREF
  _BYTE v79[11]; // [rsp+25h] [rbp-1A3h] BYREF
  _BYTE v80[11]; // [rsp+45h] [rbp-183h] BYREF
  _BYTE v81[11]; // [rsp+65h] [rbp-163h] BYREF
  _BYTE v82[11]; // [rsp+85h] [rbp-143h] BYREF
  _BYTE v83[11]; // [rsp+A5h] [rbp-123h] BYREF
  void *v84[2]; // [rsp+B0h] [rbp-118h] BYREF
  _QWORD v85[2]; // [rsp+C0h] [rbp-108h] BYREF
  _QWORD v86[2]; // [rsp+D0h] [rbp-F8h] BYREF
  _QWORD v87[2]; // [rsp+E0h] [rbp-E8h] BYREF
  _QWORD v88[2]; // [rsp+F0h] [rbp-D8h] BYREF
  _QWORD v89[2]; // [rsp+100h] [rbp-C8h] BYREF
  _QWORD v90[2]; // [rsp+110h] [rbp-B8h] BYREF
  _QWORD v91[2]; // [rsp+120h] [rbp-A8h] BYREF
  void *v92[2]; // [rsp+130h] [rbp-98h] BYREF
  _QWORD v93[2]; // [rsp+140h] [rbp-88h] BYREF
  _QWORD v94[2]; // [rsp+150h] [rbp-78h] BYREF
  _QWORD v95[2]; // [rsp+160h] [rbp-68h] BYREF
  __m128i src; // [rsp+170h] [rbp-58h] BYREF
  __m128i v97; // [rsp+180h] [rbp-48h] BYREF

  switch ( *(_BYTE *)(a1 + 1) )
  {
    case 5:
      v18 = *(_DWORD *)(a1 + 16);
      if ( v18 > 0x40 )
      {
        v84[0] = v85;
        v19 = 48;
LABEL_30:
        LOBYTE(v85[0]) = v19;
        v20 = (_BYTE *)(&dword_0 + 1);
        v21 = v85;
        goto LABEL_31;
      }
      v62 = v79;
      for ( i = 0x40 / v18; ; i /= 0xAu )
      {
        --v62;
        v19 = i % 0xA + 48;
        *v62 = v19;
        if ( i <= 9 )
          break;
      }
      v64 = (_BYTE *)(v79 - v62);
      v84[0] = v85;
      v20 = (_BYTE *)(v79 - v62);
      if ( (unsigned __int64)(v79 - v62) > 0xF )
      {
        if ( (__int64)v64 >= 0 )
        {
          v21 = (_QWORD *)operator new((unsigned __int64)(v64 + 1));
          v85[0] = v79 - v62;
          v84[0] = v21;
LABEL_120:
          memcpy(v21, v62, v79 - v62);
          v21 = v84[0];
          goto LABEL_31;
        }
LABEL_205:
        std::__throw_length_error("basic_string::_M_create");
      }
      if ( v64 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_30;
      v21 = v85;
      if ( v64 )
        goto LABEL_120;
LABEL_31:
      v84[1] = v20;
      v20[(_QWORD)v21] = 0;
      v22 = (__m128i *)sub_99BDC0(v84, 0, 0, "b", 1u);
      src.m128i_i64[0] = (__int64)&v97;
      if ( (__m128i *)v22->m128i_i64[0] == &v22[1] )
      {
        v97 = _mm_loadu_si128(v22 + 1);
      }
      else
      {
        src.m128i_i64[0] = v22->m128i_i64[0];
        v97.m128i_i64[0] = v22[1].m128i_i64[0];
      }
      src.m128i_i64[1] = v22->m128i_i64[1];
      v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
      v22->m128i_i64[1] = 0;
      v22[1].m128i_i8[0] = 0;
      v23 = *(__m128i **)(a1 + 128);
      if ( (__m128i *)src.m128i_i64[0] == &v97 )
      {
        v75 = src.m128i_i64[1];
        if ( src.m128i_i64[1] )
        {
          if ( src.m128i_i64[1] == 1 )
            v23->m128i_i8[0] = v97.m128i_i8[0];
          else
            memcpy(v23, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
          v75 = src.m128i_i64[1];
          v23 = *(__m128i **)(a1 + 128);
        }
        *(_QWORD *)(a1 + 136) = v75;
        v23->m128i_i8[v75] = 0;
        v23 = (__m128i *)src.m128i_i64[0];
      }
      else
      {
        if ( v23 == (__m128i *)(a1 + 144) )
        {
          v78 = (char *)v97.m128i_i64[0];
          *(_QWORD *)(a1 + 128) = src.m128i_i64[0];
          *(__m128 *)(a1 + 136) = _mm_loadh_ps((const double *)&v78);
        }
        else
        {
          v78 = (char *)v97.m128i_i64[0];
          v24 = *(_QWORD *)(a1 + 144);
          *(_QWORD *)(a1 + 128) = src.m128i_i64[0];
          *(__m128 *)(a1 + 136) = _mm_loadh_ps((const double *)&v78);
          if ( v23 )
          {
            src.m128i_i64[0] = (__int64)v23;
            v97.m128i_i64[0] = v24;
            goto LABEL_37;
          }
        }
        v23 = &v97;
        src.m128i_i64[0] = (__int64)&v97;
      }
LABEL_37:
      src.m128i_i64[1] = 0;
      v23->m128i_i8[0] = 0;
      if ( (__m128i *)src.m128i_i64[0] != &v97 )
        operator delete((void *)src.m128i_i64[0]);
      v25 = v84[0];
      if ( v84[0] != v85 )
LABEL_40:
        operator delete(v25);
      return;
    case 6:
      v26 = *(unsigned int *)(a1 + 12);
      if ( !*(_DWORD *)(a1 + 12) )
      {
        v90[0] = v91;
        v27 = 48;
LABEL_44:
        LOBYTE(v91[0]) = v27;
        v28 = (_BYTE *)(&dword_0 + 1);
        v29 = v91;
        goto LABEL_45;
      }
      v65 = v82;
      while ( 1 )
      {
        --v65;
        v27 = v26 % 0xA + 48;
        *v65 = v27;
        if ( v26 <= 9 )
          break;
        v26 /= 0xAu;
      }
      v66 = (_BYTE *)(v82 - v65);
      v29 = v91;
      v28 = (_BYTE *)(v82 - v65);
      v90[0] = v91;
      if ( (unsigned __int64)(v82 - v65) > 0xF )
      {
        if ( (__int64)v66 < 0 )
          goto LABEL_205;
        v67 = (_QWORD *)operator new((unsigned __int64)(v66 + 1));
        v91[0] = v82 - v65;
        v90[0] = v67;
      }
      else
      {
        if ( v66 == (_BYTE *)&dword_0 + 1 )
          goto LABEL_44;
        if ( !v66 )
        {
LABEL_45:
          v90[1] = v28;
          v28[(_QWORD)v29] = 0;
          v30 = (__m128i *)sub_99BDC0(v90, 0, 0, "i", 1u);
          src.m128i_i64[0] = (__int64)&v97;
          if ( (__m128i *)v30->m128i_i64[0] == &v30[1] )
          {
            v97 = _mm_loadu_si128(v30 + 1);
          }
          else
          {
            src.m128i_i64[0] = v30->m128i_i64[0];
            v97.m128i_i64[0] = v30[1].m128i_i64[0];
          }
          v7 = (__m128i *)(a1 + 144);
          src.m128i_i64[1] = v30->m128i_i64[1];
          v30->m128i_i64[0] = (__int64)v30[1].m128i_i64;
          v30->m128i_i64[1] = 0;
          v30[1].m128i_i8[0] = 0;
          v31 = *(__m128i **)(a1 + 128);
          if ( (__m128i *)src.m128i_i64[0] == &v97 )
          {
            v77 = src.m128i_i64[1];
            if ( src.m128i_i64[1] )
            {
              if ( src.m128i_i64[1] == 1 )
                v31->m128i_i8[0] = v97.m128i_i8[0];
              else
                memcpy(v31, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
              v77 = src.m128i_i64[1];
              v31 = *(__m128i **)(a1 + 128);
            }
            *(_QWORD *)(a1 + 136) = v77;
            v31->m128i_i8[v77] = 0;
            v31 = (__m128i *)src.m128i_i64[0];
          }
          else
          {
            if ( v31 == v7 )
            {
              v78 = (char *)v97.m128i_i64[0];
              *(_QWORD *)(a1 + 128) = src.m128i_i64[0];
              *(__m128 *)(a1 + 136) = _mm_loadh_ps((const double *)&v78);
            }
            else
            {
              v78 = (char *)v97.m128i_i64[0];
              v32 = *(_QWORD *)(a1 + 144);
              *(_QWORD *)(a1 + 128) = src.m128i_i64[0];
              *(__m128 *)(a1 + 136) = _mm_loadh_ps((const double *)&v78);
              if ( v31 )
              {
                src.m128i_i64[0] = (__int64)v31;
                v97.m128i_i64[0] = v32;
                goto LABEL_51;
              }
            }
            v31 = &v97;
            src.m128i_i64[0] = (__int64)&v97;
          }
LABEL_51:
          src.m128i_i64[1] = 0;
          v31->m128i_i8[0] = 0;
          if ( (__m128i *)src.m128i_i64[0] != &v97 )
            operator delete((void *)src.m128i_i64[0]);
          v10 = (void *)v90[0];
          if ( (_QWORD *)v90[0] == v91 )
            goto LABEL_68;
LABEL_67:
          operator delete(v10);
          goto LABEL_68;
        }
        v67 = v91;
      }
      memcpy(v67, v65, v82 - v65);
      v29 = (_QWORD *)v90[0];
      goto LABEL_45;
    case 7:
      v33 = *(unsigned int *)(a1 + 12);
      if ( !*(_DWORD *)(a1 + 12) )
      {
        v92[0] = v93;
        v34 = 48;
LABEL_57:
        LOBYTE(v93[0]) = v34;
        v35 = (_BYTE *)(&dword_0 + 1);
        v36 = v93;
        goto LABEL_58;
      }
      v59 = v83;
      while ( 1 )
      {
        --v59;
        v34 = v33 % 0xA + 48;
        *v59 = v34;
        if ( v33 <= 9 )
          break;
        v33 /= 0xAu;
      }
      v60 = (_BYTE *)(v83 - v59);
      v36 = v93;
      v35 = (_BYTE *)(v83 - v59);
      v92[0] = v93;
      if ( (unsigned __int64)(v83 - v59) > 0xF )
      {
        if ( (__int64)v60 < 0 )
          goto LABEL_205;
        v61 = (_QWORD *)operator new((unsigned __int64)(v60 + 1));
        v93[0] = v83 - v59;
        v92[0] = v61;
      }
      else
      {
        if ( v60 == (_BYTE *)&dword_0 + 1 )
          goto LABEL_57;
        if ( !v60 )
        {
LABEL_58:
          v92[1] = v35;
          v35[(_QWORD)v36] = 0;
          v37 = (__m128i *)sub_99BDC0(v92, 0, 0, "u", 1u);
          src.m128i_i64[0] = (__int64)&v97;
          if ( (__m128i *)v37->m128i_i64[0] == &v37[1] )
          {
            v97 = _mm_loadu_si128(v37 + 1);
          }
          else
          {
            src.m128i_i64[0] = v37->m128i_i64[0];
            v97.m128i_i64[0] = v37[1].m128i_i64[0];
          }
          v7 = (__m128i *)(a1 + 144);
          src.m128i_i64[1] = v37->m128i_i64[1];
          v37->m128i_i64[0] = (__int64)v37[1].m128i_i64;
          v37->m128i_i64[1] = 0;
          v37[1].m128i_i8[0] = 0;
          v38 = *(__m128i **)(a1 + 128);
          if ( (__m128i *)src.m128i_i64[0] == &v97 )
          {
            v73 = src.m128i_i64[1];
            if ( src.m128i_i64[1] )
            {
              if ( src.m128i_i64[1] == 1 )
                v38->m128i_i8[0] = v97.m128i_i8[0];
              else
                memcpy(v38, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
              v73 = src.m128i_i64[1];
              v38 = *(__m128i **)(a1 + 128);
            }
            *(_QWORD *)(a1 + 136) = v73;
            v38->m128i_i8[v73] = 0;
            v38 = (__m128i *)src.m128i_i64[0];
          }
          else
          {
            if ( v38 == v7 )
            {
              v78 = (char *)v97.m128i_i64[0];
              *(_QWORD *)(a1 + 128) = src.m128i_i64[0];
              *(__m128 *)(a1 + 136) = _mm_loadh_ps((const double *)&v78);
            }
            else
            {
              v78 = (char *)v97.m128i_i64[0];
              v39 = *(_QWORD *)(a1 + 144);
              *(_QWORD *)(a1 + 128) = src.m128i_i64[0];
              *(__m128 *)(a1 + 136) = _mm_loadh_ps((const double *)&v78);
              if ( v38 )
              {
                src.m128i_i64[0] = (__int64)v38;
                v97.m128i_i64[0] = v39;
                goto LABEL_64;
              }
            }
            v38 = &v97;
            src.m128i_i64[0] = (__int64)&v97;
          }
LABEL_64:
          src.m128i_i64[1] = 0;
          v38->m128i_i8[0] = 0;
          if ( (__m128i *)src.m128i_i64[0] != &v97 )
            operator delete((void *)src.m128i_i64[0]);
          v10 = v92[0];
          if ( v92[0] != v93 )
            goto LABEL_67;
LABEL_68:
          if ( *(_BYTE *)(a1 + 20) && *(_DWORD *)(a1 + 16) )
          {
            sub_1FE76E0(&src, (int *)(a1 + 4));
            v40 = *(_QWORD *)(a1 + 136);
            v41 = *(__m128i **)(a1 + 128);
            v42 = src.m128i_i64[1] + v40;
            if ( v7 == v41 )
              v43 = 15;
            else
              v43 = *(_QWORD *)(a1 + 144);
            if ( v42 > v43 )
            {
              sub_998B30(a1 + 128, v40, 0, src.m128i_i64[0], src.m128i_u64[1]);
              v41 = *(__m128i **)(a1 + 128);
            }
            else if ( src.m128i_i64[1] )
            {
              v71 = &v41->m128i_i8[v40];
              if ( src.m128i_i64[1] == 1 )
                *v71 = *(_BYTE *)src.m128i_i64[0];
              else
                memcpy(v71, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
              v41 = *(__m128i **)(a1 + 128);
            }
            *(_QWORD *)(a1 + 136) = v42;
            v41->m128i_i8[v42] = 0;
            if ( (__m128i *)src.m128i_i64[0] != &v97 )
              operator delete((void *)src.m128i_i64[0]);
          }
          if ( !*(_BYTE *)(a1 + 25) )
            return;
          v44 = *(unsigned int *)(a1 + 28);
          if ( !*(_DWORD *)(a1 + 28) )
          {
            v94[0] = v95;
            v45 = 48;
LABEL_79:
            LOBYTE(v95[0]) = v45;
            v46 = (_BYTE *)(&dword_0 + 1);
            v47 = v95;
            goto LABEL_80;
          }
          v68 = &v97.m128i_i8[5];
          while ( 1 )
          {
            --v68;
            v45 = v44 % 0xA + 48;
            *v68 = v45;
            if ( v44 <= 9 )
              break;
            v44 /= 0xAu;
          }
          v69 = (char *)(&v97.m128i_u8[5] - (unsigned __int8 *)v68);
          v47 = v95;
          v46 = (char *)(&v97.m128i_u8[5] - (unsigned __int8 *)v68);
          v94[0] = v95;
          if ( (unsigned __int64)(&v97.m128i_u8[5] - (unsigned __int8 *)v68) > 0xF )
          {
            v78 = (char *)(&v97.m128i_u8[5] - (unsigned __int8 *)v68);
            if ( (__int64)v69 < 0 )
              goto LABEL_205;
            v70 = (_QWORD *)operator new((unsigned __int64)(v69 + 1));
            v95[0] = &v97.m128i_u8[5] - (unsigned __int8 *)v68;
            v46 = v78;
            v94[0] = v70;
          }
          else
          {
            if ( v69 == (_BYTE *)&dword_0 + 1 )
              goto LABEL_79;
            if ( !v69 )
            {
LABEL_80:
              v94[1] = v46;
              v46[(_QWORD)v47] = 0;
              v48 = (__m128i *)sub_99BDC0(v94, 0, 0, "x", 1u);
              src.m128i_i64[0] = (__int64)&v97;
              if ( (__m128i *)v48->m128i_i64[0] == &v48[1] )
              {
                v97 = _mm_loadu_si128(v48 + 1);
              }
              else
              {
                src.m128i_i64[0] = v48->m128i_i64[0];
                v97.m128i_i64[0] = v48[1].m128i_i64[0];
              }
              src.m128i_i64[1] = v48->m128i_i64[1];
              v48->m128i_i64[0] = (__int64)v48[1].m128i_i64;
              v48->m128i_i64[1] = 0;
              v48[1].m128i_i8[0] = 0;
              v49 = *(_QWORD *)(a1 + 136);
              v50 = *(__m128i **)(a1 + 128);
              v51 = src.m128i_i64[1] + v49;
              if ( v7 == v50 )
                v52 = 15;
              else
                v52 = *(_QWORD *)(a1 + 144);
              if ( v51 > v52 )
              {
                sub_998B30(a1 + 128, v49, 0, src.m128i_i64[0], src.m128i_u64[1]);
                v50 = *(__m128i **)(a1 + 128);
              }
              else if ( src.m128i_i64[1] )
              {
                v72 = &v50->m128i_i8[v49];
                if ( src.m128i_i64[1] == 1 )
                  *v72 = *(_BYTE *)src.m128i_i64[0];
                else
                  memcpy(v72, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
                v50 = *(__m128i **)(a1 + 128);
              }
              *(_QWORD *)(a1 + 136) = v51;
              v50->m128i_i8[v51] = 0;
              if ( (__m128i *)src.m128i_i64[0] != &v97 )
                operator delete((void *)src.m128i_i64[0]);
              v25 = (void *)v94[0];
              if ( (_QWORD *)v94[0] != v95 )
                goto LABEL_40;
              return;
            }
            v70 = v95;
          }
          v78 = v46;
          memcpy(v70, v68, &v97.m128i_u8[5] - (unsigned __int8 *)v68);
          v47 = (_QWORD *)v94[0];
          v46 = v78;
          goto LABEL_80;
        }
        v61 = v93;
      }
      memcpy(v61, v59, (size_t)v60);
      v36 = v92[0];
      goto LABEL_58;
    case 8:
      v2 = *(unsigned int *)(a1 + 12);
      if ( !*(_DWORD *)(a1 + 12) )
      {
        v86[0] = v87;
        v3 = 48;
LABEL_4:
        LOBYTE(v87[0]) = v3;
        v4 = (_BYTE *)(&dword_0 + 1);
        v5 = v87;
        goto LABEL_5;
      }
      v56 = v80;
      while ( 1 )
      {
        --v56;
        v3 = v2 % 0xA + 48;
        *v56 = v3;
        if ( v2 <= 9 )
          break;
        v2 /= 0xAu;
      }
      v57 = (_BYTE *)(v80 - v56);
      v5 = v87;
      v4 = (_BYTE *)(v80 - v56);
      v86[0] = v87;
      if ( (unsigned __int64)(v80 - v56) > 0xF )
      {
        if ( (__int64)v57 < 0 )
          goto LABEL_205;
        v58 = (_QWORD *)operator new((unsigned __int64)(v57 + 1));
        v87[0] = v80 - v56;
        v86[0] = v58;
      }
      else
      {
        if ( v57 == (_BYTE *)&dword_0 + 1 )
          goto LABEL_4;
        if ( !v57 )
        {
LABEL_5:
          v86[1] = v4;
          v4[(_QWORD)v5] = 0;
          v6 = (__m128i *)sub_99BDC0(v86, 0, 0, "f", 1u);
          src.m128i_i64[0] = (__int64)&v97;
          if ( (__m128i *)v6->m128i_i64[0] == &v6[1] )
          {
            v97 = _mm_loadu_si128(v6 + 1);
          }
          else
          {
            src.m128i_i64[0] = v6->m128i_i64[0];
            v97.m128i_i64[0] = v6[1].m128i_i64[0];
          }
          v7 = (__m128i *)(a1 + 144);
          src.m128i_i64[1] = v6->m128i_i64[1];
          v6->m128i_i64[0] = (__int64)v6[1].m128i_i64;
          v6->m128i_i64[1] = 0;
          v6[1].m128i_i8[0] = 0;
          v8 = *(__m128i **)(a1 + 128);
          if ( (__m128i *)src.m128i_i64[0] == &v97 )
          {
            v76 = src.m128i_i64[1];
            if ( src.m128i_i64[1] )
            {
              if ( src.m128i_i64[1] == 1 )
                v8->m128i_i8[0] = v97.m128i_i8[0];
              else
                memcpy(v8, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
              v76 = src.m128i_i64[1];
              v8 = *(__m128i **)(a1 + 128);
            }
            *(_QWORD *)(a1 + 136) = v76;
            v8->m128i_i8[v76] = 0;
            v8 = (__m128i *)src.m128i_i64[0];
          }
          else
          {
            if ( v8 == v7 )
            {
              v78 = (char *)v97.m128i_i64[0];
              *(_QWORD *)(a1 + 128) = src.m128i_i64[0];
              *(__m128 *)(a1 + 136) = _mm_loadh_ps((const double *)&v78);
            }
            else
            {
              v78 = (char *)v97.m128i_i64[0];
              v9 = *(_QWORD *)(a1 + 144);
              *(_QWORD *)(a1 + 128) = src.m128i_i64[0];
              *(__m128 *)(a1 + 136) = _mm_loadh_ps((const double *)&v78);
              if ( v8 )
              {
                src.m128i_i64[0] = (__int64)v8;
                v97.m128i_i64[0] = v9;
                goto LABEL_11;
              }
            }
            v8 = &v97;
            src.m128i_i64[0] = (__int64)&v97;
          }
LABEL_11:
          src.m128i_i64[1] = 0;
          v8->m128i_i8[0] = 0;
          if ( (__m128i *)src.m128i_i64[0] != &v97 )
            operator delete((void *)src.m128i_i64[0]);
          v10 = (void *)v86[0];
          if ( (_QWORD *)v86[0] != v87 )
            goto LABEL_67;
          goto LABEL_68;
        }
        v58 = v87;
      }
      memcpy(v58, v56, v80 - v56);
      v5 = (_QWORD *)v86[0];
      goto LABEL_5;
    case 9:
      v11 = *(unsigned int *)(a1 + 12);
      if ( !*(_DWORD *)(a1 + 12) )
      {
        v88[0] = v89;
        v12 = 48;
LABEL_17:
        LOBYTE(v89[0]) = v12;
        v13 = (_BYTE *)(&dword_0 + 1);
        v14 = v89;
        goto LABEL_18;
      }
      v53 = v81;
      while ( 1 )
      {
        --v53;
        v12 = v11 % 0xA + 48;
        *v53 = v12;
        if ( v11 <= 9 )
          break;
        v11 /= 0xAu;
      }
      v54 = (_BYTE *)(v81 - v53);
      v14 = v89;
      v13 = (_BYTE *)(v81 - v53);
      v88[0] = v89;
      if ( (unsigned __int64)(v81 - v53) > 0xF )
      {
        if ( (__int64)v54 < 0 )
          goto LABEL_205;
        v55 = (_QWORD *)operator new((unsigned __int64)(v54 + 1));
        v89[0] = v81 - v53;
        v88[0] = v55;
      }
      else
      {
        if ( v54 == (_BYTE *)&dword_0 + 1 )
          goto LABEL_17;
        if ( !v54 )
        {
LABEL_18:
          v88[1] = v13;
          v13[(_QWORD)v14] = 0;
          v15 = (__m128i *)sub_99BDC0(v88, 0, 0, "bf", 2u);
          src.m128i_i64[0] = (__int64)&v97;
          if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
          {
            v97 = _mm_loadu_si128(v15 + 1);
          }
          else
          {
            src.m128i_i64[0] = v15->m128i_i64[0];
            v97.m128i_i64[0] = v15[1].m128i_i64[0];
          }
          v7 = (__m128i *)(a1 + 144);
          src.m128i_i64[1] = v15->m128i_i64[1];
          v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
          v15->m128i_i64[1] = 0;
          v15[1].m128i_i8[0] = 0;
          v16 = *(__m128i **)(a1 + 128);
          if ( (__m128i *)src.m128i_i64[0] == &v97 )
          {
            v74 = src.m128i_i64[1];
            if ( src.m128i_i64[1] )
            {
              if ( src.m128i_i64[1] == 1 )
                v16->m128i_i8[0] = v97.m128i_i8[0];
              else
                memcpy(v16, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
              v74 = src.m128i_i64[1];
              v16 = *(__m128i **)(a1 + 128);
            }
            *(_QWORD *)(a1 + 136) = v74;
            v16->m128i_i8[v74] = 0;
            v16 = (__m128i *)src.m128i_i64[0];
          }
          else
          {
            if ( v16 == v7 )
            {
              v78 = (char *)v97.m128i_i64[0];
              *(_QWORD *)(a1 + 128) = src.m128i_i64[0];
              *(__m128 *)(a1 + 136) = _mm_loadh_ps((const double *)&v78);
            }
            else
            {
              v78 = (char *)v97.m128i_i64[0];
              v17 = *(_QWORD *)(a1 + 144);
              *(_QWORD *)(a1 + 128) = src.m128i_i64[0];
              *(__m128 *)(a1 + 136) = _mm_loadh_ps((const double *)&v78);
              if ( v16 )
              {
                src.m128i_i64[0] = (__int64)v16;
                v97.m128i_i64[0] = v17;
                goto LABEL_24;
              }
            }
            v16 = &v97;
            src.m128i_i64[0] = (__int64)&v97;
          }
LABEL_24:
          src.m128i_i64[1] = 0;
          v16->m128i_i8[0] = 0;
          if ( (__m128i *)src.m128i_i64[0] != &v97 )
            operator delete((void *)src.m128i_i64[0]);
          v10 = (void *)v88[0];
          if ( (_QWORD *)v88[0] != v89 )
            goto LABEL_67;
          goto LABEL_68;
        }
        v55 = v89;
      }
      memcpy(v55, v53, v81 - v53);
      v14 = (_QWORD *)v88[0];
      goto LABEL_18;
  }
}
