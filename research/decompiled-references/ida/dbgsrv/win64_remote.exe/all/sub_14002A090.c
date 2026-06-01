/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002A090
// Address: 0x000000014002A090

//----- (000000014002A090) ----------------------------------------------------
__int64 __fastcall sub_14002A090(__int64 a1)
{
  char *v3; // rcx
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return sub_1400640B0(0x5FBu);
  while ( 1 )
  {
    if ( *(_BYTE *)a1 == 2 )
      return 0;
    if ( *(_BYTE *)a1 == 3 )
    {
      v4 = sub_140066EC0(&v5, (__int128 *)(a1 + 8), 0);
      if ( v4 != 1 )
        return sub_140025460(v4);
      *(_QWORD *)(a1 + 8) = v5;
LABEL_17:
      *(_BYTE *)a1 = 2;
      return 0;
    }
    if ( *(_BYTE *)a1 == 7 )
      break;
    if ( *(_BYTE *)a1 == 9 )
      goto LABEL_17;
    if ( *(_BYTE *)a1 != 10 )
      return sub_1400640B0(0x5FBu);
    if ( !sub_1400291D0((char *)a1, 2) )
      return sub_140063DE0();
  }
  v3 = (char *)Str1;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(char **)(a1 + 8);
  v5 = 0;
  sub_14005B0C0(v3, "%I64i", &v5);
  sub_140029390(a1);
  *(_QWORD *)(a1 + 8) = v5;
  return 0;
}
