__int64 __fastcall sub_63DAD0(__int64 a1, __int64 a2, double a3)
{
  char **v3; // rbp
  char **exception; // rbp
  _QWORD *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 *v11; // rdx
  __int64 v12; // r8
  int v13; // edi
  __int64 v14; // r14
  __m128i *v15; // rbx
  unsigned int v16; // r9d
  __int64 v17; // r8
  __int64 *v18; // rbp
  int v19; // ecx
  __int64 v20; // r9
  __m128i *v21; // rsi
  __m128i *v22; // rax
  __int64 *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ebx
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rdx
  __m128i *v30; // rax
  int v31; // r10d
  __m128i *v32; // rcx
  const __m128i *v33; // r12
  __m128i *v34; // r11
  __int64 v35; // rax
  __m128i *v36; // rdx
  __m128i *v37; // rax
  __m128i v38; // xmm0
  __int64 **v39; // rax
  __int64 **v40; // rbp
  _QWORD *v41; // rax
  __int64 *v42; // rdi
  __int64 result; // rax
  __int64 *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rdx
  unsigned int v47; // ebx
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // rax
  size_t v52; // [rsp+8h] [rbp-90h]
  unsigned int v53; // [rsp+8h] [rbp-90h]
  int v54; // [rsp+10h] [rbp-88h]
  size_t v55; // [rsp+10h] [rbp-88h]
  int v56; // [rsp+18h] [rbp-80h]
  __int64 v57[11]; // [rsp+40h] [rbp-58h] BYREF

  sub_62A000(*(_QWORD *)(a1 + 16), a2);
  v7 = *(_QWORD **)(a1 + 24);
  if ( v7 )
  {
    v8 = *((_DWORD *)v7 - 1);
    if ( v8 == *((_DWORD *)v7 - 2) )
    {
      v26 = (3 * v8 + 1) >> 1;
      v27 = 8 * v26 + 8;
      if ( 8 * v8 + 8 >= (unsigned int)v27 || v8 >= v26 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v57, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v57);
        sub_233E40((__int64)v57);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v28 = (unsigned int *)sub_186B300(v7 - 1, v27);
      v29 = v28[1];
      v7 = v28 + 2;
      *v28 = v26;
      *(_QWORD *)(a1 + 24) = v28 + 2;
      LODWORD(v28) = v29;
      v11 = &v7[v29];
      v10 = (_DWORD)v28 + 1;
    }
    else
    {
      v9 = v8;
      v10 = v8 + 1;
      v11 = &v7[v9];
    }
  }
  else
  {
    v51 = (_QWORD *)sub_186B270(0x18u);
    v7 = v51 + 1;
    *v51 = 2;
    v10 = 1;
    *(_QWORD *)(a1 + 24) = v7;
    v11 = v7;
  }
  *v11 = a2;
  *((_DWORD *)v7 - 1) = v10;
  v12 = *(unsigned int *)(a1 + 40);
  v13 = *(_DWORD *)(a1 + 48);
  v14 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
  if ( 3 * (int)v12 < (unsigned int)(4 * (v13 + *(_DWORD *)(a1 + 44))) )
  {
    v54 = 2 * v12;
    v52 = 16LL * (unsigned int)(2 * v12);
    v30 = (__m128i *)sub_186B270(v52);
    v17 = v52;
    v31 = v54;
    v15 = v30;
    v32 = &v30[v52 / 0x10];
    if ( v54 )
    {
      if ( (v52 & 0x10) == 0 || (*v30 = 0, ++v30, v32 != v30) )
      {
        do
        {
          *v30 = 0;
          v30 += 2;
          v30[-1] = 0;
        }
        while ( v32 != v30 );
      }
    }
    v33 = *(const __m128i **)(a1 + 32);
    v16 = v54 - 1;
    v18 = (__int64 *)v32;
    v34 = (__m128i *)&v33[*(unsigned int *)(a1 + 40)];
    if ( v33 != v34 )
    {
      do
      {
        while ( v33->m128i_i64[0] <= 1uLL )
        {
          if ( v34 == ++v33 )
            goto LABEL_37;
        }
        v35 = 16LL * (*(_DWORD *)(v33->m128i_i64[0] + 12) & v16);
        v36 = &v15[(unsigned __int64)v35 / 0x10];
        if ( v52 == v35 )
        {
LABEL_41:
          if ( v15 == v36 )
          {
LABEL_52:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v37 = v15;
          while ( v37->m128i_i64[0] )
          {
            if ( v36 == ++v37 )
              goto LABEL_52;
          }
        }
        else
        {
          v37 = &v15[(unsigned __int64)v35 / 0x10];
          while ( v37->m128i_i64[0] )
          {
            if ( v32 == ++v37 )
              goto LABEL_41;
          }
        }
        v38 = _mm_loadu_si128(v33++);
        *v37 = v38;
      }
      while ( v34 != v33 );
LABEL_37:
      v34 = *(__m128i **)(a1 + 32);
    }
    if ( v34 )
    {
      v56 = v54;
      v55 = v52;
      v53 = v31 - 1;
      sub_186B220(v34);
      v31 = v56;
      v17 = v55;
      v16 = v53;
    }
    *(_QWORD *)(a1 + 32) = v15;
    v13 = 0;
    *(_DWORD *)(a1 + 40) = v31;
    *(_DWORD *)(a1 + 48) = 0;
  }
  else
  {
    v15 = *(__m128i **)(a1 + 32);
    v16 = v12 - 1;
    v17 = 16 * v12;
    v18 = (__int64 *)((char *)v15->m128i_i64 + v17);
  }
  v19 = *(_DWORD *)(v14 + 12);
  v20 = 16LL * (v19 & v16);
  v21 = &v15[(unsigned __int64)v20 / 0x10];
  if ( v20 != v17 )
  {
    v22 = &v15[(unsigned __int64)v20 / 0x10];
    v23 = nullptr;
    while ( 1 )
    {
      v24 = v22->m128i_i64[0];
      if ( v22->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v24 + 12) == v19 && v14 == v24 )
        {
          v40 = (__int64 **)v22->m128i_i64[1];
          goto LABEL_56;
        }
      }
      else
      {
        if ( !v24 )
        {
          if ( v23 )
            goto LABEL_47;
          v23 = (__int64 *)v22;
          goto LABEL_48;
        }
        v23 = (__int64 *)v22;
      }
      if ( ++v22 == (__m128i *)v18 )
        goto LABEL_17;
    }
  }
  v23 = nullptr;
  while ( 1 )
  {
LABEL_17:
    if ( v21 == v15 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v25 = v15->m128i_i64[0];
    if ( v15->m128i_i64[0] <= 1uLL )
    {
      if ( v25 )
      {
        v23 = (__int64 *)v15;
        goto LABEL_16;
      }
      if ( v23 )
LABEL_47:
        *(_DWORD *)(a1 + 48) = v13 - 1;
      else
        v23 = (__int64 *)v15;
LABEL_48:
      *v23 = v14;
      v23[1] = 0;
      ++*(_DWORD *)(a1 + 44);
      goto LABEL_49;
    }
    if ( *(_DWORD *)(v25 + 12) == v19 && v14 == v25 )
      break;
LABEL_16:
    ++v15;
  }
  v40 = (__int64 **)v15->m128i_i64[1];
  v22 = v15;
LABEL_56:
  if ( !v40 )
  {
    v23 = (__int64 *)v22;
LABEL_49:
    v39 = (__int64 **)sub_186B270(8u);
    *v39 = nullptr;
    v40 = v39;
    v23[1] = (__int64)v39;
LABEL_50:
    v41 = (_QWORD *)sub_186B270(0x18u);
    v42 = v41 + 1;
    *v41 = 2;
    result = 1;
    *v40 = v42;
    v44 = v42;
    goto LABEL_51;
  }
  v42 = *v40;
  if ( !*v40 )
    goto LABEL_50;
  v45 = *((_DWORD *)v42 - 1);
  if ( v45 == *((_DWORD *)v42 - 2) )
  {
    v47 = (3 * v45 + 1) >> 1;
    v48 = 8 * v47 + 8;
    if ( 8 * v45 + 8 >= (unsigned int)v48 || v45 >= v47 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v57, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v57);
      sub_233E40((__int64)v57);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v49 = (unsigned int *)sub_186B300(v42 - 1, v48);
    v50 = v49[1];
    v42 = (__int64 *)(v49 + 2);
    *v40 = (__int64 *)(v49 + 2);
    *v49 = v47;
    LODWORD(v49) = v50;
    v44 = &v42[v50];
    result = (unsigned int)((_DWORD)v49 + 1);
  }
  else
  {
    v46 = v45;
    result = v45 + 1;
    v44 = &v42[v46];
  }
LABEL_51:
  *v44 = a2;
  *((_DWORD *)v42 - 1) = result;
  return result;
}

