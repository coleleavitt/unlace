__int64 __fastcall sub_2BF0(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int8 v4; // dl
  __int16 v6; // [rsp+Eh] [rbp-43Ah] BYREF
  _BYTE v7[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v8; // [rsp+418h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( a2
    && a2 < (unsigned __int64)qword_B288
    && (qlseek(a1, a2, 0), lread(a1, &v6, 1), v4 = v6 & 0x7F, (LOBYTE(v6) = v4) != 0)
    && ((lread(a1, v7, v4), v7[(unsigned __int8)v6] = 0, !a3) || (lread(a1, &v6, 2), !v6)) )
  {
    return qstrdup(v7);
  }
  else
  {
    return 0;
  }
}

