/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000BD00
// Address: 0x000000010000BD00

//----- (000000010000BD00) ----------------------------------------------------
__int64 *__fastcall sub_10000BD00(__int64 *result, __int64 *a2)
{
  __int64 *v2; // x9
  __int64 *v3; // x8
  __int64 v4; // x11
  _BYTE *v5; // x11
  int v6; // t1
  __int64 v7; // x11
  int v8; // t1
  __int64 **v9; // x10
  __int64 *v10; // x11
  __int64 *v11; // x10
  __int64 v12; // x11
  __int64 *v13; // x9
  __int64 v14; // x10
  __int64 **v15; // x10
  __int64 *v16; // x9
  __int64 v17; // x10
  __int64 **v18; // x10

  *((_BYTE *)a2 + 24) = a2 == result;
  if ( a2 != result )
  {
    do
    {
      v2 = (__int64 *)a2[2];
      if ( (v2[3] & 1) != 0 )
        break;
      v3 = (__int64 *)v2[2];
      v4 = *v3;
      if ( (__int64 *)*v3 == v2 )
      {
        v7 = v3[1];
        if ( !v7 || (v8 = *(unsigned __int8 *)(v7 + 24), v5 = (_BYTE *)(v7 + 24), v8 == 1) )
        {
          if ( (__int64 *)*v2 == a2 )
          {
            v9 = (__int64 **)a2[2];
          }
          else
          {
            v9 = (__int64 **)v2[1];
            v10 = *v9;
            v2[1] = (__int64)*v9;
            if ( v10 )
            {
              v10[2] = (__int64)v2;
              v3 = (__int64 *)v2[2];
            }
            v9[2] = v3;
            v3[*v3 != (_QWORD)v2] = (__int64)v9;
            *v9 = v2;
            v2[2] = (__int64)v9;
            v3 = v9[2];
          }
          *((_BYTE *)v9 + 24) = 1;
          *((_BYTE *)v3 + 24) = 0;
          v16 = (__int64 *)*v3;
          v17 = *(_QWORD *)(*v3 + 8);
          *v3 = v17;
          if ( v17 )
            *(_QWORD *)(v17 + 16) = v3;
          v18 = (__int64 **)v3[2];
          v16[2] = (__int64)v18;
          v18[*v18 != v3] = v16;
          v16[1] = (__int64)v3;
          v3[2] = (__int64)v16;
          return result;
        }
      }
      else if ( !v4 || (v6 = *(unsigned __int8 *)(v4 + 24), v5 = (_BYTE *)(v4 + 24), v6 == 1) )
      {
        v11 = (__int64 *)*v2;
        if ( (__int64 *)*v2 == a2 )
        {
          v12 = v11[1];
          *v2 = v12;
          if ( v12 )
          {
            *(_QWORD *)(v12 + 16) = v2;
            v3 = (__int64 *)v2[2];
          }
          v11[2] = (__int64)v3;
          v3[*v3 != (_QWORD)v2] = (__int64)v11;
          v11[1] = (__int64)v2;
          v2[2] = (__int64)v11;
          v3 = (__int64 *)v11[2];
        }
        else
        {
          v11 = (__int64 *)a2[2];
        }
        *((_BYTE *)v11 + 24) = 1;
        *((_BYTE *)v3 + 24) = 0;
        v13 = (__int64 *)v3[1];
        v14 = *v13;
        v3[1] = *v13;
        if ( v14 )
          *(_QWORD *)(v14 + 16) = v3;
        v15 = (__int64 **)v3[2];
        v13[2] = (__int64)v15;
        v15[*v15 != v3] = v13;
        *v13 = (__int64)v3;
        v3[2] = (__int64)v13;
        return result;
      }
      *((_BYTE *)v2 + 24) = 1;
      a2 = v3;
      *((_BYTE *)v3 + 24) = v3 == result;
      *v5 = 1;
    }
    while ( v3 != result );
  }
  return result;
}
