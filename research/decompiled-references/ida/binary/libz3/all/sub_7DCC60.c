__int64 __fastcall sub_7DCC60(__int64 a1, _QWORD *a2)
{
  char **exception; // r15
  char **v3; // r15
  char **v4; // r15
  char **v5; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned int v14; // eax
  int v15; // r8d
  int v16; // r9d
  _DWORD *v17; // rcx
  unsigned int v18; // r13d
  unsigned int v19; // r15d
  __int64 v20; // r14
  _BYTE *v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rdi
  __int32 v24; // edx
  int v25; // eax
  _BYTE *v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  unsigned int *v29; // rax
  __int64 v30; // rdi
  __int32 v31; // edx
  int v32; // eax
  __int128 v33; // xmm0
  int v34; // eax
  int v35; // r8d
  int v36; // r9d
  _DWORD *v37; // rcx
  unsigned int v38; // r14d
  unsigned int v39; // r13d
  unsigned int v40; // edi
  unsigned int v41; // edx
  size_t v42; // rsi
  unsigned int v43; // r15d
  unsigned int *v44; // rax
  char *v45; // rdx
  char *v46; // rdi
  _QWORD *v47; // rdx
  __int64 v48; // rax
  unsigned int *v49; // rax
  __int128 v50; // xmm0
  __m128i *v51; // rax
  unsigned int v52; // ecx
  size_t v53; // rsi
  unsigned int v54; // r13d
  unsigned int *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rdi
  _QWORD *v61; // rax
  unsigned int v62; // edx
  unsigned int v63; // edi
  size_t v64; // rsi
  unsigned int *v65; // rax
  char *v66; // rdi
  char *v67; // rdx
  __int128 v68; // xmm0
  __m128i *v69; // rax
  __int128 v70; // xmm0
  unsigned int v71; // r14d
  unsigned int v72; // ecx
  unsigned int *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // [rsp+28h] [rbp-B8h]
  int v78; // [rsp+30h] [rbp-B0h]
  unsigned int v79; // [rsp+34h] [rbp-ACh]
  _QWORD *v80; // [rsp+38h] [rbp-A8h]
  _QWORD v81[2]; // [rsp+40h] [rbp-A0h] BYREF
  __m128i v82; // [rsp+50h] [rbp-90h] BYREF
  __int64 v83; // [rsp+60h] [rbp-80h]
  __m128i v84; // [rsp+70h] [rbp-70h] BYREF
  __int64 v85; // [rsp+80h] [rbp-60h]
  __m128i v86; // [rsp+90h] [rbp-50h] BYREF
  __int32 v87; // [rsp+A0h] [rbp-40h]

  if ( !(unsigned __int8)sub_162B070(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL)) )
  {
    result = *(_QWORD *)(a1 + 152);
    if ( result )
    {
      if ( *(_DWORD *)(result - 4) )
        goto LABEL_4;
    }
  }
  sub_162E810(v81, *(_QWORD *)(a1 + 120), *(unsigned int *)(a1 + 248));
  v14 = sub_7E58C0(a1, v81[0]);
  v17 = (_DWORD *)*a2;
  v18 = v14;
  v19 = v14 + 1;
  if ( *a2 )
  {
    v20 = (unsigned int)*(v17 - 1);
    if ( (unsigned int)v20 >= v19 )
      goto LABEL_11;
    v62 = *(v17 - 2);
    if ( v62 >= v19 )
    {
      *(v17 - 1) = v19;
      v66 = (char *)v17 + v20;
      v67 = (char *)v17 + v19;
      goto LABEL_61;
    }
  }
  else
  {
    if ( v14 == -1 )
      goto LABEL_11;
    v75 = sub_186B270(0xAu);
    v17 = (_DWORD *)(v75 + 8);
    v62 = 2;
    *(_QWORD *)v75 = 2;
    LODWORD(v20) = 0;
    *a2 = v75 + 8;
    if ( v19 <= 2 )
    {
      *(_DWORD *)(v75 + 4) = v19;
      v66 = (char *)(v75 + 8);
      v67 = (char *)v17 + v19;
      goto LABEL_61;
    }
  }
  do
  {
    v63 = (3 * v62 + 1) >> 1;
    v64 = v63 + 8;
    if ( v62 + 8 >= (unsigned int)v64 || v62 >= v63 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v86.m128i_i64, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v86);
      sub_233E40((__int64)&v86);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v65 = (unsigned int *)sub_186B300(v17 - 2, v64);
    v62 = v63;
    v17 = v65 + 2;
    *a2 = v65 + 2;
    *v65 = v63;
  }
  while ( v63 < v19 );
  v65[1] = v19;
  v66 = (char *)v17 + (unsigned int)v20;
  v67 = (char *)v17 + v19;
  if ( v19 != (_DWORD)v20 )
  {
LABEL_61:
    memset(v66, 0, v67 - v66);
    v22 = v18;
    v21 = (_BYTE *)(v18 + *a2);
    if ( *v21 )
      goto LABEL_12;
    goto LABEL_36;
  }
