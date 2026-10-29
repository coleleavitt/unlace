__int64 __fastcall sub_B86E00(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rbp
  _DWORD *v5; // rcx
  unsigned int v6; // edx
  int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // r13
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  const __m128i *v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // r12d
  size_t v16; // rdi
  __int64 v17; // rax
  const __m128i *v18; // r15
  _DWORD *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  __m128i *v22; // rdx
  const __m128i *v23; // rax
  const __m128i *v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  const __m128i *v27; // rbp
  const __m128i *v28; // rbx
  __int64 v29; // r15
  const __m128i *v30; // rdi
  __int64 v31; // rbp
  int v32; // eax
  unsigned int v33; // ebx
  _QWORD *v34; // rax
  _QWORD *v35; // r15
  const __m128i *v36; // rbx
  _QWORD *v37; // r12
  const __m128i *v38; // r13
  _QWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 *v43; // rcx
  const __m128i *v44; // rbx
  __int64 v45; // rax
  const __m128i *v46; // rbp
  const __m128i *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 result; // rax
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rbp
  __int64 v54; // rdi
  __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rax
  unsigned int v58; // ebx
  int v59; // eax
  void *v60; // rdi
  __int64 v61; // rax
  __int8 v62; // cl
  char v63; // dl
  char v64; // cl
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rbp
  __int64 v70; // rbx
  unsigned int *v71; // rcx
  unsigned int v72; // edx
  __int64 v73; // rbp
  __int64 v74; // rbx
  unsigned int *v75; // rcx
  unsigned int v76; // edx
  unsigned int v77; // ebx
  unsigned int v78; // ecx
  unsigned int *v79; // rax
  __int64 v80; // rcx
  _QWORD *v81; // rax
  char **v82; // r12
  char **exception; // r12
  __int64 v84; // [rsp+8h] [rbp-E0h]
  unsigned int v85; // [rsp+8h] [rbp-E0h]
  void *v86; // [rsp+8h] [rbp-E0h]
  __int64 v87; // [rsp+10h] [rbp-D8h]
  __int64 v88; // [rsp+18h] [rbp-D0h]
  __int64 v89; // [rsp+28h] [rbp-C0h]
  __int64 v90; // [rsp+30h] [rbp-B8h]
  _DWORD *v91; // [rsp+30h] [rbp-B8h]
  _DWORD *v92; // [rsp+38h] [rbp-B0h]
  __int64 v93; // [rsp+38h] [rbp-B0h]
  __int64 v94; // [rsp+48h] [rbp-A0h] BYREF
  __m128i v95; // [rsp+50h] [rbp-98h] BYREF
  __m128i v96; // [rsp+70h] [rbp-78h] BYREF
  __int64 v97; // [rsp+80h] [rbp-68h] BYREF
  __int64 v98; // [rsp+88h] [rbp-60h]
  __int64 v99; // [rsp+90h] [rbp-58h]
  int v100; // [rsp+98h] [rbp-50h]
  const __m128i *v101; // [rsp+A0h] [rbp-48h]

  sub_B80930(a1);
  if ( (unsigned int)sub_180B130(a1) > 0x13 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v69 = *(_QWORD *)(a1 + 16);
      v70 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v71 = *(unsigned int **)(a1 + 1336);
      if ( v71 )
        v72 = *(v71 - 1);
      else
        v72 = 0;
      sub_AA8380(v69, v70, v72, v71);
      sub_186A500(v69, v70);
    }
    else
    {
      v73 = *(_QWORD *)(a1 + 16);
      v74 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v75 = *(unsigned int **)(a1 + 1336);
      if ( v75 )
        v76 = *(v75 - 1);
      else
        v76 = 0;
      sub_AA8380(v73, v74, v76, v75);
    }
  }
  v4 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 712LL);
  if ( (_DWORD)v4 )
  {
    sub_180C5A0(&v95, "farkas");
    v96.m128i_i8[8] = 2;
    v96.m128i_i64[0] = v95.m128i_i64[0];
    v55 = sub_186B270(0x28u);
    v56 = _mm_load_si128(&v96);
    v25 = v96.m128i_i8[8] == 0;
    *(_QWORD *)v55 = 2;
    v88 = v55 + 8;
    *(__m128i *)(v55 + 8) = v56;
    v96.m128i_i32[0] = 0;
    if ( !v25 )
      v96.m128i_i8[8] = 0;
    *(_DWORD *)(v55 + 4) = 1;
    sub_15D0DF0(&v96);
    v57 = *(_QWORD *)(a1 + 1344);
    if ( !v57 )
    {
LABEL_63:
      v5 = *(_DWORD **)(a1 + 1336);
      v87 = *(_QWORD *)(a1 + 16);
      v89 = v88;
      v4 = *(unsigned int *)(v88 - 4);
      if ( v5 )
        goto LABEL_4;
      goto LABEL_64;
    }
    v58 = 0;
    while ( 1 )
    {
      if ( v58 >= *(_DWORD *)(v57 - 4) )
        goto LABEL_63;
      v59 = *(_DWORD *)(v57 + 4LL * v58);
      v96 = 0u;
      v97 = 1;
      v60 = qword_1C7F2C0;
      v98 = 0;
      if ( v59 < 0 )
      {
        v86 = qword_1C7F2C0;
        sub_1830C40(qword_1C7F2C0, &v96, (unsigned int)v59);
        v60 = v86;
      }
      else
      {
        v96.m128i_i32[0] = v59;
      }
      sub_182CBA0(v60, &v97);
      BYTE4(v97) &= ~1u;
      LODWORD(v97) = 1;
      v61 = sub_186B270(0x20u);
      v62 = v96.m128i_i8[4];
      v95.m128i_i64[0] = v61;
      v95.m128i_i8[8] = 4;
      *(_DWORD *)v61 = v96.m128i_i32[0];
      v63 = v62 & 3 | *(_BYTE *)(v61 + 4) & 0xFC;
      v64 = BYTE4(v97);
      *(_BYTE *)(v61 + 4) = v63;
      v65 = v96.m128i_i64[1];
      v96.m128i_i64[1] = 0;
      *(_QWORD *)(v61 + 8) = v65;
      *(_DWORD *)(v61 + 16) = v97;
      *(_BYTE *)(v61 + 20) = v64 & 3 | *(_BYTE *)(v61 + 20) & 0xFC;
      v66 = v98;
      v98 = 0;
      *(_QWORD *)(v61 + 24) = v66;
      v67 = *(unsigned int *)(v88 - 4);
      if ( (_DWORD)v67 == *(_DWORD *)(v88 - 8) )
      {
        v94 = v88;
        sub_8B4B00(&v94);
        v68 = v94;
        v88 = v94;
        v25 = v95.m128i_i8[8] == 0;
        *(__m128i *)(v94 + 16LL * *(unsigned int *)(v94 - 4)) = _mm_load_si128(&v95);
        if ( v25 )
        {
          v95.m128i_i32[0] = 0;
          ++*(_DWORD *)(v68 - 4);
          goto LABEL_62;
        }
      }
      else
      {
        *(__m128i *)(v88 + 16 * v67) = _mm_load_si128(&v95);
      }
      v95.m128i_i32[0] = 0;
      v95.m128i_i8[8] = 0;
      ++*(_DWORD *)(v88 - 4);
LABEL_62:
      ++v58;
      sub_15D0DF0(&v95);
      sub_25A130(v96.m128i_i8);
      v57 = *(_QWORD *)(a1 + 1344);
      if ( !v57 )
        goto LABEL_63;
    }
  }
  v5 = *(_DWORD **)(a1 + 1336);
  v89 = 0;
  v87 = *(_QWORD *)(a1 + 16);
  if ( v5 )
  {
LABEL_4:
    v6 = *(v5 - 1);
    goto LABEL_5;
  }
