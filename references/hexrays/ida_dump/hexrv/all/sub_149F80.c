__int64 __fastcall sub_149F80(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v1 + 24) != *(_QWORD *)(a1 + 40) )
    return 0;
  if ( *(_DWORD *)v1 == 55 )
  {
    *(_DWORD *)(a1 + 48) += (unsigned __int8)sub_671D0(*(_QWORD *)(a1 + 16));
  }
  else if ( (unsigned int)(*(_DWORD *)v1 - 56) <= 1 )
  {
    *(_DWORD *)(a1 + 48) += (unsigned __int8)sub_FA820(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v1);
  }
  return 0;
}
