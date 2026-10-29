/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DA683
// Address: 0x000DA683

//----- (000DA683) --------------------------------------------------------
int __usercall sub_DA683@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<edx>)
{
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v10; // [esp+0h] [ebp-D8h]
  int v11; // [esp+4h] [ebp-D4h]
  int (__cdecl *v12)(int, int, _DWORD, _DWORD, _DWORD *, _DWORD *, int, int); // [esp+8h] [ebp-D0h]
  _BYTE v13[168]; // [esp+10h] [ebp-C8h] BYREF
  int (__cdecl *v14)(int, int, _DWORD, _DWORD, _DWORD *, _DWORD *, int, int); // [esp+B8h] [ebp-20h]

  v12 = (int (__cdecl *)(int, int, _DWORD, _DWORD, _DWORD *, _DWORD *, int, int))a1[3];
  v11 = a1[4];
  while ( 1 )
  {
    v4 = sub_DA20C(a2, (int)v13);
    v5 = v4;
    if ( v4 != 5 && v4 )
      return 2;
    v10 = v4;
    v6 = 26;
    if ( v5 != 5 )
      v6 = 10;
    if ( v12(1, v6, *a1, a1[1], a1, a2, v11, 10) )
      return 2;
    v7 = v10;
    if ( v10 == 5 )
      return v7;
    if ( v14 )
      break;
LABEL_9:
    sub_DA1D2((int)a2, (int)v13);
  }
  v8 = v14(1, 10, *a1, a1[1], a1, a2, v10, v10);
  v7 = v8;
  if ( v8 != 7 )
  {
    if ( v8 != 8 )
      return 2;
    goto LABEL_9;
  }
  return v7;
}
