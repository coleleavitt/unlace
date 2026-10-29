unsigned __int64 __fastcall sub_A66B60(_QWORD *a1)
{
  __int64 v1; // rsi
  size_t v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = a1[202];
  if ( v1 )
    return sub_A4CD00((__int64)a1, v1, 0);
  v3 = j__strlen("__NSConstantString_tag");
  v4 = sub_A63480(a1, "__NSConstantString_tag", v3, 0);
  a1[201] = v4;
  sub_B5CC80(v4);
  v5 = sub_A66790(a1);
  return sub_A4CD00((__int64)a1, v5, 0);
}

