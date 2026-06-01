char *__fastcall sub_17A2EB0(__int64 a1, char **a2)
{
  char *result; // rax
  __int64 v3; // rdx

  for ( result = *a2; ; result = *(char **)result )
  {
    if ( result[8] >= 0 )
    {
      v3 = *((_QWORD *)result + 45);
      if ( v3 )
        break;
    }
  }
  *(_QWORD *)(a1 + 544) = v3;
  return result;
}
