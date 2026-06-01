__int64 __fastcall sub_212A4A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  unsigned int v3; // ebp
  unsigned __int64 v5; // [rsp+0h] [rbp-98h] BYREF
  __int64 v6; // [rsp+8h] [rbp-90h] BYREF
  const char *v7; // [rsp+10h] [rbp-88h] BYREF
  __int16 v8; // [rsp+30h] [rbp-68h]
  _QWORD v9[4]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v10; // [rsp+60h] [rbp-38h]

  v1 = sub_2153C00(a1);
  v6 = 0;
  v2 = sub_2124B50(v1);
  if ( (unsigned __int8)sub_2153C10(a1, &v6) )
    return 1;
  v10 = 259;
  v9[0] = "expected function id";
  if ( (unsigned __int8)sub_2154400(a1, &v5, v9) )
    return 1;
  v8 = 259;
  v7 = "expected function id within range [0, UINT_MAX)";
  if ( (unsigned __int8)sub_2154450(a1, v5 > 0xFFFFFFFE, v6, &v7) )
    return 1;
  v3 = sub_21544B0(a1);
  if ( (_BYTE)v3
    || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 712LL))(
         *(_QWORD *)(a1 + 24),
         (unsigned int)v5) )
  {
    return v3;
  }
  v9[0] = "function id already allocated";
  v10 = 259;
  return (unsigned int)sub_2153E90(a1, v2, v9, 0, 0);
}
