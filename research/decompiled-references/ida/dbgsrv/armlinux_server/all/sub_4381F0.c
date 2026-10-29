/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4381F0
// Address: 0x00000000004381F0

//----- (00000000004381F0) ----------------------------------------------------
__int64 __fastcall sub_4381F0(__int64 a1, int a2)
{
  unsigned __int16 v4; // w2
  int v5; // w1
  char v7; // w1
  int v8; // [xsp+24h] [xbp-Ch] BYREF

  if ( *(_QWORD *)(a1 + 48) )
  {
    v4 = sub_437FB8((__int64 *)a1, *(char **)(a1 + 40), &v8);
    v5 = v8;
    if ( v8 != 2 )
      goto LABEL_3;
LABEL_7:
    if ( a2 <= 0 )
      v7 = -58;
    else
      v7 = -62;
    goto LABEL_13;
  }
  v4 = sub_437FB8((__int64 *)a1, (char *)&qword_4B2D48, &v8);
  v5 = v8;
  if ( v8 == 2 )
    goto LABEL_7;
LABEL_3:
  if ( v5 == 3 )
  {
    if ( a2 <= 0 )
      v7 = -35;
    else
      v7 = -37;
  }
  else
  {
    if ( v5 != 1 )
      return sub_4869C8(58);
    if ( a2 <= 0 )
      v7 = -60;
    else
      v7 = -64;
  }
LABEL_13:
  sub_436F60(a1, v7, v4);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
