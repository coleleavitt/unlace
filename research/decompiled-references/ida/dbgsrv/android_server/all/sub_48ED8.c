/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48ED8
// Address: 0x0000000000048ED8

//----- (0000000000048ED8) ----------------------------------------------------
__int64 *__fastcall sub_48ED8(__int64 *result, __int64 *a2)
{
  __int64 v2; // x9
  _BYTE *v3; // x10
  __int64 *v4; // x8
  __int64 v5; // x12
  _BYTE *v6; // x12
  int v7; // t1
  __int64 v8; // x12
  int v9; // t1
  __int64 v10; // x10
  _QWORD *v11; // x8
  __int64 v12; // x10
  __int64 *v13; // x9
  __int64 v14; // x10
  __int64 **v15; // x10
  __int64 v16; // x11
  _QWORD *v17; // x10
  __int64 v18; // x11
  _QWORD *v19; // x8
  __int64 v20; // x11
  __int64 *v21; // x9
  __int64 v22; // x10
  __int64 **v23; // x10
  __int64 v24; // x11

  *((_BYTE *)a2 + 24) = a2 == result;
  if ( a2 != result )
  {
    do
    {
      v2 = a2[2];
      v3 = (_BYTE *)(v2 + 24);
      if ( *(_BYTE *)(v2 + 24) )
        break;
      v4 = *(__int64 **)(v2 + 16);
      v5 = *v4;
      if ( *v4 == v2 )
      {
        v8 = v4[1];
        if ( !v8 || (v9 = *(unsigned __int8 *)(v8 + 24), v6 = (_BYTE *)(v8 + 24), v9) )
        {
          if ( *(__int64 **)v2 != a2 )
          {
            v17 = *(_QWORD **)(v2 + 8);
            v18 = *v17;
            *(_QWORD *)(v2 + 8) = *v17;
            if ( v18 )
            {
              *(_QWORD *)(v18 + 16) = v2;
              v4 = *(__int64 **)(v2 + 16);
            }
            v17[2] = v4;
            v19 = *(_QWORD **)(v2 + 16);
            v20 = *v19 != v2;
            v19[v20] = v17;
            *v17 = v2;
            *(_QWORD *)(v2 + 16) = v17;
            v4 = (__int64 *)v17[2];
            v3 = v17 + 3;
          }
          *v3 = 1;
          v21 = (__int64 *)*v4;
          *((_BYTE *)v4 + 24) = 0;
          v22 = v21[1];
          *v4 = v22;
          if ( v22 )
            *(_QWORD *)(v22 + 16) = v4;
          v21[2] = v4[2];
          v23 = (__int64 **)v4[2];
          v24 = *v23 != v4;
          v23[v24] = v21;
          v21[1] = (__int64)v4;
          v4[2] = (__int64)v21;
          return result;
        }
      }
      else if ( !v5 || (v7 = *(unsigned __int8 *)(v5 + 24), v6 = (_BYTE *)(v5 + 24), v7) )
      {
        if ( *(__int64 **)v2 == a2 )
        {
          v10 = a2[1];
          *(_QWORD *)v2 = v10;
          if ( v10 )
          {
            *(_QWORD *)(v10 + 16) = v2;
            v4 = *(__int64 **)(v2 + 16);
          }
          a2[2] = (__int64)v4;
          v11 = *(_QWORD **)(v2 + 16);
          v12 = *v11 != v2;
          v11[v12] = a2;
          a2[1] = v2;
          *(_QWORD *)(v2 + 16) = a2;
          v4 = (__int64 *)a2[2];
          v3 = a2 + 3;
        }
        *v3 = 1;
        v13 = (__int64 *)v4[1];
        *((_BYTE *)v4 + 24) = 0;
        v14 = *v13;
        v4[1] = *v13;
        if ( v14 )
          *(_QWORD *)(v14 + 16) = v4;
        v13[2] = v4[2];
        v15 = (__int64 **)v4[2];
        v16 = *v15 != v4;
        v15[v16] = v13;
        *v13 = (__int64)v4;
        v4[2] = (__int64)v13;
        return result;
      }
      a2 = *(__int64 **)(v2 + 16);
      *v3 = 1;
      *((_BYTE *)v4 + 24) = v4 == result;
      *v6 = 1;
    }
    while ( v4 != result );
  }
  return result;
}
