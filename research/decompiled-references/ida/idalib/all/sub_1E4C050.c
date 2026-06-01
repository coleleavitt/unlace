__int64 __fastcall sub_1E4C050(__int64 *a1, __int64 a2)
{
  if ( a2 && ((*(_WORD *)a2 + 509) & 0x1FFu) <= 0x7E && (*(_DWORD *)a2 & 0x4000) != 0 || *((_BYTE *)a1 + 24) )
    return sub_BC97E0(a1, a2);
  else
    return 1;
}
