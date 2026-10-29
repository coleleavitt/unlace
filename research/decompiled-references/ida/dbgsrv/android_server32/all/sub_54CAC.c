/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54CAC
// Address: 0x00054CAC

//----- (00054CAC) --------------------------------------------------------
int __fastcall sub_54CAC(int a1, int a2, int a3)
{
  int i; // r0
  int v5; // r1
  unsigned int v6; // r0
  unsigned int v7; // r2
  int v8; // r3
  int v9; // r7
  int v10; // r0
  _BOOL4 v11; // r0
  int v13; // [sp+Ch] [bp-3Ch]
  int v15; // [sp+1Ch] [bp-2Ch]
  char v16[8]; // [sp+24h] [bp-24h] BYREF
  _BOOL4 v17; // [sp+2Ch] [bp-1Ch]
  int v18; // [sp+30h] [bp-18h]
  _BYTE v19[8]; // [sp+34h] [bp-14h] BYREF
  __int64 v20; // [sp+3Ch] [bp-Ch]
  int v21; // [sp+44h] [bp-4h]

  sub_54A54(a1, a2, a3);
  v15 = a1 + 444;
  for ( i = *(unsigned __int16 *)(*(_DWORD *)(a1 + 444) + 12); i == 9766; i = *(unsigned __int16 *)(*(_DWORD *)v15 + 12) )
  {
    v19[0] = 1;
    v20 = 0;
    sub_54A54(a1, (int)v19, 1);
    v5 = *(_DWORD *)(a2 + 12);
    v7 = HIDWORD(v20);
    v6 = v20;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = ((*(_DWORD *)(a2 + 8) | v5) != 0) & (__PAIR64__(v7, v6) != 0);
    *(_BYTE *)a2 = 0;
  }
  if ( i == 31868 )
  {
    do
    {
      v16[0] = 1;
      v17 = 0;
      v18 = 0;
      sub_54A54(a1, (int)v16, 1);
      v8 = a1 + 444;
      if ( *(_WORD *)(*(_DWORD *)v15 + 12) == 9766 )
      {
        do
        {
          v19[0] = 1;
          v9 = 0;
          v20 = 0;
          sub_54A54(a1, (int)v19, 1);
          v10 = v18;
          v18 = 0;
          v8 = a1 + 444;
          v11 = (v17 | v10) != 0 && v20 != 0;
          v17 = v11;
          v16[0] = 0;
        }
        while ( *(_WORD *)(*(_DWORD *)v15 + 12) == 9766 );
      }
      else
      {
        v11 = v17;
        v9 = v18;
      }
      v13 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 8) = (*(_DWORD *)(a2 + 8) | v11 | v13 | v9) != 0;
      *(_BYTE *)a2 = 0;
    }
    while ( *(_WORD *)(*(_DWORD *)v8 + 12) == 31868 );
  }
  return _stack_chk_guard - v21;
}
