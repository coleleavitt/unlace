__int64 __fastcall sub_21FFBD0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 *v3; // rbp
  __int64 *v4; // rbx
  __int64 result; // rax

  *a1 = a2;
  v2 = (_QWORD *)operator new[](0x38u);
  *v2 = 2;
  v3 = v2 + 1;
  v4 = v2 + 4;
  sub_21F9140(v2 + 1, (__int64)dword_26F7D20);
  sub_21FB9A0(v3, 0);
  sub_21F9140(v4, (__int64)dword_26F7D20);
  result = sub_21FB9A0(v4, 0);
  a1[1] = v3;
  return result;
}
