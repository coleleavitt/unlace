__int64 __fastcall sub_C73A40(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  char *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  char *v8; // rsi
  __int64 v9; // rdx
  char *v10; // r8
  char *i; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  int v14; // eax
  unsigned int v15; // r14d
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  _BYTE *v22; // rax
  unsigned int v23; // edx
  __m128i *v24; // rbx
  int v25; // r10d
  __int64 v26; // rcx
  __m128i *v27; // r13
  int v28; // esi
  __int64 v29; // r10
  __m128i *v30; // rdi
  __m128i *v31; // rax
  __m128i *v32; // rcx
  __int64 v33; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // ebx
  unsigned int v38; // ecx
  unsigned int *v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // ebx
  unsigned int *v42; // rdx
  _DWORD *v43; // rax
  __int64 v44; // rdx
  __m128i *v45; // rax
  int v46; // r9d
  __m128i *v47; // r8
  const __m128i *v48; // r15
  __m128i *v49; // r11
  __int64 v50; // rax
  __m128i *v51; // rdx
  __m128i *v52; // rax
  _QWORD *v53; // rdx
  _QWORD *v54; // rax
  char **exception; // rbp
  __int64 v56; // rdx
  size_t v57; // [rsp+8h] [rbp-80h]
  int v58; // [rsp+8h] [rbp-80h]
  int v59; // [rsp+10h] [rbp-78h]
  size_t v60; // [rsp+10h] [rbp-78h]
  int v61; // [rsp+18h] [rbp-70h]
  __int64 v62[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(unsigned int *)(a1 + 584);
  v5 = *(char **)(a1 + 576);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = &v5[v4];
  v9 = 16LL * (v6 & v7);
  v10 = &v5[v9];
  if ( v9 != v4 )
  {
    for ( i = &v5[v9]; v8 != i; i += 16 )
    {
      v12 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v12 + 12) == v6 && a2 == v12 )
          return *((unsigned int *)i + 2);
      }
      else if ( !v12 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v10 != v5; v5 += 16 )
  {
    v35 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 > 1u )
    {
      if ( *(_DWORD *)(v35 + 12) == v6 && a2 == v35 )
      {
        i = v5;
        return *((unsigned int *)i + 2);
      }
    }
    else if ( !v35 )
    {
      break;
    }
  }
LABEL_8:
  v13 = *(_QWORD **)(a1 + 560);
  v14 = *(_DWORD *)(a2 + 8) + 1;
  if ( v13 )
  {
    v15 = *((_DWORD *)v13 - 1);
    *(_DWORD *)(a2 + 8) = v14;
    v16 = *((_DWORD *)v13 - 1);
    if ( v16 == *((_DWORD *)v13 - 2) )
    {
      v37 = (3 * v16 + 1) >> 1;
      v38 = 8 * v37 + 8;
      if ( 8 * v16 + 8 >= v38 || v16 >= v37 )
        goto LABEL_81;
      v39 = (unsigned int *)sub_186B300(v13 - 1, v38);
      v40 = v39[1];
      v13 = v39 + 2;
      *v39 = v37;
      *(_QWORD *)(a1 + 560) = v39 + 2;
      LODWORD(v39) = v40;
      v19 = &v13[v40];
      v18 = (_DWORD)v39 + 1;
    }
    else
    {
      v17 = v16;
      v18 = v16 + 1;
      v19 = &v13[v17];
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) = v14;
    v15 = 0;
    v53 = (_QWORD *)sub_186B270(0x18u);
    *v53 = 2;
    v18 = 1;
    v13 = v53 + 1;
    *(_QWORD *)(a1 + 560) = v13;
    v19 = v13;
  }
  *v19 = a2;
  *((_DWORD *)v13 - 1) = v18;
  v20 = *(_QWORD *)(a1 + 568);
  if ( !v20 )
  {
    v54 = (_QWORD *)sub_186B270(0xAu);
    *v54 = 2;
    v22 = v54 + 1;
    *(_QWORD *)(a1 + 568) = v22;
    goto LABEL_14;
  }
  v21 = *(unsigned int *)(v20 - 4);
  if ( (_DWORD)v21 == *(_DWORD *)(v20 - 8) )
  {
    v41 = (unsigned int)(3 * v21 + 1) >> 1;
    if ( (int)v21 + 8 < v41 + 8 && (unsigned int)v21 < v41 )
    {
      v42 = (unsigned int *)sub_186B300((void *)(v20 - 8), v41 + 8);
      v43 = v42 + 2;
      *v42 = v41;
      v44 = v42[1];
      *(_QWORD *)(a1 + 568) = v43;
      v22 = (char *)v43 + v44;
      goto LABEL_14;
    }
LABEL_81:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_161886(v62, "Overflow encountered when expanding vector", v56);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v62);
    sub_233E40((__int64)v62);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v22 = (_BYTE *)(v21 + v20);
