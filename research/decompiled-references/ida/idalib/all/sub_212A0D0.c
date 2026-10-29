__int64 __fastcall sub_212A0D0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  __int64 v5; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v7; // [rsp+20h] [rbp-98h] BYREF
  __int64 v8; // [rsp+28h] [rbp-90h] BYREF
  const char *v9; // [rsp+30h] [rbp-88h] BYREF
  __int16 v10; // [rsp+50h] [rbp-68h]
  _QWORD v11[4]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v12; // [rsp+80h] [rbp-38h]

  v1 = sub_2153C00(a1);
  v8 = sub_2124B50(v1);
  if ( (unsigned __int8)sub_2129090(a1, &v5) )
    return 1;
  v12 = 259;
  v11[0] = "expected comma";
  if ( (unsigned __int8)sub_2154510(a1, 26, v11) )
    return 1;
  if ( (unsigned __int8)sub_2153C10(a1, &v8) )
    return 1;
  v10 = 259;
  v9 = "expected identifier in directive";
  v3 = sub_2153CB0(a1, &v6);
  if ( (unsigned __int8)sub_2154450(a1, v3, v8, &v9) )
    return 1;
  v11[0] = "expected comma";
  v12 = 259;
  if ( (unsigned __int8)sub_2154510(a1, 26, v11) )
    return 1;
  if ( (unsigned __int8)sub_2153C10(a1, &v8) )
    return 1;
  v11[0] = "expected identifier in directive";
  v12 = 259;
  v4 = sub_2153CB0(a1, &v7);
  if ( (unsigned __int8)sub_2154450(a1, v4, v8, v11) )
    return 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 24) + 736LL))(
    *(_QWORD *)(a1 + 24),
    (unsigned int)v5,
    v6,
    v7);
  return 0;
}
