__int64 __fastcall sub_4CD350(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  __int64 result; // rax

  v4 = (_QWORD *)(a1 + 48);
  v5 = v4[3];
  v4[3] = a3;
  result = sub_4CCF40(v4, a2);
  *(_QWORD *)(a1 + 72) = v5;
  return result;
}

