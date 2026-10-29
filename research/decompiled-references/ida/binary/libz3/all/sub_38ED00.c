__int64 __fastcall sub_38ED00(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  _QWORD v6[6]; // [rsp+8h] [rbp-30h] BYREF

  v6[0] = 0;
  v2 = sub_388500(a1, (__int64)v6);
  v3 = sub_38E530(a1, 0);
  v4 = sub_EE7A70(v3, v2);
  sub_18572D0(v6);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 112LL))(v4, a2);
  return v4;
}

