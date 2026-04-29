__int64 __fastcall sub_90910(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // r15
  unsigned __int64 v17[8]; // [rsp+18h] [rbp-40h] BYREF

  v17[0] = a4;
  if ( a4 )
  {
    if ( a3 != -1 )
      qlseek(a2, a3, 0);
    sub_901A0(a2, v17, 0xCu, a6, a3, a5);
    v10 = v17[0];
    sub_90890(a1, v17[0]);
    v11 = *a1;
    if ( a7 )
    {
      v12 = a6;
      sub_16EA0();
      if ( v10 )
      {
        v13 = 0;
        do
        {
          LODWORD(a6) = callui(27, v12);
          if ( (_BYTE)a6 )
            break;
          v12 = v11;
          v14 = v10 - v13;
          if ( v10 - v13 > 0xAAA )
            v14 = 2730;
          if ( qlread(a2, v11, 12 * v14) != 12 * v14 )
            goto LABEL_13;
          v13 += v14;
          v11 += 12 * v14;
        }
        while ( v13 < v10 );
      }
      LODWORD(a6) = a7;
LABEL_13:
      ((void (__fastcall *)(__int64, __int64, _QWORD))callui)(24, 10, 0);
    }
    else
    {
      LOBYTE(a6) = qlread(a2, v11, 12 * v10) == 12 * v10;
    }
  }
  else
  {
    LODWORD(a6) = 1;
  }
  return (unsigned int)a6;
}
