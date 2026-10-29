char __fastcall sub_5893F0(__int64 a1, __int64 a2)
{
  char result; // al

  result = sub_5874D0(a1, a2);
  if ( result )
  {
    if ( (unsigned __int64)(*(int *)(a1 + 48) - *(_QWORD *)(a1 + 136)) > 0x20000 )
    {
      result = sub_589160(a1, a2);
      *(_QWORD *)(a1 + 136) = *(int *)(a1 + 48);
    }
  }
  return result;
}

