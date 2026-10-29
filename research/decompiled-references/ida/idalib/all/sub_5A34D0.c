char __fastcall sub_5A34D0(__int64 a1, __int64 a2)
{
  char result; // al

  result = sub_5A15C0(a1, a2);
  if ( result )
  {
    if ( *(int *)(a1 + 48) - *(_QWORD *)(a1 + 136) > (unsigned __int64)&stru_20000 )
    {
      result = sub_5A3240(a1, a2);
      *(_QWORD *)(a1 + 136) = *(int *)(a1 + 48);
    }
  }
  return result;
}
