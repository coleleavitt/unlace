/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A4C60
// Address: 0x080A4C60

//----- (080A4C60) --------------------------------------------------------
int __cdecl sub_80A4C60(int (__cdecl ***a1)(_DWORD, int))
{
  int v1; // ebp
  int v2; // edx
  int (__cdecl *v3)(_DWORD, int); // esi
  int v4; // eax
  int v5; // esi
  int v7; // [esp+0h] [ebp-24h]

  (*(void (__cdecl **)(int))(*(_DWORD *)dword_811E76C + 8))(dword_811E76C);
  v1 = dword_811E76C;
  v2 = *(_DWORD *)(dword_811E76C + 16);
  if ( v2 == dword_811E76C + 8 )
  {
    v5 = 0;
  }
  else
  {
    do
    {
      v3 = **a1;
      v7 = v2;
      v4 = sub_80A9EF0(*(_DWORD *)(v2 + 16));
      v5 = v3(a1, v4);
      v1 = *((_DWORD *)&qword_811CFF4 + 1502);
      if ( v5 )
        break;
      v2 = std::_Rb_tree_increment(v7);
    }
    while ( v2 != v1 + 8 );
  }
  (*(void (__cdecl **)(int))(*(_DWORD *)v1 + 12))(v1);
  return v5;
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811E76C: using guessed type int dword_811E76C;
