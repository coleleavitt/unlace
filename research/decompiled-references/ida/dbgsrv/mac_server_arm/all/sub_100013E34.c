/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013E34
// Address: 0x0000000100013E34

//----- (0000000100013E34) ----------------------------------------------------
__int64 __fastcall sub_100013E34(__int64 result, __int64 *a2)
{
  __int64 v2; // x9
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x12
  __int64 v6; // x10
  __int64 v7; // x11
  __int64 v8; // x12
  unsigned __int64 v9; // x13
  __int64 v10; // x15
  _QWORD *v11; // x14
  unsigned __int64 v12; // x16
  bool v13; // cf
  unsigned __int64 v14; // x16
  unsigned int v15; // w13

  v2 = a2[1];
  if ( (v2 & 0x7FFFFFFFFFFFFFFLL) != 0 )
  {
    v3 = *a2;
    v4 = *a2 + 32 * v2;
    v5 = *(_QWORD *)(result + 536);
    v6 = v5 & 0x7FFFFFFFFFFFFFFLL;
    v7 = *(_QWORD *)(result + 528) + 16LL;
    v8 = 32 * v5;
    do
    {
      if ( v6 )
      {
        v9 = *(_QWORD *)(v3 + 16);
        v10 = v8;
        v11 = (_QWORD *)v7;
        while ( 1 )
        {
          v12 = *(v11 - 2);
          v13 = v9 >= v12;
          v14 = v9 - v12;
          if ( v13 && v14 <= *(v11 - 1) )
            break;
          v11 += 4;
          v10 -= 32;
          if ( !v10 )
            goto LABEL_3;
        }
        if ( *v11 + v14 != -1 )
        {
          v15 = *(_DWORD *)(v3 + 24);
          if ( v15 > *(_DWORD *)(result + 768) )
            *(_DWORD *)(result + 768) = v15;
        }
      }
LABEL_3:
      v3 += 32;
    }
    while ( v3 != v4 );
  }
  return result;
}
