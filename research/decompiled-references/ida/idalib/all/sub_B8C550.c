void __fastcall sub_B8C550(__int64 a1)
{
  char v1; // al
  unsigned __int64 v2; // rax

  v1 = *(_BYTE *)(a1 + 29);
  if ( (v1 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 29) = v1 & 0xFE;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    {
      v2 = sub_B8C2C0(a1);
      sub_A840F0(*(_QWORD *)(v2 + 88), a1);
    }
    else
    {
      sub_A840F0(*(_QWORD *)(a1 + 88), a1);
    }
  }
}
