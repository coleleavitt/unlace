/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808B450
// Address: 0x0808B450

//----- (0808B450) --------------------------------------------------------
int __cdecl sub_808B450(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  char *v5; // eax
  int v6; // edx
  char *v7; // eax
  int result; // eax
  unsigned __int8 *v9; // [esp+24h] [ebp-48h]
  int v10; // [esp+28h] [ebp-44h]
  unsigned __int8 v11[4]; // [esp+38h] [ebp-34h] BYREF
  __int128 v12; // [esp+3Ch] [ebp-30h]
  unsigned int v13; // [esp+4Ch] [ebp-20h]

  v13 = __readgsdword(0x14u);
  if ( a4 )
  {
    v10 = a2 + a5 - a3;
    if ( v10 >= 0 && a5 > v10 )
    {
      v9 = (unsigned __int8 *)(a4 + 20 * v10);
      do
      {
        ++v10;
        v11[0] = 2;
        v12 = 0;
        sub_8089810(v11, v9);
        v6 = a1[4];
        v7 = (char *)a1[3];
        if ( a1[5] < (unsigned int)(v6 + 1) )
        {
          v7 = (char *)sub_80CF920((int)(a1 + 3), v7, v6 + 1, 0x14u);
          v6 = a1[4];
          a1[3] = v7;
        }
        v5 = &v7[20 * v6];
        *v5 = 2;
        *(_OWORD *)(v5 + 4) = 0;
        sub_8089810((unsigned __int8 *)v5, v11);
        ++a1[4];
        sub_8089430((int)v11);
        v9 += 20;
      }
      while ( a5 != v10 );
    }
    result = a3;
  }
  else
  {
    result = a2;
  }
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
