__int64 __fastcall sub_64210(__int64 a1, int *a2)
{
  bool v2; // dl
  int v3; // eax

  v2 = sub_64110(*(_QWORD *)(a1 + 8), a1);
  v3 = 4;
  if ( !v2 )
    v3 = (*(_BYTE *)(a1 + 94) & 1) == 0 ? 1 : 3;
  *a2 = v3;
  return 0;
}
