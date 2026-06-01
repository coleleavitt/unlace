/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4709F3
// Address: 0x004709F3

//----- (004709F3) --------------------------------------------------------
int __cdecl sub_4709F3(_DWORD *a1, _BYTE *a2)
{
  _DWORD *v2; // ecx
  int v3; // edi
  unsigned __int8 *v4; // esi
  unsigned int v5; // edx
  int v6; // ebx
  unsigned int v7; // ecx
  char i; // al
  char v9; // al
  unsigned __int8 *v11; // [esp+Ch] [ebp-8h]
  unsigned int v12; // [esp+10h] [ebp-4h]

  v2 = a1;
  v3 = 0;
  v4 = (unsigned __int8 *)(a1 + 2);
  v5 = 0;
  v12 = 0;
  v11 = (unsigned __int8 *)a1 + a1[1] + 8;
  v6 = *a1 + (a2[4] == 0 ? 23 : 52);
  if ( a1 + 2 != (_DWORD *)v11 )
  {
    do
    {
      if ( __PAIR64__(v12, v3) > sub_471044(a2) )
        break;
      v7 = (*v4 + 16 * __PAIR64__(v12, v3)) >> 32;
      v3 = *v4++ + 16 * v3;
      v6 -= 4;
      v12 = v7;
    }
    while ( v4 != v11 );
    v2 = a1;
    v5 = v12;
  }
  for ( i = 1; v4 != v11 && i; i = v9 == 0 )
    v9 = *v4++;
  return sub_46E801(__PAIR64__(v5, v3), v6, *((_BYTE *)v2 + 776), i, a2);
}
