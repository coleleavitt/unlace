unsigned __int64 __fastcall sub_45E60(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 i; // rbx
  size_t v5; // rdx
  unsigned int *v6; // r15
  size_t v7; // rax
  const char *v8; // rsi
  _BYTE v10[5]; // [rsp+13h] [rbp-45h] BYREF
  unsigned __int64 v11[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v11[0] = __readfsqword(0x28u);
  sub_45AA0(a2, v2);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v6 = (unsigned int *)(*(_QWORD *)(a1 + 16) + 32 * i);
      v7 = sub_93A50(v10, v11, *v6) - (_QWORD)v10;
      if ( v7 )
        sub_3DC50(a2, v10, v7);
      v8 = haystack;
      if ( *((_QWORD *)v6 + 2) )
        v8 = *((const char **)v6 + 1);
      if ( v8 )
      {
        v5 = strlen(v8) + 1;
      }
      else
      {
        v5 = 1;
        v8 = "";
      }
      sub_3DC50(a2, v8, v5);
    }
  }
  return v11[0] - __readfsqword(0x28u);
}

