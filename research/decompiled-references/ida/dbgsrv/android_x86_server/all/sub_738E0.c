/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_738E0
// Address: 0x000738E0

//----- (000738E0) --------------------------------------------------------
unsigned int __cdecl sub_738E0(int a1, int a2, char a3)
{
  int v3; // edi
  int i; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  char v9[4]; // [esp+8h] [ebp-34h] BYREF
  int v10; // [esp+Ch] [ebp-30h]
  int v11; // [esp+10h] [ebp-2Ch]
  char v12[4]; // [esp+18h] [ebp-24h] BYREF
  int v13; // [esp+1Ch] [ebp-20h]
  int v14; // [esp+20h] [ebp-1Ch]
  unsigned int v15; // [esp+28h] [ebp-14h]

  v3 = a1;
  v15 = __readgsdword(0x14u);
  sub_732E0(a1, a2, a3);
  for ( i = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
        i == 124;
        i = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12) )
  {
    v12[0] = 1;
    v14 = 0;
    v13 = 0;
    sub_732E0(a1, (int)v12, 1);
    v5 = v13;
    *(_DWORD *)(a2 + 8) |= v14;
    *(_DWORD *)(a2 + 4) |= v5;
  }
  if ( (unsigned __int16)i == 9766 )
  {
    do
    {
      v9[0] = 1;
      v11 = 0;
      v10 = 0;
      sub_732E0(v3, (int)v9, 1);
      if ( *(_WORD *)(*(_DWORD *)(v3 + 228) + 12) == 124 )
      {
        do
        {
          v12[0] = 1;
          v14 = 0;
          v13 = 0;
          sub_732E0(v3, (int)v12, 1);
          v6 = v10 | v13;
          v7 = v11 | v14;
          v11 |= v14;
          v10 |= v13;
        }
        while ( *(_WORD *)(*(_DWORD *)(v3 + 228) + 12) == 124 );
      }
      else
      {
        v6 = v10;
        v7 = v11;
      }
      v3 = a1;
      *(_DWORD *)(a2 + 4) = *(_QWORD *)(a2 + 4) != 0 && (v7 | v6) != 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_BYTE *)a2 = 0;
    }
    while ( *(_WORD *)(*(_DWORD *)(a1 + 228) + 12) == 9766 );
  }
  return __readgsdword(0x14u);
}
