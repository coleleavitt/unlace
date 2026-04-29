__int64 __fastcall sub_239B70(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)a2 != 2 )
    return 0;
  if ( (unsigned int)sub_253040(*(_QWORD *)(a1 + 48)) )
    return 0;
  *(_QWORD *)(a1 + 56) = sub_325910(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL), *(unsigned int *)(a2 + 4), 1);
  return 1;
}
