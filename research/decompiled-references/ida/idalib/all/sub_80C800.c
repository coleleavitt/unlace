void *__fastcall sub_80C800(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  size_t v4; // rax
  const char *v5; // r12
  size_t v6; // rdx
  const char *v7; // rsi
  const char *v8; // r12
  size_t v9; // rdx
  _BYTE v11[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(unsigned int *)(a1 + 12);
  v12[0] = __readfsqword(0x28u);
  v4 = pack_dd(v11, v12, v2) - (_QWORD)v11;
  if ( v4 )
    sub_80AD70(a2, v11, v4);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 24) )
    v5 = *(const char **)(a1 + 16);
  if ( v5 )
  {
    v6 = strlen(v5) + 1;
  }
  else
  {
    v6 = 1;
    v5 = &byte_22F0C30;
  }
  v7 = v5;
  v8 = haystack;
  sub_80AD70(a2, v7, v6);
  if ( *(_QWORD *)(a1 + 48) )
    v8 = *(const char **)(a1 + 40);
  if ( v8 )
  {
    v9 = strlen(v8) + 1;
  }
  else
  {
    v9 = 1;
    v8 = &byte_22F0C30;
  }
  return sub_80AD70(a2, v8, v9);
}
