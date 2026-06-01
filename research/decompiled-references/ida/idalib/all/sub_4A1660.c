unsigned __int64 __fastcall sub_4A1660(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5, char a6)
{
  unsigned __int64 result; // rax

  result = sub_4A0820(*(_QWORD *)(a1 + 8), a2, a3, a4, a5, a6);
  if ( a2 != 2 && a3 != 2 )
    return sub_4A1140(a1, a3, a5, a2, a4, a6);
  return result;
}
