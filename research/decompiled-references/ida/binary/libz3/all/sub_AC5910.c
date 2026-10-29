__int64 __fastcall sub_AC5910(__int64 a1, unsigned int *a2)
{
  unsigned int *v4; // rdx
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r12
  int v15; // eax
  unsigned int v16; // r15d
  unsigned int v17; // ebx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // r13
  unsigned int v21; // ebp
  __int64 v22; // rbp
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rdi
  unsigned int v28; // edx
  size_t v29; // rsi
  unsigned int v30; // r15d
  unsigned int *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rax
  char **exception; // rbx
  __int64 v37; // rdx
  __int64 v38; // [rsp+0h] [rbp-C8h]
  __int64 v39; // [rsp+20h] [rbp-A8h]
  unsigned int v40; // [rsp+30h] [rbp-98h]
  _QWORD *v41; // [rsp+30h] [rbp-98h]
  unsigned int v42; // [rsp+38h] [rbp-90h]
  unsigned int v43; // [rsp+3Ch] [rbp-8Ch]
  __int64 v44; // [rsp+40h] [rbp-88h] BYREF
  __int64 v45; // [rsp+48h] [rbp-80h]
  __int64 v46; // [rsp+50h] [rbp-78h] BYREF
  __int64 v47; // [rsp+58h] [rbp-70h]
  __int64 v48; // [rsp+60h] [rbp-68h] BYREF
  __int64 v49; // [rsp+68h] [rbp-60h]
  __int64 v50[11]; // [rsp+70h] [rbp-58h] BYREF

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v4 = *((unsigned int **)a2 + 4);
  v44 = *(_QWORD *)(a1 + 24);
  v5 = *v4;
  v46 = v44;
  v6 = sub_AB6F20(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8 * v5));
  v45 = 0;
  sub_AB6A00(a1, v6, (__int64)&v44);
  v38 = v45;
  v7 = sub_AB6F20(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **((unsigned int **)a2 + 5)));
  v47 = 0;
  sub_AB6A00(a1, v7, (__int64)&v46);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8832LL);
  if ( v8 )
  {
    v9 = *a2;
    if ( (unsigned int)v9 < *(_DWORD *)(v8 - 4) && *(_DWORD *)(v8 + 4 * v9) != 0x7FFFFFFF )
      goto LABEL_4;
  }
  v11 = a1 + 120;
  v48 = 0;
  v49 = *(_QWORD *)(a1 + 24);
  if ( v38 )
  {
    v12 = *(unsigned int *)(v38 - 4);
    v13 = v38;
  }
  else
  {
    v12 = 0;
    v13 = 0;
  }
  sub_FD8930(v11, v12, v13, v47, &v48);
  v14 = v48;
  v39 = *(_QWORD *)(a1 + 24);
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  sub_B6F780(*(_QWORD *)(a1 + 16));
  v43 = sub_B645B0(*(_QWORD *)(a1 + 16), v14);
  v15 = sub_B67520(*(_QWORD *)(a1 + 16), a2);
  v16 = 2 * v15;
  v17 = v15 & 0x7FFFFFFF;
  v42 = 2 * v15;
  sub_8F1CE0(*(_QWORD *)(a1 + 16), v15 & 0x7FFFFFFF, *(_DWORD *)(a1 + 8));
  v18 = (_QWORD *)sub_180C100(a1 + 408, 16);
  v19 = *(_QWORD **)(a1 + 536);
  v20 = v18;
  *v18 = off_1C56670;
  v18[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), _mm_cvtsi32_si128(v43)).m128i_u64[0];
  if ( !v19 )
  {
    v21 = v17 + 1;
    v35 = (_QWORD *)sub_186B270(0x18u);
    v19 = v35 + 1;
    *v35 = 2;
    *(_QWORD *)(a1 + 536) = v35 + 1;
    v40 = 0;
    goto LABEL_20;
  }
  v21 = v17 + 1;
  v40 = *((_DWORD *)v19 - 1);
  if ( v17 >= v40 )
  {
LABEL_20:
    while ( 1 )
    {
      v32 = *((_DWORD *)v19 - 2);
      if ( v32 >= v21 )
        break;
      v28 = (3 * v32 + 1) >> 1;
      v29 = 8 * v28 + 8;
      v30 = v28;
      if ( 8 * v32 + 8 >= (unsigned int)v29 || v32 >= v28 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v50, "Overflow encountered when expanding vector", v37);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v31 = (unsigned int *)sub_186B300(v19 - 1, v29);
      v19 = v31 + 2;
      *v31 = v30;
      *(_QWORD *)(a1 + 536) = v31 + 2;
    }
    *((_DWORD *)v19 - 1) = v21;
    v33 = 8LL * v21;
    v34 = 8LL * v40;
    if ( v34 != v33 )
    {
      v41 = v19;
      memset(&v19[(unsigned __int64)v34 / 8], 0, v33 - v34);
      v19 = v41;
    }
  }
  v19[v17] = v20;
  v22 = sub_180C100(a1 + 408, 24);
  *(_QWORD *)v22 = off_1C566C0;
  v23 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(v22 + 8) = a1;
  *(_DWORD *)(v22 + 16) = v17;
  if ( !v23 || (v24 = *(_DWORD *)(v23 - 4), v24 == *(_DWORD *)(v23 - 8)) )
  {
    sub_6B6AB0((unsigned int **)(a1 + 392));
    v23 = *(_QWORD *)(a1 + 392);
    v24 = *(_DWORD *)(v23 - 4);
  }
  v25 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v23 + 8LL * v24) = v22;
  *(_DWORD *)(v23 - 4) = v24 + 1;
  v26 = sub_8E7030(v25);
  v27 = *(_QWORD *)(a1 + 16);
  if ( !v26 || !*(_BYTE *)(*(_QWORD *)(v27 + 112) + 430LL) )
  {
    sub_B6A470(v27, *(unsigned int *)(a1 + 8), v42, v43 ^ 1, 0, 0);
    sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v42 ^ 1, v43, 0, 0);
  }
  sub_AB3AA0(v14, v39);
  sub_AB3AA0(v48, v49);
LABEL_4:
  sub_2334C0(&v46);
  return sub_2334C0(&v44);
}

