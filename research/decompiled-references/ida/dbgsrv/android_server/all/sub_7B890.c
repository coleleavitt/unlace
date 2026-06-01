/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B890
// Address: 0x000000000007B890

//----- (000000000007B890) ----------------------------------------------------
__int64 *__fastcall sub_7B890(__int64 **a1, __int64 a2, __int128 *a3)
{
  __int64 **v3; // x23
  __int64 *v4; // x24
  const char *v7; // x21
  const char *v8; // x22
  __int64 *v9; // x21
  __int64 *v10; // x0
  __int128 v11; // q0
  __int64 *v12; // x8
  __int64 *v13; // x1

  v3 = a1 + 1;
  v4 = a1[1];
  if ( v4 )
  {
    v3 = a1 + 1;
    if ( *(_QWORD *)(a2 + 8) )
      v7 = *(const char **)a2;
    else
      v7 = &byte_F154B;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v4[5] ? (const char *)v4[4] : &byte_F154B;
        if ( strcmp(v7, v8) < 0 )
          break;
        if ( (strcmp(v8, v7) & 0x80000000) == 0 )
          goto LABEL_16;
        v3 = (__int64 **)(v4 + 1);
        if ( !v4[1] )
          goto LABEL_16;
        v4 = (__int64 *)v4[1];
      }
      if ( !*v4 )
        break;
      v3 = (__int64 **)v4;
      v4 = (__int64 *)*v4;
    }
    v3 = (__int64 **)v4;
    v9 = (__int64 *)*v4;
    if ( !*v4 )
      goto LABEL_19;
  }
  else
  {
    v4 = (__int64 *)(a1 + 1);
LABEL_16:
    v9 = *v3;
    if ( !*v3 )
    {
LABEL_19:
      v10 = (__int64 *)operator new(0x38u);
      v11 = *a3;
      *(_QWORD *)a3 = 0;
      v9 = v10;
      *((_OWORD *)v10 + 2) = v11;
      v10[6] = *((_QWORD *)a3 + 2);
      *(__int128 *)((char *)a3 + 8) = 0u;
      *(_OWORD *)v10 = 0u;
      v10[2] = (__int64)v4;
      *v3 = v10;
      v12 = (__int64 *)**a1;
      if ( v12 )
      {
        *a1 = v12;
        v13 = *v3;
      }
      else
      {
        v13 = v10;
      }
      sub_48ED8(a1[1], v13);
      a1[2] = (__int64 *)((char *)a1[2] + 1);
    }
  }
  return v9;
}
// F154B: using guessed type char byte_F154B;
