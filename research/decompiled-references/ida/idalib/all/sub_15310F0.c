__int64 __fastcall sub_15310F0(__int64 a1, __int64 a2, _DWORD *a3, unsigned __int32 *a4)
{
  char v7; // al
  size_t v8; // rbp
  const char *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned int v14; // r12d
  __int64 *v15; // rdi
  __int64 v16; // r9
  unsigned __int32 v17; // eax
  __int64 v18; // r8
  signed __int64 v19; // rdx
  signed __int64 v20; // r12
  size_t v21; // rax
  __int64 v22; // rax
  int v23; // r12d
  __int64 *v24; // rdi
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int32 v34; // edi
  __int64 v35; // rax
  unsigned int v36; // ecx
  __m256i *v37; // rsi
  int v38; // r8d
  unsigned int v39; // r9d
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 *v44; // rdi
  __int64 *v45; // rdi
  unsigned int v46; // eax
  const char *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // rax
  __int64 *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // ecx
  int v57; // esi
  unsigned __int32 v58; // eax
  size_t v59; // rax
  __m128i *v60; // rax
  __m128i *v61; // rax
  signed __int64 v62; // rcx
  __m256i *v63; // r11
  int *v64; // [rsp+0h] [rbp-1D8h]
  unsigned __int8 v65; // [rsp+Bh] [rbp-1CDh]
  unsigned __int32 v66; // [rsp+Ch] [rbp-1CCh]
  char *s1; // [rsp+10h] [rbp-1C8h]
  unsigned __int32 s1a; // [rsp+10h] [rbp-1C8h]
  unsigned int s1d; // [rsp+10h] [rbp-1C8h]
  char *s1b; // [rsp+10h] [rbp-1C8h]
  int s1c; // [rsp+10h] [rbp-1C8h]
  char *v72; // [rsp+18h] [rbp-1C0h]
  signed __int64 v73; // [rsp+20h] [rbp-1B8h]
  unsigned __int64 v74; // [rsp+28h] [rbp-1B0h]
  __int64 (__fastcall *v75)(const char *, __int64, __int64); // [rsp+30h] [rbp-1A8h]
  int v77; // [rsp+48h] [rbp-190h]
  unsigned int v78; // [rsp+4Ch] [rbp-18Ch]
  __m128i *v79; // [rsp+50h] [rbp-188h]
  signed __int64 v80; // [rsp+58h] [rbp-180h]
  __m128i v81; // [rsp+60h] [rbp-178h] BYREF
  void *v82[2]; // [rsp+70h] [rbp-168h] BYREF
  _BYTE v83[16]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE *v84; // [rsp+90h] [rbp-148h] BYREF
  char v85; // [rsp+98h] [rbp-140h]
  __int64 v86; // [rsp+A0h] [rbp-138h]
  int v87; // [rsp+A8h] [rbp-130h]
  __int16 v88; // [rsp+ACh] [rbp-12Ch]
  __int64 (__fastcall *v89)(__int64); // [rsp+B0h] [rbp-128h]
  __int64 v90; // [rsp+B8h] [rbp-120h]
  __int64 v91; // [rsp+C0h] [rbp-118h]
  _BYTE *v92; // [rsp+D0h] [rbp-108h] BYREF
  unsigned __int8 v93; // [rsp+D8h] [rbp-100h]
  __int64 v94; // [rsp+E0h] [rbp-F8h]
  int v95; // [rsp+E8h] [rbp-F0h]
  __int16 v96; // [rsp+ECh] [rbp-ECh]
  __int64 (__fastcall *v97)(__int64); // [rsp+F0h] [rbp-E8h]
  __int64 v98; // [rsp+F8h] [rbp-E0h]
  __int64 v99; // [rsp+100h] [rbp-D8h]
  __m256i v100; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v101; // [rsp+130h] [rbp-A8h]
  _BYTE v102[16]; // [rsp+138h] [rbp-A0h] BYREF
  char v103; // [rsp+148h] [rbp-90h]
  __m128 v104; // [rsp+150h] [rbp-88h] BYREF
  __int64 v105; // [rsp+160h] [rbp-78h]
  __int64 (__fastcall *v106)(const char *, __int64, __int64); // [rsp+168h] [rbp-70h]
  __int64 (__fastcall *v107)(__int64); // [rsp+170h] [rbp-68h]
  __int64 v108; // [rsp+178h] [rbp-60h]
  __int64 v109; // [rsp+180h] [rbp-58h]

  v74 = a1 + 1952;
  v84 = (_BYTE *)(a1 + 1952);
  v7 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v85 = v7;
  v86 = a1;
  v88 = 63;
  v87 = 1507350;
  v89 = sub_146A990;
  v90 = 0;
  v91 = 0;
  v8 = j__strlen("any");
  v9 = sub_1521250(*(_QWORD *)(a1 + 24), *(_WORD *)(a1 + 32));
  v64 = (int *)(a1 + 16);
  if ( v8 != v10 || v8 && memcmp(v9, "any", v8) )
  {
    v65 = 0;
    while ( 1 )
    {
LABEL_7:
      v72 = (char *)sub_1521250(*(_QWORD *)(a1 + 24), *(_WORD *)(a1 + 32));
      v73 = v12;
      if ( !v12 )
      {
        sub_1564840(&v104, a1, v64, 1843);
        sub_AEA040((__int64)&v104);
        goto LABEL_10;
      }
      v100.m256i_i8[4] = 1;
      v104.m128_u64[0] = (unsigned __int64)v72;
      v107 = nullptr;
      v104.m128_u64[1] = v12;
      v100.m256i_i32[0] = 0;
      v100.m256i_i64[1] = (__int64)sub_151FF60;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "block", 5);
      v100.m256i_i8[4] = 1;
      v100.m256i_i32[0] = 1;
      v100.m256i_i64[1] = (__int64)sub_151FF60;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "enum", 4);
      v100.m256i_i8[4] = 1;
      v100.m256i_i32[0] = 2;
      v100.m256i_i64[1] = (__int64)sub_151FF60;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "enum_constant", 13);
      v100.m256i_i8[4] = 1;
      v100.m256i_i32[0] = 3;
      v100.m256i_i64[1] = (__int64)sub_151FF60;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "field", 5);
      v100.m256i_i32[0] = 4;
      v100.m256i_i8[4] = 1;
      v100.m256i_i64[1] = (__int64)sub_1521020;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "function", 8);
      v100.m256i_i8[4] = 1;
      v100.m256i_i32[0] = 6;
      v100.m256i_i64[1] = (__int64)sub_151FF60;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "namespace", 9);
      v100.m256i_i8[4] = 1;
      v100.m256i_i32[0] = 7;
      v100.m256i_i64[1] = (__int64)sub_151FF60;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "objc_category", 13);
      v100.m256i_i8[4] = 1;
      v100.m256i_i32[0] = 8;
      v100.m256i_i64[1] = (__int64)sub_151FF60;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "objc_implementation", 19);
      v100.m256i_i8[4] = 1;
      v100.m256i_i32[0] = 9;
      v100.m256i_i64[1] = (__int64)sub_151FF60;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "objc_interface", 14);
      v100.m256i_i32[0] = 10;
      v100.m256i_i8[4] = 1;
      v100.m256i_i64[1] = (__int64)sub_1520FD0;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "objc_method", 11);
      v100.m256i_i8[4] = 1;
      v100.m256i_i32[0] = 12;
      v100.m256i_i64[1] = (__int64)sub_151FF60;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "objc_property", 13);
      v100.m256i_i8[4] = 1;
      v100.m256i_i32[0] = 13;
      v100.m256i_i64[1] = (__int64)sub_151FF60;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "objc_protocol", 13);
      v100.m256i_i32[0] = 14;
      v100.m256i_i8[4] = 1;
      v100.m256i_i64[1] = (__int64)sub_1520F80;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "record", 6);
      v100.m256i_i32[0] = 16;
      v100.m256i_i8[4] = 1;
      v100.m256i_i64[1] = (__int64)sub_1521070;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "hasType", 7);
      v100.m256i_i8[4] = 1;
      v100.m256i_i32[0] = 18;
      v100.m256i_i64[1] = (__int64)sub_151FF60;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "type_alias", 10);
      v100.m256i_i32[0] = 19;
      v100.m256i_i8[4] = 1;
      v100.m256i_i64[1] = (__int64)sub_1521110;
      sub_1528DF0((__int64)&v104, (const __m128i *)&v100, "variable", 8);
      if ( !(_BYTE)v107 || (v14 = v105, v75 = v106, v77 = v105, !BYTE4(v105)) )
      {
        sub_1564840(&v104, a1, v64, 1849);
        sub_AEC220((unsigned __int8 **)&v104, v72, v73);
        sub_AEA040((__int64)&v104);
        goto LABEL_10;
      }
      v15 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v15, v64);
      v17 = *(_DWORD *)(a1 + 40);
      v18 = 63;
      v94 = a1;
      v66 = v17;
      v95 = 1507350;
      v92 = (_BYTE *)v74;
      LOBYTE(v17) = *(_BYTE *)(a1 + 1952);
      v96 = 63;
      v93 = v17;
      v97 = sub_146A990;
      *(_BYTE *)(a1 + 1952) = 1;
      v98 = 0;
      v99 = 0;
      if ( ((1LL << v14) & 0x1FEFFFF) != 0 )
      {
        if ( *(_WORD *)(a1 + 32) != 22 )
          goto LABEL_33;
        if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
        {
          if ( (unsigned __int8)sub_1568800(&v92) )
          {
LABEL_33:
            v37 = (__m256i *)a2;
            v100.m256i_i64[0] = __PAIR64__(v66, v14);
            v100.m256i_i32[2] = v66;
            sub_1530E00((__m128i *)&v104, a2, &v100, (__int64 *)((char *)v100.m256i_i64 + 4), v18, v16);
            if ( !(_BYTE)v105 )
            {
              sub_1564820(&v104, a1, v66, 1837);
              v37 = (__m256i *)v72;
              sub_AEC220((unsigned __int8 **)&v104, v72, v73);
              v58 = v66;
              if ( *(_WORD *)(a1 + 32) == 66 )
                v58 = *(_DWORD *)(a1 + 16);
              *(__int64 *)((char *)&v100.m256i_i64[1] + 4) = 0;
              v100.m256i_i8[20] = 0;
              v100.m256i_i64[3] = (__int64)v102;
              v101 = 0;
              v102[0] = 0;
              v103 = 0;
              v100.m256i_i64[0] = __PAIR64__(v58, v66);
              v100.m256i_i8[8] = 1;
              if ( v66 )
              {
                if ( v58 )
                {
                  v37 = &v100;
                  sub_152DFA0((__int64 *)&v104, (unsigned __int64)&v100);
                  if ( (_BYTE *)v100.m256i_i64[3] != v102 )
                    operator delete((void *)v100.m256i_i64[3]);
                }
              }
              sub_AEA040((__int64)&v104);
            }
            v40 = v66;
            *a4 = v66;
            goto LABEL_28;
          }
        }
        else
        {
          LODWORD(v99) = sub_146A990(a1);
        }
      }
      else if ( (unsigned __int8)sub_156A040(&v92, 14, &byte_22F0C30, 0) )
      {
        goto LABEL_48;
      }
      s1 = (char *)sub_1521250(*(_QWORD *)(a1 + 24), *(_WORD *)(a1 + 32));
      v20 = v19;
      if ( !v19 )
      {
        sub_1521F20(a1, v77, v72, v73, *(_DWORD *)(a1 + 16));
        goto LABEL_48;
      }
      v21 = j__strlen("unless");
      if ( v21 == v20 && !memcmp(s1, "unless", v21) )
      {
        v45 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v45, v64);
        v46 = *(_DWORD *)(a1 + 40);
        WORD2(v106) = 63;
        v78 = v46;
        v105 = a1;
        v104.m128_u64[0] = v74;
        LOBYTE(v46) = *(_BYTE *)(a1 + 1952);
        *(_BYTE *)(a1 + 1952) = 1;
        v104.m128_i8[8] = v46;
        LODWORD(v106) = 1507350;
        v107 = sub_146A990;
        v108 = 0;
        v109 = 0;
        if ( (unsigned __int8)sub_156A040(&v104, 14, &byte_22F0C30, 0) )
          goto LABEL_80;
        v47 = sub_1521250(*(_QWORD *)(a1 + 24), *(_WORD *)(a1 + 32));
        s1b = (char *)v47;
        v49 = v48;
        if ( !v48 )
        {
          sub_1521F20(a1, v77, v72, v73, v78);
          goto LABEL_80;
        }
        v50 = v75(v47, v48, 1);
        if ( !BYTE4(v50) )
        {
          v82[0] = v83;
          if ( s1b )
          {
            sub_1520EC0(v82, s1b, (__int64)&s1b[v49]);
          }
          else
          {
            v82[1] = nullptr;
            v83[0] = 0;
          }
          v59 = j__strlen("unless(");
          v60 = (__m128i *)sub_99BDC0(v82, 0, 0, "unless(", v59);
          v100.m256i_i64[0] = (__int64)&v100.m256i_i64[2];
          if ( (__m128i *)v60->m128i_i64[0] == &v60[1] )
          {
            *(__m128i *)&v100.m256i_u64[2] = _mm_loadu_si128(v60 + 1);
          }
          else
          {
            v100.m256i_i64[0] = v60->m128i_i64[0];
            v100.m256i_i64[2] = v60[1].m128i_i64[0];
          }
          v100.m256i_i64[1] = v60->m128i_i64[1];
          v60->m128i_i64[0] = (__int64)v60[1].m128i_i64;
          v60->m128i_i64[1] = 0;
          v60[1].m128i_i8[0] = 0;
          v61 = (__m128i *)sub_9EE7C0(&v100, ")");
          v79 = &v81;
          if ( (__m128i *)v61->m128i_i64[0] == &v61[1] )
          {
            v81 = _mm_loadu_si128(v61 + 1);
          }
          else
          {
            v79 = (__m128i *)v61->m128i_i64[0];
            v81.m128i_i64[0] = v61[1].m128i_i64[0];
          }
          v62 = v61->m128i_i64[1];
          v61[1].m128i_i8[0] = 0;
          v80 = v62;
          v61->m128i_i64[0] = (__int64)v61[1].m128i_i64;
          v61->m128i_i64[1] = 0;
          if ( (unsigned __int64 *)v100.m256i_i64[0] != &v100.m256i_u64[2] )
            operator delete((void *)v100.m256i_i64[0]);
          if ( v82[0] != v83 )
            operator delete(v82[0]);
          sub_1522460(a1, v77, v72, v73, v79, v80, v78);
          if ( v79 != &v81 )
            operator delete(v79);
LABEL_80:
          *(_BYTE *)v104.m128_u64[0] = v104.m128_i8[8];
LABEL_48:
          *v92 = v93;
LABEL_10:
          v65 = 1;
          goto LABEL_11;
        }
        v23 = v50;
        v51 = *(__int64 **)(a1 + 8);
        v25 = (__int64 *)v64;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v51, v64);
        if ( (unsigned __int8)sub_14808E0((__int64)&v104, (__int64 *)v64, v52, v53, v54, v55) )
          goto LABEL_80;
        v26 = v104.m128_u8[8];
        *(_BYTE *)v104.m128_u64[0] = v104.m128_i8[8];
      }
      else
      {
        v22 = v75(s1, v20, 0);
        if ( !BYTE4(v22) )
        {
          sub_1522460(a1, v77, v72, v73, s1, v20, *(_DWORD *)(a1 + 16));
          goto LABEL_48;
        }
        v23 = v22;
        v24 = *(__int64 **)(a1 + 8);
        v25 = (__int64 *)v64;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v24, v64);
      }
      v29 = *(unsigned int *)(a1 + 16);
      *a4 = v29;
      s1a = v29;
      if ( (unsigned __int8)sub_14808E0((__int64)&v92, v25, v26, v27, v28, v29) )
        goto LABEL_48;
      v33 = s1a;
      v34 = v23;
      v100.m256i_i64[0] = __PAIR64__(v66, v23);
      v35 = *(unsigned int *)(a2 + 16);
      v100.m256i_i32[2] = s1a;
      if ( !(_DWORD)v35 )
        break;
      v30 = *(_QWORD *)a2;
      v36 = (v35 - 1) & (37 * v23);
      v37 = (__m256i *)(*(_QWORD *)a2 + 12LL * v36);
      v38 = v37->m256i_i32[0];
      if ( v23 == v37->m256i_i32[0] )
        goto LABEL_23;
      if ( v38 != 0x7FFFFFFF )
      {
        s1c = 1;
        v63 = nullptr;
        while ( 1 )
        {
          if ( v38 == 0x80000000 && !v63 )
            v63 = v37;
          v36 = (v35 - 1) & (s1c + v36);
          v37 = (__m256i *)(v30 + 12LL * v36);
          v38 = v37->m256i_i32[0];
          if ( v23 == v37->m256i_i32[0] )
            break;
          if ( v38 == 0x7FFFFFFF )
          {
            v34 = v23;
            if ( v63 )
              v37 = v63;
            goto LABEL_50;
          }
          ++s1c;
        }
LABEL_23:
        s1d = v33;
        sub_152EEE0(&v104, v37->m256i_i32, (int *)(v30 + 12 * v35), a2, 1);
        sub_1564820(&v104, a1, v66, 1837);
        v37 = (__m256i *)sub_F96080(v23);
        sub_1520A40((unsigned __int8 **)&v104, (__int64)v37);
        v39 = s1d;
        if ( *(_WORD *)(a1 + 32) == 66 )
          v39 = *(_DWORD *)(a1 + 16);
        *(__int64 *)((char *)&v100.m256i_i64[1] + 4) = 0;
        v100.m256i_i8[20] = 0;
        v100.m256i_i64[3] = (__int64)v102;
        v101 = 0;
        v102[0] = 0;
        v103 = 0;
        v100.m256i_i64[0] = __PAIR64__(v39, v66);
        v100.m256i_i8[8] = 1;
        if ( v39 )
        {
          if ( v66 )
          {
            v37 = &v100;
            sub_152DFA0((__int64 *)&v104, (unsigned __int64)&v100);
            if ( (_BYTE *)v100.m256i_i64[3] != v102 )
              operator delete((void *)v100.m256i_i64[3]);
          }
        }
        sub_AEA040((__int64)&v104);
LABEL_28:
        v43 = v93;
        *v92 = v93;
        goto LABEL_29;
      }
