/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E368
// Address: 0x000000000049E368

//----- (000000000049E368) ----------------------------------------------------
unsigned __int64 __fastcall sub_49E368(__int64 a1, __int64 a2)
{
  int v2; // w4
  unsigned int v3; // w3
  unsigned __int64 v5; // [xsp+18h] [xbp+18h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 40);
  if ( v2 == 255 )
  {
    sub_49E220(255, *(char **)(a1 + 16), *(char **)(a1 + 24), &v5);
    return v5;
  }
  else
  {
    v3 = v2 & 7;
    if ( v3 == 2 )
    {
      sub_49E220(*(_BYTE *)(a1 + 40), *(char **)(a1 + 16), (char *)(*(_QWORD *)(a1 + 24) - 2 * a2), &v5);
      return v5;
    }
    else
    {
      if ( v3 <= 2 )
      {
        if ( (v2 & 7) != 0 )
          goto LABEL_11;
      }
      else
      {
        if ( v3 == 3 )
        {
          sub_49E220(*(_BYTE *)(a1 + 40), *(char **)(a1 + 16), (char *)(*(_QWORD *)(a1 + 24) - 4 * a2), &v5);
          return v5;
        }
        if ( v3 != 4 )
LABEL_11:
          abort();
      }
      sub_49E220(*(_BYTE *)(a1 + 40), *(char **)(a1 + 16), (char *)(*(_QWORD *)(a1 + 24) - 8 * a2), &v5);
      return v5;
    }
  }
}
