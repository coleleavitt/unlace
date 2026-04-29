unsigned __int64 __fastcall sub_322270(__int64 *a1, __int64 a2, char a3)
{
  char *v4; // rdi
  __int64 v5; // rbx
  int utf8_char; // eax
  char *v7; // rax
  char *v8; // rbp
  unsigned __int64 v9; // rdx
  char *v10; // rbx
  char *v12; // rax
  __int64 v13; // rax
  char v14; // [rsp+Fh] [rbp-39h] BYREF
  char *v15; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v4 = (char *)*a1;
  v15 = v4;
  if ( !a2 )
    goto LABEL_15;
  v5 = 0;
  if ( a3 )
  {
    do
    {
      utf8_char = get_utf8_char(&v15);
      if ( (unsigned int)(utf8_char - 1) > 0xFFFFFFFD || utf8_char == 92 && !(unsigned __int8)sub_321630(&v15, &v14) )
        break;
      ++v5;
    }
    while ( a2 != v5 );
  }
  else
  {
    do
    {
      ++v5;
      get_utf8_char(&v15);
    }
    while ( a2 != v5 );
  }
  v7 = v15;
  v4 = (char *)*a1;
  v8 = &v15[-*a1];
  if ( v15 == (char *)*a1 )
  {
LABEL_15:
    if ( v4 )
    {
      a1[1] = 0;
      qfree(v4);
      *a1 = 0;
      a1[2] = 0;
    }
  }
  else
  {
    v9 = a1[1];
    v10 = v8 + 1;
    if ( v9 < (unsigned __int64)(v8 + 1) )
    {
      if ( a1[2] < (unsigned __int64)v10 )
      {
        v13 = qvector_reserve(a1, *a1, v8 + 1, 1);
        v9 = a1[1];
        *a1 = v13;
        v4 = (char *)v13;
      }
      memset(&v4[v9], 0, (size_t)&v10[-v9]);
      v12 = (char *)*a1;
      a1[1] = (__int64)v10;
      v7 = &v12[(_QWORD)v8];
    }
    else if ( v10 != (char *)v9 )
    {
      a1[1] = (__int64)v10;
    }
    *v7 = 0;
  }
  return v16 - __readfsqword(0x28u);
}
