__int64 __fastcall sub_77CEF0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 result; // rax

  v2 = (_QWORD *)sub_186B270(0x20u);
  *v2 = a2;
  v3 = v2;
  result = sub_16669D0(v2 + 1, a2);
  *a1 = v3;
  return result;
}

