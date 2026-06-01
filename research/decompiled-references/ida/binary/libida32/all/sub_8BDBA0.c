unsigned __int64 __fastcall sub_8BDBA0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  size_t v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  size_t v10; // rax
  size_t v11; // rax
  const char *v12; // rsi
  __int64 v13; // rbp
  __int64 v15; // [rsp+8h] [rbp-70h]
  _BYTE v16[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v17[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v18[8]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v18[0] = __readfsqword(0x28u);
  v4 = v2;
  v15 = v2;
  sub_407AD0(a2, v2);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v12 = haystack;
      v13 = v5 + *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v13 + 8) )
        v12 = *(const char **)v13;
      if ( v12 )
      {
        v7 = strlen(v12) + 1;
      }
      else
      {
        v7 = 1;
        v12 = &byte_22CD811;
      }
      sub_8B3AA0(a2, v12, v7);
      v10 = pack_dq(v16, v18, *(_QWORD *)(v13 + 24) + 1LL, v8, v9) - (_QWORD)v16;
      if ( v10 )
        sub_8B3AA0(a2, v16, v10);
      sub_8B3AA0(a2, (const void *)(v13 + 32), 0x10u);
      v11 = pack_dd(v16, v17, *(unsigned int *)(v13 + 48)) - (_QWORD)v16;
      if ( v11 )
        sub_8B3AA0(a2, v16, v11);
      ++v6;
      v5 += 56;
    }
    while ( v15 != v6 );
  }
  return v18[0] - __readfsqword(0x28u);
}

