__int64 __fastcall sub_1EF1F0(__int64 a1, int a2, __int64 a3)
{
  int v3; // r8d
  int v4; // r9d
  const char *v5; // rcx
  __int64 result; // rax

  sub_1EF190(a3, *(_DWORD **)(a1 + 1504), (__int64 *)(a1 + 496), 3);
  v5 = s1;
  if ( *(_QWORD *)(a1 + 504) )
    v5 = *(const char **)(a1 + 496);
  result = sub_32B650(a1, a2, 34, (_DWORD)v5, v3, v4);
  *(_QWORD *)(a1 + 504) = 0;
  return result;
}
