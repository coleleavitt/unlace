__int64 __fastcall sub_3086A0(__int64 a1, const char *a2, __int64 a3)
{
  const char *v4; // rdx
  char *v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  v6 = nullptr;
  v6 = (char *)qvector_reserve(&v6, 0, 15, 1);
  v4 = &s1;
  *(_QWORD *)&v7 = 15;
  strcpy(v6, "resources/menu");
  if ( *(_QWORD *)(a3 + 8) )
    v4 = *(const char **)a3;
  sub_16FAA0((__int64 *)&v6, (__int64)"/%s.svg", v4);
  sub_479BE0(a1, a2, &v6);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6, a2);
  }
  return a1;
}
