__int64 __fastcall sub_A8A850(_QWORD *a1)
{
  __int64 result; // rax
  size_t v2; // rax
  __int64 v3; // rax

  result = a1[202];
  if ( !result )
  {
    v2 = j__strlen("__NSConstantString_tag");
    v3 = sub_A871C0(a1, "__NSConstantString_tag", v2, 0);
    a1[201] = v3;
    sub_B809C0(v3);
    return sub_A8A4D0(a1);
  }
  return result;
}
