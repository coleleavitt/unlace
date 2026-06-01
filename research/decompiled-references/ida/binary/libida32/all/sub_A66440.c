__int64 __fastcall sub_A66440(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp
  size_t v4; // rax

  result = a1[187];
  if ( !result )
  {
    v2 = sub_A51360((__int64)a1, a1[2393], nullptr, 0, nullptr, 0, 0);
    v3 = sub_A51180((__int64)a1, v2);
    v4 = j__strlen("Class");
    result = sub_A66330(a1, v3, "Class", v4);
    a1[187] = result;
  }
  return result;
}

