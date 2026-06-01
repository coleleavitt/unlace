_QWORD *__fastcall sub_112B6F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 8);
  *a1 = a1 + 2;
  sub_112B630(a1, *(_BYTE **)(v2 + 488), *(_QWORD *)(v2 + 488) + *(_QWORD *)(v2 + 496));
  return a1;
}
