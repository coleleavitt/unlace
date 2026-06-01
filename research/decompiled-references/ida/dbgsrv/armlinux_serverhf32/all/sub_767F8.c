/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_767F8
// Address: 0x000767F8

//----- (000767F8) --------------------------------------------------------
unsigned int __fastcall sub_767F8(char *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v6; // r4
  int v7; // r7
  _BOOL4 v8; // r3
  unsigned int result; // r0
  char *v10; // r5
  char *v11; // r0
  __int64 v12; // r2
  char *v13; // r4
  int v14; // r2

  v6 = a2;
  v7 = a3 & 1;
  while ( 1 )
  {
    v14 = *v6;
    if ( v14 == 47 )
    {
      if ( !v6[1] )
        return 1;
      goto LABEL_5;
    }
    if ( !*v6 )
    {
      if ( v6 > a2 && *(v6 - 1) == 47 )
        return 1;
      goto LABEL_5;
    }
    if ( v14 == 42 && v6[1] == 42 && (v6 == a2 || *(v6 - 1) == 47) )
    {
      if ( !v6[2] )
        return 1;
      if ( v6[2] == 47 )
        return sub_768B0(a1, v6 + 3, a3);
    }
LABEL_5:
    v8 = *a1 == 46;
    if ( v14 == 46 )
      v8 = 0;
    if ( v8 && v7 )
      return 0;
    result = sub_76720((unsigned __int8 *)a1, v6);
    if ( !result )
      return result;
    v10 = strchr(a1, 47);
    v11 = strchr((const char *)v6, 47);
    HIDWORD(v12) = v11 == nullptr;
    LODWORD(v12) = v10 == nullptr;
    v13 = v11;
    result = v12 & HIDWORD(v12);
    if ( ((unsigned int)v12 & HIDWORD(v12)) != 0 || v12 )
      return result;
    a1 = v10 + 1;
    v6 = (unsigned __int8 *)(v13 + 1);
  }
}
