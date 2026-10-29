unsigned __int64 __fastcall sub_5071D0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 *v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  _QWORD *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  _QWORD *v15; // r13
  __m128i v16; // xmm0
  __int64 v17; // rax
  _DWORD *v18; // rsi
  size_t v19; // rdx
  __int64 v20; // rdi
  __m128i v21; // xmm0
  _DWORD *v22; // rsi
  size_t v23; // rdx
  unsigned int v24; // r13d
  _QWORD *v25; // r14
  unsigned int v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned int v29; // ecx
  __int64 v30; // rsi
  int v31; // r8d
  __int64 v32; // rcx
  unsigned int v33; // esi
  _QWORD *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  int *v37; // rax
  int *v38; // rdx
  int v39; // ecx
  __int64 v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // r15
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 *v45; // rcx
  unsigned int v46; // r12d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rdx
  char **exception; // rbx
  __int64 v52; // [rsp+8h] [rbp-70h]
  __int64 v53[11]; // [rsp+20h] [rbp-58h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( (_BYTE)result )
    return sub_506680(a1);
  v5 = *(__int64 **)(a1 + 48);
  *(_BYTE *)(a1 + 56) = 0;
  v6 = 0;
  v7 = *v5;
  if ( *v5 )
  {
    while ( v6 < *(_DWORD *)(v7 - 4) )
    {
      v8 = v6;
      do
      {
        v9 = v8;
        v10 = v8;
        v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 120) + 16LL) + 4LL * v8);
      }
      while ( v10 != v8 );
      v11 = (_QWORD *)(**(_QWORD **)(a2 + 48) + 16 * v9);
      v12 = v6;
      do
      {
        v13 = v12;
        v14 = v12;
        v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) + 4LL * v12);
      }
      while ( v14 != v12 );
      v15 = (_QWORD *)(v7 + 16 * v13);
      if ( v15 != v11 )
      {
        if ( *v15 )
          sub_186B220((void *)(*v15 - 8LL));
        if ( *v11 )
        {
          v16 = _mm_loadl_epi64((const __m128i *)(*v11 - 8LL));
          v52 = v16.m128i_i64[0];
          v17 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v16) + 8);
          *(_QWORD *)v17 = v52;
          *v15 = v17 + 8;
          v18 = (_DWORD *)*v11;
          if ( *v11 )
          {
            v19 = 4LL * (unsigned int)*(v18 - 1);
            if ( v19 <= 4 )
            {
              if ( v19 == 4 )
                *(_DWORD *)(v17 + 8) = *v18;
            }
            else
            {
              memmove((void *)(v17 + 8), v18, v19);
            }
          }
        }
        else
        {
          *v15 = 0;
        }
      }
      result = (unsigned __int64)(v11 + 1);
      if ( v15 + 1 != v11 + 1 )
      {
        v20 = v15[1];
        if ( v20 )
          sub_186B220((void *)(v20 - 8));
        result = v11[1];
        if ( result )
        {
          v21 = _mm_loadl_epi64((const __m128i *)(result - 8));
          v52 = v21.m128i_i64[0];
          result = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v21) + 8);
          *(_QWORD *)result = v52;
          v15[1] = result + 8;
          v22 = (_DWORD *)v11[1];
          if ( v22 )
          {
            v23 = 4LL * (unsigned int)*(v22 - 1);
            if ( v23 <= 4 )
            {
              if ( v23 == 4 )
                *(_DWORD *)(result + 8) = *v22;
            }
            else
            {
              result = (unsigned __int64)memmove((void *)(result + 8), v22, v23);
            }
          }
        }
        else
        {
          v15[1] = 0;
        }
      }
      v5 = *(__int64 **)(a1 + 48);
      ++v6;
      v7 = *v5;
      if ( !*v5 )
        return result;
    }
    v24 = 0;
    do
    {
      if ( v24 >= *(_DWORD *)(v7 - 4) )
        break;
      v25 = *(_QWORD **)(a1 + 120);
      v26 = v24;
      v27 = v25[2];
      do
      {
        v28 = v26;
        v29 = v26;
        v26 = *(_DWORD *)(v27 + 4LL * v26);
      }
      while ( v29 != v26 );
      LODWORD(result) = v24;
      do
      {
        v30 = (unsigned int)result;
        v31 = result;
        result = *(unsigned int *)(v27 + 4LL * (unsigned int)result);
      }
      while ( v31 != (_DWORD)result );
      if ( v29 != (_DWORD)result )
      {
        v32 = v25[3];
        if ( *(_DWORD *)(v32 + 4 * v28) >= *(_DWORD *)(v32 + 4 * v30) )
        {
          v33 = v26;
          v26 = result;
          result = v33;
        }
        v34 = (_QWORD *)v25[1];
        *(_DWORD *)(v27 + 4LL * v26) = result;
        v35 = 4 * result;
        *(_DWORD *)(v32 + v35) += *(_DWORD *)(v32 + 4LL * v26);
        v36 = v25[4];
        v37 = (int *)(v36 + v35);
        v38 = (int *)(v36 + 4LL * v26);
        v39 = *v38;
        *v38 = *v37;
        *v37 = v39;
        v40 = sub_180C100(v34 + 2, 24);
        v41 = (_QWORD *)*v34;
        v42 = v40;
        *(_QWORD *)v40 = off_1C4F500;
        *(_QWORD *)(v40 + 8) = v25;
        *(_DWORD *)(v40 + 16) = v26;
        if ( v41 )
        {
          v43 = *((_DWORD *)v41 - 1);
          if ( v43 == *((_DWORD *)v41 - 2) )
          {
            v46 = (3 * v43 + 1) >> 1;
            v47 = 8 * v46 + 8;
            if ( 8 * v43 + 8 >= (unsigned int)v47 || v43 >= v46 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v53, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v53);
              sub_233E40((__int64)v53);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v48 = (unsigned int *)sub_186B300(v41 - 1, v47);
            v49 = v48[1];
            v41 = v48 + 2;
            *v34 = v48 + 2;
            *v48 = v46;
            LODWORD(v48) = v49;
            v45 = &v41[v49];
            result = (unsigned int)((_DWORD)v48 + 1);
          }
          else
          {
            v44 = v43;
            result = v43 + 1;
            v45 = &v41[v44];
          }
        }
        else
        {
          v50 = (_QWORD *)sub_186B270(0x18u);
          *v50 = 2;
          result = 1;
          v41 = v50 + 1;
          *v34 = v41;
          v45 = v41;
        }
        *v45 = v42;
        v5 = *(__int64 **)(a1 + 48);
        *((_DWORD *)v41 - 1) = result;
      }
      v7 = *v5;
      ++v24;
    }
    while ( *v5 );
  }
  return result;
}

