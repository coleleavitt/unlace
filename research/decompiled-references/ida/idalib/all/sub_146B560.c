__int64 __fastcall sub_146B560(__int64 a1, double a2, double a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    if ( *(char *)(result + 28) >= 0 )
      return sub_146ACA0(*(_QWORD *)(a1 + 8), a1, a2, a3);
  }
  return result;
}
