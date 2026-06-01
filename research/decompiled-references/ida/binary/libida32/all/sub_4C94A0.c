__int64 __fastcall sub_4C94A0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax

  sub_4C92F0(a1);
  result = sub_4C7C60(a1, a2, a3, a4);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(a1 + 704) = 1;
    *(_BYTE *)(a1 + 640) = 0;
    return sub_4C9F40(215, a2, a3, a4);
  }
  return result;
}

