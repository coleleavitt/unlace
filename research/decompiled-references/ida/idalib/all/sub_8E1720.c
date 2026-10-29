unsigned __int64 __fastcall sub_8E1720(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  size_t v5; // rdx
  size_t v6; // rax
  const char *v7; // rsi
  __int64 v8; // rbx
  _BYTE v10[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v11[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24);
  v11[0] = __readfsqword(0x28u);
  sub_3A0970(a2, v3);
  if ( v3 )
  {
    do
    {
      v7 = haystack;
      v8 = *(_QWORD *)(a1 + 16) + 48 * v2;
      if ( *(_QWORD *)(v8 + 8) )
        v7 = *(const char **)v8;
      if ( v7 )
      {
        v5 = strlen(v7) + 1;
      }
      else
      {
        v5 = 1;
        v7 = &byte_22F0C30;
      }
      sub_8D77E0(a2, v7, v5);
      v6 = pack_dq(v10, v11, *(_QWORD *)(v8 + 24) + 1LL) - (_QWORD)v10;
      if ( v6 )
        sub_8D77E0(a2, v10, v6);
      ++v2;
      sub_8D77E0(a2, (const void *)(v8 + 32), 0x10u);
    }
    while ( v3 != v2 );
  }
  return sub_3A0970(a2, *(_DWORD *)(a1 + 40));
}
