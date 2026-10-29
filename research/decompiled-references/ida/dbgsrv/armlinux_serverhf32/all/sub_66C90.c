/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66C90
// Address: 0x00066C90

//----- (00066C90) --------------------------------------------------------
struct tm *__fastcall sub_66C90(_BYTE *a1, int a2, unsigned int a3, int a4, char a5)
{
  struct tm *v8; // r6
  const char *v9; // r2
  int v10; // r0
  _BYTE *v11; // r5
  unsigned int v12; // r9
  _BOOL4 v13; // r3
  int v15; // r0
  struct tm v16; // [sp+18h] [bp-30h] BYREF

  if ( (a5 & 1) != 0 )
    v8 = sub_78ED0(&v16, a4);
  else
    v8 = sub_78E90(&v16, a4);
  if ( v8 )
  {
    if ( (a5 & 2) != 0 )
      v9 = "T";
    else
      v9 = &byte_9C46C;
    v10 = sub_7EA4C(
            a1,
            a2,
            "%04u-%02u-%02u%s%02u:%02u:%02u",
            v16.tm_year + 1900,
            v16.tm_mon + 1,
            v16.tm_mday,
            v9,
            v16.tm_hour,
            v16.tm_min,
            v16.tm_sec);
    v11 = &a1[v10];
    v12 = a2 - v10;
    if ( (a5 & 4) != 0 )
    {
      v15 = sub_7EA4C(v11, v12, ".%03u", a3 / 0x3E8);
      v11 += v15;
      v12 -= v15;
    }
    v13 = (a5 & 3) == 3;
    if ( v12 <= 1 )
      v13 = 0;
    if ( v13 )
    {
      v8 = (struct tm *)v13;
      *v11 = 90;
      v11[1] = 0;
    }
  }
  return v8;
}
// 9C46C: using guessed type char byte_9C46C;
