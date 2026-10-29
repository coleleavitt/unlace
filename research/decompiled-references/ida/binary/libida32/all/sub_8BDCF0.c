void *__fastcall sub_8BDCF0(_QWORD *a1, __int64 *a2)
{
  bool v2; // zf
  const char *v4; // rsi
  const char *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // r8
  size_t v10; // rdx
  const char *v11; // r15
  __int64 v12; // rax
  size_t v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  size_t v16; // rax
  _BYTE v18[10]; // [rsp+Eh] [rbp-4Ah] BYREF
  _QWORD v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a1[3] == 0;
  v19[0] = __readfsqword(0x28u);
  v4 = haystack;
  if ( !v2 )
    v4 = (const char *)a1[2];
  sub_62C910(a2, v4);
  v5 = haystack;
  if ( a1[6] )
    v5 = (const char *)a1[5];
  v6 = 0;
  sub_62C910(a2, v5);
  v7 = a1[9];
  sub_407AD0(a2, v7);
  if ( v7 )
  {
    do
    {
      v11 = haystack;
      v12 = a1[8] + 24 * v6;
      if ( *(_QWORD *)(v12 + 8) )
        v11 = *(const char **)v12;
      if ( v11 )
      {
        v10 = strlen(v11) + 1;
      }
      else
      {
        v10 = 1;
        v11 = &byte_22CD811;
      }
      ++v6;
      sub_8B3AA0(a2, v11, v10);
    }
    while ( v7 != v6 );
  }
  v13 = pack_dq(v18, v19, a1[11] + 1LL, v8, v9) - (_QWORD)v18;
  if ( v13 )
    sub_8B3AA0(a2, v18, v13);
  sub_8B3AA0(a2, a1 + 12, 0x10u);
  v16 = pack_dq(v18, v19, a1[14] + 1LL, v14, v15) - (_QWORD)v18;
  if ( v16 )
    sub_8B3AA0(a2, v18, v16);
  return sub_8B3AA0(a2, a1 + 15, 0x10u);
}

