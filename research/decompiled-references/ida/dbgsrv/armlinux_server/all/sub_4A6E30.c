/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A6E30
// Address: 0x00000000004A6E30

//----- (00000000004A6E30) ----------------------------------------------------
__int64 __fastcall sub_4A6E30(__int64 a1)
{
  unsigned __int8 *v1; // x2
  __int64 v3; // x20
  unsigned int v4; // w1
  __int64 *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x0
  int v9; // w23
  _BYTE *v10; // x1
  __int64 v11; // [xsp+48h] [xbp+48h] BYREF

  v1 = *(unsigned __int8 **)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 72);
  v4 = *v1;
  if ( v4 != 69 )
  {
    v11 = 0;
    v5 = &v11;
    while ( 1 )
    {
      if ( v4 == 76 )
      {
        v6 = sub_4A92D8(a1);
        goto LABEL_7;
      }
      if ( v4 > 0x4C )
      {
        if ( v4 != 88 )
        {
LABEL_14:
          v6 = sub_4A7538(a1);
          goto LABEL_7;
        }
        v9 = *(_DWORD *)(a1 + 84);
        *(_QWORD *)(a1 + 24) = v1 + 1;
        *(_DWORD *)(a1 + 84) = 1;
        v6 = sub_4A66F8(a1);
        *(_DWORD *)(a1 + 84) = v9;
        v10 = *(_BYTE **)(a1 + 24);
        if ( *v10 != 69 )
          return 0;
        *(_QWORD *)(a1 + 24) = v10 + 1;
      }
      else
      {
        if ( v4 - 73 > 1 )
          goto LABEL_14;
        v6 = sub_4A6F70(a1);
      }
LABEL_7:
      if ( !v6 )
        return 0;
      v7 = sub_4A5090(a1, 47, v6, 0);
      *v5 = v7;
      if ( !v7 )
        return 0;
      v1 = *(unsigned __int8 **)(a1 + 24);
      v5 = (__int64 *)(v7 + 16);
      v4 = *v1;
      if ( v4 == 69 )
      {
        *(_QWORD *)(a1 + 72) = v3;
        *(_QWORD *)(a1 + 24) = v1 + 1;
        return v11;
      }
    }
  }
  *(_QWORD *)(a1 + 24) = v1 + 1;
  return sub_4A5090(a1, 47, 0, 0);
}
