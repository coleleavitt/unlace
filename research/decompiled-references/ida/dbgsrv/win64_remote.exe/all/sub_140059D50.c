/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140059D50
// Address: 0x0000000140059D50

//----- (0000000140059D50) ----------------------------------------------------
char __fastcall sub_140059D50(unsigned __int8 **a1)
{
  unsigned int v2; // eax
  char v3; // bl
  unsigned __int8 *v5; // rdi
  char v6; // cl
  char v7; // cl
  unsigned __int8 *v8; // rdi
  char v9; // al
  char v10; // al
  char v11; // [rsp+38h] [rbp+10h] BYREF
  char v12; // [rsp+39h] [rbp+11h]
  char v13; // [rsp+3Ah] [rbp+12h]
  char v14; // [rsp+3Bh] [rbp+13h]
  char v15; // [rsp+40h] [rbp+18h] BYREF

  v2 = sub_1400615C0(a1);
  v3 = v2;
  if ( v2 == -1 )
    return 0;
  if ( v2 > 0xFF )
    return 92;
  if ( (unsigned __int8)(v2 - 48) > 7u )
  {
    switch ( (char)v2 )
    {
      case 'a':
        return 7;
      case 'b':
        return 8;
      case 'f':
        return 12;
      case 'n':
        return 10;
      case 'r':
        return 13;
      case 't':
        return 9;
      case 'v':
        return 11;
      case 'x':
        v8 = *a1;
        if ( (**a1 & 0x80u) != 0 || !isxdigit(**a1) )
          return v3;
        v9 = *v8;
        v5 = v8 + 1;
        v11 = v9;
        if ( (*v5 & 0x80u) == 0 && isxdigit(*v5) )
          v10 = *v5++;
        else
          v10 = 0;
        v12 = v10;
        v13 = 0;
        sub_14005B0C0(&v11, "%x", &v15);
        goto LABEL_28;
      default:
        return v3;
    }
  }
  v5 = *a1;
  v11 = v2;
  v6 = *v5;
  if ( (unsigned __int8)(*v5 - 48) > 7u )
    v6 = 0;
  else
    ++v5;
  v12 = v6;
  v7 = *v5;
  if ( (unsigned __int8)(*v5 - 48) > 7u )
    v7 = 0;
  else
    ++v5;
  v13 = v7;
  v14 = 0;
  sub_14005B0C0(&v11, "%o", &v15);
LABEL_28:
  v3 = v15;
  *a1 = v5;
  return v3;
}
