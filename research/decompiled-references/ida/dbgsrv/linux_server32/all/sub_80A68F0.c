/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A68F0
// Address: 0x080A68F0

//----- (080A68F0) --------------------------------------------------------
int __cdecl sub_80A68F0(int a1, int a2, void *a3, _DWORD *a4)
{
  int v4; // esi

  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 == sub_80CD690(a1, a3, v4) )
  {
    if ( dword_811E72C && *(_BYTE *)(dword_811E72C + 96) )
    {
      sub_8058290();
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( dword_811E72C )
    {
      if ( *(_BYTE *)(dword_811E72C + 96) )
        sub_8058290();
    }
    *a4 = 10;
    return 1;
  }
}
// 811E72C: using guessed type int dword_811E72C;
