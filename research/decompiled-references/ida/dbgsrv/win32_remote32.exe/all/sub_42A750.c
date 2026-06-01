/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A750
// Address: 0x0042A750

//----- (0042A750) --------------------------------------------------------
int __stdcall sub_42A750(int a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  int *v4; // esi
  int v5; // edi
  _BYTE v7[24]; // [esp+10h] [ebp-40h] BYREF
  _BYTE v8[24]; // [esp+28h] [ebp-28h] BYREF
  int v9; // [esp+40h] [ebp-10h]
  int v10; // [esp+4Ch] [ebp-4h]
  unsigned int v11; // [esp+58h] [ebp+8h]

  v2 = *(_DWORD *)(a1 + 228);
  if ( v2 < 3 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1439);
  }
  v3 = v2 - 1;
  v11 = v2 - 2;
  v4 = (int *)(a1 + 224);
  v9 = *(_DWORD *)(a1 + 224);
  v5 = v9 + 24 * (v2 - 3);
  if ( !sub_41D2E0(v5) )
    return -1;
  if ( *(_DWORD *)(v5 + 8) )
    v3 = v11;
  sub_425AF0((__int128 *)v5, (__int128 *)(v9 + 24 * v3));
  sub_422BA0(v4, (int)v8);
  v10 = 0;
  sub_423B70((int)v8);
  v10 = -1;
  sub_422BA0(v4, (int)v7);
  v10 = 1;
  sub_423B70((int)v7);
  return 0;
}
// 4B70F0: using guessed type char byte_4B70F0;
