unsigned __int64 __fastcall sub_50CEB0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // esi
  int v11; // edi
  __m128i v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(unsigned int *)(a2 + 4);
  v14 = __readfsqword(0x28u);
  v13 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(v4 + v5));
  v7 = unpack_dd(&v13);
  v8 = *(_QWORD *)(a1 + 1760);
  v9 = *(_QWORD *)(v8 + 144) + 56LL * v7;
  v10 = *(_DWORD *)(v9 + 48);
  v11 = v10 + 1;
  if ( *(_DWORD *)a2 - 129 == a3 )
  {
    if ( v10 <= 0 )
    {
      if ( !under_debugger )
        interr(1769);
      BUG();
    }
    v11 = v10 - 1;
  }
  *(_DWORD *)(v9 + 48) = v11;
  *(_BYTE *)(v8 + 168) = 1;
  return v14 - __readfsqword(0x28u);
}
