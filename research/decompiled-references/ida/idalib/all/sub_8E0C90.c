__int64 __fastcall sub_8E0C90(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  size_t v4; // rdx
  const char *v5; // r15
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbx
  size_t v9; // rdx
  const char *v10; // r15
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  size_t v14; // rdx
  const char *v15; // r15
  __int64 v16; // rax

  v2 = 0;
  sub_3A0970(a2, *(_DWORD *)(a1 + 12));
  v3 = *(_QWORD *)(a1 + 24);
  sub_3A0970(a2, v3);
  if ( v3 )
  {
    do
    {
      v5 = haystack;
      v6 = *(_QWORD *)(a1 + 16) + 24 * v2;
      if ( *(_QWORD *)(v6 + 8) )
        v5 = *(const char **)v6;
      if ( v5 )
      {
        v4 = strlen(v5) + 1;
      }
      else
      {
        v4 = 1;
        v5 = &byte_22F0C30;
      }
      ++v2;
      sub_8D77E0(a2, v5, v4);
    }
    while ( v3 != v2 );
  }
  v7 = *(_QWORD *)(a1 + 48);
  v8 = 0;
  sub_3A0970(a2, v7);
  if ( v7 )
  {
    do
    {
      v10 = haystack;
      v11 = *(_QWORD *)(a1 + 40) + 24 * v8;
      if ( *(_QWORD *)(v11 + 8) )
        v10 = *(const char **)v11;
      if ( v10 )
      {
        v9 = strlen(v10) + 1;
      }
      else
      {
        v9 = 1;
        v10 = &byte_22F0C30;
      }
      ++v8;
      sub_8D77E0(a2, v10, v9);
    }
    while ( v8 != v7 );
  }
  v12 = *(_QWORD *)(a1 + 72);
  v13 = 0;
  sub_3A0970(a2, v12);
  if ( v12 )
  {
    do
    {
      v15 = haystack;
      v16 = *(_QWORD *)(a1 + 64) + 24 * v13;
      if ( *(_QWORD *)(v16 + 8) )
        v15 = *(const char **)v16;
      if ( v15 )
      {
        v14 = strlen(v15) + 1;
      }
      else
      {
        v14 = 1;
        v15 = &byte_22F0C30;
      }
      ++v13;
      sub_8D77E0(a2, v15, v14);
    }
    while ( v13 != v12 );
  }
  sub_3A0970(a2, *(_DWORD *)(a1 + 88));
  return sub_8D6E80(a2, *(_BYTE *)(a1 + 92));
}
