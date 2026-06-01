/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20FB0
// Address: 0x00020FB0

//----- (00020FB0) --------------------------------------------------------
_DWORD *__cdecl sub_20FB0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  int v6; // edi
  _DWORD *v7; // edx
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  bool v10; // sf
  _DWORD *v12; // edx
  _DWORD *v13; // edi
  _DWORD *v14; // esi
  int *v15; // edx
  int v16; // edx
  bool v17; // zf
  _DWORD *v18; // edi
  _DWORD *v19; // esi
  _DWORD *v20; // edx
  int v21; // edi
  _DWORD *v22; // esi
  _DWORD *v23; // edx
  int *v24; // ecx
  int v25; // ecx
  _DWORD *v26; // [esp+8h] [ebp-14h]

  if ( !a1[168] )
    return nullptr;
  sub_8EAC0();
  v3 = a1 + 143;
  v4 = (_DWORD *)a1[143];
  v5 = a1 + 143;
  if ( v4 )
  {
    v6 = a1[21];
    v7 = a1 + 143;
    do
    {
      if ( v4[4] >= v6 )
        v7 = v4;
      v4 = (_DWORD *)v4[v4[4] < v6];
    }
    while ( v4 );
    v5 = a1 + 143;
    if ( v7 != v3 )
    {
      v5 = a1 + 143;
      if ( v6 >= v7[4] )
      {
        if ( !*((_BYTE *)v7 + 45) || (int)v7[7] > 0 || (v5 = v7, (int)v7[6] > 0) )
          v5 = a1 + 143;
      }
    }
  }
  v8 = a1;
  if ( v3 == v5 )
  {
    v5 = (_DWORD *)a1[142];
    if ( v3 != v5 )
    {
      v12 = (_DWORD *)a1[142];
      do
      {
        if ( (int)v12[7] <= 0 && (int)v12[6] <= 0 && *((_BYTE *)v12 + 45) && *((_BYTE *)v12 + 36) )
          break;
        v13 = (_DWORD *)v12[1];
        if ( v13 )
        {
          do
          {
            v14 = v13;
            v13 = (_DWORD *)*v13;
          }
          while ( v13 );
        }
        else
        {
          v14 = (_DWORD *)v12[2];
          if ( (_DWORD *)*v14 != v12 )
          {
            v15 = v12 + 2;
            do
            {
              v16 = *v15;
              v14 = *(_DWORD **)(v16 + 8);
              v17 = *v14 == v16;
              v15 = (int *)(v16 + 8);
            }
            while ( !v17 );
          }
        }
        v12 = v14;
      }
      while ( v3 != v14 );
      if ( v3 == v5 )
        goto LABEL_56;
      v18 = (_DWORD *)a1[142];
      do
      {
        if ( (int)v18[7] <= 0 && (int)v18[6] <= 0 && *((_BYTE *)v18 + 45) && (v18[12] & 0xFF7F) == 0x57F )
          break;
        v19 = (_DWORD *)v18[1];
        if ( v19 )
        {
          do
          {
            v20 = v19;
            v19 = (_DWORD *)*v19;
          }
          while ( v19 );
        }
        else
        {
          v20 = (_DWORD *)v18[2];
          if ( (_DWORD *)*v20 != v18 )
          {
            v21 = (int)(v18 + 2);
            do
            {
              v20 = *(_DWORD **)(*(_DWORD *)v21 + 8);
              v17 = *v20 == *(_DWORD *)v21;
              v21 = *(_DWORD *)v21 + 8;
            }
            while ( !v17 );
          }
        }
        v18 = v20;
      }
      while ( v3 != v20 );
      v8 = a1;
      if ( v3 != v5 )
      {
        while ( (int)v5[7] > 0 || (int)v5[6] > 0 || !*((_BYTE *)v5 + 45) )
        {
          v22 = (_DWORD *)v5[1];
          if ( v22 )
          {
            do
            {
              v23 = v22;
              v22 = (_DWORD *)*v22;
            }
            while ( v22 );
          }
          else
          {
            v23 = (_DWORD *)v5[2];
            if ( (_DWORD *)*v23 != v5 )
            {
              v24 = v5 + 2;
              do
              {
                v25 = *v24;
                v23 = *(_DWORD **)(v25 + 8);
                v17 = *v23 == v25;
                v24 = (int *)(v25 + 8);
              }
              while ( !v17 );
            }
          }
          v5 = v23;
          if ( v3 == v23 )
            goto LABEL_56;
        }
      }
    }
  }
  if ( v3 != v5 )
  {
    v9 = a3;
    *a2 = v5[4];
    *a3 = v5[12];
    *((_BYTE *)v5 + 45) = 0;
    v10 = --v8[168] < 0;
    LOBYTE(v9) = 1;
    v26 = v9;
    if ( v10 )
    {
      if ( !(_BYTE)under_debugger )
        interr(30186);
      BUG();
    }
    goto LABEL_57;
  }
LABEL_56:
  v26 = nullptr;
LABEL_57:
  sub_8EAD0();
  return v26;
}
// 13E34C: using guessed type int under_debugger;
