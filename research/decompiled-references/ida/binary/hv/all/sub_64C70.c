_OWORD *__fastcall sub_64C70(_OWORD *a1, __int64 a2, __int64 a3)
{
  _BYTE v5[88]; // [rsp-8h] [rbp-88h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  *a1 = 0;
  memset(v5, 0, sizeof(v5));
  sub_92BC0(v5, 0.0);
  sub_932D0(v5, a2, a3);
  sub_93510(a1, v5);
  return a1;
}

