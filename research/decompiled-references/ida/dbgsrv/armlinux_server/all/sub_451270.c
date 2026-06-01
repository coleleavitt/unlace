/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451270
// Address: 0x0000000000451270

//----- (0000000000451270) ----------------------------------------------------
_QWORD *__fastcall sub_451270(_QWORD *result, __int64 a2, unsigned __int8 a3, int a4)
{
  __int64 v4; // x5
  __int64 v5; // x2
  __int64 v6; // x4
  __int64 *v7; // x21
  int v8; // w20
  _QWORD *v10; // x24
  unsigned __int8 i; // w2
  __int64 v12; // x22
  unsigned __int64 v13; // x23
  __int64 v14; // x26
  _BYTE *v15; // x0

  v4 = result[7];
  if ( *(_QWORD *)(v4 + 56LL * a4 + 8) > (unsigned __int64)a3 )
  {
    v5 = 24LL * a3;
    v6 = *(_QWORD *)(v4 + 56LL * a4);
    if ( *(_QWORD *)(v6 + v5 + 8) )
    {
      v7 = *(__int64 **)(v6 + v5);
      v8 = *(unsigned __int8 *)v7;
    }
    else
    {
      v8 = 0;
      v7 = &qword_4B2D48;
    }
    v10 = result;
    for ( i = v8 + 0x80; v8; i = v8 + 0x80 )
    {
      v7 = (__int64 *)((char *)v7 + 1);
      if ( i <= 0x7Eu )
      {
        result = (_QWORD *)sub_451270(v10, a2);
        v8 = *(unsigned __int8 *)v7;
      }
      else
      {
        v12 = *(_QWORD *)(a2 + 8);
        v13 = 2;
        v14 = 0;
        if ( v12 )
        {
          v14 = v12 - 1;
          v13 = v12 + 1;
        }
        else
        {
          v12 = 1;
        }
        v15 = *(_BYTE **)a2;
        if ( *(_QWORD *)(a2 + 16) < v13 )
        {
          v15 = sub_491288(a2, *(void **)a2, v13, 1u);
          *(_QWORD *)a2 = v15;
        }
        *(_QWORD *)(a2 + 8) = v13;
        v15[v14] = v8;
        result = *(_QWORD **)a2;
        *(_BYTE *)(*(_QWORD *)a2 + v12) = 0;
        v8 = *(unsigned __int8 *)v7;
      }
    }
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
