/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: user2str
// Address: 0x00000000000B0F40

//----- (00000000000B0F40) ----------------------------------------------------
__int64 __fastcall user2str(__int64 a1, char *a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 i; // rbx
  char v6; // al
  __int64 v7; // rax
  char *v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v9[1] = (char *)__readfsqword(0x28u);
  v9[0] = a2;
  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  if ( !a2 )
    return 0;
  v4 = a1;
  if ( a3 > 0 )
  {
    for ( i = 0; ; ++i )
    {
      v9[0] = a2 + 1;
      v6 = *a2;
      *(_BYTE *)(a1 + i) = *a2;
      if ( v6 == 92 )
      {
        *(_BYTE *)(a1 + i) = back_char(v9);
      }
      else if ( !v6 )
      {
        v7 = i;
        if ( a3 <= 0 )
          return v4;
LABEL_12:
        if ( v7 == a3 )
          *(_BYTE *)(a1 + i) = 0;
        return v4;
      }
      if ( i + 1 >= a3 )
      {
        v7 = i + 1;
        if ( a3 <= 0 )
          return v4;
        goto LABEL_12;
      }
      a2 = v9[0];
    }
  }
  return v4;
}
// 158B40: using guessed type __int64 under_debugger;
