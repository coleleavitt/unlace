char *__fastcall sub_21BA8A0(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  char *result; // rax

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    v3 = 80LL * (unsigned int)(a2 - 1);
    a2 = *(unsigned __int16 *)(v2 + v3 + 56);
    if ( !*(_WORD *)(v2 + v3 + 56) )
      break;
    result = *(char **)(v2 + 80LL * (unsigned int)(a2 - 1) + 8);
    if ( result )
      return result;
  }
  return "OPTIONS";
}
