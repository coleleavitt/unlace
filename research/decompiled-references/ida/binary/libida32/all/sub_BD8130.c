__int64 __fastcall sub_BD8130(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_BD7F30(*(_QWORD *)(a1 + 32));
  if ( v1 && (*(_BYTE *)(v1 + 28) & 0x7Fu) - 34 <= 5 )
    return sub_B51D10(v1, 0);
  else
    return 0;
}

