/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DA832
// Address: 0x000DA832

//----- (000DA832) --------------------------------------------------------
int __usercall Unwind_RaiseException@<eax>(int a1@<eax>, int a2@<edx>, _DWORD *a3)
{
  int v3; // eax
  int v4; // edx
  int result; // eax
  int v6; // eax
  int CFA; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // edi
  _DWORD v12[32]; // [esp+8h] [ebp-1D8h] BYREF
  _DWORD v13[32]; // [esp+88h] [ebp-158h] BYREF
  _BYTE v14[168]; // [esp+108h] [ebp-D8h] BYREF
  int (__cdecl *v15)(int, int, _DWORD, _DWORD, _DWORD *, _DWORD *, int, int); // [esp+1B0h] [ebp-30h]
  int v16; // [esp+1CCh] [ebp-14h]
  int v17; // [esp+1D0h] [ebp-10h]
  int retaddr; // [esp+1E4h] [ebp+4h]

  v17 = a2;
  v16 = a1;
  sub_DA4F0(v12, (int)&a3, retaddr);
  qmemcpy(v13, v12, sizeof(v13));
  while ( 1 )
  {
    v3 = sub_DA20C(v13, (int)v14);
    if ( v3 == 5 )
      return 5;
    if ( v3 )
      return 3;
    if ( v15 )
      break;
LABEL_6:
    sub_DA1D2((int)v13, (int)v14);
  }
  v6 = v15(1, 1, *a3, a3[1], a3, v13, v4, v4);
  if ( v6 != 6 )
  {
    if ( v6 != 8 )
      return 3;
    goto LABEL_6;
  }
  a3[3] = 0;
  CFA = Unwind_GetCFA((int)v13);
  a3[4] = CFA - (v13[24] >> 31);
  qmemcpy(v13, v12, sizeof(v13));
  result = sub_DA5BB(a3, v13);
  if ( result == 7 )
  {
    v9 = sub_D9224((int)v12, (int)v13, v8);
    v10 = v13[19];
    v11 = v9;
    sub_DA82D();
    *(int *)((char *)&retaddr + v11) = v10;
    return v16;
  }
  return result;
}
// DA8D2: variable 'v4' is possibly undefined
// DA94B: variable 'v8' is possibly undefined
