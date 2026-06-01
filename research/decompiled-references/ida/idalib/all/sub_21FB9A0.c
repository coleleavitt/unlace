__int64 __fastcall sub_21FB9A0(__int64 *a1, char a2)
{
  __int64 v2; // rdx
  char v3; // si
  bool v4; // zf
  int v5; // eax
  unsigned int v6; // edx

  v2 = *a1;
  v3 = *((_BYTE *)a1 + 20) & 0xF0 | 3 | (8 * (a2 & 1));
  v4 = *(_DWORD *)(*a1 + 20) == 2;
  *((_BYTE *)a1 + 20) = v3;
  if ( v4 )
    *((_BYTE *)a1 + 20) = v3 & 0xF7;
  v5 = *(_DWORD *)(v2 + 4) - 1;
  v6 = *(_DWORD *)(v2 + 8) + 64;
  *((_DWORD *)a1 + 4) = v5;
  if ( v6 > 0x7F )
    return sub_22096E0(a1[1], 0, v6 >> 6);
  else
    return sub_22096E0(a1 + 1, 0, 1);
}
