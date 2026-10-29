_QWORD *__fastcall Z3_model_get_sort_universe(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i *exception; // r15
  char *v4; // rax
  char v6; // r12
  __int64 **v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  _QWORD *v10; // rbx
  __int64 *v11; // r14
  __int64 *v12; // r13
  __int64 v13; // r15
  _DWORD *v14; // rdx
  __int64 v15; // rax
  unsigned int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  _QWORD *v20; // rsi
  unsigned int v21; // r8d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // [rsp+Ch] [rbp-5Ch]
  _QWORD v26[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29B700();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !(unsigned __int8)sub_13735C0(*(_QWORD *)(a2 + 24), a3) )
  {
    sub_24EA30(a1, 3u, nullptr);
    if ( !v6 )
      return nullptr;
    sub_2BB620(0);
    v10 = nullptr;
LABEL_23:
    byte_1C7EBA0 = 1;
    return v10;
  }
  v7 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 24) + 16LL))(
                     *(_QWORD *)(a2 + 24),
                     a3);
  v8 = sub_186B270(0x28u);
  v9 = *(_QWORD *)(a1 + 232);
  v10 = (_QWORD *)v8;
  sub_2518F0(v8, a1);
  v10[3] = v9;
  *v10 = &off_1C4CA20;
  v10[4] = 0;
  sub_24FBE0(a1, (__int64)v10);
  v11 = *v7;
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 != v12 )
    {
      v13 = *v11;
      v14 = (_DWORD *)v10[4];
      if ( *v11 )
        ++*(_DWORD *)(v13 + 8);
      if ( v14 )
        goto LABEL_12;
      v15 = sub_186B270(0x18u);
      v14 = (_DWORD *)(v15 + 8);
      *(_QWORD *)v15 = 2;
      ++v11;
      v10[4] = v15 + 8;
      *(_QWORD *)(v15 + 8) = v13;
      for ( *(_DWORD *)(v15 + 4) = 1; v12 != v11; *(v14 - 1) = v19 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          ++*(_DWORD *)(v13 + 8);
          v17 = *(v14 - 1);
          if ( v17 == *(v14 - 2) )
          {
LABEL_17:
            v21 = (3 * v17 + 1) >> 1;
            v22 = 8 * v21 + 8;
            if ( 8 * v17 + 8 >= (unsigned int)v22 || v17 >= v21 )
            {
              exception = (__m128i *)__cxa_allocate_exception(0x28u);
              v4 = (char *)operator new(0x2Bu);
              strcpy(v4, "Overflow encountered when expanding vector");
              exception->m128i_i64[1] = (__int64)v4;
              exception->m128i_i64[0] = (__int64)off_1C63128;
              v26[0] = &v27;
              exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
              v26[1] = 0;
              v27 = 0;
              sub_233E40((__int64)v26);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v25 = (3 * v17 + 1) >> 1;
            v23 = (unsigned int *)sub_186B300(v14 - 2, v22);
            v24 = v23[1];
            v14 = v23 + 2;
            v10[4] = v23 + 2;
            *v23 = v25;
            LODWORD(v23) = v24;
            v20 = &v14[2 * v24];
            v19 = (_DWORD)v23 + 1;
            goto LABEL_14;
          }
        }
        else
        {
LABEL_12:
          v17 = *(v14 - 1);
          if ( v17 == *(v14 - 2) )
            goto LABEL_17;
        }
        v18 = v17;
        v19 = v17 + 1;
        v20 = &v14[2 * v18];
LABEL_14:
        ++v11;
        *v20 = v13;
      }
    }
  }
  if ( v6 )
  {
    sub_2BB620(v10);
    goto LABEL_23;
  }
  return v10;
}

