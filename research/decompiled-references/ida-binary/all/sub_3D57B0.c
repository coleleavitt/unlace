__int64 __fastcall sub_3D57B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  const char *v5; // rsi

  if ( *(_WORD *)(a2 + 24) != 4 )
    sub_4B0C20(a1, "A string value is expected", 1);
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 && ((unsigned __int64)(v4 - 1) <= 0x3FF || (sub_4B0C20(a1, "Too long string value", 1), *(_QWORD *)(a2 + 8))) )
    v5 = *(const char **)a2;
  else
    v5 = &s1;
  return qstrncpy(a3, v5, 1024);
}
