__int64 __fastcall sub_5D22B0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned int i; // r12d
  __int64 v5; // rsi
  char j; // al
  unsigned __int8 v8; // [rsp+13h] [rbp-55h] BYREF
  unsigned int v9; // [rsp+14h] [rbp-54h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v11[9]; // [rsp+20h] [rbp-48h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 32) & 2) != 0 )
  {
    v3 = 0;
    for ( i = 0; *(_DWORD *)(a2 + 16) > (int)v3; i += sub_5D22B0(a1, v5) )
      v5 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v3++);
    v10 = 0;
    for ( j = til_next_macro(a2, &v10, v11, &v9, &v8); j; j = til_next_macro(a2, &v10, v11, &v9, &v8) )
      lex_define_macro(*(_QWORD *)(a1 + 232), v10, v11[0], v9, v8);
  }
  else
  {
    i = 1;
    (*(void (**)(const char *, ...))(a1 + 264))("Error %s: base til macros are stripped\n", *(const char **)a2);
  }
  return i;
}

