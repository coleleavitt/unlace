/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8098E70
// Address: 0x08098E70

//----- (08098E70) --------------------------------------------------------
unsigned int __cdecl sub_8098E70(int a1, int a2, char a3)
{
  int v3; // eax
  __int16 v4; // ax
  unsigned int result; // eax
  __int64 v6; // rax
  int v7; // [esp+4h] [ebp-1Ch] BYREF
  int v8; // [esp+8h] [ebp-18h]
  int v9; // [esp+Ch] [ebp-14h]
  unsigned int v10; // [esp+10h] [ebp-10h]

  v10 = __readgsdword(0x14u);
  sub_8098DA0(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 352);
      v9 = 0;
      v7 = 1;
      v4 = *(_WORD *)(v3 + 12);
      v8 = 0;
      if ( v4 != 15934 )
        break;
      sub_8098DA0(a1, (int)&v7, 1);
      v6 = *(_QWORD *)(a2 + 4);
      if ( *(_BYTE *)a2 )
        *(_QWORD *)(a2 + 4) = (unsigned __int64)v6 >> v8;
      else
        *(_QWORD *)(a2 + 4) = v6 >> v8;
    }
    if ( v4 != 15420 )
      break;
    sub_8098DA0(a1, (int)&v7, 1);
    *(_QWORD *)(a2 + 4) <<= v8;
  }
  result = v10 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
