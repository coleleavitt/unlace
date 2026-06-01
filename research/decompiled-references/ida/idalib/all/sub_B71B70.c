bool __fastcall sub_B71B70(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rdi
  bool result; // al
  __int64 v5; // rbp

  v1 = *(_QWORD *)(a1 + 16);
  v2 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
  {
    v3 = v2[1];
    v2 = (_QWORD *)*v2;
  }
  result = 1;
  if ( v2 )
  {
    v5 = sub_B91570(v3);
    return v5 != sub_B91570(v2);
  }
  return result;
}
