__int64 __fastcall sub_388500(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  _BYTE v6[32]; // [rsp+8h] [rbp-20h] BYREF

  sub_17F9A60(v6, "sat");
  if ( (unsigned __int8)sub_1859630(a2, "smt", v6, 0) )
  {
    v2 = sub_374300(a1, a2, (__int64)&qword_18D6CD0);
    v3 = sub_E5B020(v2);
  }
  else if ( (unsigned __int8)sub_1859630(a2, "euf", v6, 0) )
  {
    v3 = sub_7844E0(a1, a2);
  }
  else
  {
    v3 = sub_72C640(a1, a2, &qword_18D6CD0);
  }
  v4 = v3;
  sub_18572D0(v6);
  return v4;
}

