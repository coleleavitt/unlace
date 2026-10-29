void __fastcall sub_5E3020(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  char **exception; // rbp
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r13
  int v11; // r8d
  int v12; // r9d
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // r8
  int v19; // edi
  unsigned int v20; // r12d
  __int64 v21; // r15
  __m128i *v22; // rbx
  unsigned int v23; // r10d
  __int64 v24; // r8
  __m128i *v25; // r13
  int v26; // esi
  __int64 v27; // r10
  __m128i *v28; // r9
  __m128i *v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rsi
  __m128i *v38; // rax
  __m128i *v39; // rdx
  const __m128i *v40; // rcx
  __m128i *v41; // r11
  __int64 v42; // rax
  __m128i *v43; // rdx
  __m128i *v44; // rax
  __m128i v45; // xmm0
  _QWORD *v46; // rax
  unsigned int v47; // [rsp+10h] [rbp-88h]
  _QWORD v48[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v49[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = a3;
  sub_5E23F0(v48, a1, a3, a4, a5);
  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 )
    v47 = *(_DWORD *)(v9 - 4);
  else
    v47 = 0;
  v10 = v48[0];
  sub_62A000(*(_QWORD *)(a1 + 48), v48[0]);
  v13 = *(_QWORD **)(a1 + 56);
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 == *((_DWORD *)v13 - 2) )
    {
      v33 = (3 * v14 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v34 || v14 >= v33 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v35 = (unsigned int *)sub_186B300(v13 - 1, v34);
      v36 = v35[1];
      v13 = v35 + 2;
      *v35 = v33;
      *(_QWORD *)(a1 + 56) = v35 + 2;
      LODWORD(v35) = v36;
      v17 = &v13[v36];
      v16 = (_DWORD)v35 + 1;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v13[v15];
    }
  }
  else
  {
    v46 = (_QWORD *)sub_186B270(0x18u);
    v13 = v46 + 1;
    *v46 = 2;
    v16 = 1;
    *(_QWORD *)(a1 + 56) = v13;
    v17 = v13;
  }
  *v17 = v10;
  *((_DWORD *)v13 - 1) = v16;
  sub_62F7F0(*(_DWORD *)(a1 + 24) + 656, v8, v48[0], (_DWORD)v17, v11, v12);
  v18 = *(unsigned int *)(a1 + 176);
  v19 = *(_DWORD *)(a1 + 184);
  v20 = 2 * v18;
  v21 = *(_QWORD *)(*(_QWORD *)(v48[0] + 40LL) + 16LL);
  if ( 3 * (int)v18 < (unsigned int)(4 * (v19 + *(_DWORD *)(a1 + 180))) )
  {
    v38 = (__m128i *)sub_186B270(16LL * v20);
    v24 = 16LL * v20;
    v22 = v38;
    v39 = &v38[(unsigned __int64)v24 / 0x10];
    if ( v20 )
    {
      do
      {
        v38->m128i_i64[0] = 0;
        ++v38;
        v38[-1].m128i_i32[2] = 0;
      }
      while ( v38 != v39 );
    }
    v40 = *(const __m128i **)(a1 + 168);
    v23 = v20 - 1;
    v25 = &v22[(unsigned __int64)v24 / 0x10];
    v41 = (__m128i *)&v40[*(unsigned int *)(a1 + 176)];
    if ( v40 != v41 )
    {
      do
      {
        while ( v40->m128i_i64[0] <= 1uLL )
        {
          if ( v41 == ++v40 )
            goto LABEL_41;
        }
        v42 = 16LL * (*(_DWORD *)(v40->m128i_i64[0] + 12) & v23);
        v43 = &v22[(unsigned __int64)v42 / 0x10];
        if ( v24 == v42 )
        {
LABEL_45:
          if ( v22 == v43 )
          {
LABEL_53:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v44 = v22;
          while ( v44->m128i_i64[0] )
          {
            if ( v43 == ++v44 )
              goto LABEL_53;
          }
        }
        else
        {
          v44 = &v22[(unsigned __int64)v42 / 0x10];
          while ( v44->m128i_i64[0] )
          {
            if ( v25 == ++v44 )
              goto LABEL_45;
          }
        }
        v45 = _mm_loadu_si128(v40++);
        *v44 = v45;
      }
      while ( v41 != v40 );
LABEL_41:
      v41 = *(__m128i **)(a1 + 168);
    }
    if ( v41 )
    {
      sub_186B220(v41);
      v24 = 16LL * v20;
      v23 = v20 - 1;
    }
    *(_QWORD *)(a1 + 168) = v22;
    v19 = 0;
    *(_DWORD *)(a1 + 176) = v20;
    *(_DWORD *)(a1 + 184) = 0;
  }
  else
  {
    v22 = *(__m128i **)(a1 + 168);
    v23 = v18 - 1;
    v24 = 16 * v18;
    v25 = &v22[(unsigned __int64)v24 / 0x10];
  }
  v26 = *(_DWORD *)(v21 + 12);
  v27 = 16LL * (v26 & v23);
  v28 = &v22[(unsigned __int64)v27 / 0x10];
  if ( v27 != v24 )
  {
    v29 = &v22[(unsigned __int64)v27 / 0x10];
    v30 = nullptr;
    while ( 1 )
    {
      v31 = v29->m128i_i64[0];
      if ( v29->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v31 + 12) == v26 && v21 == v31 )
        {
          v30 = (__int64 *)v29;
          goto LABEL_27;
        }
      }
      else
      {
        if ( !v31 )
        {
          if ( v30 )
            goto LABEL_51;
          v30 = (__int64 *)v29;
          goto LABEL_52;
        }
        v30 = (__int64 *)v29;
      }
      if ( ++v29 == v25 )
        goto LABEL_19;
    }
  }
  v30 = nullptr;
  while ( 1 )
  {
LABEL_19:
    if ( v28 == v22 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v32 = v22->m128i_i64[0];
    if ( v22->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v32 + 12) == v26 && v21 == v32 )
    {
      v30 = (__int64 *)v22;
      goto LABEL_27;
    }
LABEL_18:
    ++v22;
  }
  if ( v32 )
  {
    v30 = (__int64 *)v22;
    goto LABEL_18;
  }
  if ( v30 )
LABEL_51:
    *(_DWORD *)(a1 + 184) = v19 - 1;
  else
    v30 = (__int64 *)v22;
LABEL_52:
  *v30 = v21;
  *((_DWORD *)v30 + 2) = 0;
  ++*(_DWORD *)(a1 + 180);
LABEL_27:
  ++*((_DWORD *)v30 + 2);
  sub_5E0CF0(a1, a2, v47);
  v37 = v48[0];
  *(_BYTE *)(a1 + 64) = 1;
  if ( v37 )
    sub_62A410(v48[1], v37);
}

