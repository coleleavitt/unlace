__int64 __fastcall sub_1EE7C50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 result; // rax

  v2 = sub_1F6A0A0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16));
  v3 = *a1;
  *(_QWORD *)(a2 + 16) = v2;
  result = sub_1EE7490(v3);
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
