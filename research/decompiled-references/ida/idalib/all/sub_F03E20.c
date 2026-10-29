__int64 __fastcall sub_F03E20(__int64 a1, unsigned __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  const void *v7; // rax
  size_t v8; // rdx
  _BYTE v10[9]; // [rsp+3h] [rbp-25h] BYREF
  unsigned int v11; // [rsp+Ch] [rbp-1Ch]

  v4 = *(_QWORD *)(a3 + 2320);
  v5 = *(_QWORD *)(a3 + 2312);
  v10[0] = 0;
  v6 = sub_EEC8C0(a2, a2, a4);
  LOBYTE(v11) = 1;
  v7 = (const void *)sub_13DD220(v6, v11, v5, v4, v10);
  if ( v10[0] )
    return 0;
  sub_9954E0(a1, v7, v8);
  return 1;
}
