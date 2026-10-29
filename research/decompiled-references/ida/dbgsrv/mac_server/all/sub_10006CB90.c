/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006CB90
// Address: 0x000000010006CB90

//----- (000000010006CB90) ----------------------------------------------------
__int64 __fastcall sub_10006CB90(char *__s1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 v4; // [rsp+Fh] [rbp-31h] BYREF

  v2 = 0;
  while ( 1 )
  {
    if ( sub_10006AB70(a2, (__int64)&v4, 1, 10000) <= 0 )
      return -1;
    *(_WORD *)&__s1[v2] = v4;
    if ( v2 == 1022 )
      break;
    ++v2;
    if ( strstr(__s1, "\r\n\r\n") )
      return v2;
  }
  return 1023;
}
