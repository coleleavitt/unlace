__int64 __fastcall sub_4E0970(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  sub_4E07C0(a1);
  result = sub_4DEDA0(a1, a2, a3, a4);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(a1 + 704) = 1;
    *(_BYTE *)(a1 + 640) = 0;
    return sub_4E14A0(215, a2, a3, a4);
  }
  return result;
}
