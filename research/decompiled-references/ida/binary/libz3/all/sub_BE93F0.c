__int64 __fastcall sub_BE93F0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  int v4; // r12d
  __m128i *v6; // rbx
  __int64 v7; // rdi
  int v8; // r8d
  __int64 v9; // rdi
  __m128i *v10; // rcx
  __int64 v11; // r8
  __m128i *v12; // rsi
  __m128i *i; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  _QWORD *v19; // rax
  unsigned int v20; // edx
  int v21; // r9d
  __int64 v22; // r8
  __m128i *v23; // r14
  __int64 v24; // r9
  __m128i *v25; // rdi
  __m128i *v26; // rax
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdi
  int v31; // r8d
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __m128i *j; // rax
  __int64 v36; // rdx
  unsigned int v37; // ebx
  unsigned int v38; // eax
  unsigned int *v39; // rax
  __int64 v40; // rax
  int v41; // ecx
  __int64 v43; // rax
  int v44; // r10d
  __m128i *v45; // rax
  __m128i *v46; // rdx
  const __m128i *v47; // r15
  __m128i *v48; // r11
  __int64 v49; // rdx
  __m128i *v50; // rsi
  __m128i *v51; // rdx
  _QWORD *v52; // rax
  size_t v53; // [rsp+0h] [rbp-98h]
  int v54; // [rsp+0h] [rbp-98h]
  int v55; // [rsp+8h] [rbp-90h]
  int v56; // [rsp+10h] [rbp-88h]
  size_t v57; // [rsp+10h] [rbp-88h]
  __int64 v58[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = a2;
  v6 = *(__m128i **)(a1 + 32);
  v7 = *(unsigned int *)(a1 + 40);
  v8 = v7 - 1;
  v9 = 16 * v7;
  v10 = &v6[(unsigned __int64)v9 / 0x10];
  v11 = 16LL * ((unsigned int)a2 & v8);
  v12 = &v6[(unsigned __int64)v11 / 0x10];
  if ( v11 != v9 )
  {
    for ( i = &v6[(unsigned __int64)v11 / 0x10]; v10 != i; ++i )
    {
      v14 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( v4 == (_DWORD)v14 && a2 == v14 )
          goto LABEL_36;
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v6 != v12 )
  {
    for ( j = v6; v12 != j; ++j )
    {
      v36 = j->m128i_i64[0];
      if ( j->m128i_i64[0] > 1uLL )
      {
        if ( v4 == (_DWORD)v36 && a2 == v36 )
          goto LABEL_36;
      }
      else if ( !v36 )
      {
        break;
      }
    }
  }
LABEL_8:
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v15 = *(_QWORD **)(a1 + 64);
  if ( v15 )
  {
    v16 = *((_DWORD *)v15 - 1);
    if ( v16 == *((_DWORD *)v15 - 2) )
    {
      v37 = (3 * v16 + 1) >> 1;
      v38 = 8 * v37 + 8;
      if ( 8 * v16 + 8 >= v38 || v16 >= v37 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v58, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v58);
        sub_233E40((__int64)v58);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v15 - 1, v38);
      v15 = v39 + 2;
      *v39 = v37;
      v40 = v39[1];
      *(_QWORD *)(a1 + 64) = v15;
      v41 = v40;
      v19 = &v15[v40];
      v18 = v41 + 1;
    }
    else
    {
      v17 = v16;
      v18 = v16 + 1;
      v19 = &v15[v17];
    }
  }
  else
  {
    v52 = (_QWORD *)sub_186B270(0x18u);
    v18 = 1;
    *v52 = 2;
    v15 = v52 + 1;
    *(_QWORD *)(a1 + 64) = v52 + 1;
    v19 = v52 + 1;
  }
  *v19 = a2;
  *((_DWORD *)v15 - 1) = v18;
  v20 = *(_DWORD *)(a1 + 40);
  if ( 3 * v20 < 4 * (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48)) )
  {
    v56 = v18;
    v55 = 2 * v20;
    v53 = 32LL * v20;
    v43 = sub_186B270(v53);
    v44 = v55;
    v22 = v53;
    v6 = (__m128i *)v43;
    v18 = v56;
    v45 = (__m128i *)(v43 + v53);
    v46 = v6;
    if ( v55 )
    {
      if ( (((_BYTE)v45 - (_BYTE)v6) & 0x10) == 0 || (v46 = v6 + 1, v6->m128i_i64[0] = 0, &v6[1] != v45) )
      {
        do
        {
          v46->m128i_i64[0] = 0;
          v46 += 2;
          v46[-1].m128i_i64[0] = 0;
        }
        while ( v46 != v45 );
      }
    }
    v47 = *(const __m128i **)(a1 + 32);
    v21 = v55 - 1;
    v23 = v45;
    v48 = (__m128i *)&v47[*(unsigned int *)(a1 + 40)];
    if ( v47 != v48 )
    {
      do
      {
        if ( v47->m128i_i64[0] > 1uLL )
        {
          v49 = 16LL * (v21 & (unsigned int)v47->m128i_i64[0]);
          v50 = &v6[(unsigned __int64)v49 / 0x10];
          if ( v53 == v49 )
          {
LABEL_78:
            if ( v6 == v50 )
            {
LABEL_87:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v51 = v6;
            while ( v51->m128i_i64[0] )
            {
              if ( v50 == ++v51 )
                goto LABEL_87;
            }
          }
          else
          {
            v51 = &v6[(unsigned __int64)v49 / 0x10];
            while ( v51->m128i_i64[0] )
            {
              if ( v45 == ++v51 )
                goto LABEL_78;
            }
          }
          *v51 = _mm_loadu_si128(v47);
        }
        ++v47;
      }
      while ( v48 != v47 );
      v48 = *(__m128i **)(a1 + 32);
    }
    if ( v48 )
    {
      v57 = v53;
      v54 = v18;
      sub_186B220(v48);
      v44 = v55;
      v22 = v57;
      v21 = v55 - 1;
      v18 = v54;
    }
    *(_QWORD *)(a1 + 32) = v6;
    *(_DWORD *)(a1 + 40) = v44;
    *(_DWORD *)(a1 + 48) = 0;
  }
  else
  {
    v6 = *(__m128i **)(a1 + 32);
    v21 = v20 - 1;
    v22 = 16LL * v20;
    v23 = (__m128i *)((char *)v6 + v22);
  }
  v24 = 16LL * ((unsigned int)a2 & v21);
  v25 = &v6[(unsigned __int64)v24 / 0x10];
  if ( v24 == v22 )
  {
    v27 = nullptr;
LABEL_23:
    if ( v25 != v6 )
    {
      v26 = v6;
      do
      {
        while ( 1 )
        {
          v29 = v26->m128i_i64[0];
          if ( v26->m128i_i64[0] <= 1uLL )
            break;
          if ( v4 == (_DWORD)v29 && a2 == v29 )
            goto LABEL_88;
          if ( v25 == ++v26 )
            goto LABEL_31;
        }
        if ( !v29 )
          goto LABEL_32;
        v27 = (__int64 *)v26++;
      }
      while ( v25 != v26 );
    }
LABEL_31:
    sub_1872CE0("");
    sub_1873130(114, 405);
  }
  v26 = &v6[(unsigned __int64)v24 / 0x10];
  v27 = nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      v28 = v26->m128i_i64[0];
      if ( v26->m128i_i64[0] <= 1uLL )
        break;
      if ( v4 == (_DWORD)v28 && a2 == v28 )
      {
LABEL_88:
        v26->m128i_i64[0] = a2;
        v26->m128i_i32[2] = v18;
        goto LABEL_35;
      }
      if ( ++v26 == v23 )
        goto LABEL_23;
    }
    if ( !v28 )
      break;
    v27 = (__int64 *)v26++;
    if ( v26 == v23 )
      goto LABEL_23;
  }
