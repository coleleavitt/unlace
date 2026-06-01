__int64 __fastcall sub_1F19890(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rdx

  *(_DWORD *)a3 = sub_1EE7490(*a1);
  result = sub_1F194E0(*a1, a2, v4, v5, v6, v7);
  *(_QWORD *)(a3 + 8) = v9;
  return result;
}
