void *__fastcall sub_80F900(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdx
  size_t v4; // rax
  const char *v5; // r13
  size_t v6; // rdx
  size_t v7; // rax
  const char *v8; // rbp
  size_t v9; // rdx
  const char *v10; // rsi
  const char *v11; // rbp
  size_t v12; // rdx
  _BYTE v14[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v15[5]; // [rsp+13h] [rbp-35h] BYREF
  unsigned __int64 v16[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(unsigned int *)a1;
  v16[0] = __readfsqword(0x28u);
  v4 = pack_dd(v14, v15, v2) - (_QWORD)v14;
  if ( v4 )
    sub_80AD70(a2, v14, v4);
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
    v5 = &byte_22F0C30;
  }
  sub_80AD70(a2, v5, v6);
  v7 = pack_dq(v14, v16, a1[4]) - (_QWORD)v14;
  if ( v7 )
    sub_80AD70(a2, v14, v7);
  v8 = haystack;
  if ( a1[6] )
    v8 = (const char *)a1[5];
  if ( v8 )
  {
    v9 = strlen(v8) + 1;
  }
  else
  {
    v9 = 1;
    v8 = &byte_22F0C30;
  }
  v10 = v8;
  v11 = haystack;
  sub_80AD70(a2, v10, v9);
  if ( a1[9] )
    v11 = (const char *)a1[8];
  if ( v11 )
  {
    v12 = strlen(v11) + 1;
  }
  else
  {
    v12 = 1;
    v11 = &byte_22F0C30;
  }
  return sub_80AD70(a2, v11, v12);
}
