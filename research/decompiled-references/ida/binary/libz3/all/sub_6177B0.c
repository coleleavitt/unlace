__int64 __fastcall sub_6177B0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v5; // rax
  __int64 *v6; // rcx
  int v7; // edi
  unsigned int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 *i; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // r14
  __m128i *v24; // rbx
  int v25; // r9d
  __int64 v26; // rcx
  __int64 *v27; // r13
  int v28; // esi
  __int64 v29; // r9
  __m128i *v30; // rdi
  __m128i *v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // ebx
  unsigned int v38; // ecx
  unsigned int *v39; // rax
  __int64 v40; // rcx
  __m128i *v41; // rax
  int v42; // r10d
  __m128i *v43; // r8
  const __m128i *v44; // r15
  __m128i *v45; // r11
  __int64 v46; // rax
  __m128i *v47; // rdx
  __m128i *v48; // rax
  _QWORD *v49; // rdx
  size_t v50; // [rsp+8h] [rbp-90h]
  int v51; // [rsp+8h] [rbp-90h]
  int v52; // [rsp+10h] [rbp-88h]
  size_t v53; // [rsp+10h] [rbp-88h]
  int v54; // [rsp+18h] [rbp-80h]
  __int64 v55[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = *(unsigned int *)(a1 + 184);
  v6 = *(__int64 **)(a1 + 176);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = v5 - 1;
  v5 *= 16;
  v9 = (__int64 *)((char *)v6 + v5);
  v10 = 16LL * (v7 & v8);
  v11 = &v6[(unsigned __int64)v10 / 8];
  if ( v10 != v5 )
  {
    for ( i = &v6[(unsigned __int64)v10 / 8]; v9 != i; i += 2 )
    {
      v13 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v7 && a2 == v13 )
          return i[1];
      }
      else if ( !v13 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v11 != v6; v6 += 2 )
  {
    v35 = *v6;
    if ( (unsigned __int64)*v6 > 1 )
    {
      if ( *(_DWORD *)(v35 + 12) == v7 && a2 == v35 )
      {
        i = v6;
        return i[1];
      }
    }
    else if ( !v35 )
    {
      break;
    }
  }
LABEL_8:
  v14 = *(_QWORD **)(a1 + 208);
  ++*(_DWORD *)(a2 + 8);
  if ( v14 )
  {
    v15 = *((_DWORD *)v14 - 1);
    if ( v15 == *((_DWORD *)v14 - 2) )
    {
      v37 = (3 * v15 + 1) >> 1;
      v38 = 8 * v37 + 8;
      if ( 8 * v15 + 8 >= v38 || v15 >= v37 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v55, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v55);
        sub_233E40((__int64)v55);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v14 - 1, v38);
      v40 = v39[1];
      v14 = v39 + 2;
      *v39 = v37;
      *(_QWORD *)(a1 + 208) = v39 + 2;
      LODWORD(v39) = v40;
      v18 = &v14[v40];
      v17 = (_DWORD)v39 + 1;
    }
    else
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = &v14[v16];
    }
  }
  else
  {
    v49 = (_QWORD *)sub_186B270(0x18u);
    *v49 = 2;
    v17 = 1;
    v14 = v49 + 1;
    *(_QWORD *)(a1 + 208) = v14;
    v18 = v14;
  }
  *v18 = a2;
  v19 = *(_QWORD *)(a1 + 24);
  *((_DWORD *)v14 - 1) = v17;
  v20 = sub_15D1F10(a2);
  v21 = sub_15DB5C0(v19, *(unsigned int *)(a1 + 168), v20);
  v22 = *(_DWORD *)(a1 + 184);
  ++*(_DWORD *)(a1 + 168);
  v23 = v21;
  if ( 3 * v22 < 4 * (*(_DWORD *)(a1 + 188) + *(_DWORD *)(a1 + 192)) )
  {
    v52 = 2 * v22;
    v50 = 32LL * v22;
    v41 = (__m128i *)sub_186B270(v50);
    v26 = v50;
    v42 = v52;
    v24 = v41;
    v43 = &v41[v50 / 0x10];
    if ( v52 )
    {
      if ( (v50 & 0x10) == 0 || (*v41 = 0, ++v41, v41 != v43) )
      {
        do
        {
          *v41 = 0;
          v41 += 2;
          v41[-1] = 0;
        }
        while ( v41 != v43 );
      }
    }
    v44 = *(const __m128i **)(a1 + 176);
    v25 = v52 - 1;
    v27 = (__int64 *)v43;
    v45 = (__m128i *)&v44[*(unsigned int *)(a1 + 184)];
    if ( v44 != v45 )
    {
      do
      {
        if ( v44->m128i_i64[0] > 1uLL )
        {
          v46 = 16LL * (*(_DWORD *)(v44->m128i_i64[0] + 12) & (unsigned int)v25);
          v47 = &v24[(unsigned __int64)v46 / 0x10];
          if ( v50 == v46 )
          {
LABEL_56:
            if ( v24 == v47 )
            {
LABEL_68:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v48 = v24;
            while ( v48->m128i_i64[0] )
            {
              if ( v47 == ++v48 )
                goto LABEL_68;
            }
          }
          else
          {
            v48 = &v24[(unsigned __int64)v46 / 0x10];
            while ( v48->m128i_i64[0] )
            {
              if ( v43 == ++v48 )
                goto LABEL_56;
            }
          }
          *v48 = _mm_loadu_si128(v44);
        }
        ++v44;
      }
      while ( v45 != v44 );
      v45 = *(__m128i **)(a1 + 176);
    }
    if ( v45 )
    {
      v54 = v52;
      v53 = v50;
      v51 = v42 - 1;
      sub_186B220(v45);
      v42 = v54;
      v26 = v53;
      v25 = v51;
    }
    *(_QWORD *)(a1 + 176) = v24;
    *(_DWORD *)(a1 + 184) = v42;
    *(_DWORD *)(a1 + 192) = 0;
  }
  else
  {
    v24 = *(__m128i **)(a1 + 176);
    v25 = v22 - 1;
    v26 = 16LL * v22;
    v27 = (__int64 *)((char *)v24->m128i_i64 + v26);
  }
  v28 = *(_DWORD *)(a2 + 12);
  v29 = 16LL * (v28 & (unsigned int)v25);
  v30 = &v24[(unsigned __int64)v29 / 0x10];
  if ( v29 != v26 )
  {
    v31 = &v24[(unsigned __int64)v29 / 0x10];
    v32 = nullptr;
    while ( 1 )
    {
      v33 = v31->m128i_i64[0];
      if ( v31->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v33 + 12) == v28 && a2 == v33 )
        {
          v31->m128i_i64[0] = a2;
          v31->m128i_i64[1] = v23;
          return v23;
        }
      }
      else
      {
        if ( !v33 )
        {
          if ( v32 )
            goto LABEL_66;
          v32 = (__int64 *)v31;
          goto LABEL_67;
        }
        v32 = (__int64 *)v31;
      }
      if ( ++v31 == (__m128i *)v27 )
        goto LABEL_35;
    }
  }
  v32 = nullptr;
  while ( 1 )
  {
LABEL_35:
    if ( v30 == v24 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v36 = v24->m128i_i64[0];
    if ( v24->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v36 + 12) == v28 && a2 == v36 )
    {
      v24->m128i_i64[0] = a2;
      v24->m128i_i64[1] = v23;
      return v23;
    }
LABEL_34:
    ++v24;
  }
  if ( v36 )
  {
    v32 = (__int64 *)v24;
    goto LABEL_34;
  }
  if ( v32 )
LABEL_66:
    --*(_DWORD *)(a1 + 192);
  else
    v32 = (__int64 *)v24;
LABEL_67:
  *v32 = a2;
  v32[1] = v23;
  ++*(_DWORD *)(a1 + 188);
  return v23;
}