LABEL_50:
      v56 = *(_DWORD *)(a2 + 8);
      v32 = (unsigned int)(3 * v35);
      v104.m128_u64[0] = (unsigned __int64)v37;
      v31 = (unsigned int)(v56 + 1);
      if ( 4 * (int)v31 >= (unsigned int)v32 )
        goto LABEL_56;
      v32 = (unsigned int)(v35 - *(_DWORD *)(a2 + 12) - v31);
      if ( (unsigned int)v32 <= (unsigned int)v35 >> 3 )
      {
        v57 = v35;
        goto LABEL_57;
      }
LABEL_52:
      *(_DWORD *)(a2 + 8) = v31;
      if ( v37->m256i_i32[0] != 0x7FFFFFFF )
        --*(_DWORD *)(a2 + 12);
      v37->m256i_i32[0] = v34;
      *(__int64 *)((char *)v37->m256i_i64 + 4) = *(__int64 *)((char *)v100.m256i_i64 + 4);
      sub_152EEE0(&v104, v37->m256i_i32, (int *)(v30 + 12LL * *(unsigned int *)(a2 + 16)), a2, 1);
      v43 = v93;
      *v92 = v93;
LABEL_29:
      if ( !v65 )
        goto LABEL_11;
      if ( *(_WORD *)(a1 + 32) != 66 )
      {
        v65 = sub_14808E0((__int64)&v84, v37->m256i_i64, v43, v40, v41, v42);
        goto LABEL_11;
      }
      v44 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v44, v64);
    }
    v104.m128_u64[0] = 0;
LABEL_56:
    v57 = 2 * v35;
LABEL_57:
    sub_1530C10((__int64 *)a2, v57, v30, v31, v32, v33);
    sub_152DEF0((__int64 *)a2, v100.m256i_i32, &v104);
    v30 = *(_QWORD *)a2;
    v34 = v100.m256i_i32[0];
    v37 = (__m256i *)v104.m128_u64[0];
    LODWORD(v31) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_52;
  }
  v11 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v11, (int *)(a1 + 16));
  *a3 = *(_DWORD *)(a1 + 40);
  v65 = sub_156A040(&v84, 14, &byte_22F0C30, 0);
  if ( !v65 )
  {
    v65 = 1;
    goto LABEL_7;
  }
LABEL_11:
  *v84 = v85;
  return v65;
}