LABEL_11:
  v21 = (char *)v17 + v18;
  v22 = v18;
  if ( *v21 )
    goto LABEL_12;
LABEL_36:
  *v21 = 1;
  v47 = (_QWORD *)a2[1];
  if ( v47 )
  {
    v48 = *((unsigned int *)v47 - 1);
    if ( (_DWORD)v48 == *((_DWORD *)v47 - 2) )
    {
      v71 = (unsigned int)(3 * v48 + 1) >> 1;
      v72 = 4 * v71 + 8;
      if ( 4 * (int)v48 + 8 >= v72 || (unsigned int)v48 >= v71 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v86.m128i_i64, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, &v86);
        sub_233E40((__int64)&v86);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v73 = (unsigned int *)sub_186B300(v47 - 1, v72);
      v47 = v73 + 2;
      *v73 = v71;
      v74 = v73[1];
      a2[1] = v47;
      v49 = (unsigned int *)v47 + v74;
    }
    else
    {
      v49 = (unsigned int *)v47 + v48;
    }
  }
  else
  {
    v76 = (_QWORD *)sub_186B270(0x10u);
    *v76 = 2;
    v47 = v76 + 1;
    a2[1] = v76 + 1;
    v49 = (unsigned int *)(v76 + 1);
  }
  *v49 = v18;
  ++*((_DWORD *)v47 - 1);
