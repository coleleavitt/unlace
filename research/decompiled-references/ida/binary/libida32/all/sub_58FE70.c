__int64 __fastcall sub_58FE70(__int64 a1)
{
  __int64 v1; // rsi
  const char *v2; // rbx
  __int64 result; // rax

  v1 = 95;
  v2 = "_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  do
  {
    if ( !*(_QWORD *)(a1 + 56) || (result = rangeset_t_find_range(a1 + 48, v1)) == 0 )
      sub_375320(
        (__int64)"TypeNameChars should contain at least all 7-bit alphanumeric characters and '_' (missing '%c')",
        (unsigned int)*v2);
    v1 = *(unsigned __int8 *)++v2;
  }
  while ( (_BYTE)v1 );
  return result;
}

