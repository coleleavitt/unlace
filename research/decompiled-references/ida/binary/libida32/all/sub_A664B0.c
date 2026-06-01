__int64 __fastcall sub_A664B0(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rbp
  size_t v3; // rax

  result = a1[186];
  if ( !result )
  {
    v2 = sub_A4C4B0((__int64)a1, a1[2394]);
    v3 = j__strlen("SEL");
    result = sub_A66330(a1, v2, "SEL", v3);
    a1[186] = result;
  }
  return result;
}

