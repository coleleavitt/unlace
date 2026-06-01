__int64 __fastcall sub_1AA70(__int64 a1, _QWORD *a2)
{
  if ( *(_DWORD *)(a1 + 352) )
    return 0;
  if ( *a2 != 3 )
  {
    if ( *a2 == 1879048192 )
      *(_BYTE *)(a1 + 372) = 1;
    return 0;
  }
  *(_QWORD *)(a1 + 356) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)
                        & (a2[1] + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL));
  return 0;
}

