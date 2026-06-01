/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: llong_scan
// Address: 0x0007C418

//----- (0007C418) --------------------------------------------------------
int __fastcall llong_scan(__int64 a1, _DWORD *a2)
{
  char *v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // r4
  int v6; // r0
  int v7; // r4
  int v10; // [sp+4h] [bp-10h]
  int v11; // [sp+Ch] [bp-8h]

  v2 = (char *)a1;
  LODWORD(a1) = 0;
  v3 = *v2;
  if ( v3 >= 0 )
  {
    v10 = HIDWORD(a1);
    LODWORD(a1) = 0;
    v4 = 0;
    while ( 1 )
    {
      v11 = a1;
      v5 = (unsigned __int8)v3;
      if ( !isalnum((unsigned __int8)v3) )
        break;
      if ( (unsigned __int8)v3 >= 0x3Au )
      {
        v6 = (unsigned __int8)v3 - 32;
        if ( (unsigned __int8)v3 <= 0x60u )
          v6 = (unsigned __int8)v3;
        v5 = v6 - 7;
      }
      LODWORD(a1) = v11;
      v7 = v5 - 48;
      if ( v7 < v10 )
      {
        HIDWORD(a1) = v4;
        v4 = (unsigned __int64)(a1 * v10 + v7) >> 32;
        LODWORD(a1) = v11 * v10 + v7;
        v3 = *++v2;
        if ( v3 > -1 )
          continue;
      }
      goto LABEL_13;
    }
    LODWORD(a1) = v11;
  }
LABEL_13:
  if ( a2 )
    *a2 = v2;
  return a1;
}
