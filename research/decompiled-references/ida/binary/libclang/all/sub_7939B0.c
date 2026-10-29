__int64 __fastcall sub_7939B0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  __int64 v6; // r13
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  const void *v11; // r8
  size_t v12; // rcx
  __int64 v13; // rax
  unsigned int *v14; // r9
  size_t v15; // r12
  char *v16; // r14
  __int64 (__fastcall **v17)(); // rdi
  size_t v18; // rdx
  char *v19; // rax
  size_t v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int32 v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // r13
  size_t v29; // rdx
  size_t v30; // r15
  __int64 v31; // r8
  __int64 v32; // r9
  size_t v33; // rdx
  _DWORD *v34; // rax
  _BYTE *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  int v40; // esi
  int v41; // ecx
  unsigned int v42; // ebp
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned int v48; // ecx
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rdi
  unsigned int v52; // ecx
  __int64 v53; // rsi
  _BYTE *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  _BYTE *v57; // rax
  __int64 v58; // rax
  _BYTE *v59; // rax
  __int64 v60; // rbx
  unsigned __int64 v61; // rax
  _BYTE *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rdx
  void *v65; // rsi
  __int64 v66; // rdi
  _BYTE *v67; // rax
  __int64 v68; // rax
  void *v69; // rdi
  __int64 v70; // rbx
  _BYTE *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned int v76; // [rsp+8h] [rbp-D0h]
  const void *v77; // [rsp+8h] [rbp-D0h]
  size_t v79; // [rsp+18h] [rbp-C0h]
  size_t v80; // [rsp+20h] [rbp-B8h]
  const void *v81; // [rsp+20h] [rbp-B8h]
  void *s2; // [rsp+28h] [rbp-B0h]
  __m128i v83; // [rsp+30h] [rbp-A8h] BYREF
  void *v84; // [rsp+40h] [rbp-98h]
  __int64 v85; // [rsp+48h] [rbp-90h]
  _QWORD v86[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 (__fastcall **v87)(); // [rsp+60h] [rbp-78h] BYREF
  size_t v88; // [rsp+68h] [rbp-70h]
  __int128 v89; // [rsp+70h] [rbp-68h]
  __int64 v90; // [rsp+80h] [rbp-58h]
  char v91; // [rsp+88h] [rbp-50h]
  int v92; // [rsp+8Ch] [rbp-4Ch]
  __int64 v93; // [rsp+90h] [rbp-48h]

  HIDWORD(v5) = HIDWORD(a4);
  v6 = a5;
  v76 = a4;
  if ( (_DWORD)a4 || (LODWORD(v9) = HIDWORD(a4), (a4 & 0x7FFFFFFF00000000LL) != 0) )
  {
LABEL_3:
    v10 = *(_QWORD **)(a1 + 17288);
    goto LABEL_4;
  }
  v40 = a5;
  v41 = HIDWORD(a5);
  if ( (((unsigned int)a5 | HIDWORD(a5)) & 0x7FFFFFFF) != 0 )
  {
LABEL_21:
    if ( ((v41 | v40 | (unsigned int)v9) & 0x7FFFFFFF) == 0 )
      return 0;
    goto LABEL_3;
  }
  v10 = *(_QWORD **)(a1 + 17288);
  v5 = v10[46];
  v6 = v10[47];
  if ( !(_DWORD)v5 )
  {
    v40 = v10[47];
    v41 = HIDWORD(v10[47]);
    v9 = HIDWORD(v5);
    goto LABEL_21;
  }
  v76 = v10[46];
LABEL_4:
  v11 = (const void *)v10[44];
  v12 = v10[45];
  v13 = *(_QWORD *)(a1 + 2160);
  v14 = *(unsigned int **)(a2[2].m128i_i64[1] + 16);
  v15 = *v14;
  v16 = (char *)(v14 + 4);
  v87 = (__int64 (__fastcall **)())(v14 + 4);
  v17 = (__int64 (__fastcall **)())(v14 + 4);
  v88 = v15;
  v18 = v15;
  if ( *(char *)(v13 + 2) < 0 )
  {
    v81 = v11;
    v79 = v12;
    v44 = sub_25E4BB0(&v87, "_app_extension", 14);
    v18 = v88;
    v17 = v87;
    v45 = v44;
    v11 = v81;
    v12 = v79;
    if ( v88 <= v44 )
      v45 = v88;
    if ( v44 != -1 )
      v18 = v45;
  }
  if ( v12 != v18 || v12 && memcmp(v17, v11, v12) )
    return 0;
  v19 = sub_7933E0((__int64)v16, v15);
  if ( v20 )
  {
    v16 = v19;
    v15 = v20;
  }
  LOBYTE(v86[0]) = 0;
  v84 = v86;
  v23 = a2[6].m128i_i32[1];
  v85 = 0;
  if ( v23 )
  {
    std::string::_M_replace();
    if ( 0x3FFFFFFFFFFFFFFFLL - v85 < (unsigned __int64)a2[6].m128i_u32[1] )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append();
  }
  if ( a2[6].m128i_i8[0] )
  {
    if ( !a3 )
    {
LABEL_71:
      v42 = 3;
      goto LABEL_72;
    }
    v67 = *(_BYTE **)a3;
    *(_QWORD *)(a3 + 8) = 0;
    *v67 = 0;
    v93 = a3;
    v87 = &off_49DA2C8;
    v89 = 0;
    LODWORD(v88) = 0;
    v91 = 0;
    v92 = 1;
    v90 = 0;
    sub_2623850(&v87, 0, 0, 0, v21, v22);
    v68 = sub_5FF0F0((__int64)&v87, "not available on ");
    v69 = *(void **)(v68 + 32);
    v70 = v68;
    if ( *(_QWORD *)(v68 + 24) - (_QWORD)v69 < v15 )
    {
      v70 = sub_26240F0(v68, v16, v15);
    }
    else if ( v15 )
    {
      memcpy(v69, v16, v15);
      *(_QWORD *)(v70 + 32) += v15;
    }
    v64 = v85;
    v65 = v84;
    v66 = v70;
LABEL_70:
    sub_26240F0(v66, v65, v64);
    v87 = &off_49DA2C8;
    sub_2623770(&v87);
    goto LABEL_71;
  }
  v24 = a2[3].m128i_i64[0];
  if ( !((unsigned int)v24 | (HIDWORD(a2[3].m128i_i64[1]) | (unsigned int)a2[3].m128i_i64[1] | HIDWORD(v24))
                           & 0x7FFFFFFF)
    || (v25 = a2[3].m128i_i64[0],
        v26 = HIDWORD(v24) & 0x7FFFFFFF,
        v27 = a2[3].m128i_i64[1] & 0x7FFFFFFF,
        v76 >= (unsigned int)v25)
    && (v76 != (_DWORD)v25
     || (v25 = HIDWORD(v5) & 0x7FFFFFFF, (unsigned int)v25 >= (unsigned int)v26)
     && ((_DWORD)v26 != (_DWORD)v25
      || (v25 = v6 & 0x7FFFFFFF, (unsigned int)v25 >= (unsigned int)v27)
      && ((_DWORD)v27 != (_DWORD)v25
       || (v25 = HIDWORD(v6) & 0x7FFFFFFF, (unsigned int)v25 >= (HIDWORD(a2[3].m128i_i64[1]) & 0x7FFFFFFF))))) )
  {
    v46 = a2[5].m128i_i64[0];
    if ( !((unsigned int)v46
         | (HIDWORD(a2[5].m128i_i64[1]) | (unsigned int)a2[5].m128i_i64[1] | HIDWORD(v46)) & 0x7FFFFFFF)
      || (v47 = a2[5].m128i_i64[0],
          v48 = HIDWORD(v46) & 0x7FFFFFFF,
          v49 = a2[5].m128i_i64[1] & 0x7FFFFFFF,
          v76 < (unsigned int)v47)
      || v76 == (_DWORD)v47
      && ((HIDWORD(v5) & 0x7FFFFFFFu) < v48
       || v48 == (HIDWORD(v5) & 0x7FFFFFFF)
       && (((unsigned int)v6 & 0x7FFFFFFF) < (unsigned int)v49
        || (_DWORD)v49 == (v6 & 0x7FFFFFFF) && (HIDWORD(v6) & 0x7FFFFFFFu) < (HIDWORD(a2[5].m128i_i64[1]) & 0x7FFFFFFF))) )
    {
      v50 = a2[4].m128i_i64[0];
      if ( !((unsigned int)v50
           | (HIDWORD(a2[4].m128i_i64[1]) | (unsigned int)a2[4].m128i_i64[1] | HIDWORD(v50)) & 0x7FFFFFFF)
        || (v51 = a2[4].m128i_i64[0],
            v52 = HIDWORD(v50) & 0x7FFFFFFF,
            v53 = a2[4].m128i_i64[1] & 0x7FFFFFFF,
            v76 < (unsigned int)v51)
        || (_DWORD)v51 == v76
        && ((HIDWORD(v5) & 0x7FFFFFFFu) < v52
         || v52 == (HIDWORD(v5) & 0x7FFFFFFF)
         && (((unsigned int)v6 & 0x7FFFFFFF) < (unsigned int)v53
          || (_DWORD)v53 == (v6 & 0x7FFFFFFF)
          && (HIDWORD(v6) & 0x7FFFFFFFu) < (HIDWORD(a2[4].m128i_i64[1]) & 0x7FFFFFFF))) )
      {
        v42 = 0;
      }
      else
      {
        if ( a3 )
        {
          v54 = *(_BYTE **)a3;
          *(_QWORD *)(a3 + 8) = 0;
          *v54 = 0;
          v93 = a3;
          v87 = &off_49DA2C8;
          v89 = 0;
          LODWORD(v88) = 0;
          v91 = 0;
          v92 = 1;
          v90 = 0;
          sub_2623850(&v87, 0, 0, 0, v21, v22);
          v83 = _mm_loadu_si128(a2 + 4);
          v55 = sub_5FF0F0((__int64)&v87, "first deprecated in ");
          v56 = sub_722320(v55, v16, v15);
          v57 = *(_BYTE **)(v56 + 32);
          if ( (unsigned __int64)v57 >= *(_QWORD *)(v56 + 24) )
          {
            v56 = sub_26239D0(v56, 32);
          }
          else
          {
            *(_QWORD *)(v56 + 32) = v57 + 1;
            *v57 = 32;
          }
          v58 = sub_25F6730(v56, &v83);
          sub_26240F0(v58, v84, v85);
          v87 = &off_49DA2C8;
          sub_2623770(&v87);
        }
        v42 = 2;
      }
      goto LABEL_72;
    }
    if ( !a3 )
      goto LABEL_71;
    v59 = *(_BYTE **)a3;
    *(_QWORD *)(a3 + 8) = 0;
    *v59 = 0;
    v93 = a3;
    v87 = &off_49DA2C8;
    v89 = 0;
    LODWORD(v88) = 0;
    v91 = 0;
    v92 = 1;
    v90 = 0;
    sub_2623850(&v87, 0, 0, 0, v21, v22);
    v83 = _mm_loadu_si128(a2 + 5);
    v60 = sub_5FF0F0((__int64)&v87, "obsoleted in ");
    v61 = *(_QWORD *)(v60 + 24);
    v62 = *(_BYTE **)(v60 + 32);
    if ( v61 - (unsigned __int64)v62 < v15 )
    {
      v75 = sub_26240F0(v60, v16, v15);
      v62 = *(_BYTE **)(v75 + 32);
      v60 = v75;
      v61 = *(_QWORD *)(v75 + 24);
    }
    else if ( v15 )
    {
      memcpy(v62, v16, v15);
      v61 = *(_QWORD *)(v60 + 24);
      v62 = (_BYTE *)(v15 + *(_QWORD *)(v60 + 32));
      *(_QWORD *)(v60 + 32) = v62;
    }
    if ( (unsigned __int64)v62 >= v61 )
    {
      v60 = sub_26239D0(v60, 32);
    }
    else
    {
      *(_QWORD *)(v60 + 32) = v62 + 1;
      *v62 = 32;
    }
    v63 = sub_25F6730(v60, &v83);
    v64 = v85;
    v65 = v84;
    v66 = v63;
    goto LABEL_70;
  }
  v28 = a2[8].m128i_i64[1];
  s2 = (void *)sub_266CBB0(*(_QWORD *)(a1 + 17288) + 216LL, v27, v25, v26);
  v30 = v29;
  v77 = (const void *)sub_266B840(*(unsigned int *)(*(_QWORD *)(a1 + 17288) + 264LL));
  v80 = v33;
  if ( !v28 || v30 && (v34 = *(_DWORD **)(v28 + 16), v30 == *v34) && !memcmp(v34 + 4, s2, v30) )
  {
    if ( !a3 )
      goto LABEL_80;
    v35 = *(_BYTE **)a3;
    *(_QWORD *)(a3 + 8) = 0;
    *v35 = 0;
    v93 = a3;
    v89 = 0;
    LODWORD(v88) = 0;
    v91 = 0;
    v92 = 1;
    v90 = 0;
    v87 = &off_49DA2C8;
    sub_2623850(&v87, 0, 0, 0, v31, v32);
    v83 = _mm_loadu_si128(a2 + 3);
    v36 = sub_5FF0F0((__int64)&v87, "introduced in ");
    v37 = sub_722320(v36, v16, v15);
    v38 = sub_5FF0F0(v37, " ");
    v39 = sub_25F6730(v38, &v83);
  }
  else
  {
    if ( !a3 )
      goto LABEL_80;
    v71 = *(_BYTE **)a3;
    *(_QWORD *)(a3 + 8) = 0;
    *v71 = 0;
    v93 = a3;
    v89 = 0;
    LODWORD(v88) = 0;
    v91 = 0;
    v92 = 1;
    v90 = 0;
    v87 = &off_49DA2C8;
    sub_2623850(&v87, 0, 0, 0, v31, v32);
    v72 = sub_5FF0F0((__int64)&v87, "not available on ");
    v39 = sub_722320(v72, v16, v15);
  }
  v73 = sub_5FF0F0(v39, " ");
  v74 = sub_722320(v73, v77, v80);
  sub_26240F0(v74, v84, v85);
  v87 = &off_49DA2C8;
  sub_2623770(&v87);
LABEL_80:
  v42 = 1;
  if ( a2[7].m128i_i8[0] )
    goto LABEL_71;
LABEL_72:
  if ( v84 != v86 )
    operator delete(v84, v86[0] + 1LL);
  return v42;
}

