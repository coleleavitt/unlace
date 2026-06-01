/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DB642
// Address: 0x000DB642

//----- (000DB642) --------------------------------------------------------
int __cdecl sub_DB642(int a1, int a2, int a3)
{
  char v3; // si
  _BYTE *v4; // eax
  char v5; // si
  _BYTE *v6; // eax
  int result; // eax
  unsigned int v8; // [esp+8h] [ebp-10h] BYREF
  unsigned int v9; // [esp+Ch] [ebp-Ch] BYREF

  v3 = sub_DB198(a2);
  v4 = (_BYTE *)sub_DAE47(v3, a1);
  sub_DAECB(v3, v4, (_BYTE *)(a2 + 8), &v8);
  v5 = sub_DB198(a3);
  v6 = (_BYTE *)sub_DAE47(v5, a1);
  sub_DAECB(v5, v6, (_BYTE *)(a3 + 8), &v9);
  result = 1;
  if ( v8 <= v9 )
    return -(v8 < v9);
  return result;
}
