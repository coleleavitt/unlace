/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467F80
// Address: 0x00467F80

//----- (00467F80) --------------------------------------------------------
int __cdecl sub_467F80(int a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v3; // edx
  unsigned int v4; // ebx
  int v5; // ecx
  unsigned __int8 v6; // al
  bool v7; // cc
  int v8; // eax

  v3 = a2;
  v4 = a3;
  if ( !a3 )
    return 0;
  v5 = a1 - (_DWORD)a2;
  if ( ((unsigned __int8)a2 & 3) != 0 )
    goto LABEL_3;
LABEL_7:
  while ( (((_WORD)v5 + (_WORD)v3) & 0xFFFu) <= 0xFFC )
  {
    v8 = *(_DWORD *)((char *)v3 + v5);
    if ( v8 != *v3 )
      break;
    v7 = v4 <= 4;
    v4 -= 4;
    if ( !v7 )
    {
      ++v3;
      if ( ((v8 - 16843009) & ~v8 & 0x80808080) == 0 )
        continue;
    }
    return 0;
  }
LABEL_3:
  while ( 1 )
  {
    v6 = *((_BYTE *)v3 + v5);
    if ( v6 != *(_BYTE *)v3 )
      return v6 < *(_BYTE *)v3 ? -1 : 1;
    if ( !*((_BYTE *)v3 + v5) )
      return 0;
    v3 = (_DWORD *)((char *)v3 + 1);
    v7 = v4-- <= 1;
    if ( v7 )
      return 0;
    if ( ((unsigned __int8)v3 & 3) == 0 )
      goto LABEL_7;
  }
}
