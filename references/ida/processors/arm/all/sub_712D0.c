__int64 __fastcall sub_712D0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // r12

  v1 = sub_711D0(a1, 1);
  if ( (_BYTE)v1 )
  {
    if ( (*(_BYTE *)(a1 + 898) & 1) != 0 )
      ++*(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL);
    v2 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(v2 + 24) = get_jtable_target();
  }
  return v1;
}
