/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C0A4
// Address: 0x000000000007C0A4

//----- (000000000007C0A4) ----------------------------------------------------
__int64 *__fastcall sub_7C0A4(__int64 **a1, __int64 a2, __int64 a3, __int64 **a4)
{
  __int64 **v4; // x23
  __int64 *v5; // x24
  const char *v8; // x21
  const char *v9; // x22
  __int64 *v10; // x21
  __int64 *v11; // x0
  __int64 *v12; // x8
  __int64 v13; // x9
  __int64 v14; // x9
  __int64 *v15; // x8
  __int64 *v16; // x1

  v4 = a1 + 1;
  v5 = a1[1];
  if ( v5 )
  {
    v4 = a1 + 1;
    if ( *(_QWORD *)(a2 + 8) )
      v8 = *(const char **)a2;
    else
      v8 = &byte_F154B;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v5[5] ? (const char *)v5[4] : &byte_F154B;
        if ( strcmp(v8, v9) < 0 )
          break;
        if ( (strcmp(v9, v8) & 0x80000000) == 0 )
          goto LABEL_16;
        v4 = (__int64 **)(v5 + 1);
        if ( !v5[1] )
          goto LABEL_16;
        v5 = (__int64 *)v5[1];
      }
      if ( !*v5 )
        break;
      v4 = (__int64 **)v5;
      v5 = (__int64 *)*v5;
    }
    v4 = (__int64 **)v5;
    v10 = (__int64 *)*v5;
    if ( !*v5 )
      goto LABEL_19;
  }
  else
  {
    v5 = (__int64 *)(a1 + 1);
LABEL_16:
    v10 = *v4;
    if ( !*v4 )
    {
LABEL_19:
      v11 = (__int64 *)operator new(0x58u);
      v12 = *a4;
      v10 = v11;
      v11[4] = **a4;
      v13 = v12[1];
      *v12 = 0;
      v11[5] = v13;
      v14 = v12[2];
      v12[1] = 0;
      v11[6] = v14;
      v12[2] = 0;
      *((_BYTE *)v11 + 56) = 2;
      *v11 = 0;
      v11[1] = 0;
      v11[9] = 0;
      v11[10] = 0;
      v11[8] = 0;
      v11[2] = (__int64)v5;
      *v4 = v11;
      v15 = (__int64 *)**a1;
      if ( v15 )
      {
        *a1 = v15;
        v16 = *v4;
      }
      else
      {
        v16 = v11;
      }
      sub_48ED8(a1[1], v16);
      a1[2] = (__int64 *)((char *)a1[2] + 1);
    }
  }
  return v10;
}
// F154B: using guessed type char byte_F154B;
