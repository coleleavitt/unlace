__int64 __fastcall sub_1FA7A00(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned int v8; // esi
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // [rsp+8h] [rbp-1050h] BYREF
  void *ptr; // [rsp+10h] [rbp-1048h] BYREF
  __m128i si128; // [rsp+18h] [rbp-1040h]
  _BYTE v17[4144]; // [rsp+28h] [rbp-1030h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D90);
  ptr = v17;
  sub_1FA5910(a1, a2, a3, (_DWORD **)&ptr, a4);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8LL);
  v7 = sub_A1F730(v5);
  v8 = *(_DWORD *)(a1 + 3516);
  v9 = *(unsigned int *)(v5 + 48) + 8 * (v7 + v6);
  if ( a4 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = si128.m128i_i64[0];
    v12 = 144;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 3512);
    v10 = *(_QWORD *)(a1 + 16);
    v11 = si128.m128i_i64[0];
    v12 = 143;
  }
  v14 = v12;
  sub_1F76000(v10, v8, (unsigned __int8 *)&v14, 1, (unsigned __int64)ptr, v11);
  if ( ptr != v17 )
    free(ptr);
  return v9;
}
