/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412A20
// Address: 0x00412A20

//----- (00412A20) --------------------------------------------------------
int __thiscall sub_412A20(int *this, unsigned int a2)
{
  unsigned int v2; // edi
  int *v3; // esi
  int v4; // ecx
  int v5; // edx
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-4h]

  v2 = a2;
  v3 = this + 151;
  sub_408C10(this + 151, &v7, &a2);
  v4 = v8;
  if ( *(_BYTE *)(v8 + 13) || v2 < *(_DWORD *)(v8 + 16) )
    v4 = *v3;
  v5 = 0;
  if ( v4 != *v3 )
    v5 = v4 + 20;
  if ( v5 )
    return *(_DWORD *)v5;
  else
    return -1;
}
