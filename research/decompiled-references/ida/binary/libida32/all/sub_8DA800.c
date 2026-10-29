_OWORD *__fastcall sub_8DA800(_OWORD *a1)
{
  _BYTE v2[88]; // [rsp-8h] [rbp-88h] BYREF
  unsigned __int64 v3; // [rsp+50h] [rbp-30h]

  v3 = __readfsqword(0x28u);
  *a1 = 0;
  memset(v2, 0, sizeof(v2));
  MD5Init(v2);
  MD5Update();
  MD5Final(a1, v2);
  return a1;
}

