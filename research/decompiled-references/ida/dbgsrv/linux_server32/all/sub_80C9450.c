/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C9450
// Address: 0x080C9450

//----- (080C9450) --------------------------------------------------------
int __cdecl sub_80C9450(int a1, int a2, _OWORD *a3)
{
  int v3; // ebp
  int v4; // ecx
  char v5; // al
  char v6; // dl
  int result; // eax
  int v8; // [esp+4h] [ebp-50h]
  _WORD v9[11]; // [esp+8h] [ebp-4Ch] BYREF
  int v10[5]; // [esp+1Eh] [ebp-36h] BYREF
  unsigned int v11; // [esp+34h] [ebp-20h]

  v11 = __readgsdword(0x14u);
  sub_80C8760(a1, v9);
  sub_80C8760(a2, v10);
  v3 = v9[1];
  v4 = HIWORD(v10[0]);
  *a3 = 0;
  if ( v3 )
  {
    v8 = v4;
    if ( v4 )
    {
      v5 = sub_80C80C0((int)v9, v10);
      v6 = sub_80C87C0((int)v10, v5, 0, v3 + v8 - 16382, 112);
      result = 2;
      if ( !v6 )
        goto LABEL_6;
      LOWORD(v10[0]) = -(v9[0] != LOWORD(v10[0]));
      sub_80C8700(v10, (int)a3);
    }
  }
  result = 1;
LABEL_6:
  if ( v11 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
