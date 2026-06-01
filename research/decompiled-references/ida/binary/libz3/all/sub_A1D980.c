__int64 __fastcall sub_A1D980(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 i; // rsi
  unsigned int v9[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v5 = *(_QWORD *)(a1 + 120);
  v9[0] = a2;
  if ( v5 )
  {
    for ( i = 0; *(_DWORD *)(v5 - 4) != i; ++i )
    {
      if ( *(_DWORD *)(v5 + 4 * i) == a2 )
        return sub_2FC4A0((__int64)qword_1C7F2C0, *(_QWORD *)(a1 + 136) + 32 * i, a3, *(_QWORD *)(a1 + 136) + 32 * i);
    }
  }
  sub_98CFC0((_QWORD *)(a1 + 120), v9);
  return sub_98D840((__int64 *)(a1 + 136), a3);
}

