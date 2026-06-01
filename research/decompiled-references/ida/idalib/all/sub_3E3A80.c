unsigned __int64 __fastcall sub_3E3A80(_QWORD *a1, void *a2)
{
  unsigned __int64 i; // rsi
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  char v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = -1;
  v6 = 0;
  sub_3E3290(a1, (__int64)&v5, (unsigned __int64)a2);
  for ( i = v5; v5 != -1; i = v5 )
  {
    if ( (v6 & 0x20) == 0 )
      sub_3E2A00(a1, i, a2, 0);
    sub_3E3390(a1, (__int64)&v5, (unsigned __int64)a2);
  }
  return v7 - __readfsqword(0x28u);
}
