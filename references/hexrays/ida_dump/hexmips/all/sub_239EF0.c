__int64 __fastcall sub_239EF0(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)a2 != 2 )
    return 0;
  if ( (unsigned int)sub_2533C0(*(_QWORD *)(a1 + 48)) )
    return 0;
  *(_QWORD *)(a1 + 56) = sub_325C90(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL), *(unsigned int *)(a2 + 4), 1);
  return 1;
}
