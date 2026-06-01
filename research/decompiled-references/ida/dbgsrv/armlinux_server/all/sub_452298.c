/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452298
// Address: 0x0000000000452298

//----- (0000000000452298) ----------------------------------------------------
char *__fastcall sub_452298(
        __int64 a1,
        char *a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  int v10; // w26
  int v11; // w20
  int v12; // w19
  unsigned __int8 v13; // w25
  const char *v14; // x19
  __int64 *v15; // x0
  unsigned __int64 v16; // x20
  char *v18; // x0
  unsigned int v20; // w19
  int v21; // w0
  char v22[4096]; // [xsp+58h] [xbp-1008h] BYREF

  v10 = a5;
  v11 = a6;
  v12 = *(_DWORD *)(a1 + 356) & 4;
  if ( sub_48F628(a4) )
  {
    v16 = sub_493350((unsigned __int64)a2, a4, a3);
    if ( v12 && !(unsigned __int8)sub_4504C0(a2, a3) )
      return nullptr;
  }
  else
  {
    v13 = v12 != 0;
    if ( ((v10 == 34) & (v11 ^ 1)) == 0 )
    {
      if ( v11 )
      {
        v14 = v22;
        if ( sub_48F310(v22, 0x1000u, *(char **)(a1 + 296)) )
          goto LABEL_5;
      }
      goto LABEL_4;
    }
    v18 = sub_450720(a2, a3, *(char **)(a1 + 296), (__int64)a4, v13);
    v16 = (unsigned __int64)v18;
    if ( (int)(*(_QWORD *)(a1 + 272) - 1) >= 0 && v18 == nullptr )
    {
      v20 = *(_QWORD *)(a1 + 272) - 2;
      do
      {
        v16 = (unsigned __int64)sub_450720(
                                  a2,
                                  a3,
                                  *(char **)(*(_QWORD *)(a1 + 264) + 40LL * (int)(v20 + 1)),
                                  (__int64)a4,
                                  v13);
        v21 = v20 >> 31;
        if ( v16 )
          v21 = 1;
        --v20;
      }
      while ( !v21 );
    }
    if ( !v16 )
    {
LABEL_4:
      v14 = nullptr;
LABEL_5:
      v15 = off_520228();
      return sub_452070(v15, a2, a3, (__int64)a4, v14, v13);
    }
  }
  return (char *)v16;
}
// 452298: could not find valid save-restore pair for x25
// 520228: using guessed type __int64 *(*off_520228)();
