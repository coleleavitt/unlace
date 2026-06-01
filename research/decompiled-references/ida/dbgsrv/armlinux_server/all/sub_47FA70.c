/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FA70
// Address: 0x000000000047FA70

//----- (000000000047FA70) ----------------------------------------------------
bool __fastcall sub_47FA70(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  _BOOL8 result; // x0
  unsigned __int8 *v5; // x23
  unsigned __int8 *v6; // x24
  int v7; // w21
  unsigned int v8; // w25
  int v9; // t1
  __int64 v10; // x27
  unsigned __int64 v11; // x22
  _BYTE *v12; // x0
  __int64 v13; // x20
  char v14; // w28
  __int64 v15; // x20
  char v16; // w22
  __int64 v17; // x23
  unsigned __int64 v18; // x21
  _BYTE *v19; // x0
  __int64 v20; // x20
  int v21; // w22
  unsigned __int64 v22; // x21
  __int64 v23; // x23
  _BYTE *v24; // x0
  int v25; // [xsp+6Ch] [xbp-4h]

  if ( a1 )
    result = a2 == nullptr;
  else
    result = 1;
  if ( result )
    return 0;
  if ( (a3 & 0x8000000000000000LL) == 0 )
  {
    v5 = a2;
    if ( a3 % 3 )
    {
      v25 = 3 - a3 % 3;
      if ( !a3 )
        goto LABEL_27;
    }
    else
    {
      if ( !a3 )
        return 1;
      v25 = 0;
    }
    v6 = &a2[a3];
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *v5++;
      v7 += 8;
      v8 = v9 | (v8 << 8);
      do
      {
        v7 -= 6;
        v13 = *(_QWORD *)(a1 + 8);
        v11 = 2;
        v10 = 0;
        v14 = aAbcdefghijklmn[(v8 >> v7) & 0x3F];
        if ( v13 )
        {
          v10 = v13 - 1;
          v11 = v13 + 1;
        }
        else
        {
          v13 = 1;
        }
        v12 = *(_BYTE **)a1;
        if ( *(_QWORD *)(a1 + 16) < v11 )
        {
          v12 = sub_491288(a1, *(void **)a1, v11, 1u);
          *(_QWORD *)a1 = v12;
        }
        *(_QWORD *)(a1 + 8) = v11;
        v12[v10] = v14;
        *(_BYTE *)(*(_QWORD *)a1 + v13) = 0;
      }
      while ( v7 > 6 );
    }
    while ( v5 != v6 );
    v15 = *(_QWORD *)(a1 + 8);
    v16 = aAbcdefghijklmn[(v8 << (6 - v7)) & 0x3F];
    if ( v15 )
    {
      v17 = v15 - 1;
      v18 = v15 + 1;
    }
    else
    {
      v15 = 1;
      v18 = 2;
      v17 = 0;
    }
    v19 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) < v18 )
    {
      v19 = sub_491288(a1, *(void **)a1, v18, 1u);
      *(_QWORD *)a1 = v19;
    }
    *(_QWORD *)(a1 + 8) = v18;
    v19[v17] = v16;
    *(_BYTE *)(*(_QWORD *)a1 + v15) = 0;
    if ( !v25 )
      return 1;
LABEL_27:
    v20 = *(_QWORD *)(a1 + 8);
    v21 = 0;
    v22 = 2;
    v23 = 0;
    if ( !v20 )
      goto LABEL_33;
LABEL_28:
    v23 = v20 - 1;
    v22 = v20 + 1;
    while ( 1 )
    {
      ++v21;
      v24 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v22 )
      {
        v24 = sub_491288(a1, *(void **)a1, v22, 1u);
        *(_QWORD *)a1 = v24;
      }
      *(_QWORD *)(a1 + 8) = v22;
      v24[v23] = 61;
      *(_BYTE *)(*(_QWORD *)a1 + v20) = 0;
      if ( v21 == v25 )
        return 1;
      v20 = *(_QWORD *)(a1 + 8);
      v22 = 2;
      v23 = 0;
      if ( v20 )
        goto LABEL_28;
LABEL_33:
      v20 = 1;
    }
  }
  return result;
}
