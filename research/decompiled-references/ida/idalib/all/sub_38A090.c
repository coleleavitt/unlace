__int64 __fastcall sub_38A090(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 1520LL) <= 0xFFFFFFFE )
  {
    result = sub_631C90(**(_QWORD **)(a1 + 8), 3, 4);
    if ( !(_BYTE)result )
    {
      if ( *(_BYTE *)(a1 + 272) )
      {
        sub_631AD0(**(_QWORD **)(a1 + 8), 29);
        get_merge_state();
        sub_368890();
      }
      result = *(unsigned int *)(a1 + 268);
      if ( !(_DWORD)result )
        sub_378E50();
    }
  }
  return result;
}
