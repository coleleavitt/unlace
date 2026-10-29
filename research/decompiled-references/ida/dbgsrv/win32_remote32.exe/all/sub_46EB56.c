/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46EB56
// Address: 0x0046EB56

//----- (0046EB56) --------------------------------------------------------
int __cdecl sub_46EB56(_DWORD *a1, unsigned int a2, unsigned __int8 a3, char a4, _BYTE *a5)
{
  int v5; // edx
  unsigned int v6; // esi
  unsigned int v7; // ecx
  char v9; // cl
  int v10; // esi
  char v11; // cl
  _DWORD *v12; // edx
  bool v13; // zf
  char v14; // bl
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned __int64 v18; // kr00_8
  _DWORD *v19; // ecx
  int v20; // [esp+Ch] [ebp-20h]
  int v21; // [esp+14h] [ebp-18h]
  int v22; // [esp+18h] [ebp-14h]
  int v23; // [esp+18h] [ebp-14h]
  unsigned int v24; // [esp+1Ch] [ebp-10h]
  unsigned __int8 v25; // [esp+1Ch] [ebp-10h]
  char v26; // [esp+20h] [ebp-Ch]
  char v27; // [esp+20h] [ebp-Ch]
  unsigned int v28; // [esp+24h] [ebp-8h]
  unsigned int v29; // [esp+24h] [ebp-8h]
  int v30; // [esp+28h] [ebp-4h]

  v5 = a5[4] == 0 ? 23 : 52;
  if ( a2 > 0x40 )
  {
    v9 = a2 & 0x1F;
    v10 = (a2 >> 5) - 2;
    v21 = a1[v10 + 1];
    v28 = a1[a2 >> 5];
    if ( (a2 & 0x1F) != 0 )
    {
      v14 = 1;
      v23 = (1 << v9) - 1;
      v25 = 64 - v9;
      v20 = a1[a2 >> 5];
      v30 = sub_4634C0(v28, 64 - v9 - 32);
      v29 = v15;
      LODWORD(v16) = sub_4634C0((unsigned int)v23 & a1[(a2 >> 5) + 1], v25);
      v18 = sub_463600(v21 & (unsigned int)~v23, a2 & 0x1F) + v16 + __PAIR64__(v29, v30);
      v17 = v18;
      if ( a4 || (v21 & v23) != 0 )
        v14 = 0;
      v27 = v14;
      if ( a2 >> 5 != 2 )
      {
        v19 = a1 + 1;
        do
        {
          v13 = *v19++ == 0;
          v14 = !v13 ? 0 : v14;
          v27 = v14;
          --v10;
        }
        while ( v10 );
        v17 = v18;
      }
      return sub_46E801(__PAIR64__(HIDWORD(v18), v17), v20, a3, v27, a5);
    }
    else
    {
      v22 = v5 + 32 * ((a2 >> 5) - 2);
      v24 = a1[v10 + 1];
      v11 = a4 ^ 1;
      v26 = a4 ^ 1;
      if ( a2 >> 5 != 2 )
      {
        v12 = a1 + 1;
        do
        {
          v13 = *v12++ == 0;
          v11 = !v13 ? 0 : v11;
          --v10;
        }
        while ( v10 );
        v26 = v11;
      }
      return sub_46E801(__PAIR64__(v28, v24), v22, a3, v26, a5);
    }
  }
  else
  {
    if ( *a1 )
      v6 = a1[1];
    else
      v6 = 0;
    if ( *a1 <= 1u )
      v7 = 0;
    else
      v7 = a1[2];
    return sub_46E801(__PAIR64__(v7, v6), v5, a3, a4 ^ 1, a5);
  }
}
// 46EC64: variable 'v15' is possibly undefined
// 46EC75: variable 'v16' is possibly undefined
