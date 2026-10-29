__int64 __fastcall sub_59A080(__int64 a1, __int64 a2, _QWORD *a3, char *a4, __int64 a5, __int64 a6)
{
  char **v6; // r12
  char **v7; // r12
  char **v8; // r12
  char **v9; // r12
  char **exception; // r12
  int v11; // r13d
  _QWORD *v14; // rax
  __m128i v15; // xmm0
  _QWORD *v17; // rax
  _QWORD *v18; // r15
  size_t v19; // rdx
  char *v20; // r15
  char *v21; // r14
  _BYTE *v22; // rax
  unsigned int v23; // edx
  _DWORD *v24; // rcx
  char v25; // si
  __int64 v26; // rax
  int v27; // eax
  __int64 result; // rax
  unsigned int v29; // r10d
  size_t v30; // rsi
  unsigned int v31; // r12d
  unsigned int *v32; // rax
  __int64 v33; // rax
  int v34; // edx
  _QWORD *v35; // rax
  unsigned int v36; // r15d
  __int64 v37; // r12
  __int64 v38; // r14
  _QWORD *v39; // rdx
  _QWORD *v40; // rdi
  __int64 v41; // rax
  _DWORD *v42; // rax
  __int64 v43; // rax
  unsigned int *v44; // rax
  unsigned int v45; // r15d
  __int64 v46; // rax
  unsigned int *v47; // rax
  _QWORD *v48; // rdx
  __int64 v49; // rax
  unsigned int *v50; // rax
  unsigned int v51; // r8d
  size_t v52; // rsi
  unsigned int *v53; // rax
  unsigned int v54; // r8d
  size_t v55; // rsi
  unsigned int *v56; // rax
  unsigned int v57; // edx
  size_t v58; // rsi
  unsigned int *v59; // rax
  unsigned int v60; // r9d
  size_t v61; // rsi
  unsigned int *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  int v67; // r12d
  __int64 v68; // rax
  _DWORD *v69; // rax
  _QWORD *v70; // rdx
  __int64 v71; // rax
  unsigned int v72; // edi
  _DWORD *v73; // rax
  _QWORD *v74; // rax
  unsigned int v75; // r14d
  size_t v76; // rsi
  unsigned int *v77; // rax
  unsigned int v78; // r14d
  size_t v79; // rsi
  unsigned int *v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // [rsp+8h] [rbp-80h]
  unsigned int v83; // [rsp+8h] [rbp-80h]
  unsigned int v84; // [rsp+8h] [rbp-80h]
  unsigned int v85; // [rsp+8h] [rbp-80h]
  unsigned int v86; // [rsp+8h] [rbp-80h]
  int v87; // [rsp+8h] [rbp-80h]
  unsigned int v89; // [rsp+10h] [rbp-78h]
  __int64 v90[11]; // [rsp+30h] [rbp-58h] BYREF

  v11 = a2;
  *(_QWORD *)a1 = qword_1C665B0;
  v14 = (_QWORD *)*a3;
  v82 = a5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !v14
    || (v15 = _mm_loadl_epi64((const __m128i *)(v14 - 1)),
        v17 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v15) + 8),
        v18 = (_QWORD *)*a3,
        *(_QWORD *)(a1 + 16) = v17 + 1,
        *v17 = v15.m128i_i64[0],
        !v18) )
  {
    v27 = *(_DWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 24) = v27;
    *(_QWORD *)a1 = &off_1C51D00;
LABEL_11:
    *(_QWORD *)(a1 + 56) = 0;
    *(_OWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 64) = v82;
    goto LABEL_12;
  }
  v19 = 8LL * *((unsigned int *)v18 - 1);
  if ( v19 <= 8 )
  {
    if ( v19 == 8 )
      v17[1] = *v18;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 8);
  }
  else
  {
    memmove(v17 + 1, v18, v19);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 8);
  }
  a6 = *((unsigned int *)v18 - 1);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &off_1C51D00;
  if ( !(_DWORD)a6 )
    goto LABEL_11;
  v20 = a4;
  v21 = &a4[a6];
  v22 = (_BYTE *)(sub_186B270(0xAu) + 8);
  v23 = 1;
  *((_QWORD *)v22 - 1) = 2;
  v24 = v22;
  *(_QWORD *)(a1 + 32) = v22;
  while ( 1 )
  {
    v25 = *v20++;
    *v22 = v25;
    *(v24 - 1) = v23;
    if ( v20 == v21 )
      break;
    if ( v23 == *(v24 - 2) )
    {
      v29 = (3 * v23 + 1) >> 1;
      v30 = v29 + 8;
      v31 = v29;
      if ( v23 + 8 >= (unsigned int)v30 || v23 >= v29 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v90, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v90);
        sub_233E40((__int64)v90);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = (unsigned int *)sub_186B300(v24 - 2, v30);
      v24 = v32 + 2;
      *v32 = v31;
      v33 = v32[1];
      *(_QWORD *)(a1 + 32) = v24;
      v34 = v33;
      v22 = (char *)v24 + v33;
      v23 = v34 + 1;
    }
    else
    {
      v26 = v23++;
      v22 = (char *)v24 + v26;
    }
  }
  v35 = (_QWORD *)*a3;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = v82;
  *(_OWORD *)(a1 + 40) = 0;
  if ( v35 )
  {
    v36 = *((_DWORD *)v35 - 1);
    if ( v36 )
    {
      v37 = v36;
      v38 = 0;
      v39 = nullptr;
      if ( !a4 )
      {
        v67 = 0;
        while ( 1 )
        {
          if ( v39 )
          {
            v68 = *((unsigned int *)v39 - 1);
            if ( (_DWORD)v68 == *((_DWORD *)v39 - 2) )
            {
              v78 = (unsigned int)(3 * v68 + 1) >> 1;
              v79 = 4 * v78 + 8;
              if ( 4 * (int)v68 + 8 >= (unsigned int)v79 || (unsigned int)v68 >= v78 )
                goto LABEL_74;
              v80 = (unsigned int *)sub_186B300(v39 - 1, v79);
              v39 = v80 + 2;
              *v80 = v78;
              v68 = v80[1];
              *(_QWORD *)(a1 + 40) = v39;
            }
            v69 = (_DWORD *)v39 + v68;
          }
          else
          {
            v74 = (_QWORD *)sub_186B270(0x10u);
            v39 = v74 + 1;
            *(_QWORD *)(a1 + 40) = v74 + 1;
            *v74 = 2;
            v69 = v74 + 1;
          }
          *v69 = -1;
          ++*((_DWORD *)v39 - 1);
          v70 = *(_QWORD **)(a1 + 56);
          if ( v70 )
          {
            v71 = *((unsigned int *)v70 - 1);
            v72 = *((_DWORD *)v70 - 2);
            if ( v72 == (_DWORD)v71 )
            {
              v75 = (3 * v72 + 1) >> 1;
              v76 = 4 * v75 + 8;
              if ( 4 * v72 + 8 >= (unsigned int)v76 || v72 >= v75 )
                goto LABEL_75;
              v77 = (unsigned int *)sub_186B300(v70 - 1, v76);
              v70 = v77 + 2;
              *v77 = v75;
              v71 = v77[1];
              *(_QWORD *)(a1 + 56) = v70;
            }
            v73 = (_DWORD *)v70 + v71;
          }
          else
          {
            v81 = (_QWORD *)sub_186B270(0x10u);
            v70 = v81 + 1;
            *(_QWORD *)(a1 + 56) = v81 + 1;
            *v81 = 2;
            v73 = v81 + 1;
          }
          *v73 = v67++;
          ++*((_DWORD *)v70 - 1);
          if ( v36 == v67 )
            goto LABEL_37;
          v39 = *(_QWORD **)(a1 + 40);
        }
      }
      while ( 1 )
      {
        v45 = v38;
        if ( a4[v38] )
          break;
        if ( v39 )
        {
          v46 = *((unsigned int *)v39 - 1);
          if ( (_DWORD)v46 == *((_DWORD *)v39 - 2) )
          {
            v51 = (unsigned int)(3 * v46 + 1) >> 1;
            v52 = 4 * v51 + 8;
            if ( 4 * (int)v46 + 8 >= (unsigned int)v52 || (unsigned int)v46 >= v51 )
            {
LABEL_74:
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v90, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v90);
              sub_233E40((__int64)v90);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v83 = (unsigned int)(3 * v46 + 1) >> 1;
            v53 = (unsigned int *)sub_186B300(v39 - 1, v52);
            LODWORD(a5) = v83;
            v39 = v53 + 2;
            *(_QWORD *)(a1 + 40) = v53 + 2;
            *v53 = v83;
            v47 = &v53[v53[1] + 2];
          }
          else
          {
            v47 = (unsigned int *)v39 + v46;
          }
        }
        else
        {
          v66 = (_QWORD *)sub_186B270(0x10u);
          v39 = v66 + 1;
          *(_QWORD *)(a1 + 40) = v66 + 1;
          *v66 = 2;
          v47 = (unsigned int *)(v66 + 1);
        }
        *v47 = -1;
        ++*((_DWORD *)v39 - 1);
        v48 = *(_QWORD **)(a1 + 56);
        if ( v48 )
        {
          v49 = *((unsigned int *)v48 - 1);
          if ( (_DWORD)v49 == *((_DWORD *)v48 - 2) )
          {
            v54 = (unsigned int)(3 * v49 + 1) >> 1;
            v55 = 4 * v54 + 8;
            if ( 4 * (int)v49 + 8 >= (unsigned int)v55 || (unsigned int)v49 >= v54 )
            {
LABEL_75:
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v90, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v90);
              sub_233E40((__int64)v90);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v84 = (unsigned int)(3 * v49 + 1) >> 1;
            v56 = (unsigned int *)sub_186B300(v48 - 1, v55);
            LODWORD(a5) = v84;
            v48 = v56 + 2;
            *(_QWORD *)(a1 + 56) = v56 + 2;
            *v56 = v84;
            v50 = &v56[v56[1] + 2];
          }
          else
          {
            v50 = (unsigned int *)v48 + v49;
          }
        }
        else
        {
          v65 = (_QWORD *)sub_186B270(0x10u);
          v48 = v65 + 1;
          *(_QWORD *)(a1 + 56) = v65 + 1;
          *v65 = 2;
          v50 = (unsigned int *)(v65 + 1);
        }
        ++v38;
        *v50 = v45;
        ++*((_DWORD *)v48 - 1);
        if ( v38 == v37 )
        {
LABEL_37:
          v82 = *(_QWORD *)(a1 + 64);
          goto LABEL_12;
        }
LABEL_28:
        v39 = *(_QWORD **)(a1 + 40);
      }
      v40 = *(_QWORD **)(a1 + 48);
      if ( v40 )
      {
        LODWORD(a5) = *((_DWORD *)v40 - 1);
        if ( v39 )
        {
LABEL_22:
          v41 = *((unsigned int *)v39 - 1);
          if ( (_DWORD)v41 == *((_DWORD *)v39 - 2) )
          {
            v60 = (unsigned int)(3 * v41 + 1) >> 1;
            v61 = 4 * v60 + 8;
            if ( 4 * (int)v41 + 8 >= (unsigned int)v61 || (unsigned int)v41 >= v60 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v90, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, v90);
              sub_233E40((__int64)v90);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v89 = (unsigned int)(3 * v41 + 1) >> 1;
            v86 = a5;
            v62 = (unsigned int *)sub_186B300(v39 - 1, v61);
            LODWORD(a6) = v89;
            LODWORD(a5) = v86;
            v40 = *(_QWORD **)(a1 + 48);
            *(_QWORD *)(a1 + 40) = v62 + 2;
            *v62 = v89;
            v62[v62[1]++ + 2] = v86;
            if ( v40 )
              goto LABEL_25;
            goto LABEL_50;
          }
          v42 = (_DWORD *)v39 + v41;
LABEL_24:
          *v42 = a5;
          ++*((_DWORD *)v39 - 1);
          if ( v40 )
          {
LABEL_25:
            v43 = *((unsigned int *)v40 - 1);
            if ( (_DWORD)v43 == *((_DWORD *)v40 - 2) )
            {
              v57 = (unsigned int)(3 * v43 + 1) >> 1;
              v58 = 4 * v57 + 8;
              if ( 4 * (int)v43 + 8 >= (unsigned int)v58 || (unsigned int)v43 >= v57 )
              {
                v8 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v90, "Overflow encountered when expanding vector");
                *v8 = (char *)off_1C63128;
                sub_2333C0(v8 + 1, v90);
                sub_233E40((__int64)v90);
                __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v85 = (unsigned int)(3 * v43 + 1) >> 1;
              v59 = (unsigned int *)sub_186B300(v40 - 1, v58);
              v40 = v59 + 2;
              *(_QWORD *)(a1 + 48) = v59 + 2;
              *v59 = v85;
              v44 = &v59[v59[1] + 2];
            }
            else
            {
              v44 = (unsigned int *)v40 + v43;
            }
LABEL_27:
            ++v38;
            *v44 = v45;
            ++*((_DWORD *)v40 - 1);
            if ( v38 == v37 )
              goto LABEL_37;
            goto LABEL_28;
          }
LABEL_50:
          v63 = (_QWORD *)sub_186B270(0x10u);
          v40 = v63 + 1;
          *(_QWORD *)(a1 + 48) = v63 + 1;
          *v63 = 2;
          v44 = (unsigned int *)(v63 + 1);
          goto LABEL_27;
        }
      }
      else
      {
        LODWORD(a5) = 0;
        if ( v39 )
          goto LABEL_22;
      }
      v87 = a5;
      v64 = (_QWORD *)sub_186B270(0x10u);
      v39 = v64 + 1;
      v40 = *(_QWORD **)(a1 + 48);
      *(_QWORD *)(a1 + 40) = v64 + 1;
      LODWORD(a5) = v87;
      *v64 = 2;
      v42 = v64 + 1;
      goto LABEL_24;
    }
  }
LABEL_12:
  result = sub_599F20(v11, (_QWORD *)(a1 + 16), a4, *(_DWORD *)(v82 + 24), a5, a6);
  *(_DWORD *)(a1 + 24) = result;
  return result;
}

