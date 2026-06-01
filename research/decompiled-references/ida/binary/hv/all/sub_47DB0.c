unsigned __int64 __fastcall sub_47DB0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  size_t v7; // rdx
  size_t v8; // rax
  size_t v9; // rax
  const char *v10; // rsi
  __int64 v11; // rbp
  __int64 v13; // [rsp+8h] [rbp-70h]
  _BYTE v14[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v15[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v16[8]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v16[0] = __readfsqword(0x28u);
  v4 = v2;
  v13 = v2;
  sub_45AA0(a2, v2);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v10 = haystack;
      v11 = v5 + *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v11 + 8) )
        v10 = *(const char **)v11;
      if ( v10 )
      {
        v7 = strlen(v10) + 1;
      }
      else
      {
        v7 = 1;
        v10 = "";
      }
      sub_3DC50(a2, v10, v7);
      v8 = sub_93B90(v14, v16, *(_QWORD *)(v11 + 24) + 1LL) - (_QWORD)v14;
      if ( v8 )
        sub_3DC50(a2, v14, v8);
      sub_3DC50(a2, (const void *)(v11 + 32), 0x10u);
      v9 = sub_93A50(v14, v15, *(unsigned int *)(v11 + 48)) - (_QWORD)v14;
      if ( v9 )
        sub_3DC50(a2, v14, v9);
      ++v6;
      v5 += 56;
    }
    while ( v13 != v6 );
  }
  return v16[0] - __readfsqword(0x28u);
}

