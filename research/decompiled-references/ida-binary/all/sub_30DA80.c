unsigned __int64 __fastcall sub_30DA80(__int64 a1)
{
  const char *v1; // rsi
  __int64 v2; // rdx
  const char *v4; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  if ( qword_8CD748 )
  {
    v1 = (const char *)&v4;
    v4 = nullptr;
    v5 = 0;
    if ( (unsigned __int8)sub_5132B0(a1, &v4) )
    {
      v2 = 0;
      v1 = &s1;
      if ( (_QWORD)v5 )
      {
        v1 = v4;
        v2 = (unsigned int)(v5 - 1);
      }
      sub_312940(qword_8CD748, v1, v2);
    }
    if ( v4 )
    {
      *(_QWORD *)&v5 = 0;
      qfree(v4, v1);
    }
  }
  return v6 - __readfsqword(0x28u);
}
