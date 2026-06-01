/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C3E0
// Address: 0x0003C3E0

//----- (0003C3E0) --------------------------------------------------------
int __cdecl sub_3C3E0(int a1, unsigned __int64 a2)
{
  int result; // eax
  _DWORD *v3; // edx
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // [esp+8h] [ebp-10h]

  result = -1;
  v7 = *(_DWORD *)(a1 + 460);
  if ( v7 )
  {
    v3 = (_DWORD *)(*(_DWORD *)(a1 + 456) + 16);
    v4 = 0;
    while ( 1 )
    {
      v5 = *(v3 - 4);
      v6 = *(v3 - 3);
      if ( a2 >= __PAIR64__(v6, v5) && a2 < *((_QWORD *)v3 - 1) + __PAIR64__(v6, v5) )
        break;
      ++v4;
      v3 += 6;
      if ( v4 >= v7 )
        return -1;
    }
    return *v3 + a2 - v5;
  }
  return result;
}
