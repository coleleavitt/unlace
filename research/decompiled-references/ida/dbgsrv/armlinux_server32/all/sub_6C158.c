/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C158
// Address: 0x0006C158

//----- (0006C158) --------------------------------------------------------
bool __fastcall sub_6C158(void **a1, unsigned __int8 *a2, unsigned int a3)
{
  _BOOL4 result; // r0
  int v5; // r5
  unsigned int v6; // r10
  int v7; // r3
  int v8; // r8
  unsigned int v9; // r7
  void *v10; // r1
  int v11; // r6
  char v12; // r9
  int v13; // r7
  int v14; // r5
  unsigned int v15; // r6
  int v16; // r8
  void *v17; // r1
  int v18; // r6
  int v19; // r8
  char v20; // r7
  unsigned int v21; // r5
  void *v22; // r1
  unsigned __int8 *v23; // [sp+4h] [bp-10h]
  unsigned __int8 *v24; // [sp+8h] [bp-Ch]
  unsigned int v25; // [sp+Ch] [bp-8h]

  if ( a2 )
    result = a1 == nullptr;
  else
    result = 1;
  v23 = a2;
  if ( result )
    return 0;
  if ( (a3 & 0x80000000) == 0 )
  {
    if ( a3 % 3 )
    {
      v25 = 3 - a3 % 3;
      if ( !a3 )
      {
LABEL_20:
        v13 = 0;
        do
        {
          v14 = (int)a1[1];
          v15 = 2;
          v16 = 0;
          if ( v14 )
          {
            v16 = v14 - 1;
            v15 = v14 + 1;
          }
          else
          {
            v14 = 1;
          }
          ++v13;
          v17 = *a1;
          if ( (unsigned int)a1[2] < v15 )
          {
            v17 = sub_78018((int)a1, v17, v15, 1u);
            *a1 = v17;
          }
          a1[1] = (void *)v15;
          *((_BYTE *)v17 + v16) = 61;
          *((_BYTE *)*a1 + v14) = 0;
        }
        while ( v13 != v25 );
        return 1;
      }
    }
    else
    {
      if ( !a3 )
        return 1;
      v25 = a3 % 3;
    }
    v5 = 0;
    v6 = 0;
    v24 = &a2[a3];
    do
    {
      v5 += 8;
      v7 = *v23++;
      v6 = v7 | (v6 << 8);
      do
      {
        v5 -= 6;
        v11 = (int)a1[1];
        v9 = 2;
        v8 = 0;
        v12 = aAbcdefghijklmn[(v6 >> v5) & 0x3F];
        if ( v11 )
        {
          v8 = v11 - 1;
          v9 = v11 + 1;
        }
        else
        {
          v11 = 1;
        }
        v10 = *a1;
        if ( (unsigned int)a1[2] < v9 )
        {
          v10 = sub_78018((int)a1, v10, v9, 1u);
          *a1 = v10;
        }
        a1[1] = (void *)v9;
        *((_BYTE *)v10 + v8) = v12;
        *((_BYTE *)*a1 + v11) = 0;
      }
      while ( v5 > 6 );
    }
    while ( v23 != v24 );
    v18 = (int)a1[1];
    v19 = v18 - 1;
    v20 = aAbcdefghijklmn[(v6 << (6 - v5)) & 0x3F];
    v21 = v18 + 1;
    if ( !v18 )
    {
      v18 = 1;
      v21 = 2;
      v19 = 0;
    }
    v22 = *a1;
    if ( (unsigned int)a1[2] < v21 )
    {
      v22 = sub_78018((int)a1, v22, v21, 1u);
      *a1 = v22;
    }
    a1[1] = (void *)v21;
    *((_BYTE *)v22 + v19) = v20;
    *((_BYTE *)*a1 + v18) = 0;
    if ( !v25 )
      return 1;
    goto LABEL_20;
  }
  return result;
}
