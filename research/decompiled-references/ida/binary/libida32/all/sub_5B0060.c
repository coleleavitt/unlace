__int64 __fastcall sub_5B0060(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1424LL);
  if ( !*(_BYTE *)(v2 + 48) )
  {
    sub_5AF6C0(v2);
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 1424LL);
  }
  return *(_QWORD *)(v2 + 24);
}

