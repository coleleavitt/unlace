_OWORD *__fastcall sub_8FE540(_OWORD *a1, __int64 a2, __int64 a3)
{
  _BYTE v5[88]; // [rsp-8h] [rbp-88h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  *a1 = 0;
  memset(v5, 0, sizeof(v5));
  MD5Init(v5);
  MD5Update(v5, a2, a3);
  MD5Final(a1, v5);
  return a1;
}
