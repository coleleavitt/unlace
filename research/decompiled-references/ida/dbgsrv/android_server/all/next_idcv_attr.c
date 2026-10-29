/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: next_idcv_attr
// Address: 0x00000000000713BC

//----- (00000000000713BC) ----------------------------------------------------
char *__fastcall next_idcv_attr(char *result, char *a2)
{
  __int64 v2; // x22
  __int64 v3; // x22
  __int64 v4; // x24
  __int64 v5; // t1
  void *v6; // x19
  const char *v7; // x20
  __int64 v8; // x23
  const char *v9; // x1
  int v10; // w0
  __int64 v11; // x8
  void *v12; // [xsp+0h] [xbp-70h] BYREF
  __int64 v13; // [xsp+8h] [xbp-68h]
  __int64 v14; // [xsp+10h] [xbp-60h]
  __int64 v15; // [xsp+18h] [xbp-58h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( result )
  {
    if ( *result != 5 )
      return nullptr;
    v2 = *((_QWORD *)result + 1);
    sub_39140(&v12, a2);
    v5 = *(_QWORD *)(v2 + 8);
    v3 = v2 + 8;
    v4 = v5;
    if ( v5 )
    {
      v6 = v12;
      if ( v13 )
        v7 = (const char *)v12;
      else
        v7 = &byte_F154B;
      v8 = v3;
      do
      {
        if ( *(_QWORD *)(v4 + 40) )
          v9 = *(const char **)(v4 + 32);
        else
          v9 = &byte_F154B;
        v10 = strcmp(v7, v9);
        if ( v10 >= 0 )
          v11 = 8;
        else
          v11 = 0;
        if ( v10 < 0 )
          v8 = v4;
        v4 = *(_QWORD *)(v4 + v11);
      }
      while ( v4 );
      if ( v6 )
      {
LABEL_18:
        v13 = 0;
        qfree(v6);
        v12 = nullptr;
        v14 = 0;
        if ( v8 == v3 )
          return nullptr;
        goto LABEL_22;
      }
    }
    else
    {
      v6 = v12;
      v8 = v3;
      if ( v12 )
        goto LABEL_18;
    }
    if ( v8 == v3 )
      return nullptr;
LABEL_22:
    if ( *(_QWORD *)(v8 + 40) )
      return *(char **)(v8 + 32);
    else
      return &byte_F154B;
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
