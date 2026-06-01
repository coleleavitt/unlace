void *__fastcall sub_7EC740(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdx
  size_t v4; // rax
  const char *v5; // r13
  size_t v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  size_t v9; // rax
  const char *v10; // rbp
  size_t v11; // rdx
  const char *v12; // rsi
  const char *v13; // rbp
  size_t v14; // rdx
  _BYTE v16[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v17[5]; // [rsp+13h] [rbp-35h] BYREF
  unsigned __int64 v18[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(unsigned int *)a1;
  v18[0] = __readfsqword(0x28u);
  v4 = pack_dd(v16, v17, v2) - (_QWORD)v16;
  if ( v4 )
    sub_7E7BD0(a2, v16, v4);
  v5 = haystack;
  if ( a1[2] )
    v5 = (const char *)a1[1];
  if ( v5 )
  {
    v6 = strlen(v5) + 1;
  }
  else
  {
    v6 = 1;
    v5 = &byte_22CD811;
  }
  sub_7E7BD0(a2, v5, v6);
  v9 = pack_dq(v16, v18, a1[4], v7, v8) - (_QWORD)v16;
  if ( v9 )
    sub_7E7BD0(a2, v16, v9);
  v10 = haystack;
  if ( a1[6] )
    v10 = (const char *)a1[5];
  if ( v10 )
  {
    v11 = strlen(v10) + 1;
  }
  else
  {
    v11 = 1;
    v10 = &byte_22CD811;
  }
  v12 = v10;
  v13 = haystack;
  sub_7E7BD0(a2, v12, v11);
  if ( a1[9] )
    v13 = (const char *)a1[8];
  if ( v13 )
  {
    v14 = strlen(v13) + 1;
  }
  else
  {
    v14 = 1;
    v13 = &byte_22CD811;
  }
  return sub_7E7BD0(a2, v13, v14);
}

