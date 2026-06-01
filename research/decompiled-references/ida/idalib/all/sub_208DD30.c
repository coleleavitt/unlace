__int64 __fastcall sub_208DD30(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx

  sub_20BE130(a1[5] + 24LL, a1);
  v1 = a1[7];
  v2 = (_QWORD *)a1[8];
  *v2 = v1;
  *(_QWORD *)(v1 + 8) = v2;
  *(_OWORD *)(a1 + 7) = 0;
  sub_208DC00((__int64)a1);
  return sub_20C9BF0(a1);
}
