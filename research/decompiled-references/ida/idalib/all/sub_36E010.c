__int64 __fastcall sub_36E010(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  *(_QWORD *)(a2 + 8) = -1;
  v3 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  if ( (unsigned int)atos(v5, v3) )
    *(_QWORD *)(a2 + 8) = v5[0];
  return 0;
}
