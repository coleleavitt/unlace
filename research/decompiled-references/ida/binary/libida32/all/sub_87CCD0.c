unsigned __int64 __fastcall sub_87CCD0(__int64 *a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  const char *v5; // r15
  size_t v6; // rdx
  const char *v7; // rsi
  const char *v8; // r15
  size_t v9; // rdx
  const char *v10; // rsi
  const char *v11; // r15
  size_t v12; // rdx
  size_t v13; // rax
  size_t v14; // rax
  unsigned __int64 i; // rbx
  __int64 v16; // rdx
  _BYTE v18[5]; // [rsp+3h] [rbp-45h] BYREF
  _QWORD v19[8]; // [rsp+8h] [rbp-40h] BYREF

  v19[0] = __readfsqword(0x28u);
  v4 = pack_dd(v18, v19, a3) - (_QWORD)v18;
  if ( v4 )
    sub_87C800(a1, v18, v4);
  sub_87C800(a1, (const void *)(a2 + 2), 6u);
  v5 = haystack;
  if ( *(_QWORD *)(a2 + 16) )
    v5 = *(const char **)(a2 + 8);
  if ( v5 )
  {
    v6 = strlen(v5) + 1;
  }
  else
  {
    v6 = 1;
    v5 = &byte_22CD811;
  }
  v7 = v5;
  v8 = haystack;
  sub_87C800(a1, v7, v6);
  if ( *(_QWORD *)(a2 + 40) )
    v8 = *(const char **)(a2 + 32);
  if ( v8 )
  {
    v9 = strlen(v8) + 1;
  }
  else
  {
    v9 = 1;
    v8 = &byte_22CD811;
  }
  v10 = v8;
  v11 = haystack;
  sub_87C800(a1, v10, v9);
  if ( *(_QWORD *)(a2 + 64) )
    v11 = *(const char **)(a2 + 56);
  if ( v11 )
  {
    v12 = strlen(v11) + 1;
  }
  else
  {
    v12 = 1;
    v11 = &byte_22CD811;
  }
  sub_87C800(a1, v11, v12);
  v13 = pack_dd(v18, v19, *(unsigned int *)(a2 + 80)) - (_QWORD)v18;
  if ( v13 )
    sub_87C800(a1, v18, v13);
  v14 = pack_dd(v18, v19, *(unsigned int *)(a2 + 96)) - (_QWORD)v18;
  if ( v14 )
    sub_87C800(a1, v18, v14);
  for ( i = 0; i < *(_QWORD *)(a2 + 96); ++i )
  {
    v16 = 5 * i;
    sub_7EB370(*(_QWORD *)(a2 + 88) + 8 * v16, a1);
  }
  return v19[0] - __readfsqword(0x28u);
}

