__int64 __fastcall sub_409010(__int64 a1, __int64 a2, int a3, const void *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // r12
  void *v11; // rax
  const char *v13[29]; // [rsp+10h] [rbp-118h] BYREF

  v10 = sub_40FB00(32);
  *(_QWORD *)v10 = a5;
  *(_DWORD *)(v10 + 8) = a3;
  v11 = (void *)sub_40FB00((unsigned int)(4 * a3));
  *(_QWORD *)(v10 + 16) = v11;
  memcpy(v11, a4, 4LL * a3);
  *(_QWORD *)(v10 + 24) = a6;
  sub_49EDC0(v13);
  sub_49EDE0(v13, "::tcl::mathfunc::", 0xFFFFFFFFLL);
  sub_49EDE0(v13, a2, 0xFFFFFFFFLL);
  sub_407770(a1, v13[0], (__int64)sub_40CB30, v10, (__int64)sub_409120);
  return sub_49F100(v13);
}

