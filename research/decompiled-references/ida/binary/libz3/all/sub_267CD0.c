_QWORD *__fastcall sub_267CD0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a2 + 8);
  *a1 = 0;
  a1[1] = v3;
  sub_14EA2A0(a2 + 16, a3, a1);
  return a1;
}

