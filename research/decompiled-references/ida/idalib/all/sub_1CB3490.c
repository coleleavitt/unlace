unsigned __int64 __fastcall sub_1CB3490(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rdx

  v2 = (_QWORD *)sub_B8C330(a1);
  result = sub_F1ED40(v2, a2, v3, v4, v5, v6);
  v8 = *(_QWORD *)(a1 + 160);
  if ( v8 && (v8 & 4) != 0 && (v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
  {
    *v9 = result;
  }
  else
  {
    result &= ~4uLL;
    *(_QWORD *)(a1 + 160) = result;
  }
  return result;
}
