unsigned __int64 __fastcall sub_410D30(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v3; // rdi
  int v4; // ebx
  __m128i *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i v11[36]; // [rsp+10h] [rbp-2F8h] BYREF
  void *ptr; // [rsp+258h] [rbp-B0h]
  __int64 v13; // [rsp+260h] [rbp-A8h]
  unsigned __int64 v14; // [rsp+2E8h] [rbp-20h]

  v3 = *(_QWORD **)(a1 + 1672);
  v14 = __readfsqword(0x28u);
  v4 = sub_3BE900(v3, a2, 4);
  if ( (v4 & 0x600) == 0x400
    && ((v4 & 0x700000) == 0x500000 || (_UNKNOWN *)(v4 & 0xD00000) == &loc_800000 || (v4 & 0xF0000000) == 0x60000000)
    && !(unsigned __int8)is_spec_ea(a2) )
  {
    sub_573180((unsigned int)v11, *(_QWORD *)(a1 + 632), a1 + 928, a1 + 1072, a2, v4, 0, 0);
    v5 = v11;
    if ( !sub_3792E0(0x14u, v11, 1) )
    {
      v5 = (__m128i *)(&dword_0 + 1);
      sub_366D50(v11, 1, v6, v7);
    }
    v11[0].m128i_i64[0] = (__int64)&off_2BF9800;
    if ( ptr )
    {
      v13 = 0;
      qfree(ptr);
    }
    sub_571590(v11, v5, v6, v7, v8, v9);
  }
  return v14 - __readfsqword(0x28u);
}
