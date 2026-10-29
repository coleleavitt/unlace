/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: append_snprintf
// Address: 0x000B9BA0

//----- (000B9BA0) --------------------------------------------------------
unsigned int append_snprintf(char *s, int a2, char *a3, ...)
{
  char *v3; // eax
  va_list va; // [esp+30h] [ebp+14h] BYREF

  va_start(va, a3);
  v3 = &s[strlen(s)];
  if ( a2 - (int)v3 <= 0 )
    return 0;
  else
    return qvsnprintf(v3, a2 - (_DWORD)v3, a3, (int)va);
}