LABEL_14:
  *v22 = 0;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 568) - 4LL);
  v23 = *(_DWORD *)(a1 + 584);
  if ( 3 * v23 < 4 * (*(_DWORD *)(a1 + 588) + *(_DWORD *)(a1 + 592)) )
  {
    v59 = 2 * v23;
    v57 = 32LL * v23;
    v45 = (__m128i *)sub_186B270(v57);
    v26 = v57;
    v46 = v59;
    v24 = v45;
    v47 = &v45[v57 / 0x10];
    if ( v59 )
    {
      do
      {
        v45->m128i_i64[0] = 0;
        ++v45;
        v45[-1].m128i_i32[2] = 0;
      }
      while ( v45 != v47 );
    }
    v48 = *(const __m128i **)(a1 + 576);
    v25 = v59 - 1;
    v27 = v47;
    v49 = (__m128i *)&v48[*(unsigned int *)(a1 + 584)];
    if ( v48 != v49 )
    {
      do
      {
        if ( v48->m128i_i64[0] > 1uLL )
        {
          v50 = 16LL * (*(_DWORD *)(v48->m128i_i64[0] + 12) & (unsigned int)v25);
          v51 = &v24[(unsigned __int64)v50 / 0x10];
          if ( v57 == v50 )
          {
LABEL_60:
            if ( v24 == v51 )
            {
LABEL_72:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v52 = v24;
            while ( v52->m128i_i64[0] )
            {
              if ( v51 == ++v52 )
                goto LABEL_72;
            }
          }
          else
          {
            v52 = &v24[(unsigned __int64)v50 / 0x10];
            while ( v52->m128i_i64[0] )
            {
              if ( v47 == ++v52 )
                goto LABEL_60;
            }
          }
          *v52 = _mm_loadu_si128(v48);
        }
        ++v48;
      }
      while ( v49 != v48 );
      v49 = *(__m128i **)(a1 + 576);
    }
    if ( v49 )
    {
      v61 = v59;
      v60 = v57;
      v58 = v46 - 1;
      sub_186B220(v49);
      v46 = v61;
      v26 = v60;
      v25 = v58;
    }
    *(_QWORD *)(a1 + 576) = v24;
    *(_DWORD *)(a1 + 584) = v46;
    *(_DWORD *)(a1 + 592) = 0;
  }
  else
  {
    v24 = *(__m128i **)(a1 + 576);
    v25 = v23 - 1;
    v26 = 16LL * v23;
    v27 = (__m128i *)((char *)v24 + v26);
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
          v31->m128i_i32[2] = v15;
          return v15;
        }
      }
      else
      {
        if ( !v33 )
        {
          if ( v32 )
            goto LABEL_70;
          v32 = v31;
          goto LABEL_71;
        }
        v32 = v31;
      }
      if ( ++v31 == v27 )
        goto LABEL_38;
    }
  }
  v32 = nullptr;
  while ( 1 )
  {
LABEL_38:
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
      v24->m128i_i32[2] = v15;
      return v15;
    }
LABEL_37:
    ++v24;
  }
  if ( v36 )
  {
    v32 = v24;
    goto LABEL_37;
  }
  if ( v32 )
LABEL_70:
    --*(_DWORD *)(a1 + 592);
  else
    v32 = v24;
LABEL_71:
  v32->m128i_i64[0] = a2;
  v32->m128i_i32[2] = v15;
  ++*(_DWORD *)(a1 + 588);
  return v15;
}

