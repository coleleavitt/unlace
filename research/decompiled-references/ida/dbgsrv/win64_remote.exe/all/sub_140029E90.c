/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140029E90
// Address: 0x0000000140029E90

//----- (0000000140029E90) ----------------------------------------------------
__int64 __fastcall sub_140029E90(__int64 a1)
{
  char *v3; // rax
  char *v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h] BYREF

  if ( !a1 )
    return sub_1400640B0(0x5FBu);
  while ( 1 )
  {
    if ( *(_BYTE *)a1 == 2 )
    {
LABEL_14:
      sub_140066EF0(*(_QWORD *)(a1 + 8), a1 + 8);
      goto LABEL_15;
    }
    if ( *(_BYTE *)a1 == 3 )
      return 0;
    if ( *(_BYTE *)a1 == 7 )
      break;
    if ( *(_BYTE *)a1 == 9 )
      goto LABEL_14;
    if ( *(_BYTE *)a1 != 10 )
      return sub_1400640B0(0x5FBu);
    if ( !sub_1400291D0((char *)a1, 2) )
      return sub_140063DE0();
  }
  v3 = (char *)Str1;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(char **)(a1 + 8);
  v4 = v3;
  sub_140065D10(&v4, &v5);
  sub_140029390(a1);
  *(_OWORD *)(a1 + 8) = v5;
LABEL_15:
  *(_BYTE *)a1 = 3;
  return 0;
}
// 140066EF0: using guessed type __int64 __fastcall sub_140066EF0(_QWORD, _QWORD);
