__int64 __fastcall sub_5E6510(__int64 a1)
{
  const char **v1; // r14
  int v2; // ebx
  __int64 v3; // r13
  const char *v4; // rbp
  int v5; // eax
  const char **v6; // rbx
  const char *v7; // rsi
  __int64 (__fastcall *v9)(_QWORD); // rax
  _QWORD *v10; // rdi

  v1 = (const char **)&off_2B30240;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 48);
  do
  {
    v4 = haystack;
    if ( v3 )
      v4 = *(const char **)(a1 + 40);
    if ( !strcmp(v4, *v1) )
    {
      v9 = (__int64 (__fastcall *)(_QWORD))*(&off_2B30240 + 3 * v2 + 1);
      v10 = (_QWORD *)((char *)*(&off_2B30240 + 3 * v2 + 2) + a1);
      if ( ((unsigned __int8)v9 & 1) != 0 )
        v9 = *(__int64 (__fastcall **)(_QWORD))((char *)v9 + *v10 - 1);
      return v9(v10);
    }
    ++v2;
    v1 += 3;
  }
  while ( v2 != 14 );
  v5 = -1;
  if ( v3 )
    v5 = strcmp(*(const char **)(a1 + 40), "cleanup");
  v6 = (const char **)&off_2B30148;
  while ( v5 )
  {
    if ( &off_2B30240 == (_UNKNOWN **)v6 )
    {
      sub_5E62B0(a1);
      return 0;
    }
    v7 = *v6++;
    v5 = strcmp(v4, v7);
  }
  return 0;
}
