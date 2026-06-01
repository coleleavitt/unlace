__int64 __fastcall sub_1351ED0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned __int64 v4; // rbp
  __m128i *v6; // rbx
  __m128i *v7; // rbp
  __m128i *v8; // rdi
  int v9; // r13d
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  __int64 v12; // r13
  _BYTE *v13; // rax
  __m128i *v14; // rax
  __int8 *v15; // r15
  signed __int64 v16; // r12
  _BYTE *v17; // rsi
  signed __int64 v18; // r12
  __m128i *v19; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // r13
  __int64 v22; // rbp
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  __m128i *v25; // rbp
  __m128i *v26; // rdi
  unsigned __int64 v28; // r13
  __int64 v29; // rsi
  _BYTE *src; // [rsp+0h] [rbp-58h]
  unsigned int v31; // [rsp+Ch] [rbp-4Ch]
  __int64 v32[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a1 != a2 )
  {
    v4 = *(unsigned int *)(a1 + 8);
    v6 = *(__m128i **)a1;
    v31 = *(_DWORD *)(a2 + 8);
    v3 = v31;
    if ( v31 <= v4 )
    {
      v19 = *(__m128i **)a1;
      if ( v31 )
      {
        v20 = *(_QWORD *)a2;
        v21 = (unsigned __int64)v31 << 6;
        v22 = *(_QWORD *)a1;
        v23 = *(_QWORD *)a2 + v21;
        do
        {
          sub_9EE8A0(v22, v20);
          v24 = v20 + 32;
          v20 += 64;
          sub_9EE8A0(v22 + 32, v24);
          v22 += 64;
        }
        while ( v20 != v23 );
        v19 = *(__m128i **)a1;
        v4 = *(unsigned int *)(a1 + 8);
        v6 = (__m128i *)((char *)v6 + v21);
      }
      v25 = &v19[4 * v4];
      while ( v6 != v25 )
      {
        while ( 1 )
        {
          v25 -= 4;
          v26 = (__m128i *)v25[2].m128i_i64[0];
          if ( v26 != &v25[3] )
            operator delete(v26);
          if ( (__m128i *)v25->m128i_i64[0] == &v25[1] )
            break;
          operator delete((void *)v25->m128i_i64[0]);
          if ( v6 == v25 )
            goto LABEL_38;
        }
      }
      goto LABEL_38;
    }
    if ( v31 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v10 = *(_QWORD *)a2;
      if ( *(_DWORD *)(a1 + 8) )
      {
        v4 <<= 6;
        v28 = v10 + v4;
        do
        {
          sub_9EE8A0((__int64)v6, v10);
          v29 = v10 + 32;
          v10 += 64;
          sub_9EE8A0((__int64)v6[2].m128i_i64, v29);
          v6 += 4;
        }
        while ( v28 != v10 );
        v3 = *(unsigned int *)(a2 + 8);
        v10 = *(_QWORD *)a2;
        v6 = (__m128i *)(v4 + *(_QWORD *)a1);
      }
    }
    else
    {
      v7 = &v6[4 * v4];
      while ( v7 != v6 )
      {
        while ( 1 )
        {
          v7 -= 4;
          v8 = (__m128i *)v7[2].m128i_i64[0];
          if ( v8 != &v7[3] )
            operator delete(v8);
          if ( (__m128i *)v7->m128i_i64[0] == &v7[1] )
            break;
          operator delete((void *)v7->m128i_i64[0]);
          if ( v7 == v6 )
            goto LABEL_10;
        }
      }
LABEL_10:
      *(_DWORD *)(a1 + 8) = 0;
      v6 = (__m128i *)sub_2237400(a1, a1 + 16, v31, 64, v32);
      sub_1324EE0(a1, v6);
      v9 = v32[0];
      if ( a1 + 16 != *(_QWORD *)a1 )
        free(*(void **)a1);
      *(_QWORD *)a1 = v6;
      v10 = *(_QWORD *)a2;
      v4 = 0;
      *(_DWORD *)(a1 + 12) = v9;
      v3 = *(unsigned int *)(a2 + 8);
    }
    v11 = v10 + v4;
    v12 = v10 + (v3 << 6);
    if ( v11 == v12 )
    {
LABEL_38:
      *(_DWORD *)(a1 + 8) = v31;
      return a1;
    }
    while ( 1 )
    {
      v6->m128i_i64[0] = (__int64)v6[1].m128i_i64;
      v17 = *(_BYTE **)v11;
      v18 = *(_QWORD *)(v11 + 8);
      if ( v18 + *(_QWORD *)v11 && !v17 )
LABEL_53:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v18 > 0xF )
        break;
      v13 = (_BYTE *)v6->m128i_i64[0];
      if ( v18 == 1 )
      {
        *v13 = *v17;
        v13 = (_BYTE *)v6->m128i_i64[0];
      }
      else if ( v18 )
      {
        goto LABEL_48;
      }
LABEL_16:
      v6->m128i_i64[1] = v18;
      v13[v18] = 0;
      v14 = v6 + 3;
      v6[2].m128i_i64[0] = (__int64)v6[3].m128i_i64;
      v15 = *(__int8 **)(v11 + 32);
      v16 = *(_QWORD *)(v11 + 40);
      if ( &v15[v16] && !v15 )
        goto LABEL_53;
      if ( (unsigned __int64)v16 > 0xF )
      {
        if ( v16 < 0 )
LABEL_52:
          std::__throw_length_error("basic_string::_M_create");
        v14 = (__m128i *)operator new(v16 + 1);
        v6[3].m128i_i64[0] = v16;
        v6[2].m128i_i64[0] = (__int64)v14;
LABEL_51:
        memcpy(v14, v15, v16);
        v14 = (__m128i *)v6[2].m128i_i64[0];
        goto LABEL_21;
      }
      if ( v16 == 1 )
      {
        v6[3].m128i_i8[0] = *v15;
      }
      else if ( v16 )
      {
        goto LABEL_51;
      }
LABEL_21:
      v11 += 64LL;
      v6[2].m128i_i64[1] = v16;
      v6 += 4;
      v14->m128i_i8[v16] = 0;
      if ( v11 == v12 )
        goto LABEL_38;
    }
    if ( v18 < 0 )
      goto LABEL_52;
    src = *(_BYTE **)v11;
    v13 = (_BYTE *)operator new(v18 + 1);
    v6[1].m128i_i64[0] = v18;
    v17 = src;
    v6->m128i_i64[0] = (__int64)v13;
LABEL_48:
    memcpy(v13, v17, v18);
    v13 = (_BYTE *)v6->m128i_i64[0];
    goto LABEL_16;
  }
  return a1;
}
