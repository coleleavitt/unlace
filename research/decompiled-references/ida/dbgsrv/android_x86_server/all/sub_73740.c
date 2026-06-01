/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73740
// Address: 0x00073740

//----- (00073740) --------------------------------------------------------
unsigned int __cdecl sub_73740(int a1, int a2, char a3)
{
  int i; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  char v8[4]; // [esp+8h] [ebp-34h] BYREF
  int v9; // [esp+Ch] [ebp-30h]
  int v10; // [esp+10h] [ebp-2Ch]
  char v11[4]; // [esp+18h] [ebp-24h] BYREF
  int v12; // [esp+1Ch] [ebp-20h]
  int v13; // [esp+20h] [ebp-1Ch]
  unsigned int v14; // [esp+28h] [ebp-14h]

  v14 = __readgsdword(0x14u);
  sub_730C0(a1, a2, a3);
  for ( i = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
        i == 94;
        i = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12) )
  {
    v11[0] = 1;
    v13 = 0;
    v12 = 0;
    sub_730C0(a1, (int)v11, 1);
    v4 = v12;
    *(_DWORD *)(a2 + 8) ^= v13;
    *(_DWORD *)(a2 + 4) ^= v4;
  }
  if ( (unsigned __int16)i == 124 )
  {
    do
    {
      v8[0] = 1;
      v10 = 0;
      v9 = 0;
      sub_730C0(a1, (int)v8, 1);
      if ( *(_WORD *)(*(_DWORD *)(a1 + 228) + 12) == 94 )
      {
        do
        {
          v11[0] = 1;
          v13 = 0;
          v12 = 0;
          sub_730C0(a1, (int)v11, 1);
          v5 = v9 ^ v12;
          v6 = v10 ^ v13;
          v10 ^= v13;
          v9 ^= v12;
        }
        while ( *(_WORD *)(*(_DWORD *)(a1 + 228) + 12) == 94 );
      }
      else
      {
        v5 = v9;
        v6 = v10;
      }
      *(_DWORD *)(a2 + 4) |= v5;
      *(_DWORD *)(a2 + 8) |= v6;
    }
    while ( *(_WORD *)(*(_DWORD *)(a1 + 228) + 12) == 124 );
  }
  return __readgsdword(0x14u);
}
