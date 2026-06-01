__int64 __fastcall sub_1EEDED0(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax

  v4 = (unsigned int)*a4;
  *a4 = v4 + 1;
  v7 = sub_1EE4770(a1, a2, *(_QWORD *)(*a3 + 8 * v4));
  v8 = (unsigned int)*a4;
  *a4 = v8 + 1;
  return (sub_1EE4770(a1, a2, *(_QWORD *)(*a3 + 8 * v8)) << 32) | v7;
}
