/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DA5BB
// Address: 0x000DA5BB

//----- (000DA5BB) --------------------------------------------------------
int __usercall sub_DA5BB@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<edx>)
{
  int v4; // edx
  int v5; // eax
  int v7; // [esp+0h] [ebp-E0h]
  int v8; // [esp+0h] [ebp-E0h]
  _BYTE v9[168]; // [esp+8h] [ebp-D8h] BYREF
  int (__cdecl *v10)(int, int, _DWORD, _DWORD, _DWORD *, _DWORD *, _DWORD, _DWORD); // [esp+B0h] [ebp-30h]

  while ( 1 )
  {
    v7 = sub_DA20C(a2, (int)v9);
    v4 = 4 * (Unwind_GetCFA((int)a2) - (a2[24] >> 31) == a1[4]);
    if ( v7 )
      return 2;
    if ( v10 )
      break;
LABEL_3:
    if ( v4 )
      abort();
    sub_DA1D2((int)a2, (int)v9);
  }
  v8 = v4;
  v5 = v10(1, v4 | 2, *a1, a1[1], a1, a2, 0, 0);
  if ( v5 != 7 )
  {
    v4 = v8;
    if ( v5 != 8 )
      return 2;
    goto LABEL_3;
  }
  return 7;
}
