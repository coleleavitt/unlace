/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78F10
// Address: 0x00078F10

//----- (00078F10) --------------------------------------------------------
struct tm *__fastcall sub_78F10(char *a1, unsigned int a2, int a3)
{
  struct tm *v5; // r0
  struct tm *v6; // r8
  size_t v8; // r0
  size_t v9; // r10
  size_t v10; // r4
  int v11; // r0
  char *v12; // r5
  unsigned int v13; // r3
  int v14; // t1
  struct tm v15; // [sp+0h] [bp-50h] BYREF
  char buf[32]; // [sp+2Ch] [bp-24h] BYREF

  v5 = sub_78ED0(&v15, a3);
  if ( v5 && (v6 = v5, asctime_r(&v15, buf)) )
  {
    sub_79524(a1, (unsigned __int8 *)buf, a2);
    if ( a2 > 8 && a1[8] == 32 )
      a1[8] = 48;
    v8 = strlen(a1);
    v9 = v8;
    if ( !v8 )
    {
LABEL_20:
      if ( a2 < 6 )
        return v6;
      goto LABEL_18;
    }
    v10 = v8 - 1;
    v11 = (unsigned __int8)a1[v8 - 1];
    v12 = &a1[v10];
    if ( (v11 & 0x80) != 0 )
    {
      v13 = v9 + 6;
LABEL_17:
      if ( a2 >= v13 )
LABEL_18:
        sub_79524(&a1[v9], " UTC\n", 6);
    }
    else
    {
      while ( 1 )
      {
        v9 = v10 + 1;
        if ( !isspace(v11) )
        {
          v13 = v10 + 7;
          goto LABEL_17;
        }
        if ( !v10 )
        {
          v9 = 0;
          goto LABEL_20;
        }
        v14 = (unsigned __int8)*--v12;
        v11 = v14;
        if ( (v14 & 0x80) != 0 )
          break;
        --v10;
      }
      v9 = v10;
      if ( a2 >= v10 + 6 )
        goto LABEL_18;
    }
  }
  else
  {
    v6 = nullptr;
    sub_79524(a1, "[wrong timestamp]\n", a2);
  }
  return v6;
}
