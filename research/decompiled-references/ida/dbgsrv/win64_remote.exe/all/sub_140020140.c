/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020140
// Address: 0x0000000140020140

//----- (0000000140020140) ----------------------------------------------------
__int64 __fastcall sub_140020140(__int64 a1, __int64 a2)
{
  char *v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0;
  v6 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(char **)(a1 + 8);
  else
    v3 = (char *)Str1;
  sub_14005D470(v3, (__int64)&v5);
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = v5;
  *(_QWORD *)(a2 + 24) = v6;
  return 0;
}
