__int64 __fastcall sub_1FBBC70(__int64 *a1, __int64 a2)
{
  unsigned int v3; // eax

  sub_1FBAE50(a1, a2);
  sub_1F952D0(a1 + 1, *(_QWORD *)(a2 + 40));
  if ( !sub_1EA74C0(a2) )
    return sub_9B9C90(a1[3], 0);
  v3 = sub_1F8B020(*a1, a2);
  return sub_9B9C90(a1[3], v3);
}
