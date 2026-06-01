/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4918F8
// Address: 0x00000000004918F8

//----- (00000000004918F8) ----------------------------------------------------
__int64 __fastcall sub_4918F8(char *a1, char *a2, __int64 a3, unsigned int a4)
{
  __int64 result; // x0
  __int64 v6; // x24
  __int64 v8; // x0
  int v9; // w5
  int *v10; // x7
  int v11; // w3
  bool v12; // cc
  _BOOL4 v13; // w4
  int v14; // w6
  bool v15; // cc
  _BOOL4 v16; // w8
  int v17; // w3
  int v18; // w4
  bool v19; // cc
  bool v21; // cc
  _BOOL4 v22; // w8
  int v23; // w5
  bool v24; // cc
  int v26; // w3
  char *v27; // x19
  char *v28; // x0
  char *v29; // x23
  bool v30; // cc
  int v32; // w2
  int v33; // t1
  __int64 v34; // x18
  __int64 i; // x19
  __int64 v36; // x18
  __int64 v37; // x3

  result = a2 - a1;
  if ( result > 128 )
  {
    v6 = a3;
    if ( !a3 )
    {
      v29 = a2;
      goto LABEL_54;
    }
    while ( 1 )
    {
      v8 = result >> 4;
      v9 = *((_DWORD *)a1 + 2);
      --v6;
      v10 = (int *)&a1[8 * v8];
      v11 = *v10;
      v12 = v9 < *v10;
      if ( v9 == *v10 )
        v12 = *((_DWORD *)a1 + 3) < v10[1];
      v13 = v12;
      v14 = *((_DWORD *)a2 - 2);
      if ( v13 )
      {
        v15 = v11 < v14;
        if ( v11 == v14 )
          v15 = v10[1] < *((_DWORD *)a2 - 1);
        v16 = v15;
        v18 = *(_DWORD *)a1;
        v17 = *((_DWORD *)a1 + 1);
        if ( v16 )
        {
          *(_QWORD *)a1 = *(_QWORD *)&a1[8 * v8];
          *(_DWORD *)&a1[8 * v8] = v18;
          v10[1] = v17;
          v18 = *((_DWORD *)a1 + 2);
        }
        else
        {
          v19 = v9 < v14;
          if ( v9 == v14 )
            v19 = *((_DWORD *)a1 + 3) < *((_DWORD *)a2 - 1);
          if ( v19 )
          {
            *(_QWORD *)a1 = *((_QWORD *)a2 - 1);
            *((_DWORD *)a2 - 2) = v18;
            *((_DWORD *)a2 - 1) = v17;
            v18 = *((_DWORD *)a1 + 2);
          }
          else
          {
            *(_QWORD *)a1 = *((_QWORD *)a1 + 1);
            *((_DWORD *)a1 + 2) = v18;
            *((_DWORD *)a1 + 3) = v17;
          }
        }
      }
      else
      {
        v21 = v9 < v14;
        if ( v9 == v14 )
          v21 = *((_DWORD *)a1 + 3) < *((_DWORD *)a2 - 1);
        v22 = v21;
        v18 = *(_DWORD *)a1;
        v23 = *((_DWORD *)a1 + 1);
        if ( v22 )
        {
          *(_QWORD *)a1 = *((_QWORD *)a1 + 1);
          *((_DWORD *)a1 + 2) = v18;
          *((_DWORD *)a1 + 3) = v23;
        }
        else
        {
          v24 = v11 < v14;
          if ( v11 == v14 )
            v24 = v10[1] < *((_DWORD *)a2 - 1);
          if ( v24 )
          {
            *(_QWORD *)a1 = *((_QWORD *)a2 - 1);
            *((_DWORD *)a2 - 2) = v18;
            *((_DWORD *)a2 - 1) = v23;
          }
          else
          {
            *(_QWORD *)a1 = *(_QWORD *)&a1[8 * v8];
            *(_DWORD *)&a1[8 * v8] = v18;
            v10[1] = v23;
          }
          v18 = *((_DWORD *)a1 + 2);
        }
      }
      v26 = *(_DWORD *)a1;
      v27 = a1 + 8;
      v28 = a2;
      while ( 1 )
      {
        v29 = v27;
        v30 = v18 < v26;
        if ( v18 == v26 )
          v30 = *((_DWORD *)v27 + 1) < *((_DWORD *)a1 + 1);
        if ( !v30 )
          break;
LABEL_49:
        v33 = *((_DWORD *)v27 + 2);
        v27 += 8;
        v18 = v33;
      }
      do
      {
        while ( 1 )
        {
          v28 -= 8;
          if ( *(_DWORD *)v28 == v26 )
            break;
          if ( *(_DWORD *)v28 <= v26 )
            goto LABEL_47;
        }
      }
      while ( *((_DWORD *)a1 + 1) < *((_DWORD *)v28 + 1) );
LABEL_47:
      if ( v27 < v28 )
        break;
      sub_4918F8(v27, a2, v6, a4);
      result = v27 - a1;
      if ( v27 - a1 <= 128 )
        return result;
      a2 = v27;
      if ( !v6 )
      {
LABEL_54:
        v34 = result >> 3;
        for ( i = ((result >> 3) - 2) >> 1; ; --i )
        {
          sub_4917B8((__int64)a1, i, v34, *(_QWORD *)&a1[8 * i]);
          if ( !i )
            break;
        }
        v36 = v29 - 8 - a1;
        do
        {
          v37 = *(_QWORD *)&a1[v36];
          *(_QWORD *)&a1[v36] = *(_QWORD *)a1;
          result = sub_4917B8((__int64)a1, 0, v36 >> 3, v37);
          v12 = v36 <= 8;
          v36 -= 8;
        }
        while ( !v12 );
        return result;
      }
    }
    v32 = *((_DWORD *)v27 + 1);
    *(_QWORD *)v27 = *(_QWORD *)v28;
    *(_DWORD *)v28 = v18;
    *((_DWORD *)v28 + 1) = v32;
    v26 = *(_DWORD *)a1;
    goto LABEL_49;
  }
  return result;
}
