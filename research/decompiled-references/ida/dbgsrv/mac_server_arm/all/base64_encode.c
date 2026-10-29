/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: base64_encode
// Address: 0x000000010006491C

//----- (000000010006491C) ----------------------------------------------------
__int64 __fastcall base64_encode(_QWORD *a1, unsigned __int8 *a2, __int64 a3)
{
  bool v4; // zf
  __int64 result; // x0
  __int64 v7; // x21
  unsigned __int8 *v8; // x22
  int v9; // w8
  unsigned int v10; // w26
  int v11; // w28
  int v12; // t1
  unsigned int v13; // w25
  char v14; // w24
  _QWORD *v15; // x1
  __int64 v16; // x8
  bool v17; // cf
  __int64 v18; // x8
  __int64 v19; // x19
  char v20; // w22
  _QWORD *v21; // x1
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x23
  _QWORD *v25; // x1
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x22
  _QWORD *v29; // x1
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // x22
  _QWORD *v33; // x1
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x22
  unsigned int v37; // [xsp+Ch] [xbp-64h]
  unsigned __int64 v38; // [xsp+10h] [xbp-60h]

  if ( a1 )
    v4 = a2 == nullptr;
  else
    v4 = 1;
  result = !v4 && a3 >= 0;
  if ( (_DWORD)result == 1 )
  {
    v7 = a3;
    if ( a3 )
    {
      v8 = a2;
      v9 = 0;
      v10 = 0;
      v38 = a3 % 3uLL;
      v37 = (a3 % 3uLL) ^ 2;
      do
      {
        while ( 1 )
        {
          v12 = *v8++;
          v11 = v12;
          v10 = v12 | (v10 << 8);
          if ( v9 >= -1 )
            break;
          v9 += 8;
          if ( !--v7 )
            goto LABEL_23;
        }
        v13 = v9 + 14;
        do
        {
          v14 = aAbcdefghijklmn[(v10 >> (v13 - 12)) & 0x3FLL];
          v15 = (_QWORD *)*a1;
          v16 = a1[1];
          v17 = v16 != 0;
          v18 = v16 - 1;
          if ( v17 )
            v19 = v18;
          else
            v19 = 0;
          if ( a1[2] < (unsigned __int64)(v19 + 2) )
          {
            v15 = qvector_reserve(a1, v15, v19 + 2, 1u);
            *a1 = v15;
          }
          a1[1] = v19 + 2;
          *((_BYTE *)v15 + v19) = v14;
          *(_BYTE *)(*a1 + v19 + 1) = 0;
          v13 -= 6;
        }
        while ( v13 > 0xC );
        v9 = v13 - 6;
        --v7;
      }
      while ( v7 );
LABEL_23:
      result = 1;
      if ( v9 )
      {
        v20 = aAbcdefghijklmn[(v11 << (6 - v9)) & 0x3FLL];
        v21 = (_QWORD *)*a1;
        v22 = a1[1];
        v17 = v22 != 0;
        v23 = v22 - 1;
        if ( v17 )
          v24 = v23;
        else
          v24 = 0;
        if ( a1[2] < (unsigned __int64)(v24 + 2) )
        {
          v21 = qvector_reserve(a1, v21, v24 + 2, 1u);
          result = 1;
          *a1 = v21;
        }
        a1[1] = v24 + 2;
        *((_BYTE *)v21 + v24) = v20;
        *(_BYTE *)(*a1 + v24 + 1) = 0;
      }
      if ( v38 )
      {
        v25 = (_QWORD *)*a1;
        v26 = a1[1];
        v17 = v26 != 0;
        v27 = v26 - 1;
        if ( v17 )
          v28 = v27;
        else
          v28 = 0;
        if ( a1[2] < (unsigned __int64)(v28 + 2) )
        {
          v25 = qvector_reserve(a1, v25, v28 + 2, 1u);
          result = 1;
          *a1 = v25;
        }
        a1[1] = v28 + 2;
        *((_BYTE *)v25 + v28) = 61;
        *(_BYTE *)(*a1 + v28 + 1) = 0;
        if ( v37 >= 2 )
        {
          v29 = (_QWORD *)*a1;
          v30 = a1[1];
          v17 = v30 != 0;
          v31 = v30 - 1;
          if ( v17 )
            v32 = v31;
          else
            v32 = 0;
          if ( a1[2] < (unsigned __int64)(v32 + 2) )
          {
            v29 = qvector_reserve(a1, v29, v32 + 2, 1u);
            result = 1;
            *a1 = v29;
          }
          a1[1] = v32 + 2;
          *((_BYTE *)v29 + v32) = 61;
          *(_BYTE *)(*a1 + v32 + 1) = 0;
          if ( v38 != 1 )
          {
            v33 = (_QWORD *)*a1;
            v34 = a1[1];
            v17 = v34 != 0;
            v35 = v34 - 1;
            if ( v17 )
              v36 = v35;
            else
              v36 = 0;
            if ( a1[2] < (unsigned __int64)(v36 + 2) )
            {
              v33 = qvector_reserve(a1, v33, v36 + 2, 1u);
              result = 1;
              *a1 = v33;
            }
            a1[1] = v36 + 2;
            *((_BYTE *)v33 + v36) = 61;
            *(_BYTE *)(*a1 + v36 + 1) = 0;
          }
        }
      }
    }
  }
  return result;
}