LABEL_12:
  v23 = *(_QWORD *)(a1 + 24);
  LODWORD(v83) = 0;
  v82.m128i_i64[1] = 0;
  v24 = *(_DWORD *)(v23 + 3612);
  v25 = *(_DWORD *)(*(_QWORD *)(v23 + 3288) + 4 * v22);
  v82.m128i_i32[0] = v24;
  if ( v25 )
  {
    if ( v25 == 1 )
    {
      v86.m128i_i32[0] = v24;
      v86.m128i_i64[1] = 0;
      v87 = 0;
      if ( !v24 && !*(_BYTE *)(v23 + 3832) )
      {
        v69 = (__m128i *)(*(_QWORD *)(v23 + 3296) + 24LL * (v18 >> 1));
        if ( v69->m128i_i32[0] )
        {
          *v69 = _mm_load_si128(&v86);
          v69[1].m128i_i32[0] = v87;
        }
      }
    }
    else if ( v25 == -1 )
    {
      v82.m128i_i32[0] = v24;
      v82.m128i_i64[1] = 0;
      v68 = (__int128)_mm_load_si128(&v82);
      LODWORD(v83) = 0;
      sub_11B4C90(v23, v18 ^ 1, v24, (_DWORD)v21, v15, v16, v68, 0);
    }
  }
  else
  {
    v82.m128i_i32[0] = v24;
    v82.m128i_i64[1] = 0;
    v70 = (__int128)_mm_load_si128(&v82);
    LODWORD(v83) = 0;
    sub_11C3360(v23, v18, v24, (_DWORD)v21, v15, v16, v70, v83);
  }
  result = *(_QWORD *)(a1 + 152);
  if ( result )
  {
    result += 8LL * *(unsigned int *)(result - 4);
    v77 = (_QWORD *)result;
    if ( result != *(_QWORD *)(a1 + 152) )
    {
      v80 = *(_QWORD **)(a1 + 152);
      while ( 1 )
      {
        v34 = sub_7E58C0(a1, *v80);
        v37 = (_DWORD *)*a2;
        v78 = v34;
        v38 = v34 ^ 1;
        v39 = (v34 ^ 1) + 1;
        if ( !*a2 )
          break;
        v79 = *(v37 - 1);
        if ( v79 < v39 )
        {
          v40 = *(v37 - 2);
          if ( v40 < v39 )
            goto LABEL_31;
          *(v37 - 1) = v39;
          v45 = (char *)v37 + v39;
          v46 = (char *)v37 + v79;
          goto LABEL_35;
        }
LABEL_18:
        v26 = (char *)v37 + v38;
        if ( !*v26 )
        {
          *v26 = 1;
          v27 = (_QWORD *)a2[1];
          if ( v27 )
          {
            v28 = *((unsigned int *)v27 - 1);
            if ( (_DWORD)v28 == *((_DWORD *)v27 - 2) )
            {
              v52 = (unsigned int)(3 * v28 + 1) >> 1;
              v53 = 4 * v52 + 8;
              v54 = v52;
              if ( 4 * (int)v28 + 8 >= (unsigned int)v53 || (unsigned int)v28 >= v52 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v86.m128i_i64, "Overflow encountered when expanding vector");
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, &v86);
                sub_233E40((__int64)&v86);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v55 = (unsigned int *)sub_186B300(v27 - 1, v53);
              v27 = v55 + 2;
              *v55 = v54;
              v56 = v55[1];
              a2[1] = v27;
              v29 = (unsigned int *)v27 + v56;
            }
            else
            {
              v29 = (unsigned int *)v27 + v28;
            }
          }
          else
          {
            v61 = (_QWORD *)sub_186B270(0x10u);
            v27 = v61 + 1;
            *v61 = 2;
            a2[1] = v61 + 1;
            v29 = (unsigned int *)(v61 + 1);
          }
          *v29 = v38;
          ++*((_DWORD *)v27 - 1);
        }
        v30 = *(_QWORD *)(a1 + 24);
        v84.m128i_i64[1] = 0;
        LODWORD(v85) = 0;
        v31 = *(_DWORD *)(v30 + 3612);
        v32 = *(_DWORD *)(*(_QWORD *)(v30 + 3288) + 4LL * v38);
        v84.m128i_i32[0] = v31;
        if ( v32 )
        {
          if ( v32 == 1 )
          {
            v86.m128i_i32[0] = v31;
            v86.m128i_i64[1] = 0;
            v87 = 0;
            if ( !v31 && !*(_BYTE *)(v30 + 3832) )
            {
              v51 = (__m128i *)(*(_QWORD *)(v30 + 3296) + 24LL * (v38 >> 1));
              if ( v51->m128i_i32[0] )
              {
                *v51 = _mm_load_si128(&v86);
                v51[1].m128i_i32[0] = v87;
              }
            }
          }
          else if ( v32 == -1 )
          {
            v84.m128i_i32[0] = v31;
            v84.m128i_i64[1] = 0;
            v33 = (__int128)_mm_load_si128(&v84);
            LODWORD(v85) = 0;
            sub_11B4C90(v30, v78, v31, (_DWORD)v26, v35, v36, v33, 0);
          }
        }
        else
        {
          v84.m128i_i32[0] = v31;
          v84.m128i_i64[1] = 0;
          v50 = (__int128)_mm_load_si128(&v84);
          LODWORD(v85) = 0;
          sub_11C3360(v30, v38, v31, (_DWORD)v26, v35, v36, v50, v85);
        }
        result = (__int64)++v80;
        if ( v77 == v80 )
          goto LABEL_51;
      }
      if ( (v34 ^ 1) == 0xFFFFFFFF )
        goto LABEL_18;
      v57 = sub_186B270(0xAu);
      v37 = (_DWORD *)(v57 + 8);
      v40 = 2;
      *a2 = v57 + 8;
      *(_QWORD *)v57 = 2;
      if ( v39 <= 2 )
      {
        *(_DWORD *)(v57 + 4) = v39;
        v46 = (char *)(v57 + 8);
        v45 = (char *)v37 + v39;
      }
      else
      {
        v79 = 0;
        do
        {
LABEL_31:
          v41 = (3 * v40 + 1) >> 1;
          v42 = v41 + 8;
          v43 = v41;
          if ( v40 + 8 >= (unsigned int)v42 || v40 >= v41 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v86.m128i_i64, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v86);
            sub_233E40((__int64)&v86);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v44 = (unsigned int *)sub_186B300(v37 - 2, v42);
          v37 = v44 + 2;
          *v44 = v43;
          v40 = (3 * v40 + 1) >> 1;
          *a2 = v44 + 2;
        }
        while ( v43 < v39 );
        v44[1] = v39;
        v45 = (char *)v37 + v39;
        v46 = (char *)v37 + v79;
        if ( v39 == v79 )
          goto LABEL_18;
      }
LABEL_35:
      memset(v46, 0, v45 - v46);
      v37 = (_DWORD *)*a2;
      goto LABEL_18;
    }
  }
LABEL_51:
  v58 = v81[0];
  if ( v81[0] )
  {
    v59 = v81[1];
    if ( (*(_DWORD *)(v81[0] + 8LL))-- == 1 )
      result = sub_15D7BC0(v59, v58);
  }
LABEL_4:
  v9 = *(_QWORD *)(a1 + 168);
  if ( v9 )
  {
    result = *(unsigned int *)(v9 - 4);
    v10 = v9 + 8 * result;
    if ( v10 != v9 )
    {
      result = *(_QWORD *)(a1 + 168);
      do
      {
        v11 = *(_QWORD *)result;
        v12 = result;
        v13 = sub_186B270(0x20u);
        *(_QWORD *)(v13 + 16) = 0;
        *(_QWORD *)(v13 + 24) = v11;
        *(_OWORD *)v13 = 0;
        sub_7DC960(a1, v13);
        result = v12 + 8;
      }
      while ( v10 != v12 + 8 );
    }
  }
  return result;
}

