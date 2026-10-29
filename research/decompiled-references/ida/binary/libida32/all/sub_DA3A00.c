__int64 __fastcall sub_DA3A00(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // [rsp+4h] [rbp-24h] BYREF
  char v7; // [rsp+Ch] [rbp-1Ch]

  if ( !(unsigned __int8)sub_DFDF30(a1) )
    return 0;
  v3 = sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
  v4 = sub_DFB220(*(_QWORD *)(a1 + 400));
  v5 = (__int64 *)sub_E0FF50(a1, v4, 2456, 0);
  if ( !v5 )
    return 0;
  v6 = v3;
  v7 = 1;
  sub_AC88D0(v5, &v6);
  return 0;
}

