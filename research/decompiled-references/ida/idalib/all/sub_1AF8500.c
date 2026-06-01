unsigned __int64 __fastcall sub_1AF8500(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 result; // rax

  v2 = *a2;
  v3 = (_QWORD *)sub_168B6C0(*(_QWORD *)(*(_QWORD *)a1 + 760LL));
  v6 = v3[294];
  v3[304] += 12LL;
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v3[295] >= v7 + 12 && v6 )
  {
    v3[294] = v7 + 12;
    *(_QWORD *)v7 = v2;
    *(_DWORD *)(v7 + 8) = 74;
    return (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_986170((__int64)(v3 + 294), 12, 12, 3, v4, v5);
    *(_QWORD *)result = v2;
    *(_DWORD *)(result + 8) = 74;
  }
  return result;
}
