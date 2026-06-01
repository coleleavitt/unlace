char __fastcall sub_15F1510(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v1 + 21) & 4) != 0 )
  {
    LOBYTE(v1) = *(_BYTE *)(v1 + 201) >> 5;
    if ( (_BYTE)v1 == 2 )
      LOBYTE(v1) = sub_1A80760();
  }
  return v1;
}
