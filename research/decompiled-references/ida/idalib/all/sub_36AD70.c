__int64 __fastcall sub_36AD70(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // zf
  const char *v5; // rsi
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = a1[9];
  v3 = a1[6] == 0;
  v7[1] = __readfsqword(0x28u);
  v5 = haystack;
  v7[0] = v2;
  if ( !v3 )
    v5 = (const char *)a1[5];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)netnode_hashset(a1[1], v5, v7, 8, 72);
  return 0;
}
