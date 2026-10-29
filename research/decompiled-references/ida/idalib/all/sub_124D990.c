bool __fastcall sub_124D990(_QWORD *a1, _BYTE *a2)
{
  return ((1LL << *a2) & *(_QWORD *)(*a1 + 8 * ((unsigned __int64)(unsigned __int8)*a2 >> 6) + 128)) != 0;
}
