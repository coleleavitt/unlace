__int64 __fastcall sub_1F45B0(__int64 a1, int a2, __int64 a3)
{
  int v3; // r8d
  int v4; // r9d
  const char *v5; // rcx
  __int64 result; // rax

  sub_1F4550(a3, *(_DWORD **)(a1 + 1504), (__int64 *)(a1 + 496), 3);
  v5 = s1;
  if ( *(_QWORD *)(a1 + 504) )
    v5 = *(const char **)(a1 + 496);
  result = sub_3311F0(a1, a2, 34, (_DWORD)v5, v3, v4);
  *(_QWORD *)(a1 + 504) = 0;
  return result;
}
