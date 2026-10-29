char __fastcall sub_54FE40(__int64 a1, char *a2, char *a3)
{
  int v3; // edx
  char result; // al
  char v5; // al
  char *v6; // [rsp+0h] [rbp-38h] BYREF
  char *v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h] BYREF
  __int16 v9; // [rsp+18h] [rbp-20h]
  char v10; // [rsp+1Ah] [rbp-1Eh]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v7 = a2;
  v6 = a3;
  v11 = __readfsqword(0x28u);
  if ( !a2 || !a3 )
    return 0;
  v3 = strcmp(a2, a3);
  result = 1;
  if ( v3 )
  {
    v8 = a1;
    v9 = 0;
    v10 = 0;
    if ( a1 )
    {
      if ( *(char *)(a1 + 36) >= 0 )
      {
        v5 = getinf(58);
        LOBYTE(v9) = 1;
        HIBYTE(v9) = (v5 & 4) != 0;
        v10 = (-4098LL >> (v5 & 0xC)) & 1;
      }
    }
    return sub_54FAC0(&v8, &v7, &v6, 0);
  }
  return result;
}

