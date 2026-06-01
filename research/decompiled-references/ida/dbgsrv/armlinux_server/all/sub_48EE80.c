/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48EE80
// Address: 0x000000000048EE80

//----- (000000000048EE80) ----------------------------------------------------
__int64 __fastcall sub_48EE80(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v4; // x19
  int v7; // w23
  bool v8; // zf
  unsigned int v9; // w3
  char *v10; // x20
  char *v11; // x0
  int v13; // w0
  unsigned __int8 *v15; // x1
  const char *v16; // x19
  unsigned __int8 *v17; // x20
  int v18; // w0
  char *v19; // x0
  unsigned int v20; // w22

  v4 = a2;
  v7 = a3 & 1;
  while ( 1 )
  {
    v13 = *v4;
    if ( v13 == 47 )
    {
      if ( !v4[1] )
        return 1;
      goto LABEL_5;
    }
    if ( *v4 )
      break;
    if ( v4 > a2 && *(v4 - 1) == 47 )
      return 1;
LABEL_5:
    v8 = *a1 != 46 || v13 == 46;
    if ( !v8 && v7 )
      return 0;
    v9 = (unsigned __int8)sub_48ED08(a1, v4);
    if ( !v9 )
      return v9;
    v10 = strchr((const char *)a1, 47);
    v11 = strchr((const char *)v4, 47);
    v9 = v10 == nullptr && v11 == nullptr;
    if ( v10 == nullptr && v11 == nullptr )
      return v9;
    if ( !v10 || v11 == nullptr )
      return v9;
    a1 = (unsigned __int8 *)(v10 + 1);
    v4 = (unsigned __int8 *)(v11 + 1);
  }
  if ( v13 != 42 || v4[1] != 42 || v4 != a2 && *(v4 - 1) != 47 )
    goto LABEL_5;
  if ( !v4[2] )
    return 1;
  if ( v4[2] != 47 )
    goto LABEL_5;
  v15 = v4 + 3;
  v16 = (const char *)a1;
  v17 = v15;
  v18 = *(unsigned __int8 *)v16;
  if ( v18 == 47 )
    v18 = *(unsigned __int8 *)++v16;
  while ( v18 != 46 || *v17 == 46 || (a3 & 1) == 0 )
  {
    v20 = (unsigned __int8)sub_48EE80(v16, v17, a3);
    if ( v20 )
      return v20;
    v19 = strchr(v16, 47);
    if ( !v19 )
      return v20;
    v16 = v19 + 1;
    v18 = (unsigned __int8)v19[1];
  }
  return 0;
}
