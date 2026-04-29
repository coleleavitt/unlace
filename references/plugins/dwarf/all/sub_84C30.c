__int64 __fastcall sub_84C30(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx

  if ( (*(_QWORD *)(a1 + 224) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(a1 + 224) == -1 )
  {
    if ( under_debugger )
      BUG();
    a1 = 30478;
    interr(30478);
  }
  v1 = *(_QWORD *)(a1 + 232);
  if ( !*(_BYTE *)(v1 + 409) || (v2 = *(unsigned int *)(a1 + 240), (_DWORD)v2 == -1) )
  {
    sub_7F610();
  }
  else if ( v2 < *(_QWORD *)(v1 + 64) )
  {
    return *(_DWORD *)(*(_QWORD *)(v1 + 56) + 4 * v2) & 1;
  }
  sub_7F630();
  return sub_84CC0();
}
