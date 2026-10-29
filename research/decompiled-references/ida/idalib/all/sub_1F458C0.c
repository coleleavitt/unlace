__int64 __fastcall sub_1F458C0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  sub_1F43F90((__int64 *)a1, a2);
  v2 = sub_1F16D80(*(_QWORD *)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 40) = v2;
  v4 = *(unsigned int *)(v3 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  result = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
