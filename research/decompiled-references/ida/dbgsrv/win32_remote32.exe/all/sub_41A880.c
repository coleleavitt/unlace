/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A880
// Address: 0x0041A880

//----- (0041A880) --------------------------------------------------------
int __stdcall sub_41A880(int a1, _BYTE *a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // edi
  int v5; // esi
  _DWORD *v6; // eax
  int v8; // [esp+Ch] [ebp-18h] BYREF
  int v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]

  v2 = 0;
  v3 = 0;
  v8 = 0;
  v4 = 0;
  v10 = 0;
  v11 = 0;
  v5 = *(_DWORD *)(a1 + 32);
  if ( v5 > 0 )
  {
    LOBYTE(a1) = *(_BYTE *)(a1 + 8);
    v9 = 0;
    sub_402900((int)&v8, v5 + 1, &a1);
    *(_BYTE *)(v8 + v5) = 0;
    v3 = v10;
    v4 = v9;
    v2 = v8;
  }
  v6 = a2;
  *a2 = 7;
  v6[2] = v2;
  v6[3] = v4;
  v6[4] = v3;
  return 0;
}
// 41A8CE: conditional instruction was optimized away because esi.4>=1
