__int64 __fastcall sub_4EE440(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // r12
  _QWORD *v6; // rax
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  _QWORD *v9; // r13
  size_t v10; // rdx
  unsigned __int32 v11; // r14d
  unsigned int v12; // r15d
  int v13; // eax
  unsigned int v14; // r15d
  _QWORD *v15; // rax
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rsi
  unsigned int v19; // r13d
  int v20; // eax
  unsigned int v22; // r8d
  size_t v23; // rsi
  unsigned int v24; // r13d
  unsigned int *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  unsigned int v28; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v29[11]; // [rsp+20h] [rbp-58h] BYREF

  *(_QWORD *)a1 = qword_1C665B0;
  v6 = (_QWORD *)*a3;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v6
    && (v7 = _mm_loadl_epi64((const __m128i *)(v6 - 1)),
        v8 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8),
        v9 = (_QWORD *)*a3,
        *(_QWORD *)(a1 + 16) = v8 + 1,
        *v8 = v7.m128i_i64[0],
        v9) )
  {
    v10 = 8LL * *((unsigned int *)v9 - 1);
    if ( v10 <= 8 )
    {
      if ( v10 == 8 )
        v8[1] = *v9;
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 8);
    }
    else
    {
      memmove(v8 + 1, v9, v10);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 8);
    }
    v11 = 0;
    v12 = 0;
    *(_QWORD *)a1 = &off_1C4FC58;
    do
    {
      if ( v12 >= *((_DWORD *)v9 - 1) )
        break;
      v13 = sub_4ED1A0(a2, v9[v12]);
      v9 = (_QWORD *)*a3;
      v11 += v13;
      ++v12;
    }
    while ( *a3 );
  }
  else
  {
    v11 = 0;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 8);
    *(_QWORD *)a1 = &off_1C4FC58;
  }
  *(_QWORD *)(a1 + 32) = sub_4EC660(a2, v11);
  v14 = 0;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  *(_QWORD *)(a1 + 48) = 0x800000000LL;
  v15 = (_QWORD *)*a3;
  *(_QWORD *)(a1 + 120) = 0;
  v28 = 0;
  if ( v15 )
  {
    do
    {
      if ( v14 >= *((_DWORD *)v15 - 1) )
        break;
      v16 = *(_DWORD **)(a1 + 120);
      if ( v16 )
      {
        v17 = (unsigned int)*(v16 - 1);
        v18 = &v16[v17];
        if ( (_DWORD)v17 == *(v16 - 2) )
        {
          v22 = (unsigned int)(3 * v17 + 1) >> 1;
          v23 = 4 * v22 + 8;
          v24 = v22;
          if ( 4 * (int)v17 + 8 >= (unsigned int)v23 || (unsigned int)v17 >= v22 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v29, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v29);
            sub_233E40((__int64)v29);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v25 = (unsigned int *)sub_186B300(v16 - 2, v23);
          v16 = v25 + 2;
          *v25 = v24;
          v26 = v25[1];
          *(_QWORD *)(a1 + 120) = v16;
          v18 = &v16[v26];
          v15 = (_QWORD *)*a3;
        }
      }
      else
      {
        v27 = (_QWORD *)sub_186B270(0x10u);
        v16 = v27 + 1;
        *v27 = 2;
        v15 = (_QWORD *)*a3;
        *(_QWORD *)(a1 + 120) = v16;
        v18 = v16;
      }
      v19 = v28;
      *v18 = v28;
      ++*(v16 - 1);
      v20 = sub_4ED1A0(a2, v15[v14++]);
      v28 = v19 + v20;
      v15 = (_QWORD *)*a3;
    }
    while ( *a3 );
  }
  return sub_4EE3A0((_QWORD *)(a1 + 120), &v28);
}

