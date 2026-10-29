char __fastcall Z3_ast_vector_push(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i *exception; // r15
  char *v4; // rax
  char v7; // bl
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  unsigned int v13; // r15d
  size_t v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD v18[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h] BYREF

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
    sub_29E9B0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v8 = *(_QWORD **)(a2 + 32);
  if ( !v8 )
  {
    v11 = sub_186B270(0x18u);
    v8 = (_QWORD *)(v11 + 8);
    *(_QWORD *)v11 = 2;
    LODWORD(v11) = 1;
    *(_QWORD *)(a2 + 32) = v8;
    v12 = v8;
LABEL_8:
    *v12 = a3;
    *((_DWORD *)v8 - 1) = v11;
    if ( !v7 )
      return v11;
    goto LABEL_13;
  }
  v9 = *((_DWORD *)v8 - 1);
  if ( v9 != *((_DWORD *)v8 - 2) )
  {
    v10 = v9;
    LODWORD(v11) = v9 + 1;
    v12 = &v8[v10];
    goto LABEL_8;
  }
  v13 = (3 * v9 + 1) >> 1;
  v14 = 8 * v13 + 8;
  if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
  {
    exception = (__m128i *)__cxa_allocate_exception(0x28u);
    v4 = (char *)operator new(0x2Bu);
    strcpy(v4, "Overflow encountered when expanding vector");
    exception->m128i_i64[1] = (__int64)v4;
    exception->m128i_i64[0] = (__int64)off_1C63128;
    v18[0] = &v19;
    exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
    v18[1] = 0;
    v19 = 0;
    sub_233E40((__int64)v18);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v11 = sub_186B300(v8 - 1, v14);
  v15 = *(unsigned int *)(v11 + 4);
  v16 = v11 + 8;
  *(_DWORD *)v11 = v13;
  *(_QWORD *)(a2 + 32) = v11 + 8;
  LOBYTE(v11) = v15 + 1;
  *(_QWORD *)(v16 + 8 * v15) = a3;
  *(_DWORD *)(v16 - 4) = v15 + 1;
  if ( v7 )
  {
LABEL_13:
    LOBYTE(v11) = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return v11;
}

