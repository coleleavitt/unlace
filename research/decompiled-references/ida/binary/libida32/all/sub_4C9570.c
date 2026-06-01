__int64 __fastcall sub_4C9570(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // r13
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 1536);
  sub_4C92F0(v6);
  result = sub_4C7C60(v6, a2, a3, a4);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(v6 + 704) = 1;
    *(_BYTE *)(v6 + 640) = 0;
    return sub_4C9F40(215, a2, a3, a4);
  }
  return result;
}

