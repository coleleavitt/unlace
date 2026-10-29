void *__fastcall sub_7E9940(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r13
  size_t v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  const char *v7; // rbx
  size_t v8; // rdx
  const char *v9; // rsi
  const char *v10; // rbx
  size_t v11; // rdx
  _BYTE v13[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1[3];
  v14[0] = __readfsqword(0x28u);
  v4 = pack_dd(v13, v14, (unsigned int)v2) - (_QWORD)v13;
  if ( v4 )
    sub_7E7BD0(a2, v13, v4);
  v5 = 0;
  if ( v2 )
  {
    do
    {
      v6 = 3 * v5++;
      sub_7E7BD0(a2, (const void *)(a1[2] + 2 * v6), 6u);
    }
    while ( v2 != v5 );
  }
  v7 = haystack;
  if ( a1[6] )
    v7 = (const char *)a1[5];
  if ( v7 )
  {
    v8 = strlen(v7) + 1;
  }
  else
  {
    v8 = 1;
    v7 = &byte_22CD811;
  }
  v9 = v7;
  v10 = haystack;
  sub_7E7BD0(a2, v9, v8);
  if ( a1[9] )
    v10 = (const char *)a1[8];
  if ( v10 )
  {
    v11 = strlen(v10) + 1;
  }
  else
  {
    v11 = 1;
    v10 = &byte_22CD811;
  }
  return sub_7E7BD0(a2, v10, v11);
}

