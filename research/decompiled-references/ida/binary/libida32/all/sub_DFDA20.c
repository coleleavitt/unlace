unsigned __int64 __fastcall sub_DFDA20(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rdi

  v2 = *a1;
  while ( 1 )
  {
    v3 = *(_QWORD *)(v2 + 16) - (v2 + 24);
    if ( a2 <= v3 )
      break;
    v2 = *(_QWORD *)(v2 + 8);
    a2 -= v3;
  }
  return *(_QWORD *)(v2 + 16) - a2;
}

