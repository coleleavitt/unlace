unsigned __int64 __fastcall sub_A8A8A0(_QWORD *a1)
{
  __int64 v1; // rsi
  size_t v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = a1[202];
  if ( v1 )
    return sub_A70A40((__int64)a1, v1, 0);
  v3 = j__strlen("__NSConstantString_tag");
  v4 = sub_A871C0(a1, "__NSConstantString_tag", v3, 0);
  a1[201] = v4;
  sub_B809C0(v4);
  v5 = sub_A8A4D0(a1);
  return sub_A70A40((__int64)a1, v5, 0);
}
