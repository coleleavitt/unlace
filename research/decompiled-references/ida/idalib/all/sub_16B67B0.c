unsigned __int64 __fastcall sub_16B67B0(__int64 a1)
{
  if ( (*(_WORD *)a1 & 0x1FF) != 5 || (*(_BYTE *)(a1 + 2) & 0x78) != 0 || *(char *)(a1 + 2) < 0 )
    return 0;
  else
    return sub_BFBAE0(*(_QWORD *)(a1 + 16));
}
