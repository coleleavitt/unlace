__int64 __fastcall sub_7C5940(__int64 a1, int a2, int a3, int a4, int a5, int a6, __int128 a7, int a8)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 160);
  if ( !result )
    return sub_11B4C90(*(_QWORD *)(a1 + 24), a2, a3, a4, a5, a6, a7, a8);
  *(_BYTE *)(result + 832) = 1;
  return result;
}

