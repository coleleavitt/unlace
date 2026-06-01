__int64 __fastcall sub_73AF30(_DWORD *a1, __int16 *a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx

  if ( a2[4] < 0 )
    return 0;
  v2 = *(__int16 *)(*(_QWORD *)a2 + 4LL);
  if ( !*(_WORD *)(*(_QWORD *)a2 + 4LL) || (int)v2 > (int)(*a1 / 0xAu) )
    return 0;
  if ( **(_DWORD **)a2 )
    LOBYTE(v3) = (unsigned int)sub_745140(a1, a2, v2) == 0;
  else
    LOBYTE(v3) = (unsigned int)sub_745260(a1, a2, v2) == 0;
  return v3;
}
