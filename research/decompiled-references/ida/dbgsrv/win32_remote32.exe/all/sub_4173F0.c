/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4173F0
// Address: 0x004173F0

//----- (004173F0) --------------------------------------------------------
char __usercall sub_4173F0@<al>(__m128i a1@<xmm0>, int a2, unsigned __int16 *a3)
{
  WCHAR *v3; // esi
  WCHAR v4; // ax
  int v5; // kr00_4
  unsigned __int16 *v6; // edi
  unsigned int v9; // esi
  _DWORD *v10; // ecx
  int v11; // edi
  unsigned int v12; // ebx
  LPVOID v13; // eax
  void *v14; // [esp+10h] [ebp-20h] BYREF
  int v15; // [esp+14h] [ebp-1Ch]
  int v16; // [esp+18h] [ebp-18h]
  _DWORD *v17; // [esp+1Ch] [ebp-14h]
  unsigned __int16 *v18; // [esp+20h] [ebp-10h]
  int v19; // [esp+2Ch] [ebp-4h]
  WCHAR Buffer[512]; // [esp+30h] [ebp+0h] BYREF
  WCHAR TargetPath[260]; // [esp+430h] [ebp+400h] BYREF
  WCHAR DeviceName[4]; // [esp+638h] [ebp+608h] BYREF

  v18 = a3;
  v17 = (_DWORD *)a2;
  if ( !GetLogicalDriveStringsW(0x1FFu, Buffer) )
    return 0;
  v3 = Buffer;
  wcscpy(DeviceName, L" :");
  v4 = Buffer[0];
  while ( 1 )
  {
    DeviceName[0] = v4;
    if ( QueryDosDeviceW(DeviceName, TargetPath, 0x103u) )
    {
      v5 = wcslen(TargetPath);
      if ( !sub_468109(a2, 2 * v5, a1, v18, TargetPath, v5) )
      {
        v6 = &v18[v5];
        if ( *v6 == 92 )
          break;
      }
    }
    while ( *v3++ )
      ;
    v4 = *v3;
    if ( !*v3 )
      return 0;
  }
  v14 = nullptr;
  v15 = 0;
  v16 = 0;
  v19 = 0;
  sub_45A700(a2, DeviceName, -1);
  sub_45A700((int)&v14, v6, -1);
  v9 = v15 != 0 ? v15 - 1 : 0;
  if ( v9 )
  {
    v10 = v17;
    v11 = v17[1] != 0 ? v17[1] - 1 : 0;
    v12 = v11 + v9 + 1;
    if ( v12 > v17[2] )
    {
      v13 = sub_453B00((int)v17, (void *)*v17, v11 + v9 + 1, 1u);
      v10 = v17;
      *v17 = v13;
    }
    v10[1] = v12;
    *(_BYTE *)(v11 + *v10 + v9) = 0;
    sub_464310(v11 + *v10, (unsigned int)v14, v9);
  }
  v19 = 1;
  if ( v14 )
  {
    v15 = 0;
    sub_453A20(v14);
  }
  return 1;
}
