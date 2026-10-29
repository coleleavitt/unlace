unsigned __int64 __fastcall sub_506F80(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  _BYTE *v11; // rdi
  __m128i v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v3 = *(unsigned int *)(a2 + 4);
  v14 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = v5 + v3;
  v13 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(v5 + v3));
  v7 = unpack_dd(&v13);
  v8 = *(_QWORD *)(a1 + 1576);
  if ( !*(_BYTE *)(v8 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v9 = (unsigned int)(v7 - *(_DWORD *)(*(_QWORD *)(v8 + 8) + 68LL));
  if ( (unsigned __int64)(int)v9 >= *(_QWORD *)(v8 + 40) )
    sub_4FC970(v9, v6, (int)v9, v8);
  v10 = (__int64)(int)v9 << 6;
  v11 = (_BYTE *)v13.m128i_i64[0];
  *(_DWORD *)(*(_QWORD *)(v8 + 32) + v10 + 56) = v7;
  sub_506BC0(v11, v13.m128i_u64[1], (__int64 *)(*(_QWORD *)(v8 + 32) + v10), a3 != 0);
  return v14 - __readfsqword(0x28u);
}

