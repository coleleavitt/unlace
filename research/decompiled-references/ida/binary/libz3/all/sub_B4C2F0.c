__int64 __fastcall sub_B4C2F0(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **exception; // rbp
  char **v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 result; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // r13d
  __int64 v12; // r13
  int v13; // eax
  unsigned int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r15
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rdi
  double **v27; // r12
  double **i; // r13
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // r12
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  _QWORD *v35; // rcx
  unsigned int v36; // eax
  const double *v37; // r12
  _QWORD *v38; // rdx
  unsigned int v39; // r12d
  unsigned int v40; // ecx
  unsigned int *v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // r13d
  unsigned int v44; // ecx
  unsigned int *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // [rsp+8h] [rbp-E0h]
  unsigned int v49; // [rsp+10h] [rbp-D8h]
  __int64 v50; // [rsp+10h] [rbp-D8h]
  __int64 v51; // [rsp+18h] [rbp-D0h]
  __int64 v52; // [rsp+28h] [rbp-C0h]
  __m128i v53; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v54[4]; // [rsp+50h] [rbp-98h] BYREF
  __int64 *v55; // [rsp+70h] [rbp-78h] BYREF
  char v56; // [rsp+78h] [rbp-70h]
  int v57; // [rsp+7Ch] [rbp-6Ch]
  __int64 v58; // [rsp+80h] [rbp-68h]
  int v59; // [rsp+88h] [rbp-60h]
  __int64 v60; // [rsp+90h] [rbp-58h]
  int v61; // [rsp+98h] [rbp-50h]
  __int64 v62; // [rsp+A0h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 232);
  v7 = *(_QWORD *)(v6 + 8LL * a3);
  result = *(_QWORD *)(v7 + 8);
  if ( !result )
    goto LABEL_22;
  v9 = *(_QWORD **)(v6 + 8LL * a2);
  v10 = v9[1];
  v48 = v9;
  if ( v10 )
  {
    if ( *(_QWORD *)(*(_QWORD *)result + 16LL) == *(_QWORD *)(*(_QWORD *)v10 + 16LL) )
      goto LABEL_22;
    v11 = *(_DWORD *)(a1 + 8);
    v51 = *(_QWORD *)(a1 + 16);
    v53 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)(unsigned __int64)result);
    sub_B72D60(&v55, v51, 0, 0, 1, &v53);
    v61 = v11;
    v62 = 0;
    v55 = (__int64 *)&off_1C57990;
    sub_B73430(&v55, v51);
    v12 = sub_180C100(v51 + 8400, 56);
    *(_BYTE *)(v12 + 8) = v56 & 3 | *(_BYTE *)(v12 + 8) & 0xFC;
    *(_DWORD *)(v12 + 12) = v57;
    *(_QWORD *)(v12 + 16) = v58;
    *(_DWORD *)(v12 + 24) = v59;
    *(_QWORD *)(v12 + 32) = v60;
    *(_QWORD *)v12 = qword_1C6E7C8;
    v13 = v61;
    *(_QWORD *)(v12 + 48) = 0;
    *(_DWORD *)(v12 + 40) = v13;
    if ( !v62 )
    {
      *(_QWORD *)v12 = &off_1C57990;
      goto LABEL_15;
    }
    v14 = *(_DWORD *)(v62 - 4);
    v49 = *(_DWORD *)(v62 - 8);
    v15 = sub_186B270(16LL * v49 + 8) + 8;
    *(_QWORD *)(v15 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v49), _mm_cvtsi32_si128(v14)).m128i_u64[0];
    *(_QWORD *)(v12 + 48) = v15;
    v16 = v62;
    v52 = v15;
    if ( !v62 || (v17 = v15, v50 = v62 + 16LL * *(unsigned int *)(v62 - 4), v62 == v50) )
    {
      *(_QWORD *)v12 = &off_1C57990;
    }
    else
    {
      do
      {
        sub_15D0E50(v17, v16);
        v16 += 16;
        v17 += 16;
      }
      while ( v16 != v50 );
      v52 = *(_QWORD *)(v12 + 48);
      *(_QWORD *)v12 = &off_1C57990;
      if ( !v52 )
        goto LABEL_15;
    }
    if ( *(_DWORD *)(v52 - 4) )
    {
      v18 = *(_QWORD **)(v51 + 8600);
      if ( v18 )
      {
        v19 = *((_DWORD *)v18 - 1);
        if ( v19 == *((_DWORD *)v18 - 2) )
        {
          v39 = (3 * v19 + 1) >> 1;
          v40 = 8 * v39 + 8;
          if ( 8 * v19 + 8 >= v40 || v19 >= v39 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v54, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v54);
            sub_233E40((__int64)v54);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v41 = (unsigned int *)sub_186B300(v18 - 1, v40);
          v42 = v41[1];
          v18 = v41 + 2;
          *(_QWORD *)(v51 + 8600) = v41 + 2;
          *v41 = v39;
          LODWORD(v41) = v42;
          v22 = &v18[v42];
          v21 = (_DWORD)v41 + 1;
        }
        else
        {
          v20 = v19;
          v21 = v19 + 1;
          v22 = &v18[v20];
        }
      }
      else
      {
        v47 = (_QWORD *)sub_186B270(0x18u);
        *v47 = 2;
        v18 = v47 + 1;
        *(_QWORD *)(v51 + 8600) = v47 + 1;
        v22 = v47 + 1;
        v21 = 1;
      }
      *v22 = v12;
      *((_DWORD *)v18 - 1) = v21;
    }
