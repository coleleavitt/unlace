__int64 __fastcall sub_7A6850(const __m128i *a1, _DWORD **a2, __int64 a3, __int64 a4)
{
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **exception; // rbp
  char **v8; // rbp
  char **v9; // rbp
  __int64 result; // rax
  __int64 v15; // r15
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  __int64 *v20; // rsi
  __int64 v21; // r15
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // r13
  unsigned int v31; // eax
  __int64 v32; // rsi
  int v33; // eax
  __int64 *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // r13
  unsigned int v39; // eax
  __int64 v40; // rsi
  int v41; // eax
  __int64 *v42; // rsi
  _DWORD *v43; // r14
  _DWORD *v44; // r13
  _QWORD *v45; // rdx
  int v46; // r15d
  __int64 v47; // rax
  unsigned int v48; // r8d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // r15
  unsigned int v53; // edx
  __int64 v54; // rax
  int v55; // edx
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int32 v58; // eax
  __int64 (__fastcall *v59)(__int64); // rax
  __m128i v60; // xmm0
  __int64 v61; // rdx
  _QWORD *v62; // rax
  int *i; // rax
  unsigned int v64; // r15d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rsi
  unsigned int v68; // r15d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rsi
  unsigned int v72; // ecx
  size_t v73; // rsi
  unsigned int v74; // r13d
  unsigned int *v75; // rax
  __int64 v76; // rcx
  unsigned int v77; // r8d
  size_t v78; // rsi
  unsigned int *v79; // rax
  __int64 v80; // rsi
  unsigned int v81; // r14d
  size_t v82; // rdi
  __int64 v83; // rax
  _BYTE *v84; // r8
  _DWORD *v85; // rcx
  __int64 v86; // rax
  _QWORD *v87; // rdx
  _BYTE *v88; // rdi
  _BYTE *j; // rax
  char v90; // si
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  __int32 v96; // [rsp+0h] [rbp-78h]
  __int32 v97; // [rsp+0h] [rbp-78h]
  int v98; // [rsp+0h] [rbp-78h]
  int v99; // [rsp+0h] [rbp-78h]
  unsigned int v100; // [rsp+0h] [rbp-78h]
  unsigned int v101; // [rsp+0h] [rbp-78h]
  _DWORD *v102; // [rsp+0h] [rbp-78h]
  __int64 m128i_i64; // [rsp+8h] [rbp-70h]
  __int64 v104[11]; // [rsp+20h] [rbp-58h] BYREF

  result = a1[1].m128i_i64[1];
  if ( result )
  {
    if ( *(_BYTE *)(result + 352) )
    {
      sub_7A4170(a1);
      m128i_i64 = (__int64)a1[134].m128i_i64;
      v96 = a1[516].m128i_i32[1];
      v15 = sub_180C100(&a1[134], 24);
      *(_QWORD *)v15 = &off_1C4C070;
      *(_DWORD *)(v15 + 16) = v96;
      v16 = (_QWORD *)a1[133].m128i_i64[0];
      *(_QWORD *)(v15 + 8) = (char *)a1 + 8260;
      if ( v16 )
      {
        v17 = *((_DWORD *)v16 - 1);
        if ( v17 == *((_DWORD *)v16 - 2) )
        {
          v77 = (3 * v17 + 1) >> 1;
          v78 = 8 * v77 + 8;
          if ( 8 * v17 + 8 >= (unsigned int)v78 || v17 >= v77 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v104, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v104);
            sub_233E40((__int64)v104);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v101 = (3 * v17 + 1) >> 1;
          v79 = (unsigned int *)sub_186B300(v16 - 1, v78);
          v80 = v79[1];
          v16 = v79 + 2;
          *v79 = v101;
          LODWORD(v79) = v80;
          a1[133].m128i_i64[0] = (__int64)v16;
          v20 = &v16[v80];
          v19 = (_DWORD)v79 + 1;
        }
        else
        {
          v18 = v17;
          v19 = v17 + 1;
          v20 = &v16[v18];
        }
      }
      else
      {
        v91 = (_QWORD *)sub_186B270(0x18u);
        v16 = v91 + 1;
        *v91 = 2;
        v19 = 1;
        a1[133].m128i_i64[0] = (__int64)v16;
        v20 = v16;
      }
      *v20 = v15;
      *((_DWORD *)v16 - 1) = v19;
      v97 = a1[516].m128i_i32[3];
      v21 = sub_180C100(m128i_i64, 24);
      *(_QWORD *)v21 = &off_1C4C070;
      *(_DWORD *)(v21 + 16) = v97;
      v22 = (_QWORD *)a1[133].m128i_i64[0];
      *(_QWORD *)(v21 + 8) = (char *)a1 + 8268;
      if ( v22 )
      {
        v23 = *((_DWORD *)v22 - 1);
        if ( v23 == *((_DWORD *)v22 - 2) )
        {
          v72 = (3 * v23 + 1) >> 1;
          v73 = 8 * v72 + 8;
          v74 = v72;
          if ( 8 * v23 + 8 >= (unsigned int)v73 || v23 >= v72 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v104, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v104);
            sub_233E40((__int64)v104);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v75 = (unsigned int *)sub_186B300(v22 - 1, v73);
          v76 = v75[1];
          v22 = v75 + 2;
          *v75 = v74;
          a1[133].m128i_i64[0] = (__int64)(v75 + 2);
          LODWORD(v75) = v76;
          v26 = &v22[v76];
          v25 = (_DWORD)v75 + 1;
        }
        else
        {
          v24 = v23;
          v25 = v23 + 1;
          v26 = &v22[v24];
        }
      }
      else
      {
        v95 = (_QWORD *)sub_186B270(0x18u);
        v22 = v95 + 1;
        *v95 = 2;
        v25 = 1;
        a1[133].m128i_i64[0] = (__int64)v22;
        v26 = v22;
      }
      *v26 = v21;
      *((_DWORD *)v22 - 1) = v25;
      v27 = a1[514].m128i_i64[0];
      if ( v27 )
        v98 = *(_DWORD *)(v27 - 4);
      else
        v98 = 0;
      v28 = sub_180C100(m128i_i64, 24);
      v29 = (_QWORD *)a1[133].m128i_i64[0];
      v30 = v28;
      *(_QWORD *)v28 = off_1C547E8;
      *(_QWORD *)(v28 + 8) = a1 + 514;
      *(_DWORD *)(v28 + 16) = v98;
      if ( v29 )
      {
        v31 = *((_DWORD *)v29 - 1);
        if ( v31 == *((_DWORD *)v29 - 2) )
        {
          v68 = (3 * v31 + 1) >> 1;
          v69 = 8 * v68 + 8;
          if ( 8 * v31 + 8 >= (unsigned int)v69 || v31 >= v68 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v104, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, v104);
            sub_233E40((__int64)v104);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v70 = (unsigned int *)sub_186B300(v29 - 1, v69);
          v71 = v70[1];
          v29 = v70 + 2;
          *v70 = v68;
          a1[133].m128i_i64[0] = (__int64)(v70 + 2);
          LODWORD(v70) = v71;
          v34 = &v29[v71];
          v33 = (_DWORD)v70 + 1;
        }
        else
        {
          v32 = v31;
          v33 = v31 + 1;
          v34 = &v29[v32];
        }
      }
      else
      {
        v94 = (_QWORD *)sub_186B270(0x18u);
        v29 = v94 + 1;
        *v94 = 2;
        v33 = 1;
        a1[133].m128i_i64[0] = (__int64)v29;
        v34 = v29;
      }
      *v34 = v30;
      *((_DWORD *)v29 - 1) = v33;
      v35 = a1[146].m128i_i64[1];
      if ( v35 )
        v99 = *(_DWORD *)(v35 - 4);
      else
        v99 = 0;
      v36 = sub_180C100(m128i_i64, 24);
      v37 = (_QWORD *)a1[133].m128i_i64[0];
      v38 = v36;
      *(_QWORD *)v36 = off_1C54810;
      *(_QWORD *)(v36 + 8) = (char *)a1 + 2344;
      *(_DWORD *)(v36 + 16) = v99;
      if ( v37 )
      {
        v39 = *((_DWORD *)v37 - 1);
        if ( v39 == *((_DWORD *)v37 - 2) )
        {
          v64 = (3 * v39 + 1) >> 1;
          v65 = 8 * v64 + 8;
          if ( 8 * v39 + 8 >= (unsigned int)v65 || v39 >= v64 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v104, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v104);
            sub_233E40((__int64)v104);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v66 = (unsigned int *)sub_186B300(v37 - 1, v65);
          v67 = v66[1];
          v37 = v66 + 2;
          *v66 = v64;
          a1[133].m128i_i64[0] = (__int64)(v66 + 2);
          LODWORD(v66) = v67;
          v42 = &v37[v67];
          v41 = (_DWORD)v66 + 1;
        }
        else
        {
          v40 = v39;
          v41 = v39 + 1;
          v42 = &v37[v40];
        }
      }
      else
      {
        v93 = (_QWORD *)sub_186B270(0x18u);
        v37 = v93 + 1;
        *v93 = 2;
        v41 = 1;
        a1[133].m128i_i64[0] = (__int64)v37;
        v42 = v37;
      }
      v43 = *a2;
      *v42 = v38;
      *((_DWORD *)v37 - 1) = v41;
      if ( v43 )
      {
        v44 = &v43[*(v43 - 1)];
        if ( v44 != v43 )
        {
          v45 = (_QWORD *)a1[514].m128i_i64[0];
          v46 = *v43 ^ 1;
          if ( v45 )
            goto LABEL_28;
          v62 = (_QWORD *)sub_186B270(0x10u);
          v45 = v62 + 1;
          *v62 = 2;
          a1[514].m128i_i64[0] = (__int64)(v62 + 1);
          for ( i = (int *)(v62 + 1); ; i = (int *)v45 + v47 )
          {
            ++v43;
            *i = v46;
            ++*((_DWORD *)v45 - 1);
            if ( v44 == v43 )
              break;
            while ( 1 )
            {
              v46 = *v43 ^ 1;
LABEL_28:
              v47 = *((unsigned int *)v45 - 1);
              if ( (_DWORD)v47 != *((_DWORD *)v45 - 2) )
                break;
              v48 = (unsigned int)(3 * v47 + 1) >> 1;
              v49 = 4 * v48 + 8;
              if ( 4 * (int)v47 + 8 >= (unsigned int)v49 || (unsigned int)v47 >= v48 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v104, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v104);
                sub_233E40((__int64)v104);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v100 = (unsigned int)(3 * v47 + 1) >> 1;
              ++v43;
              v50 = (unsigned int *)sub_186B300(v45 - 1, v49);
              v45 = v50 + 2;
              *v50 = v100;
              v51 = v50[1];
              a1[514].m128i_i64[0] = (__int64)v45;
              *((_DWORD *)v45 + v51) = v46;
              ++*((_DWORD *)v45 - 1);
              if ( v44 == v43 )
                goto LABEL_32;
            }
          }
        }
      }
LABEL_32:
      v52 = (_QWORD *)a1[146].m128i_i64[1];
      if ( v52 )
      {
        v53 = *((_DWORD *)v52 - 1);
        if ( v53 == *((_DWORD *)v52 - 2) )
        {
          v81 = (3 * v53 + 1) >> 1;
          v82 = 32 * v81 + 8;
          if ( 32 * v53 + 8 >= (unsigned int)v82 || v53 >= v81 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v104, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v104);
            sub_233E40((__int64)v104);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v83 = sub_186B270(v82);
          v84 = (_BYTE *)a1[146].m128i_i64[1];
          v85 = (_DWORD *)v83;
          v52 = (_QWORD *)(v83 + 8);
          if ( v84 )
          {
            v86 = *((unsigned int *)v84 - 1);
            v87 = v52;
            v85[1] = v86;
            v88 = &v84[32 * v86];
            for ( j = v84; j != v88; *(v87 - 1) = *((_QWORD *)j - 1) )
            {
              v90 = *j;
              j += 32;
              v87 += 4;
              *((_BYTE *)v87 - 32) = v90;
              *(v87 - 3) = *((_QWORD *)j - 3);
              *(v87 - 2) = *((_QWORD *)j - 2);
            }
            v102 = v85;
            sub_186B220(v84 - 8);
            v85 = v102;
            v56 = &v52[4 * (unsigned int)v102[1]];
            v55 = v102[1] + 1;
          }
          else
          {
            *(_DWORD *)(v83 + 4) = 0;
            v55 = 1;
            v56 = (_QWORD *)(v83 + 8);
          }
          a1[146].m128i_i64[1] = (__int64)v52;
          *v85 = v81;
        }
        else
        {
          v54 = v53;
          v55 = v53 + 1;
          v56 = &v52[4 * v54];
        }
      }
      else
      {
        v92 = (_QWORD *)sub_186B270(0x48u);
        v55 = 1;
        v52 = v92 + 1;
        *v92 = 2;
        a1[146].m128i_i64[1] = (__int64)(v92 + 1);
        v56 = v92 + 1;
      }
      *(_BYTE *)v56 = 0;
      v56[1] = 0;
      v56[2] = a4;
      v56[3] = a3;
      *((_DWORD *)v52 - 1) = v55;
      a1[516].m128i_i32[0] = a1[516].m128i_i32[1];
      a1[516].m128i_i32[2] = a1[516].m128i_i32[3];
      v57 = a1[514].m128i_i64[0];
      if ( v57 )
        v58 = *(_DWORD *)(v57 - 4);
      else
        v58 = 0;
      a1[516].m128i_i32[1] = v58;
      a1[516].m128i_i32[3] = *((_DWORD *)v52 - 1);
      v59 = *(__int64 (__fastcall **)(__int64))(a1->m128i_i64[0] + 432);
      if ( v59 != sub_79EFF0 )
        m128i_i64 = v59((__int64)a1);
      result = sub_180C100(m128i_i64, 32);
      v60 = _mm_loadu_si128(a1 + 516);
      v61 = a1[518].m128i_i64[0];
      *(_QWORD *)result = off_1C54838;
      *(_QWORD *)(result + 8) = v61;
      *(__m128i *)(result + 16) = v60;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

