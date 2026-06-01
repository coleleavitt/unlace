unsigned __int64 __fastcall sub_20D550(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r14
  bool v4; // cc
  const char *v5; // rsi
  char v6; // dl
  char v7; // al
  int v10; // [rsp+10h] [rbp-68h] BYREF
  __int64 v11; // [rsp+18h] [rbp-60h]
  __int128 v12; // [rsp+20h] [rbp-58h]
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( (_QWORD)xmmword_8CC398 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v5 = (const char *)v2;
      v10 = -2;
      v11 = -1;
      v12 = 0;
      v6 = sub_20D210(a1, v2, (__int64)&v10, 0);
      v7 = 2;
      if ( !v6 )
      {
        v5 = (const char *)v2;
        v7 = sub_20D210(a2, v2, (__int64)&v10, 0);
      }
      v4 = v10 < -1;
      *(_BYTE *)(qword_8CC390 + 56 * v3 + 35) = v7;
      if ( !v4 && v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree(v11, v5);
      }
      v3 = (int)++v2;
    }
    while ( (int)v2 < (unsigned __int64)xmmword_8CC398 );
  }
  return v13 - __readfsqword(0x28u);
}
