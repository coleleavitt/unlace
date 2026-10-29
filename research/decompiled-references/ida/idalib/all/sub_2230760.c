_QWORD *__fastcall sub_2230760(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v6; // rdx

  v2 = a2[1];
  v3 = a2[2];
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 16LL))(a2);
  *a1 = v2;
  a1[2] = v4;
  a1[1] = v3 - v2;
  a1[3] = v6;
  return a1;
}