LABEL_64:
  v6 = 0;
LABEL_5:
  v7 = *(_DWORD *)(a1 + 8);
  sub_B72D60((__int64)&v96, v87, v6, v5, 0, 0);
  v100 = v7;
  v96.m128i_i64[0] = (__int64)qword_1C6E7C8;
  v101 = nullptr;
  if ( (_DWORD)v4 )
  {
    v8 = (_QWORD *)sub_186B270(0x28u);
    v9 = v89;
    *v8 = 2;
    v10 = v8 + 1;
    v101 = (const __m128i *)(v8 + 1);
    v11 = v89;
    v84 = 16 * v4 + v89;
LABEL_7:
    sub_15D0E50(v10, v9);
    while ( 1 )
    {
      v12 = v101;
      v11 += 16;
      v13 = (unsigned int)(v101[-1].m128i_i32[3] + 1);
      v101[-1].m128i_i32[3] = v13;
      if ( v84 == v11 )
        break;
      v14 = v12[-1].m128i_u32[2];
      v9 = v11;
      if ( v14 == (_DWORD)v13 )
      {
        v15 = (3 * v14 + 1) >> 1;
        v16 = 16 * v15 + 8;
        if ( 16 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_B75C60(v95.m128i_i64, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v95);
          sub_233E40((__int64)&v95);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = sub_186B270(v16);
        v18 = v101;
        v19 = (_DWORD *)v17;
        v20 = v17 + 8;
        if ( v101 )
        {
          v21 = v101[-1].m128i_u32[3];
          v22 = (__m128i *)(v17 + 8);
          *(_DWORD *)(v17 + 4) = v21;
          v23 = v18;
          v24 = &v18[v21];
          if ( v18 != v24 )
          {
            do
            {
              v25 = v23->m128i_i8[8] == 0;
              *v22 = _mm_loadu_si128(v23);
              v23->m128i_i32[0] = 0;
              if ( !v25 )
                v23->m128i_i8[8] = 0;
              ++v23;
              ++v22;
            }
            while ( v24 != v23 );
          }
          v26 = v18[-1].m128i_u32[3];
          v27 = &v18[v26];
          if ( (_DWORD)v26 )
          {
            v92 = v19;
            v90 = v11;
            v28 = v18;
            v29 = v20;
            do
            {
              v30 = v28++;
              sub_15D0DF0(v30);
            }
            while ( v28 != v27 );
            v20 = v29;
            v11 = v90;
            v19 = v92;
            v18 = v101;
          }
          v93 = v20;
          v91 = v19;
          sub_186B220(&v18[-1].m128i_u64[1]);
          v19 = v91;
          v20 = v93;
          v10 = (_QWORD *)(v93 + 16LL * (unsigned int)v91[1]);
        }
        else
        {
          *(_DWORD *)(v17 + 4) = 0;
          v10 = (_QWORD *)(v17 + 8);
        }
        v101 = (const __m128i *)v20;
        *v19 = v15;
        goto LABEL_7;
      }
      sub_15D0E50(&v12[v13], v11);
    }
  }
  v96.m128i_i64[0] = (__int64)&off_1C57990;
  sub_B73430((__int64)&v96, v87);
  v31 = sub_180C100(v87 + 8400, 56);
  *(_BYTE *)(v31 + 8) = v96.m128i_i8[8] & 3 | *(_BYTE *)(v31 + 8) & 0xFC;
  *(_DWORD *)(v31 + 12) = v96.m128i_i32[3];
  *(_QWORD *)(v31 + 16) = v97;
  *(_DWORD *)(v31 + 24) = v98;
  *(_QWORD *)(v31 + 32) = v99;
  *(_QWORD *)v31 = qword_1C6E7C8;
  v32 = v100;
  *(_QWORD *)(v31 + 48) = 0;
  *(_DWORD *)(v31 + 40) = v32;
  if ( !v101 )
  {
    *(_QWORD *)v31 = &off_1C57990;
    goto LABEL_34;
  }
  v33 = v101[-1].m128i_u32[3];
  v85 = v101[-1].m128i_u32[2];
  v34 = (_QWORD *)sub_186B270(16LL * v85 + 8);
  v35 = v34 + 1;
  *v34 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v85), _mm_cvtsi32_si128(v33)).m128i_u64[0];
  *(_QWORD *)(v31 + 48) = v34 + 1;
  v36 = v101;
  if ( !v101 || (v37 = v34 + 1, v38 = &v101[v101[-1].m128i_u32[3]], v101 == v38) )
  {
    *(_QWORD *)v31 = &off_1C57990;
  }
  else
  {
    do
    {
      sub_15D0E50(v37, v36++);
      v37 += 2;
    }
    while ( v36 != v38 );
    v35 = *(_QWORD **)(v31 + 48);
    *(_QWORD *)v31 = &off_1C57990;
    if ( !v35 )
      goto LABEL_34;
  }
  if ( *((_DWORD *)v35 - 1) )
  {
    v39 = *(_QWORD **)(v87 + 8600);
    if ( v39 )
    {
      v40 = *((_DWORD *)v39 - 1);
      if ( v40 == *((_DWORD *)v39 - 2) )
      {
        v77 = (3 * v40 + 1) >> 1;
        v78 = 8 * v77 + 8;
        if ( 8 * v40 + 8 >= v78 || v40 >= v77 )
        {
          v82 = (char **)__cxa_allocate_exception(0x28u);
          sub_B75C60(v95.m128i_i64, "Overflow encountered when expanding vector");
          *v82 = (char *)off_1C63128;
          sub_2333C0(v82 + 1, &v95);
          sub_233E40((__int64)&v95);
          __cxa_throw(v82, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v79 = (unsigned int *)sub_186B300(v39 - 1, v78);
        v80 = v79[1];
        v39 = v79 + 2;
        *(_QWORD *)(v87 + 8600) = v79 + 2;
        *v79 = v77;
        LODWORD(v79) = v80;
        v43 = &v39[v80];
        v42 = (_DWORD)v79 + 1;
      }
      else
      {
        v41 = v40;
        v42 = v40 + 1;
        v43 = &v39[v41];
      }
    }
    else
    {
      v81 = (_QWORD *)sub_186B270(0x18u);
      *v81 = 2;
      v39 = v81 + 1;
      *(_QWORD *)(v87 + 8600) = v81 + 1;
      v43 = v81 + 1;
      v42 = 1;
    }
    *v43 = v31;
    *((_DWORD *)v39 - 1) = v42;
  }
LABEL_34:
  v95.m128i_i64[0] = v31 | 3;
  sub_8E8670(v87, v95.m128i_i64, -2);
  v44 = v101;
  v96.m128i_i64[0] = (__int64)qword_1C6E7C8;
  if ( v101 )
  {
    v45 = v101[-1].m128i_u32[3];
    if ( (_DWORD)v45 )
    {
      v46 = &v101[v45];
      do
      {
        v47 = v44++;
        sub_15D0DF0(v47);
      }
      while ( v44 != v46 );
      v44 = v101;
    }
    sub_186B220(&v44[-1].m128i_u64[1]);
  }
  v48 = *(_QWORD *)(a1 + 1336);
  if ( v48 )
    *(_DWORD *)(v48 - 4) = 0;
  v49 = *(_QWORD *)(a1 + 1344);
  if ( v49 )
    *(_DWORD *)(v49 - 4) = 0;
  result = v89;
  if ( v89 )
  {
    v51 = *(unsigned int *)(v89 - 4);
    if ( (_DWORD)v51 )
    {
      v52 = v89;
      v53 = v89 + 16 * v51;
      do
      {
        v54 = v52;
        v52 += 16;
        sub_15D0DF0(v54);
      }
      while ( v53 != v52 );
    }
    return sub_186B220((void *)(v89 - 8));
  }
  return result;
}

