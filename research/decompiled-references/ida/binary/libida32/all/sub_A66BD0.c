__int64 __fastcall sub_A66BD0(_QWORD *a1)
{
  __int64 result; // rax
  size_t v2; // rax
  __int64 v3; // rax

  result = a1[201];
  if ( !result && !a1[202] )
  {
    v2 = j__strlen("__NSConstantString_tag");
    v3 = sub_A63480(a1, "__NSConstantString_tag", v2, 0);
    a1[201] = v3;
    sub_B5CC80(v3);
    sub_A66790(a1);
    return a1[201];
  }
  return result;
}

