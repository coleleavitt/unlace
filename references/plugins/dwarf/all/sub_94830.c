__int64 __fastcall sub_94830(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // edx
  unsigned int v5; // eax
  __m128i v6; // kr00_16
  unsigned int v7; // ebx
  __m128i v9; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 32);
  v9 = 0;
  LOBYTE(v5) = sub_945B0(a3, &v9, v4);
  v6 = v9;
  v7 = v5;
  if ( (_BYTE)v5 )
    sub_8A9B0((__int64)a3, v9.m128i_i64, *(_QWORD *)(a1 + 40));
  if ( v6.m128i_i64[0] )
  {
    if ( !v6.m128i_i64[1] )
    {
      if ( !under_debugger )
        interr(30458);
      BUG();
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v6.m128i_i64[1] + 88) + 480LL))(
      *(_QWORD *)(v6.m128i_i64[1] + 160),
      v6.m128i_i64[0],
      10);
  }
  return v7;
}
