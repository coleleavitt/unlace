__int64 __fastcall sub_19D0110(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // ebp
  unsigned __int64 v5; // rax

  v2 = sub_B8E070(*(_QWORD *)(*(_QWORD *)a1 + 544LL));
  if ( !v2 )
    return 0;
  v3 = v2;
  v4 = 0;
  if ( (*(_BYTE *)(v2 + 28) & 0x7F) == 0x12 )
  {
    v5 = sub_BFD710(a2);
    if ( (*(_WORD *)v5 & 0x1FF) == 0x47 )
      LOBYTE(v4) = *(_QWORD *)(v5 + 16) == *(_QWORD *)(v3 + 120);
  }
  return v4;
}
