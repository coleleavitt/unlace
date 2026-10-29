/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459140
// Address: 0x0000000000459140

//----- (0000000000459140) ----------------------------------------------------
__int64 __fastcall sub_459140(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // x0
  unsigned int v7; // w1
  __int64 v8; // x25
  unsigned int v10; // [xsp+44h] [xbp-Ch] BYREF

  if ( !*(_BYTE *)(a1 + 336) )
    goto LABEL_5;
  v6 = sub_4578C8(a1, (unsigned __int8 **)a2, a3);
  v10 = v6;
  v7 = v6;
  if ( !(_DWORD)v6 )
  {
    while ( 1 )
    {
      if ( *(_WORD *)(a2 + 24) == 1 )
      {
        *(_BYTE *)(a1 + 336) = 0;
        v8 = sub_455218(a1, (int *)&v10);
        v6 = v10;
        if ( v10 == -1 )
          goto LABEL_15;
      }
      else
      {
        if ( *(_BYTE *)(a1 + 336) )
          return v7;
LABEL_5:
        v8 = sub_455218(a1, (int *)&v10);
        v6 = v10;
        if ( v10 == -1 )
        {
LABEL_15:
          v7 = 0;
          *(_WORD *)(a2 + 24) = 1;
          return v7;
        }
      }
      if ( (_DWORD)v6 == 34 )
        goto LABEL_15;
      if ( !(_DWORD)v6 )
      {
        while ( *(_QWORD *)(a1 + 64) )
          sub_450E98(a1);
        *(_QWORD *)a1 = v8;
        *(_QWORD *)(a1 + 8) = v8;
        *(_BYTE *)(a1 + 336) = 1;
        v6 = sub_4578C8(a1, (unsigned __int8 **)a2, a3);
        v10 = v6;
        v7 = v6;
        if ( !(_DWORD)v6 )
          continue;
      }
      return (unsigned int)sub_4869C8(v6);
    }
  }
  return (unsigned int)sub_4869C8(v6);
}
