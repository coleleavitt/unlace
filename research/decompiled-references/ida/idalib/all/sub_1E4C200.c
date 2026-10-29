__int64 __fastcall sub_1E4C200(_BYTE *a1, __int64 *a2)
{
  if ( (*(_BYTE *)a2 & 6) != 0 || (*((_BYTE *)a2 + 28) & 1) != 0 || !*((_DWORD *)a2 + 4) )
    return sub_BC78F0(a1, a2);
  else
    return 1;
}
