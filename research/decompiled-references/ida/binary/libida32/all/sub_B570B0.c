_QWORD *__fastcall sub_B570B0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a2 + 112);
  v3 = *(_QWORD *)(a2 + 104);
  *a1 = 0;
  a1[2] = 0;
  v5 = v3 + 8 * v2;
  a1[1] = v5;
  a1[3] = v5;
  return a1;
}

