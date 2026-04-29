__int64 __fastcall sub_23E770(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)a2 != 2 )
    return 0;
  if ( (unsigned int)sub_257C40(*(_QWORD *)(a1 + 48)) )
    return 0;
  *(_QWORD *)(a1 + 56) = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL), *(unsigned int *)(a2 + 4), 1);
  return 1;
}
