/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62274
// Address: 0x0000000000062274

//----- (0000000000062274) ----------------------------------------------------
unsigned __int64 __fastcall sub_62274(_QWORD *a1, char *s2, int *a3)
{
  unsigned __int64 v3; // x23
  __int64 v7; // x24
  unsigned __int64 v8; // x20
  int v9; // w25
  const char *v10; // x0
  bool v11; // cc
  int v12; // w8
  unsigned __int64 v13; // x23
  __int64 v14; // x24
  int v15; // w25
  const char *v16; // x0
  __int64 v17; // x23
  unsigned __int64 v18; // x24
  _QWORD *v19; // x25
  const char *v20; // x0

  v3 = a1[15];
  if ( v3 )
  {
    v7 = a1[14];
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v7 + 24 * v8 + 8) ? *(const char **)(v7 + 24 * v8) : &byte_F154B;
      if ( !strcmp(v10, s2) )
        break;
      v8 = v9;
      v11 = v3 > v9++;
      if ( !v11 )
        goto LABEL_12;
    }
    if ( v8 != -1 )
    {
      v12 = 1;
      if ( !a3 )
        return v8;
      goto LABEL_44;
    }
  }
LABEL_12:
  v13 = a1[18];
  if ( v13 )
  {
    v14 = a1[17];
    v8 = 0;
    v15 = 1;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v14 + 24 * v8 + 8) ? *(const char **)(v14 + 24 * v8) : &byte_F154B;
      if ( !strcmp(v16, s2) )
        break;
      v8 = v15;
      v11 = v13 > v15++;
      if ( !v11 )
        goto LABEL_23;
    }
    if ( v8 != -1 )
    {
      v12 = 2;
      if ( !a3 )
        return v8;
      goto LABEL_44;
    }
  }
LABEL_23:
  v17 = a1[13];
  v18 = *(_QWORD *)(v17 + 96);
  if ( !v18 )
  {
LABEL_30:
    if ( sub_6A3F0(v17, s2) )
    {
      v12 = 5;
      v8 = -1;
      if ( !a3 )
        return v8;
      goto LABEL_44;
    }
    if ( (unsigned int)sub_6AA18((_QWORD *)a1[13], s2) == 0x7FFFFFFF )
    {
      v12 = (int)off_164A68;
      if ( off_164A68 )
      {
        if ( (off_164A68((__int64)s2) & 1) != 0 )
          v12 = 4;
        else
          v12 = 0;
        v8 = -1;
        if ( !a3 )
          return v8;
LABEL_44:
        *a3 = v12;
        return v8;
      }
    }
    else
    {
      v12 = 6;
    }
    v8 = -1;
    if ( !a3 )
      return v8;
    goto LABEL_44;
  }
  v8 = 0;
  v19 = (_QWORD *)(*(_QWORD *)(v17 + 88) + 8LL);
  while ( 1 )
  {
    v20 = *v19 ? (const char *)*(v19 - 1) : &byte_F154B;
    if ( !strcmp(v20, s2) )
      break;
    ++v8;
    v19 += 7;
    if ( v8 >= v18 )
      goto LABEL_30;
  }
  v12 = 3;
  if ( a3 )
    goto LABEL_44;
  return v8;
}
// F154B: using guessed type char byte_F154B;
// 164A68: using guessed type __int64 (__fastcall *off_164A68)(__int64 a1);
