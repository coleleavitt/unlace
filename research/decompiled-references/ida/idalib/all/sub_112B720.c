_BYTE *__fastcall sub_112B720(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  size_t v3; // rax
  _BYTE *v4; // r15
  char *v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v8; // r13

  v3 = 5;
  v4 = &off_2BA8FA0;
  v5 = "clang";
  v6 = a2;
  if ( a2 >= 5 )
    goto LABEL_7;
  while ( 1 )
  {
    v4 += 16;
    if ( v4 == algn_2BA9090 )
      return nullptr;
    v5 = *(char **)v4;
    if ( !*(_QWORD *)v4 )
      goto LABEL_4;
    v3 = strlen(*(const char **)v4);
    if ( v3 <= a2 )
    {
LABEL_7:
      v8 = a2 - v3;
      if ( !v3 )
        goto LABEL_4;
      if ( !memcmp((const void *)(a2 - v3 + a1), v5, v3) )
      {
        v6 = v8;
LABEL_4:
        *a3 = v6;
        return v4;
      }
    }
  }
}
