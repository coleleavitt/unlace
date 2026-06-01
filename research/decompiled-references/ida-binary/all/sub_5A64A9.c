__int64 __fastcall sub_5A64A9(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  _QWORD *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx

  v3 = (__int64 *)sub_5A649B(a3);
  v4 = (_QWORD *)sub_590307(16, a2);
  result = *v3;
  v6 = v3[1];
  *v4 = *v3;
  v4[1] = v6;
  return result;
}
