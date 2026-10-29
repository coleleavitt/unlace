unsigned __int64 *__fastcall sub_97DDB0(
        __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rsi
  _WORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  _QWORD **v21; // rbx
  __int64 v22; // r12
  _QWORD *v23; // rsi
  unsigned __int64 *result; // rax
  __int64 v25; // rax
  unsigned __int64 *v26; // rdi
  __m128i v27[3]; // [rsp+0h] [rbp-38h] BYREF

  v8 = a1[1].m128i_i64[0];
  if ( !v8 )
  {
    sub_976590((__int64)a1, 0, a3, a4, a5, a6);
    v8 = a1[1].m128i_i64[0];
  }
  sub_9784E0(a1, v8, a2);
  if ( (*(_QWORD *)a2 & 0x1000000) == 0
    || (v9 = *(_WORD **)(a2 + 8 * ((*(_QWORD *)a2 >> 20) & 1LL) + 56)) == nullptr
    || (*v9 & 0x1FFu) - 113 > 1 )
  {
    v9 = nullptr;
  }
  v10 = a1->m128i_i64[1];
  v27[0].m128i_i64[0] = a2;
  v27[0].m128i_i64[1] = 1;
  v11 = sub_985780(v10 + 32, v27, 0);
  sub_978C10((__int64)a1, v11, (__int64)v9, v12, v13, v14);
  if ( (*(_QWORD *)a2 & 0x1000000) != 0 )
  {
    v18 = (*(_QWORD *)a2 >> 20) & 1LL;
    if ( *(_QWORD *)(a2 + 8 * v18 + 56) )
      a1[1].m128i_i64[0] = (__int64)sub_97D280(a1, *(_QWORD **)(a2 + 8 * v18 + 56), 0, 0, v16, v17);
  }
  if ( *(_BYTE *)(a1[20].m128i_i64[1] + 65) )
  {
    v25 = a1->m128i_i64[1];
    v26 = (unsigned __int64 *)a1[1].m128i_i64[0];
    v27[0].m128i_i64[1] = 0;
    v27[0].m128i_i64[0] = a2 | 3;
    sub_976620(v26, v27, (_QWORD *)(v25 + 32), v15, v16, v17);
  }
  v19 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    a1[1].m128i_i64[0] = (__int64)sub_97D280(a1, *(_QWORD **)(a2 + 56), 0, 0, v16, v17);
    v19 = *(_QWORD *)a2;
  }
  v20 = ((v19 >> 20) & 1) + ((v19 >> 24) & 1);
  v21 = (_QWORD **)(a2 + 8 * v20 + 56);
  v22 = a2 + 8 * (*(unsigned int *)(a2 + 4) + v20) + 56;
  if ( v21 == (_QWORD **)v22 )
    return (unsigned __int64 *)a1[1].m128i_i64[0];
  do
  {
    v23 = *v21++;
    result = sub_97D280(a1, v23, 0, 0, v16, v17);
    a1[1].m128i_i64[0] = (__int64)result;
  }
  while ( (_QWORD **)v22 != v21 );
  return result;
}

