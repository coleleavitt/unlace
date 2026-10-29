/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4616B0
// Address: 0x004616B0

//----- (004616B0) --------------------------------------------------------
char __stdcall sub_4616B0(int a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // edx
  int v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  unsigned __int8 v8; // al
  int v9; // eax
  char v10; // di
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  LPVOID v14; // eax
  unsigned int v16; // [esp+10h] [ebp-4h]
  unsigned int v17; // [esp+18h] [ebp+4h]
  unsigned __int8 *v18; // [esp+1Ch] [ebp+8h]

  v3 = a2;
  if ( !a2 )
    return 0;
  if ( !a1 )
    return 0;
  v5 = a3;
  if ( a3 < 0 )
    return 0;
  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    do
    {
      v8 = *v3;
      if ( *v3 == 61 )
        break;
      v18 = ++v3;
      v9 = dword_4A2C68[v8];
      if ( v9 < 0 )
        return 0;
      v7 += 6;
      v6 = v9 | (v6 << 6);
      if ( (int)v7 >= 8 )
      {
        v10 = v7 - 8;
        v11 = v7 >> 3;
        v17 = v7 >> 3;
        v16 = v7 - 8 * (v7 >> 3);
        do
        {
          v12 = *(_DWORD *)(a1 + 4) + 1;
          v13 = v6 >> v10;
          if ( v12 > *(_DWORD *)(a1 + 8) )
          {
            v14 = sub_453B00(a1, *(void **)a1, v12, 1u);
            v11 = v17;
            *(_DWORD *)a1 = v14;
          }
          v10 -= 8;
          *(_BYTE *)(*(_DWORD *)a1 + (*(_DWORD *)(a1 + 4))++) = v13;
          v17 = --v11;
        }
        while ( v11 );
        v7 = v16;
        v3 = v18;
        v5 = a3;
      }
      a3 = --v5;
    }
    while ( v5 );
  }
  return 1;
}
// 4A2C68: using guessed type int dword_4A2C68[];