LABEL_32:
  if ( v27 )
    --*(_DWORD *)(a1 + 48);
  else
    v27 = (__int64 *)v26;
  *v27 = a2;
  *((_DWORD *)v27 + 2) = v18;
  ++*(_DWORD *)(a1 + 44);
LABEL_35:
  v30 = *(unsigned int *)(a1 + 40);
  v31 = v30 - 1;
  v9 = 16 * v30;
  v10 = &v6[(unsigned __int64)v9 / 0x10];
  v11 = 16LL * ((unsigned int)a2 & v31);
  v12 = &v6[(unsigned __int64)v11 / 0x10];
LABEL_36:
  if ( v11 == v9 )
  {
LABEL_44:
    while ( v6 != v12 )
    {
      v34 = v6->m128i_i64[0];
      if ( v6->m128i_i64[0] > 1uLL )
      {
        if ( a2 == v34 && v4 == (_DWORD)v34 )
        {
          v32 = (__int64 *)v6;
          return *((unsigned int *)v32 + 2);
        }
      }
      else if ( !v34 )
      {
        break;
      }
      ++v6;
    }
LABEL_92:
    BUG();
  }
  v32 = (__int64 *)v12;
  while ( 1 )
  {
    while ( 1 )
    {
      v33 = *v32;
      if ( (unsigned __int64)*v32 > 1 )
        break;
      if ( !v33 )
        goto LABEL_92;
      v32 += 2;
      if ( v32 == (__int64 *)v10 )
        goto LABEL_44;
    }
    if ( a2 == v33 && v4 == (_DWORD)v33 )
      return *((unsigned int *)v32 + 2);
    v32 += 2;
    if ( v32 == (__int64 *)v10 )
      goto LABEL_44;
  }
}

