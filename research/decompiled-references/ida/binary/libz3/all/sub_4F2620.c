__int64 __fastcall sub_4F2620(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **exception; // rbp
  __int64 v9; // rdi
  __m128 v10; // xmm1
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // ebx
  __int64 v14; // r13
  _QWORD *v15; // rbp
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  int v18; // ebp
  _QWORD *v19; // rdx
  int v20; // ebx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  _DWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  unsigned int *v26; // rax
  _QWORD *v27; // r14
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  _QWORD *v32; // rcx
  unsigned int v33; // r14d
  unsigned int *v34; // rax
  unsigned int v35; // r8d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r15d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rcx
  __int64 result; // rax
  unsigned int v44; // r8d
  size_t v45; // rsi
  unsigned int v46; // r15d
  unsigned int *v47; // rax
  __int64 v48; // rax
  unsigned int v49; // r8d
  size_t v50; // rsi
  unsigned int v51; // r15d
  unsigned int *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  _QWORD *v60; // rdi
  __int64 v61; // rax
  __int64 i; // rax
  __m128i *v63; // [rsp+0h] [rbp-138h] BYREF
  int *v64; // [rsp+8h] [rbp-130h]
  __m128i v65; // [rsp+10h] [rbp-128h] BYREF
  __m128i v66; // [rsp+20h] [rbp-118h] BYREF
  __int128 *v67; // [rsp+30h] [rbp-108h]
  unsigned int *v68; // [rsp+38h] [rbp-100h]
  __int64 v69; // [rsp+40h] [rbp-F8h]
  _BYTE *v70; // [rsp+48h] [rbp-F0h]
  __int64 v71[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v72; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v73[48]; // [rsp+90h] [rbp-A8h] BYREF
  __m128i v74; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v75; // [rsp+D0h] [rbp-68h]
  _QWORD *v76; // [rsp+E0h] [rbp-58h]
  _OWORD v77[5]; // [rsp+E8h] [rbp-50h] BYREF

  v68 = (unsigned int *)a1;
  v9 = *(_QWORD *)(a1 + 32);
  v63 = &v74;
  v69 = a2;
  v64 = a4;
  v10 = _mm_loadh_ps((const double *)&v63);
  v67 = &v72;
  v66 = (__m128i)v10;
  v65 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v72, (__m128i)(unsigned __int64)&v72);
  v11 = sub_552E50(v9);
  v12 = *(_DWORD *)(a3 + 8);
  v13 = *(_DWORD *)(a3 + 12);
  v14 = v11;
  if ( v12 >= v13 )
  {
    v58 = 2 * v13;
    v59 = sub_186B270(8 * v58);
    v12 = *(_DWORD *)(a3 + 8);
    v60 = *(_QWORD **)a3;
    v15 = (_QWORD *)v59;
    if ( v12 )
    {
      if ( v12 - 1 <= 2 || (_QWORD *)v59 == v60 + 1 )
      {
        for ( i = 0; i != v12; ++i )
          v15[i] = v60[i];
      }
      else
      {
        v61 = 0;
        do
        {
          *(__m128i *)&v15[v61] = _mm_loadu_si128((const __m128i *)&v60[v61]);
          v61 += 2;
        }
        while ( v61 != 2LL * (v12 >> 1) );
        if ( (v12 & 1) != 0 )
          v15[v12 & 0xFFFFFFFE] = v60[v12 & 0xFFFFFFFE];
      }
    }
    if ( v60 && v60 != (_QWORD *)(a3 + 16) )
    {
      sub_186B220(v60);
      v12 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v15;
    *(_DWORD *)(a3 + 12) = v58;
  }
  else
  {
    v15 = *(_QWORD **)a3;
  }
  v15[v12] = v14;
  *(_DWORD *)(a3 + 8) = v12 + 1;
  v70 = v73;
  v72 = 0;
  sub_180C0A0(v73);
  v16 = _mm_load_si128(&v65);
  v76 = nullptr;
  v17 = _mm_load_si128(&v66);
  v75 = 0;
  v18 = *v64;
  v74 = v16;
  v77[0] = v17;
  if ( v18 )
  {
    v19 = nullptr;
    v20 = 0;
    while ( 1 )
    {
      if ( v19 )
      {
        v33 = *((_DWORD *)v19 - 1);
        v34 = (unsigned int *)v19 + v33;
        if ( v33 == *((_DWORD *)v19 - 2) )
        {
          v35 = (3 * v33 + 1) >> 1;
          v36 = 4 * v35 + 8;
          if ( 4 * v33 + 8 >= (unsigned int)v36 || v33 >= v35 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v71, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v71);
            sub_233E40((__int64)v71);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v37 = (unsigned int *)sub_186B300(v19 - 1, v36);
          v19 = v37 + 2;
          *v37 = (3 * v33 + 1) >> 1;
          v38 = v37[1];
          *(_QWORD *)&v75 = v19;
          v34 = (unsigned int *)v19 + v38;
        }
      }
      else
      {
        v55 = (_QWORD *)sub_186B270(0x10u);
        v19 = v55 + 1;
        *v55 = 2;
        v33 = 0;
        *(_QWORD *)&v75 = v55 + 1;
        v34 = (unsigned int *)(v55 + 1);
      }
      *v34 = v33;
      ++*((_DWORD *)v19 - 1);
      v21 = *((_QWORD **)&v75 + 1);
      if ( *((_QWORD *)&v75 + 1) )
      {
        v22 = *(unsigned int *)(*((_QWORD *)&v75 + 1) - 4LL);
        if ( (_DWORD)v22 == *(_DWORD *)(*((_QWORD *)&v75 + 1) - 8LL) )
        {
          v49 = (unsigned int)(3 * v22 + 1) >> 1;
          v50 = 4 * v49 + 8;
          v51 = v49;
          if ( 4 * (int)v22 + 8 >= (unsigned int)v50 || (unsigned int)v22 >= v49 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v71, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v71);
            sub_233E40((__int64)v71);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v52 = (unsigned int *)sub_186B300((void *)(*((_QWORD *)&v75 + 1) - 8LL), v50);
          v21 = v52 + 2;
          *v52 = v51;
          v53 = v52[1];
          *((_QWORD *)&v75 + 1) = v21;
          v23 = (_DWORD *)v21 + v53;
        }
        else
        {
          v23 = (_DWORD *)(*((_QWORD *)&v75 + 1) + 4 * v22);
        }
      }
      else
      {
        v54 = (_QWORD *)sub_186B270(0x10u);
        v21 = v54 + 1;
        *v54 = 2;
        *((_QWORD *)&v75 + 1) = v54 + 1;
        v23 = v54 + 1;
      }
      *v23 = 1;
      ++*((_DWORD *)v21 - 1);
      v24 = v76;
      if ( v76 )
      {
        v25 = *((unsigned int *)v76 - 1);
        if ( (_DWORD)v25 == *((_DWORD *)v76 - 2) )
        {
          v44 = (unsigned int)(3 * v25 + 1) >> 1;
          v45 = 4 * v44 + 8;
          v46 = v44;
          if ( 4 * (int)v25 + 8 >= (unsigned int)v45 || (unsigned int)v25 >= v44 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v71, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v71);
            sub_233E40((__int64)v71);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v47 = (unsigned int *)sub_186B300(v76 - 1, v45);
          v24 = v47 + 2;
          *v47 = v46;
          v48 = v47[1];
          v76 = v24;
          v26 = (unsigned int *)v24 + v48;
        }
        else
        {
          v26 = (unsigned int *)v76 + v25;
        }
      }
      else
      {
        v57 = (_QWORD *)sub_186B270(0x10u);
        v24 = v57 + 1;
        *v57 = 2;
        v76 = v57 + 1;
        v26 = (unsigned int *)(v57 + 1);
      }
      *v26 = v33;
      v27 = (_QWORD *)v74.m128i_i64[1];
      ++*((_DWORD *)v24 - 1);
      v28 = (_QWORD *)*v27;
      if ( !*v27 )
        break;
      v29 = *((_DWORD *)v28 - 1);
      if ( v29 != *((_DWORD *)v28 - 2) )
      {
        v30 = v29;
        v31 = v29 + 1;
        v32 = &v28[v30];
        goto LABEL_14;
      }
      v39 = (3 * v29 + 1) >> 1;
      v40 = 8 * v39 + 8;
      if ( 8 * v29 + 8 >= (unsigned int)v40 || v29 >= v39 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v71, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v71);
        sub_233E40((__int64)v71);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = (unsigned int *)sub_186B300(v28 - 1, v40);
      v42 = v41[1];
      ++v20;
      *v27 = v41 + 2;
      *v41 = v39;
      *(_QWORD *)&v41[2 * v42 + 2] = v77;
      v41[1] = v42 + 1;
      if ( v20 == v18 )
        goto LABEL_24;
LABEL_15:
      v19 = (_QWORD *)v75;
    }
    v56 = (_QWORD *)sub_186B270(0x18u);
    v28 = v56 + 1;
    *v56 = 2;
    v31 = 1;
    *v27 = v28;
    v32 = v28;
LABEL_14:
    ++v20;
    *v32 = v77;
    *((_DWORD *)v28 - 1) = v31;
    if ( v20 == v18 )
      goto LABEL_24;
    goto LABEL_15;
  }
LABEL_24:
  sub_4F1700(v68, v69, a3, (__int64)v63, (__int64)v64);
  if ( v76 )
    sub_186B220(v76 - 1);
  if ( *((_QWORD *)&v75 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v75 + 1) - 8LL));
  if ( (_QWORD)v75 )
    sub_186B220((void *)(v75 - 8));
  result = sub_180C0E0(v70);
  if ( *((_QWORD *)&v72 + 1) )
    result = sub_186B220((void *)(*((_QWORD *)&v72 + 1) - 8LL));
  if ( (_QWORD)v72 )
    return sub_186B220((void *)(v72 - 8));
  return result;
}

