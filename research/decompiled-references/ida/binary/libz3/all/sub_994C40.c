__int64 __fastcall sub_994C40(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r12
  _DWORD *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 24);
  sub_15E1A70(*(_QWORD *)(a1 + 408));
  sub_15E1A70(*(_QWORD *)(a1 + 408));
  v3 = (_DWORD *)sub_15E1B70(v2);
  v4 = sub_15E1A70(*(_QWORD *)(a1 + 24));
  sub_993F50(a1, v4, v3, 1);
  v5 = sub_15E1A70(*(_QWORD *)(a1 + 24));
  return sub_993F50(a1, v5, a2, 1);
}

