const char *__fastcall sub_22A8D00(void *s2, size_t n)
{
  const char **v2; // rbp
  const char *v3; // r13
  const char *v5; // rax
  _QWORD v6[4]; // [rsp+10h] [rbp-58h] BYREF
  int v7; // [rsp+30h] [rbp-38h]
  const char *v8; // [rsp+34h] [rbp-34h]
  int v9; // [rsp+3Ch] [rbp-2Ch]

  v6[1] = n;
  v6[0] = s2;
  v2 = sub_22A8660((const char **)&unk_2BF3FF0 - 66, (__int64)&unk_2BF3FF0, (__int64)v6);
  if ( v2 != (const char **)&unk_2BF3FF0 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( n == strlen(*v2) && (!n || !memcmp(v3, s2, n)) )
        goto LABEL_7;
    }
    else if ( !n )
    {
LABEL_7:
      v5 = v2[1];
      LOBYTE(v7) = 1;
      v8 = v5;
      v9 = v7;
      return v8;
    }
  }
  LOBYTE(v9) = 0;
  return v8;
}
