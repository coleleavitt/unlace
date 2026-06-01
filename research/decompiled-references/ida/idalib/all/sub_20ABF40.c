void __fastcall sub_20ABF40(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  if ( a2 && (unsigned int)*(unsigned __int8 *)a2 - 5 <= 0x20 && ((BYTE1(*a2) & 0x7F) == 2 || *((_DWORD *)a2 - 2)) )
  {
    if ( !a3 || (unsigned int)*(unsigned __int8 *)a3 - 5 > 0x20 || (BYTE1(*a3) & 0x7F) != 2 && !*((_DWORD *)a3 - 2) )
      sub_20ABF20(a1);
  }
  else if ( a3 && (unsigned int)*(unsigned __int8 *)a3 - 5 <= 0x20 && ((BYTE1(*a3) & 0x7F) == 2 || *((_DWORD *)a3 - 2)) )
  {
    ++*(_DWORD *)(a1 - 8);
  }
}
