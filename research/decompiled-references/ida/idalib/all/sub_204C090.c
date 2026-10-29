__int64 __fastcall sub_204C090(char *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdx
  _QWORD *v3; // rcx

  v1 = *((_QWORD *)a1 + 4);
  sub_208D370(*((_QWORD *)a1 + 9) + 72LL, a1);
  v2 = *((_QWORD *)a1 + 3);
  v3 = *((_QWORD **)a1 + 4);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  *(_OWORD *)(a1 + 24) = 0;
  sub_204BEA0((__int64)a1);
  operator delete(a1, 0x50u);
  return v1;
}