LABEL_15:
    v54[0] = v12 | 3;
    sub_8E8670(v51, v54, -2);
    v23 = v62;
    v55 = qword_1C6E7C8;
    if ( v62 )
    {
      v24 = *(unsigned int *)(v62 - 4);
      if ( (_DWORD)v24 )
      {
        v25 = v62 + 16 * v24;
        do
        {
          v26 = v23;
          v23 += 16;
          sub_15D0DF0(v26);
        }
        while ( v23 != v25 );
        v23 = v62;
      }
      sub_186B220((void *)(v23 - 8));
    }
    result = (__int64)v48;
    if ( v48[1] )
      goto LABEL_22;
  }
  v29 = (_QWORD *)sub_180C100(a1 + 312, 16);
  v30 = *(_QWORD **)(a1 + 296);
  v31 = v29;
  *v29 = off_1C57390;
  v29[1] = v48 + 1;
  if ( v30 )
  {
    v32 = *((_DWORD *)v30 - 1);
    if ( v32 == *((_DWORD *)v30 - 2) )
    {
      v43 = (3 * v32 + 1) >> 1;
      v44 = 8 * v43 + 8;
      if ( 8 * v32 + 8 >= v44 || v32 >= v43 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v55, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, &v55);
        sub_233E40((__int64)&v55);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v45 = (unsigned int *)sub_186B300(v30 - 1, v44);
      v46 = v45[1];
      v30 = v45 + 2;
      *v45 = v43;
      *(_QWORD *)(a1 + 296) = v45 + 2;
      LODWORD(v45) = v46;
      v35 = &v30[v46];
      v34 = (_DWORD)v45 + 1;
    }
    else
    {
      v33 = v32;
      v34 = v32 + 1;
      v35 = &v30[v33];
    }
  }
  else
  {
    v38 = (_QWORD *)sub_186B270(0x18u);
    *v38 = 2;
    v34 = 1;
    v30 = v38 + 1;
    *(_QWORD *)(a1 + 296) = v30;
    v35 = v30;
  }
  *v35 = v31;
  *((_DWORD *)v30 - 1) = v34;
  if ( *v48 )
  {
    if ( *(_DWORD *)(*v48 - 4LL) )
    {
      v36 = sub_15F0BF0(a1 + 56, *(_QWORD *)(**(_QWORD **)(v7 + 8) + 16LL));
      v37 = *(const double **)(*v48 + 8LL * v36);
      if ( v37 )
      {
        if ( (unsigned int)sub_8E81B0(*(_QWORD **)(a1 + 16), *(_QWORD **)(*v48 + 8LL * v36)) == -1 )
          return sub_B4A170(a1, *(_QWORD *)(v7 + 8), v37);
      }
    }
  }
  result = *(_QWORD *)(v7 + 8);
  v48[1] = result;
LABEL_22:
  v27 = *(double ***)v7;
  if ( *(_QWORD *)v7 )
  {
    result = *((unsigned int *)v27 - 1);
    for ( i = &v27[result]; i != v27; ++v27 )
    {
      if ( *v27 )
        result = sub_B4A4F0(a1, a2, *v27);
    }
  }
  return result;
}

