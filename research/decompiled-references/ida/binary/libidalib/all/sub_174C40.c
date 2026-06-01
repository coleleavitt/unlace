__int64 __fastcall sub_174C40(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( (a3 & 1) == 0 )
    qfputc();
  result = 0;
  if ( (a3 & 2) != 0 )
  {
    qfputs();
    result = (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
  }
  *(_QWORD *)(a1 + 24) = result;
  return result;
}

