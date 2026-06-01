__int64 __fastcall sub_3885C0(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _BYTE v8[48]; // [rsp+8h] [rbp-30h] BYREF

  sub_17F9A60(v8, "sat");
  if ( (unsigned __int8)sub_1859630(a3, "euf", v8, 0) )
    v4 = sub_7844E0(a1, a3);
  else
    v4 = sub_72C2E0(a1, a2, a3);
  v5 = v4;
  sub_18572D0(v8);
  return v5;
}

