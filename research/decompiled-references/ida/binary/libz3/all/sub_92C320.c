__int64 __fastcall sub_92C320(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i *v17; // rax
  __m128i si128; // xmm0
  unsigned int v20; // ebp
  size_t v21; // rdi
  __int64 v22; // rax
  const __m128i *v23; // rdi
  _DWORD *v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // rdx
  const __m128i *v27; // rsi
  const __m128i *i; // rax
  __m128i v29; // xmm0
  _QWORD *v30; // rax
  char **exception; // rbx
  __int64 v32[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_921F40((_QWORD *)a1, 0);
  v2 = *(_QWORD *)(a1 + 176);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(_QWORD *)(a1 + 184);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = *(_QWORD **)(a1 + 192);
  if ( v4 )
    *((_DWORD *)v4 - 1) = 0;
  v5 = *(_QWORD **)(a1 + 200);
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = &v5[v6];
      do
      {
        v8 = *v5;
        if ( *v5 )
        {
          v9 = *(unsigned int *)(v8 - 4);
          if ( (_DWORD)v9 )
          {
            v10 = v8 + 24 * v9;
            do
            {
              while ( 1 )
              {
                v11 = *(_QWORD *)(v8 + 16);
                if ( !v11 )
                  break;
                v8 += 24;
                sub_186B220((void *)(v11 - 8));
                if ( v10 == v8 )
                  goto LABEL_15;
              }
              v8 += 24;
            }
            while ( v8 != v10 );
LABEL_15:
            v8 = *v5;
          }
          sub_186B220((void *)(v8 - 8));
        }
        ++v5;
      }
      while ( v5 != v7 );
      v5 = *(_QWORD **)(a1 + 200);
      v4 = *(_QWORD **)(a1 + 192);
    }
    *((_DWORD *)v5 - 1) = 0;
  }
  v12 = *(_QWORD *)(a1 + 208);
  if ( v12 )
    *(_DWORD *)(v12 - 4) = 0;
  v13 = *(_QWORD *)(a1 + 280);
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  v14 = *(_QWORD *)(a1 + 216);
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  v15 = *(_QWORD *)(a1 + 224);
  if ( v15 )
    *(_DWORD *)(v15 - 4) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  if ( v4 )
  {
    v16 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v16 == *((_DWORD *)v4 - 2) )
    {
      v20 = (unsigned int)(3 * v16 + 1) >> 1;
      v21 = 20 * v20 + 8;
      if ( 20 * (int)v16 + 8 >= (unsigned int)v21 || (unsigned int)v16 >= v20 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = sub_186B270(v21);
      v23 = *(const __m128i **)(a1 + 192);
      v24 = (_DWORD *)v22;
      v4 = (_QWORD *)(v22 + 8);
      if ( v23 )
      {
        v25 = v23[-1].m128i_u32[3];
        v26 = v4;
        v24[1] = v25;
        v27 = (const __m128i *)((char *)v23 + 20 * v25);
        for ( i = v23; v27 != i; *((_DWORD *)v26 - 1) = i[-1].m128i_i32[3] )
        {
          v29 = _mm_loadu_si128(i);
          i = (const __m128i *)((char *)i + 20);
          v26 = (_QWORD *)((char *)v26 + 20);
          *(__m128i *)((char *)v26 - 20) = v29;
        }
        sub_186B220(&v23[-1].m128i_u64[1]);
        v17 = (__m128i *)((char *)v4 + 20 * (unsigned int)v24[1]);
      }
      else
      {
        *(_DWORD *)(v22 + 4) = 0;
        v17 = (__m128i *)(v22 + 8);
      }
      *(_QWORD *)(a1 + 192) = v4;
      *v24 = v20;
    }
    else
    {
      v17 = (__m128i *)((char *)v4 + 20 * v16);
    }
  }
  else
  {
    v30 = (_QWORD *)sub_186B270(0x30u);
    *v30 = 2;
    v4 = v30 + 1;
    *(_QWORD *)(a1 + 192) = v30 + 1;
    v17 = (__m128i *)(v30 + 1);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6660);
  v17[1].m128i_i32[0] = -2;
  *v17 = si128;
  ++*((_DWORD *)v4 - 1);
  return sub_965AC0(a1);
}

