__m128i *__fastcall sub_B11E80(__m128i *a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rdx
  __int64 v17; // rdx
  unsigned int v18; // eax
  int v19; // edx
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // eax
  unsigned __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rbp
  __int64 v31; // r14
  void *v32; // r15
  __int64 v33; // rsi
  unsigned int v35; // edx
  size_t v36; // rsi
  unsigned int *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // [rsp+8h] [rbp-A0h]
  unsigned int v41; // [rsp+1Ch] [rbp-8Ch]
  __int64 v42; // [rsp+28h] [rbp-80h] BYREF
  __int64 v43[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v44[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46; // [rsp+58h] [rbp-50h]
  __int64 v47; // [rsp+60h] [rbp-48h] BYREF
  __int64 v48; // [rsp+68h] [rbp-40h]

  v43[0] = *(_QWORD *)(a2 + 24);
  sub_B0CA60(a2);
  v4 = *(_QWORD *)(a2 + 864);
  v5 = 0;
  v6 = 0;
  if ( v4 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= *(_DWORD *)(v4 - 4) )
        break;
      v8 = *(_DWORD *)(v4 + 4LL * v7);
      v9 = *(_QWORD *)(a2 + 856);
      v10 = 0;
      if ( v9 && v8 < *(_DWORD *)(v9 - 4) )
        v10 = *(_DWORD *)(v9 + 4LL * v8) >> 31;
      sub_B06250(v44, a2, v10 + 2 * v8);
      v11 = v44[0];
      v39 = v44[1];
      if ( v44[0] )
        ++*(_DWORD *)(v44[0] + 8LL);
      if ( v6 )
      {
        v12 = *(_DWORD *)(v6 - 4);
        if ( v12 == *(_DWORD *)(v6 - 8) )
        {
          v35 = (3 * v12 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v12 + 8 >= (unsigned int)v36 || v12 >= v35 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_B035D0(&v45, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v45);
            sub_233E40((__int64)&v45);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v41 = (3 * v12 + 1) >> 1;
          v37 = (unsigned int *)sub_186B300((void *)(v6 - 8), v36);
          v6 = (__int64)(v37 + 2);
          *v37 = v41;
          LODWORD(v37) = v37[1];
          v15 = (_QWORD *)(v6 + 8LL * (unsigned int)v37);
          v14 = (_DWORD)v37 + 1;
        }
        else
        {
          v13 = v12;
          v14 = v12 + 1;
          v15 = (_QWORD *)(v6 + 8 * v13);
        }
      }
      else
      {
        v38 = (_QWORD *)sub_186B270(0x18u);
        v15 = v38 + 1;
        *v38 = 2;
        v14 = 1;
        v6 = (__int64)v15;
      }
      *v15 = v11;
      *(_DWORD *)(v6 - 4) = v14;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 8))-- == 1 )
          sub_15D7BC0(v39, v11);
      }
      v17 = *(_QWORD *)(a2 + 856);
      v18 = 0;
      if ( v17 )
      {
        if ( v8 < *(_DWORD *)(v17 - 4) )
        {
          v19 = *(_DWORD *)(v17 + 4LL * v8);
          v18 = -v19;
          if ( v19 > 0 )
            v18 = v19;
        }
      }
      v45 = v18;
      v46 = 0;
      v47 = 1;
      v48 = 0;
      sub_182CBA0(qword_1C7F2C0, &v47);
      BYTE4(v47) &= ~1u;
      LODWORD(v47) = 1;
      if ( v5 )
      {
        v20 = *(unsigned int *)(v5 - 4);
        if ( (_DWORD)v20 != *(_DWORD *)(v5 - 8) )
          continue;
      }
      v42 = v5;
      sub_53D790(&v42);
      v5 = v42;
      v20 = *(unsigned int *)(v42 - 4);
      v21 = qword_1C7F2C0;
      ++v7;
      v22 = v5 + 32 * v20;
      *(_DWORD *)v22 = v45;
      *(_BYTE *)(v22 + 4) = BYTE4(v45) & 3 | *(_BYTE *)(v22 + 4) & 0xFC;
      v23 = v46;
      v46 = 0;
      *(_QWORD *)(v22 + 8) = v23;
      *(_DWORD *)(v22 + 16) = v47;
      *(_BYTE *)(v22 + 20) = BYTE4(v47) & 3 | *(_BYTE *)(v22 + 20) & 0xFC;
      v24 = v48;
      v48 = 0;
      *(_QWORD *)(v22 + 24) = v24;
      ++*(_DWORD *)(v5 - 4);
      sub_182CBA0(v21, &v45);
      sub_182CBA0(v21, &v47);
      v4 = *(_QWORD *)(a2 + 864);
    }
    while ( v4 );
  }
  v25 = *(_DWORD *)(a2 + 872);
  v46 = 0;
  BYTE4(v45) &= 0xFCu;
  v47 = 1;
  v48 = 0;
  LODWORD(v45) = v25;
  sub_182CBA0(qword_1C7F2C0, &v47);
  BYTE4(v47) &= ~1u;
  v26 = *(_QWORD *)(a2 + 24);
  LODWORD(v47) = 1;
  if ( v6 )
    v27 = *(unsigned int *)(v6 - 4);
  else
    v27 = 0;
  v28 = sub_1690D20(a2 + 712, v27, v5, v6, &v45);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)v26);
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  sub_25A130((char *)&v45);
  if ( v5 )
  {
    v29 = *(unsigned int *)(v5 - 4);
    if ( (_DWORD)v29 )
    {
      v30 = v5;
      v31 = v5 + 32 * v29;
      do
      {
        v32 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v30);
        v33 = v30 + 16;
        v30 += 32;
        sub_182CBA0(v32, v33);
      }
      while ( v31 != v30 );
    }
    sub_186B220((void *)(v5 - 8));
  }
  v43[1] = v6;
  sub_2334C0(v43);
  return a1;
}

