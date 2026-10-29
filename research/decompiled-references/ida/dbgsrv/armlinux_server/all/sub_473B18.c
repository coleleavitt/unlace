/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473B18
// Address: 0x0000000000473B18

//----- (0000000000473B18) ----------------------------------------------------
__int64 __fastcall sub_473B18(
        char a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, __int64 *, __int64))
{
  int v9; // w1
  int v10; // w0
  unsigned int v11; // w1
  bool v12; // cc
  unsigned int v14; // w19
  __int64 v15; // [xsp+20h] [xbp-10h]
  __int64 (__fastcall ***v16)(_QWORD, __int64 *, __int64); // [xsp+28h] [xbp-8h]

  if ( (a1 & 8) == 0 )
  {
    v11 = *(unsigned __int8 *)(a4 + 33);
    v10 = *(_DWORD *)(a4 + 8);
    v12 = v11 > 2;
    if ( v11 != 2 )
      goto LABEL_5;
    return (unsigned int)((int)a2 >> v10);
  }
  v9 = *(unsigned __int8 *)(a4 + 32);
  v10 = 0;
  if ( v9 != 160 )
  {
    v15 = a5;
    v16 = a6;
    v10 = sub_473A80(a3, v9, a5, a6);
    a5 = v15;
    a6 = v16;
  }
  v11 = *(unsigned __int8 *)(a4 + 33);
  v12 = v11 > 2;
  if ( v11 == 2 )
    return (unsigned int)((int)a2 >> v10);
LABEL_5:
  if ( v12 )
  {
    if ( v11 == 3 )
    {
      return (unsigned int)sub_47FE40(a2, (unsigned int)-v10, 0, 0x20u);
    }
    else
    {
      if ( v11 != 4 )
        return a2;
      v14 = a2 >> 1;
      if ( (sub_473A80(a3, 16, a5, a6) & 0x20000000) != 0 )
        return (a2 >> 1) | 0x80000000;
      return v14;
    }
  }
  else
  {
    if ( v11 )
    {
      if ( v11 == 1 )
        return a2 >> v10;
      return a2;
    }
    return a2 << v10;
  }
}
