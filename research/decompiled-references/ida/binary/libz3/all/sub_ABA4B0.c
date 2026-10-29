__int64 __fastcall sub_ABA4B0(__int64 a1, __int64 a2)
{
  char **v2; // r12
  __int64 v3; // rdx
  char **exception; // r12
  __int64 v5; // rdx
  unsigned int *v8; // rdx
  __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rbp
  int v16; // eax
  unsigned int v17; // r14d
  unsigned int v18; // ebx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // r13
  unsigned int v22; // r12d
  __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // r12
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rcx
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdi
  unsigned int v35; // edx
  size_t v36; // rsi
  unsigned int v37; // r14d
  unsigned int *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r14
  _QWORD *v42; // rax
  unsigned int v43; // ebx
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // [rsp+0h] [rbp-C8h]
  unsigned int v49; // [rsp+28h] [rbp-A0h]
  _QWORD *v50; // [rsp+28h] [rbp-A0h]
  unsigned int v51; // [rsp+30h] [rbp-98h]
  unsigned int v52; // [rsp+34h] [rbp-94h]
  __int64 v53; // [rsp+38h] [rbp-90h]
  __int64 v54; // [rsp+40h] [rbp-88h] BYREF
  __int64 v55; // [rsp+48h] [rbp-80h]
  __int64 v56; // [rsp+50h] [rbp-78h] BYREF
  __int64 v57; // [rsp+58h] [rbp-70h]
  __int64 v58; // [rsp+60h] [rbp-68h]
  __int64 v59; // [rsp+68h] [rbp-60h]
  __int64 v60[11]; // [rsp+70h] [rbp-58h] BYREF

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v8 = *(unsigned int **)(a2 + 32);
  v54 = *(_QWORD *)(a1 + 24);
  v9 = *v8;
  v56 = v54;
  v10 = sub_AB6F20(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8 * v9));
  v55 = 0;
  sub_AB6A00(a1, v10, (__int64)&v54);
  v48 = v55;
  v11 = sub_AB6F20(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **(unsigned int **)(a2 + 40)));
  v57 = 0;
  sub_AB6A00(a1, v11, (__int64)&v56);
  v12 = a1 + 120;
  v58 = 0;
  v59 = *(_QWORD *)(a1 + 24);
  if ( v48 )
  {
    v13 = *(unsigned int *)(v48 - 4);
    v14 = v48;
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  sub_FE2C00(v12, v13, v14, v57);
  v15 = v58;
  v53 = *(_QWORD *)(a1 + 24);
  if ( v58 )
    ++*(_DWORD *)(v58 + 8);
  sub_B6F780(*(_QWORD *)(a1 + 16));
  v52 = sub_B645B0(*(_QWORD *)(a1 + 16), v15);
  v16 = sub_B67520(*(_QWORD *)(a1 + 16), a2);
  v17 = 2 * v16;
  v18 = v16 & 0x7FFFFFFF;
  v51 = 2 * v16;
  sub_8F1CE0(*(_QWORD *)(a1 + 16), v16 & 0x7FFFFFFF, *(_DWORD *)(a1 + 8));
  v19 = (_QWORD *)sub_180C100(a1 + 408, 16);
  v20 = *(_QWORD **)(a1 + 536);
  v21 = v19;
  *v19 = off_1C56670;
  v19[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v52)).m128i_u64[0];
  if ( v20 )
  {
    v22 = v18 + 1;
    v49 = *((_DWORD *)v20 - 1);
    if ( v18 < v49 )
      goto LABEL_7;
  }
  else
  {
    v22 = v18 + 1;
    v42 = (_QWORD *)sub_186B270(0x18u);
    v20 = v42 + 1;
    *v42 = 2;
    *(_QWORD *)(a1 + 536) = v42 + 1;
    v49 = 0;
  }
  while ( 1 )
  {
    v39 = *((_DWORD *)v20 - 2);
    if ( v39 >= v22 )
      break;
    v35 = (3 * v39 + 1) >> 1;
    v36 = 8 * v35 + 8;
    v37 = v35;
    if ( 8 * v39 + 8 >= (unsigned int)v36 || v39 >= v35 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_139F3A(v60, "Overflow encountered when expanding vector", v5);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v60);
      sub_233E40((__int64)v60);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v38 = (unsigned int *)sub_186B300(v20 - 1, v36);
    v20 = v38 + 2;
    *v38 = v37;
    *(_QWORD *)(a1 + 536) = v38 + 2;
  }
  *((_DWORD *)v20 - 1) = v22;
  v40 = 8LL * v22;
  v41 = 8LL * v49;
  if ( v41 != v40 )
  {
    v50 = v20;
    memset(&v20[(unsigned __int64)v41 / 8], 0, v40 - v41);
    v20 = v50;
  }
LABEL_7:
  v20[v18] = v21;
  v23 = sub_180C100(a1 + 408, 24);
  v24 = *(_QWORD **)(a1 + 392);
  v25 = v23;
  *(_QWORD *)v23 = off_1C566C0;
  *(_QWORD *)(v23 + 8) = a1;
  *(_DWORD *)(v23 + 16) = v18;
  if ( v24 )
  {
    v26 = *((_DWORD *)v24 - 1);
    if ( v26 == *((_DWORD *)v24 - 2) )
    {
      v43 = (3 * v26 + 1) >> 1;
      v44 = 8 * v43 + 8;
      if ( 8 * v26 + 8 >= (unsigned int)v44 || v26 >= v43 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v60, "Overflow encountered when expanding vector", v3);
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v60);
        sub_233E40((__int64)v60);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v45 = (unsigned int *)sub_186B300(v24 - 1, v44);
      v46 = v45[1];
      v24 = v45 + 2;
      *v45 = v43;
      *(_QWORD *)(a1 + 392) = v45 + 2;
      LODWORD(v45) = v46;
      v29 = &v24[v46];
      v28 = (_DWORD)v45 + 1;
    }
    else
    {
      v27 = v26;
      v28 = v26 + 1;
      v29 = &v24[v27];
    }
  }
  else
  {
    v47 = (_QWORD *)sub_186B270(0x18u);
    v24 = v47 + 1;
    *v47 = 2;
    v28 = 1;
    *(_QWORD *)(a1 + 392) = v24;
    v29 = v24;
  }
  *v29 = v25;
  v30 = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v24 - 1) = v28;
  v31 = sub_8E7030(v30);
  v32 = *(_QWORD *)(a1 + 16);
  if ( !v31 || !*(_BYTE *)(*(_QWORD *)(v32 + 112) + 430LL) )
  {
    sub_B6A470(v32, *(unsigned int *)(a1 + 8), v51, v52 ^ 1, 0, 0);
    sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v51 ^ 1, v52, 0, 0);
  }
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 8))-- == 1 )
      sub_15D7BC0(v53, v15);
  }
  sub_AB3AA0(v58, v59);
  sub_2334C0(&v56);
  return sub_2334C0(&v54);
}

