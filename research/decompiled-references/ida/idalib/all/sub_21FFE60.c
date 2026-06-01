__int64 __fastcall sub_21FFE60(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // r12

  result = *a2;
  v3 = (_QWORD *)a2[1];
  *a1 = *a2;
  if ( v3 )
  {
    v5 = (_QWORD *)operator new[](0x38u);
    v6 = (_QWORD *)a2[1];
    *v5 = 2;
    v3 = v5 + 1;
    v7 = v5;
    sub_995620((__int64)(v5 + 1), v6);
    result = sub_995620((__int64)(v7 + 4), (_QWORD *)(a2[1] + 24));
  }
  a1[1] = (__int64)v3;
  return result;
}
