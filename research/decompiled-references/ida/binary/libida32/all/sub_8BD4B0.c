unsigned __int64 __fastcall sub_8BD4B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  size_t v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  size_t v8; // rax
  const char *v9; // rsi
  __int64 v10; // rbx
  _BYTE v12[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v13[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24);
  v13[0] = __readfsqword(0x28u);
  sub_407AD0(a2, v3);
  if ( v3 )
  {
    do
    {
      v9 = haystack;
      v10 = *(_QWORD *)(a1 + 16) + 48 * v2;
      if ( *(_QWORD *)(v10 + 8) )
        v9 = *(const char **)v10;
      if ( v9 )
      {
        v5 = strlen(v9) + 1;
      }
      else
      {
        v5 = 1;
        v9 = &byte_22CD811;
      }
      sub_8B3AA0(a2, v9, v5);
      v8 = pack_dq(v12, v13, *(_QWORD *)(v10 + 24) + 1LL, v6, v7) - (_QWORD)v12;
      if ( v8 )
        sub_8B3AA0(a2, v12, v8);
      ++v2;
      sub_8B3AA0(a2, (const void *)(v10 + 32), 0x10u);
    }
    while ( v3 != v2 );
  }
  return sub_407AD0(a2, *(_DWORD *)(a1 + 40));
}

