size_t __fastcall sub_13E550(__int64 a1, __int64 a2)
{
  size_t v2; // rbx
  const char *v3; // rbp
  TWindow *v4; // r12
  const char *v6; // rsi
  _BYTE v7[10249]; // [rsp+1h] [rbp-2829h]
  _QWORD v8[1285]; // [rsp+2h] [rbp-2828h] BYREF

  v8[1281] = __readfsqword(0x28u);
  if ( errorexit )
    return 0;
  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = *(const char **)a2;
    --v2;
    if ( qword_252E80 )
      goto LABEL_4;
  }
  else
  {
    if ( qword_252E80 )
    {
      if ( byte_252E7A )
      {
        otstream::operator<<(*((_QWORD *)qword_252E80 + 23), &byte_252E7A);
        byte_252E7A = 0;
      }
      return 0;
    }
    v3 = s1;
  }
  sub_13E3C0("Output");
  if ( !qword_252E80 )
  {
    sub_92580();
    return 0;
  }
LABEL_4:
  if ( byte_252E7A )
    otstream::operator<<(*((_QWORD *)qword_252E80 + 23), &byte_252E7A);
  byte_252E7A = 0;
  if ( !v2 )
    return 0;
  v4 = qword_252E80;
  if ( v3[v2 - 1] == 10 )
  {
    v6 = v3;
    byte_252E7A = 10;
    v3 = (const char *)v8;
    if ( v2 > 0x2800 )
      v2 = 10240;
    memcpy(v8, v6, v2);
    v7[v2] = 0;
    goto LABEL_9;
  }
  if ( v3 )
LABEL_9:
    otstream::operator<<(*((_QWORD *)v4 + 23), v3);
  return v2;
}

