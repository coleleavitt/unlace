__int64 __fastcall sub_25C0(__int64 a1, _WORD *a2, unsigned int *a3)
{
  __int64 v5; // rsi
  unsigned int v6; // ebp
  unsigned int v7; // eax
  unsigned int v9; // [rsp+8h] [rbp-70h] BYREF
  int v10; // [rsp+Ch] [rbp-6Ch] BYREF
  __int16 v11; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int16 v12; // [rsp+12h] [rbp-66h]
  unsigned __int16 v13; // [rsp+14h] [rbp-64h]
  unsigned __int16 v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  v5 = 0;
  while ( 1 )
  {
    qlseek(a1, v5, 0);
    if ( qlread(a1, &v11, 28) != 28 )
      return 0xFFFFFFFFLL;
    if ( v11 == 22604 || v11 == 17740 )
    {
      *a2 = v11;
      return v9;
    }
    if ( v11 != 19802 && v11 != 23117 )
      return 0xFFFFFFFFLL;
    if ( v14 > 0x3Fu )
    {
      qlseek(a1, v9 + 60, 0);
      if ( qlread(a1, &v10, 4) == 4 )
      {
        qlseek(a1, v10 + v9, 0);
        if ( qlread(a1, a2, 2) == 2 && (*a2 == 17740 || *a2 == 22604) )
          break;
      }
    }
    v6 = v13 << 9;
    if ( v12 )
      v6 = v6 + v12 - 512;
    qlseek(a1, v9 + v6, 0);
    if ( qlread(a1, a2, 2) == 2 && *a2 == 22338 )
    {
      qlseek(a1, v6 + v9 + 28, 0);
      if ( qlread(a1, &v9, 4) == 4 )
      {
        v5 = v9;
        if ( v6 < v9 )
          continue;
      }
    }
    return 0xFFFFFFFFLL;
  }
  v7 = v9;
  if ( a3 )
    *a3 = v9;
  return v10 + v7;
}
