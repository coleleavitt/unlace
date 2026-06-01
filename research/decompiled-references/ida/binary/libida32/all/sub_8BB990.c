unsigned __int64 __fastcall sub_8BB990(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // r13
  __int64 v5; // r12
  size_t v6; // rdx
  const char *v7; // rsi
  size_t v8; // rdx
  size_t v9; // rax
  const char *v10; // rsi
  __int64 v11; // rbx
  __int64 v13; // [rsp+8h] [rbp-60h]
  _BYTE v14[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v15[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v15[0] = __readfsqword(0x28u);
  v13 = v2;
  sub_407AD0(a2, v2);
  if ( v2 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v10 = haystack;
      v11 = v4 + *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v11 + 8) )
        v10 = *(const char **)v11;
      if ( v10 )
      {
        v6 = strlen(v10) + 1;
      }
      else
      {
        v6 = 1;
        v10 = &byte_22CD811;
      }
      sub_8B3AA0(a2, v10, v6);
      v7 = haystack;
      if ( *(_QWORD *)(v11 + 32) )
        v7 = *(const char **)(v11 + 24);
      if ( v7 )
      {
        v8 = strlen(v7) + 1;
      }
      else
      {
        v8 = 1;
        v7 = &byte_22CD811;
      }
      sub_8B3AA0(a2, v7, v8);
      v9 = pack_dd(v14, v15, *(unsigned int *)(v11 + 48)) - (_QWORD)v14;
      if ( v9 )
        sub_8B3AA0(a2, v14, v9);
      ++v5;
      v4 += 56;
    }
    while ( v13 != v5 );
  }
  return v15[0] - __readfsqword(0x28u);
}

