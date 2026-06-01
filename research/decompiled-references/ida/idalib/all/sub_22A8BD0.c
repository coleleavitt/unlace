const char *__fastcall sub_22A8BD0(void *s2, size_t n)
{
  const char **v2; // rbx
  const char *v3; // r14
  const char *v4; // rax
  const char *v5; // r12
  _QWORD v7[4]; // [rsp+10h] [rbp-58h] BYREF
  int v8; // [rsp+30h] [rbp-38h]
  const char *v9; // [rsp+34h] [rbp-34h]
  int v10; // [rsp+3Ch] [rbp-2Ch]

  v7[1] = n;
  v7[0] = s2;
  v2 = sub_22A8660((const char **)&unk_2BF4C90 - 402, (__int64)&unk_2BF4C90, (__int64)v7);
  if ( v2 != (const char **)&unk_2BF4C90 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( n == strlen(*v2) && (!n || !memcmp(v3, s2, n)) )
        goto LABEL_6;
    }
    else if ( !n )
    {
      goto LABEL_6;
    }
  }
  v2 = sub_22A8660((const char **)&unk_2BF3FF0 - 66, (__int64)&unk_2BF3FF0, (__int64)v7);
  if ( v2 == (const char **)&unk_2BF3FF0 )
  {
LABEL_11:
    LOBYTE(v10) = 0;
    return v9;
  }
  v5 = *v2;
  if ( !*v2 )
  {
    if ( !n )
      goto LABEL_6;
    goto LABEL_11;
  }
  if ( n != strlen(*v2) || n && memcmp(v5, s2, n) )
    goto LABEL_11;
LABEL_6:
  v4 = v2[1];
  LOBYTE(v8) = 1;
  v9 = v4;
  v10 = v8;
  return v9;
}
