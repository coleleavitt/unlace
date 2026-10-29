/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C9530
// Address: 0x080C9530

//----- (080C9530) --------------------------------------------------------
int __cdecl sub_80C9530(int a1, int a2, _OWORD *a3)
{
  int v3; // ecx
  int v4; // edx
  int v6; // ebp
  char v7; // al
  char v8; // al
  int v9; // [esp+0h] [ebp-54h]
  __int16 v10; // [esp+8h] [ebp-4Ch] BYREF
  unsigned __int16 v11; // [esp+Ah] [ebp-4Ah]
  _WORD v12[11]; // [esp+1Eh] [ebp-36h] BYREF
  unsigned int v13; // [esp+34h] [ebp-20h]

  v13 = __readgsdword(0x14u);
  sub_80C8760(a1, &v10);
  sub_80C8760(a2, v12);
  v3 = v12[1];
  *a3 = 0;
  v4 = 4;
  v9 = v3;
  if ( v3 )
  {
    if ( v11 )
    {
      v6 = v11 + 0x3FFF;
      v7 = sub_80C8280((int)v12, (int)&v10);
      v8 = sub_80C87C0((int)&v10, v7, 0, v6 - v9, 112);
      v4 = 2;
      if ( v8 )
      {
        v10 = -(v10 != v12[0]);
        sub_80C8700(&v10, (int)a3);
        v4 = 1;
      }
    }
    else
    {
      v4 = 1;
    }
  }
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v4;
}
