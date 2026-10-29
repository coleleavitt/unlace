__int64 __fastcall sub_647770(FILE *s, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // r13
  __int64 v6; // rbp
  _QWORD v8[9]; // [rsp+10h] [rbp-48h] BYREF

  v8[3] = __readfsqword(0x28u);
  v3 = 0;
  if ( a3 )
  {
    v8[0] = s;
    v8[1] = a2;
    v8[2] = a3;
    v5 = qftell(s);
    qfseek(s, 4, 1);
    if ( !(unsigned int)zip_deflate(v8, sub_647360, sub_6474D0) )
      v3 = a3;
    v6 = qftell(s);
    qfseek(s, v5, 0);
    fwritebytes(s);
    qfseek(s, v6, 0);
  }
  return v3;
}
