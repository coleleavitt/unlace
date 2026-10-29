__int64 __fastcall sub_38E970(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v7[0] = 0;
  v2 = sub_388500(a1, (__int64)v7);
  v3 = sub_E664D0(a1, a2);
  v4 = sub_38E530(a1, 1);
  v5 = sub_EE7AC0(v4, v3, v2);
  sub_18572D0(v7);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 112LL))(v5, a2);
  return v5;
}

