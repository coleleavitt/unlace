__int64 __fastcall Z3_get_numeral_uint64(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v4; // r12
  unsigned int numeral_rational; // ebx
  void *v6; // r15
  _QWORD v8[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v9[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29AAC0(a1, a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      numeral_rational = 0;
LABEL_11:
      byte_1C7EBA0 = 1;
      return numeral_rational;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      return 0;
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    numeral_rational = 0;
  }
  else if ( a3 )
  {
    v8[0] = 0;
    v8[1] = 0;
    v9[0] = 1;
    v9[1] = 0;
    numeral_rational = Z3_get_numeral_rational(a1, a2);
    v6 = qword_1C7F2C0;
    if ( (_BYTE)numeral_rational )
    {
      numeral_rational = sub_182CFA0(qword_1C7F2C0, v8);
      v6 = qword_1C7F2C0;
      if ( (_BYTE)numeral_rational )
      {
        *a3 = sub_182D020(qword_1C7F2C0, v8);
        v6 = qword_1C7F2C0;
      }
    }
    sub_182CBA0(v6, v8);
    sub_182CBA0(v6, v9);
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
    numeral_rational = 0;
  }
  if ( v4 )
    goto LABEL_11;
  return numeral_rational;
}

