char __fastcall sub_F537A0(__m128i *a1, __int64 a2, unsigned __int64 a3, const void *a4, size_t a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  _QWORD *v8; // r12
  unsigned __int64 v9; // rdx
  __int8 v10; // r14
  void *v14; // rdi
  char result; // al

  LOBYTE(v6) = a2;
  v8 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = a2 & 7;
  if ( (a1->m128i_i8[5] & 1) != 0 )
  {
    v6 = v9 | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
    v8 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
    v9 = v6 & 7;
  }
  if ( (v6 & 8) != 0 )
  {
    v9 |= v8[3];
    v8 = (_QWORD *)*v8;
  }
  if ( !v8 )
    return sub_971800(a3, "NULL TYPE");
  v10 = a1[1].m128i_i8[4];
  a1[1].m128i_i8[4] = a5 == 0;
  sub_F4E2A0(a1, (__int64)v8, v9, a3, a5, a6);
  v14 = *(void **)(a3 + 32);
  if ( a5 > *(_QWORD *)(a3 + 24) - (_QWORD)v14 )
  {
    sub_22581D0(a3, a4, a5);
  }
  else if ( a5 )
  {
    memcpy(v14, a4, a5);
    *(_QWORD *)(a3 + 32) += a5;
  }
  result = sub_F521E0(a1, (__int64)v8, a3);
  a1[1].m128i_i8[4] = v10;
  return result;
}

