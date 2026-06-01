/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7ED60
// Address: 0x0007ED60

//----- (0007ED60) --------------------------------------------------------
int __cdecl sub_7ED60(int a1, int a2, unsigned int *a3)
{
  int v4; // esi
  int v5; // edi
  int v7; // [esp+4h] [ebp-18h]
  int v8; // [esp+8h] [ebp-14h]

  v4 = unpack_dd(a3, a3[1]);
  v7 = unpack_dd(a3, a3[1]);
  v8 = unpack_dd(a3, a3[1]);
  v5 = 1;
  if ( !(unsigned __int8)sub_7DEF0(a1, v4) )
    v5 = (*(int (__cdecl **)(_DWORD, int, int, int, int))(**(_DWORD **)(a1 + 244) + 72))(
           *(_DWORD *)(a1 + 244),
           v4,
           v7,
           v8,
           a2);
  if ( *(_BYTE *)(a1 + 96) )
    sub_1C900();
  return v5;
}
