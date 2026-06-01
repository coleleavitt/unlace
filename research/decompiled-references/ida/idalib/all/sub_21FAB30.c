__int64 __fastcall sub_21FAB30(__int64 *a1, char a2)
{
  __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // edx

  v2 = *a1;
  *((_BYTE *)a1 + 20) = (8 * (a2 & 1)) | *((_BYTE *)a1 + 20) & 0xF0 | 2;
  v3 = *(_DWORD *)(v2 + 4);
  LODWORD(v2) = *(_DWORD *)(v2 + 8);
  *((_DWORD *)a1 + 4) = v3;
  v4 = v2 + 64;
  if ( v4 > 0x7F )
    return sub_22096E0(a1[1], 1, v4 >> 6);
  else
    return sub_22096E0(a1 + 1, 1, 1);
}
