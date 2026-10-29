void __fastcall sub_13C5070(__int64 a1, __int64 a2)
{
  char ***v3; // r12
  char ***v4; // r15
  char **v5; // rdx
  char *i; // rax
  unsigned __int64 v7; // rax
  char *v8; // r13
  const void *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __m128i *v14; // rax
  __m128i *v15; // rdx
  _QWORD *v16; // rdi
  __int64 v17; // r13
  void *src; // [rsp+8h] [rbp-60h]
  void *v19[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(char ****)(a1 + 616);
  v4 = *(char ****)(a1 + 608);
  if ( v3 != v4 )
  {
    while ( 1 )
    {
      v5 = *v4;
      for ( i = (*v4)[1]; i; i = *(char **)(v7 + 8) )
      {
        if ( ((unsigned __int8)i & 4) == 0 )
          break;
        v7 = (unsigned __int64)i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v7 )
          break;
        v5 = (char **)v7;
      }
      v8 = *v5;
      v9 = v5 + 4;
      v19[0] = v20;
      if ( (char **)((char *)v5 + (_QWORD)v8 + 32) && v5 == (char **)-32LL )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v8 > 0xF )
        break;
      if ( v8 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(v20[0]) = *((_BYTE *)v5 + 32);
        v10 = v20;
      }
      else
      {
        v10 = v20;
        if ( v8 )
          goto LABEL_24;
      }
LABEL_11:
      v19[1] = v8;
      v8[(_QWORD)v10] = 0;
      v11 = *(unsigned int *)(a2 + 8);
      v12 = v11 + 1;
      if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        v17 = *(_QWORD *)a2;
        if ( *(_QWORD *)a2 <= (unsigned __int64)v19 && (unsigned __int64)v19 < v17 + 32 * v11 )
        {
          sub_A8C1F0(a2, v12);
          v13 = *(_QWORD *)a2;
          v11 = *(unsigned int *)(a2 + 8);
          v14 = (__m128i *)((char *)v19 + *(_QWORD *)a2 - v17);
        }
        else
        {
          sub_A8C1F0(a2, v12);
          v13 = *(_QWORD *)a2;
          v11 = *(unsigned int *)(a2 + 8);
          v14 = (__m128i *)v19;
        }
      }
      else
      {
        v13 = *(_QWORD *)a2;
        v14 = (__m128i *)v19;
      }
      v15 = (__m128i *)(v13 + 32 * v11);
      v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
      if ( (__m128i *)v14->m128i_i64[0] == &v14[1] )
      {
        v15[1] = _mm_loadu_si128(v14 + 1);
      }
      else
      {
        v15->m128i_i64[0] = v14->m128i_i64[0];
        v15[1].m128i_i64[0] = v14[1].m128i_i64[0];
      }
      v15->m128i_i64[1] = v14->m128i_i64[1];
      v14->m128i_i64[0] = (__int64)v14[1].m128i_i64;
      v16 = v19[0];
      v14->m128i_i64[1] = 0;
      v14[1].m128i_i8[0] = 0;
      ++*(_DWORD *)(a2 + 8);
      if ( v16 == v20 )
      {
        v4 += 2;
        if ( v3 == v4 )
          return;
      }
      else
      {
        operator delete(v16);
        v4 += 2;
        if ( v3 == v4 )
          return;
      }
    }
    if ( (__int64)v8 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src = v5 + 4;
    v10 = (_QWORD *)operator new((unsigned __int64)(v8 + 1));
    v20[0] = v8;
    v9 = src;
    v19[0] = v10;
LABEL_24:
    memcpy(v10, v9, (size_t)v8);
    v10 = v19[0];
    goto LABEL_11;
  }
}
