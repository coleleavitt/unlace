__int64 __fastcall sub_157DB40(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  char v4; // al

  v3 = a2 + 72;
  if ( !a2 )
    v3 = 0;
  if ( !(unsigned __int8)sub_B8E180(v3) )
  {
    if ( (v4 = *(_BYTE *)(a2 + 83), (v4 & 8) == 0) && ((*(_BYTE *)(a2 + 128) & 1) != 0 || *(_QWORD *)(a2 + 128))
      || (v4 & 0x40) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 16))(*(_QWORD *)(a1 + 24), a2);
    }
  }
  return 1;
}
