__int64 __fastcall sub_613160(char *a1)
{
  char *v1; // rsi
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebp
  int v6; // eax
  int v7; // ebx
  __int16 v9; // [rsp+0h] [rbp-38h] BYREF
  char v10; // [rsp+2h] [rbp-36h]
  _BYTE v11[3]; // [rsp+3h] [rbp-35h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v1 = a1;
  v2 = sub_79B5C0(a1 + 1332, a1, 4307348, &v9, 22, 83);
  if ( v2 <= 0 )
    return 920;
  if ( v2 != 22 )
    goto LABEL_8;
  if ( v9 != 17481 || (v5 = 0, v10 != 65) )
    v5 = 1;
  v1 = "ida";
  v6 = strcmp((const char *)&v9, "ida");
  if ( v5 )
  {
    if ( v6 )
      goto LABEL_8;
  }
  else
  {
    v7 = *(unsigned __int16 *)v11;
    if ( v6 )
    {
      if ( !*(_WORD *)v11 )
LABEL_8:
        sub_384000(1339, (__int64)v1, v3, v4);
      goto LABEL_12;
    }
  }
  v7 = *(unsigned __int16 *)&v11[1];
  if ( !*(_WORD *)&v11[1] )
    goto LABEL_8;
LABEL_12:
  if ( v7 > 919 )
  {
    if ( v7 != 920 )
      sub_384000(1341, (__int64)"ida", v3, v4);
  }
  else
  {
    if ( !byte_2CA23FA )
      sub_577650(1, 1340, (unsigned int)v7, 920);
    if ( v7 <= 24 )
      sub_613040();
  }
  return (unsigned int)v7;
}

