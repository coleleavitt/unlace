/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140029F90
// Address: 0x0000000140029F90

//----- (0000000140029F90) ----------------------------------------------------
__int64 __fastcall sub_140029F90(__int64 a1)
{
  char **v3; // rdi
  char *v4; // rcx
  int v5; // eax
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return sub_1400640B0(0x5FBu);
  while ( 1 )
  {
    if ( *(_BYTE *)a1 == 2 )
      goto LABEL_15;
    if ( *(_BYTE *)a1 == 3 )
      break;
    if ( *(_BYTE *)a1 == 7 )
    {
      v3 = (char **)(a1 + 8);
      v4 = (char *)Str1;
      if ( *(_QWORD *)(a1 + 16) )
        v4 = *v3;
      v6 = nullptr;
      sub_14005B0C0(v4, "%I64i", &v6);
      sub_140029390(a1);
      goto LABEL_14;
    }
    if ( *(_BYTE *)a1 == 9 )
      return 0;
    if ( *(_BYTE *)a1 != 10 )
      return sub_1400640B0(0x5FBu);
    if ( !sub_1400291D0((char *)a1, 2) )
      return sub_140063DE0();
  }
  v3 = (char **)(a1 + 8);
  v5 = sub_140066EC0(&v6, (__int128 *)(a1 + 8), 0);
  if ( v5 == 1 )
  {
LABEL_14:
    *v3 = v6;
LABEL_15:
    *(_BYTE *)a1 = 9;
    return 0;
  }
  return sub_140025460(v5);
}
