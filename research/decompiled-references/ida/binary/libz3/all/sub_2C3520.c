__int64 __fastcall sub_2C3520(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int8 v2; // bp
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rax

  v1 = sub_26B780(a1, 4);
  v2 = sub_26B450(a1, 3);
  v3 = sub_26B5C0(a1, 2);
  v4 = sub_26B5C0(a1, 1);
  v5 = sub_26B5C0(a1, 0);
  return Z3_model_eval(v5, v4, v3, v2, v1);
}

