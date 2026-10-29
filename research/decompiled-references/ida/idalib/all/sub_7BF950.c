const char *__fastcall sub_7BF950(__int64 a1, char a2, __int64 a3, unsigned __int64 a4)
{
  const char *result; // rax
  char v5; // si

  result = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    result = *(const char **)(a1 + 24);
  if ( !a2 )
    sub_3BBF30((int)"%s\n(sent %zu bytes out of %zu)", result);
  v5 = *(_BYTE *)(a1 + 56);
  if ( a4 > 5 )
  {
    if ( v5 != 1 )
      *(_BYTE *)(a1 + 56) = 1;
LABEL_7:
    sub_3BBF30((int)"%s\n(received %zu bytes out of %zu)", result);
  }
  if ( v5 )
    goto LABEL_7;
  return result;
}
