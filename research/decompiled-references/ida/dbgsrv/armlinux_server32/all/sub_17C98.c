/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17C98
// Address: 0x00017C98

//----- (00017C98) --------------------------------------------------------
int __fastcall sub_17C98(int result)
{
  int v1; // r4
  int v2; // r2
  int v3; // r2
  int v4; // r2

  v1 = result;
  v2 = *(_DWORD *)(result + 864);
  if ( v2 )
    result = (*(int (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)result + 160))(
               result,
               4,
               v2,
               result + 868,
               *(unsigned __int8 *)(result + 872));
  v3 = *(_DWORD *)(v1 + 876);
  *(_DWORD *)(v1 + 864) = 0;
  *(_BYTE *)(v1 + 872) = 0;
  if ( v3 )
    result = (*(int (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)v1 + 160))(
               v1,
               4,
               v3,
               v1 + 880,
               *(unsigned __int8 *)(v1 + 884));
  v4 = *(_DWORD *)(v1 + 888);
  *(_DWORD *)(v1 + 876) = 0;
  *(_BYTE *)(v1 + 884) = 0;
  if ( v4 )
    result = (*(int (__fastcall **)(int, int, int, int, _DWORD))(*(_DWORD *)v1 + 160))(
               v1,
               4,
               v4,
               v1 + 892,
               *(unsigned __int8 *)(v1 + 896));
  *(_DWORD *)(v1 + 888) = 0;
  *(_BYTE *)(v1 + 896) = 0;
  return result;
}
