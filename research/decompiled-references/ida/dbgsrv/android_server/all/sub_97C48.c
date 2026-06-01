/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97C48
// Address: 0x0000000000097C48

//----- (0000000000097C48) ----------------------------------------------------
__int64 *__fastcall sub_97C48(__int64 **a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 **v4; // x23
  __int64 *v5; // x24
  const char *v8; // x21
  const char *v9; // x22
  __int64 *v10; // x21
  __int64 *v11; // x0
  __int64 v12; // x22
  size_t v13; // x20
  void *v14; // x0
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
      v11 = (__int64 *)operator new(0x50u);
      v12 = *a4;
      v11[5] = 0;
      v11[6] = 0;
      v11[4] = 0;
      v10 = v11;
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
      {
        v14 = qalloc_or_throw(*(_QWORD *)(v12 + 8));
        v10[4] = (__int64)v14;
        v10[6] = v13;
        memcpy(v14, *(const void **)v12, v13);
        v10[5] = v13;
      }
      v10[8] = 0;
      v10[9] = 0;
      v10[7] = 0;
      *v10 = 0;
      v10[1] = 0;
      v10[2] = (__int64)v5;
      *v4 = v10;
      v15 = (__int64 *)**a1;
      if ( v15 )
      {
        *a1 = v15;
        v16 = *v4;
      }
      else
      {
        v16 = v10;
      }
      sub_48ED8(a1[1], v16);
      a1[2] = (__int64 *)((char *)a1[2] + 1);
    }
  }
  return v10;
}
// F154B: using guessed type char byte_F154B;
