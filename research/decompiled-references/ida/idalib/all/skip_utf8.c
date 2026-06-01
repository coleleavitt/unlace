__int64 __fastcall skip_utf8(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  int utf8_char; // eax
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  v6[1] = __readfsqword(0x28u);
  v6[0] = v2;
  if ( a2 )
  {
    v3 = a2;
    do
    {
      utf8_char = get_utf8_char(v6);
      if ( !utf8_char )
      {
        v2 = v6[0];
        result = v3;
        goto LABEL_8;
      }
      if ( utf8_char == -1 )
        ++v6[0];
      --v3;
    }
    while ( v3 );
    v2 = v6[0];
    result = 0;
  }
  else
  {
    result = 0;
  }
LABEL_8:
  *a1 = v2;
  return result;
}
