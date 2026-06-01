__int64 __fastcall sub_1FBED20(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  sub_1FBEC00((__int64 *)a1, a2, a3, a4, a5, a6);
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), a2[11], *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 52;
  return result;
}
