char __fastcall sub_9ECAD0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  char result; // al

  if ( a3 != ((*(_WORD *)(a1 + 2) >> 3) & 0x3F) )
    return 0;
  if ( a3 == 2 || (result = 0, a3 == 5) )
  {
    if ( !sub_9EC910(*(_QWORD *)(a1 + 16), a2, a5) || (result = sub_9EC910(*(_QWORD *)(a1 + 24), a4, a5)) == 0 )
    {
      if ( sub_9EC910(*(_QWORD *)(a1 + 16), a4, a5) )
        return sub_9EC910(*(_QWORD *)(a1 + 24), a2, a5);
      else
        return 0;
    }
  }
  return result;
}
