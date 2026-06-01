/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DD20
// Address: 0x0007DD20

//----- (0007DD20) --------------------------------------------------------
unsigned int __cdecl sub_7DD20(int *a1, unsigned int a2)
{
  __int128 v3; // [esp+10h] [ebp-11Ch] BYREF
  __int128 v4; // [esp+20h] [ebp-10Ch]
  int v5; // [esp+30h] [ebp-FCh]
  int v6; // [esp+34h] [ebp-F8h]
  int v7; // [esp+38h] [ebp-F4h]
  int s; // [esp+3Ch] [ebp-F0h] BYREF
  __int128 v9; // [esp+40h] [ebp-ECh]
  __int128 v10; // [esp+50h] [ebp-DCh]
  __int128 v11; // [esp+60h] [ebp-CCh]
  __int128 v12; // [esp+70h] [ebp-BCh]
  __int128 v13; // [esp+80h] [ebp-ACh]
  __int128 v14; // [esp+90h] [ebp-9Ch]
  __int128 v15; // [esp+A0h] [ebp-8Ch]
  __int128 v16; // [esp+B0h] [ebp-7Ch]
  __int128 v17; // [esp+C0h] [ebp-6Ch]
  __int128 v18; // [esp+D0h] [ebp-5Ch]
  __int128 v19; // [esp+E0h] [ebp-4Ch]
  __int128 v20; // [esp+F0h] [ebp-3Ch]
  __int128 v21; // [esp+100h] [ebp-2Ch]
  unsigned int v22; // [esp+118h] [ebp-14h]

  v22 = __readgsdword(0x14u);
  if ( a1[1] != a2 )
  {
    s = 0;
    v21 = 0;
    v20 = 0;
    v19 = 0;
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    v12 = 0;
    v11 = 0;
    v10 = 0;
    v9 = 0;
    v4 = 0;
    v3 = 0;
    v5 = -1;
    v6 = -1;
    v7 = -1;
    memset(&s, 0, 0xCCu);
    sub_88120(a1, a2, (unsigned int)&v3);
    if ( DWORD1(v4) )
    {
      DWORD2(v4) = 0;
      qfree((void *)DWORD1(v4));
      DWORD1(v4) = 0;
      HIDWORD(v4) = 0;
    }
    if ( DWORD1(v3) )
    {
      DWORD2(v3) = 0;
      qfree((void *)DWORD1(v3));
      DWORD1(v3) = 0;
      HIDWORD(v3) = 0;
    }
  }
  return __readgsdword(0x14u);
}
