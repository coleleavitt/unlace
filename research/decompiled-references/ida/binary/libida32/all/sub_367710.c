__int64 __fastcall sub_367710(__int64 a1, __int64 a2)
{
  int v2; // eax
  bool v3; // zf
  const char *v5; // rsi
  int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 72);
  v3 = *(_QWORD *)(a1 + 48) == 0;
  v8 = __readfsqword(0x28u);
  v5 = haystack;
  v7 = v2;
  if ( !v3 )
    v5 = *(const char **)(a1 + 40);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)netnode_hashset(*(unsigned int *)(a1 + 8), v5, &v7, 4, 72);
  return 0;
}

