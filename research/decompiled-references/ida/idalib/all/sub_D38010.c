__int64 __fastcall sub_D38010(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // ebp
  bool v5; // bp
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 *v8; // r12
  void *v9; // rax
  void *v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-30h]

  sub_CF8960((__int64)&v10, a4);
  v4 = v11;
  if ( v11 <= 0x40 )
  {
    result = 1;
    if ( v10 )
      return result;
    goto LABEL_7;
  }
  v5 = v4 == (unsigned int)sub_2206780(&v10);
  if ( v10 )
    operator delete[](v10);
  result = 1;
  if ( v5 )
  {
LABEL_7:
    v7 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    v8 = (__int64 *)sub_E33C10(a1, v7, 2508, 0);
    v9 = (void *)sub_EEC8C0(*(_QWORD *)(v7 + 24));
    if ( v8 )
    {
      v10 = v9;
      LOBYTE(v11) = 1;
      sub_AEC610(v8, (__int64 *)&v10);
    }
    return 0;
  }
  return result;
}
