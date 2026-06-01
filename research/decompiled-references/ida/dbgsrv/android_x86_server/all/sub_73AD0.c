/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73AD0
// Address: 0x00073AD0

//----- (00073AD0) --------------------------------------------------------
unsigned int __cdecl sub_73AD0(int a1, int a2, char a3)
{
  int i; // eax
  _BOOL4 v4; // eax
  int v5; // ecx
  char v7[4]; // [esp+8h] [ebp-34h] BYREF
  __int64 v8; // [esp+Ch] [ebp-30h]
  char v9[4]; // [esp+18h] [ebp-24h] BYREF
  __int64 v10; // [esp+1Ch] [ebp-20h]
  unsigned int v11; // [esp+28h] [ebp-14h]

  v11 = __readgsdword(0x14u);
  sub_73740(a1, a2, a3);
  for ( i = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
        i == 9766;
        i = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12) )
  {
    v9[0] = 1;
    v10 = 0;
    sub_73740(a1, (int)v9, 1);
    *(_DWORD *)(a2 + 4) = *(_QWORD *)(a2 + 4) != 0 && v10 != 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)a2 = 0;
  }
  if ( (unsigned __int16)i == 31868 )
  {
    do
    {
      v7[0] = 1;
      v8 = 0;
      sub_73740(a1, (int)v7, 1);
      if ( *(_WORD *)(*(_DWORD *)(a1 + 228) + 12) == 9766 )
      {
        do
        {
          v9[0] = 1;
          v10 = 0;
          sub_73740(a1, (int)v9, 1);
          v4 = v8 != 0 && v10 != 0;
          v8 = (v8 != 0) & (unsigned __int8)(v10 != 0);
          v7[0] = 0;
        }
        while ( *(_WORD *)(*(_DWORD *)(a1 + 228) + 12) == 9766 );
        v5 = 0;
      }
      else
      {
        v5 = HIDWORD(v8);
        v4 = v8;
      }
      *(_DWORD *)(a2 + 4) = (*(_DWORD *)(a2 + 4) | v4 | *(_DWORD *)(a2 + 8) | v5) != 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_BYTE *)a2 = 0;
    }
    while ( *(_WORD *)(*(_DWORD *)(a1 + 228) + 12) == 31868 );
  }
  return __readgsdword(0x14u);
}
