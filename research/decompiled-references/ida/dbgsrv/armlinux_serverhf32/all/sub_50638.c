/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50638
// Address: 0x00050638

//----- (00050638) --------------------------------------------------------
unsigned int __fastcall sub_50638(int a1, unsigned __int8 *a2, int a3)
{
  unsigned int result; // r0
  int v6; // r3
  int v7; // r3
  unsigned __int8 v8[8]; // [sp+0h] [bp-1Ch] BYREF
  int v9; // [sp+8h] [bp-14h]
  int v10; // [sp+Ch] [bp-10h]

  for ( result = sub_50540(a1, (int)a2, a3); ; result = (unsigned int)sub_4C348(a2, v8) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = *(_DWORD *)(a1 + 592);
          v9 = 0;
          v10 = 0;
          v8[0] = 1;
          v7 = *(unsigned __int16 *)(v6 + 12);
          if ( v7 != 15933 )
            break;
          sub_50540(a1, (int)v8, 1);
          result = (unsigned int)sub_4C228(a2, v8);
        }
        if ( v7 != 15421 )
          break;
        sub_50540(a1, (int)v8, 1);
        result = (unsigned int)sub_4C288(a2, v8);
      }
      if ( v7 != 60 )
        break;
      sub_50540(a1, (int)v8, 1);
      result = (unsigned int)sub_4C2E8(a2, v8);
    }
    if ( v7 != 62 )
      break;
    sub_50540(a1, (int)v8, 1);
  }
  return result;
}
