__int64 __fastcall Z3_get_numeral_small(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  char v6; // bp
  unsigned int numeral_rational; // r15d
  void *v8; // r15
  void *v9; // rdi
  void *v10; // rbx
  void *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  void *v16; // rdi
  _QWORD v17[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-88h] BYREF
  int v19; // [rsp+50h] [rbp-78h] BYREF
  char v20; // [rsp+54h] [rbp-74h]
  __int64 v21; // [rsp+58h] [rbp-70h]
  int v22; // [rsp+60h] [rbp-68h] BYREF
  char v23; // [rsp+64h] [rbp-64h]
  __int64 v24; // [rsp+68h] [rbp-60h]
  int v25; // [rsp+70h] [rbp-58h] BYREF
  char v26; // [rsp+74h] [rbp-54h]
  __int64 v27; // [rsp+78h] [rbp-50h]
  int v28; // [rsp+80h] [rbp-48h] BYREF
  char v29; // [rsp+84h] [rbp-44h]
  __int64 v30; // [rsp+88h] [rbp-40h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_29AA00(a1, a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      numeral_rational = 0;
      goto LABEL_17;
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
    goto LABEL_12;
  }
  if ( a4 == nullptr || a3 == nullptr )
  {
    sub_24EA30(a1, 3u, nullptr);
LABEL_12:
    numeral_rational = 0;
    goto LABEL_13;
  }
  v17[0] = 0;
  v17[1] = 0;
  v18[0] = 1;
  v18[1] = 0;
  numeral_rational = Z3_get_numeral_rational(a1, a2);
  if ( (_BYTE)numeral_rational )
  {
    v20 &= 0xFCu;
    v23 &= 0xFCu;
    v21 = 0;
    v22 = 1;
    v24 = 0;
    v19 = v17[0];
    sub_182CBA0(qword_1C7F2C0, &v22);
    v23 &= ~1u;
    v8 = qword_1C7F2C0;
    v26 &= 0xFCu;
    v29 &= 0xFCu;
    v22 = 1;
    v25 = 0;
    v27 = 0;
    v28 = 1;
    v30 = 0;
    if ( (v18[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v25, v18);
    else
      v25 = v18[0];
    sub_182CBA0(v8, &v28);
    v29 &= ~1u;
    v28 = 1;
    v9 = qword_1C7F2C0;
    numeral_rational = (v23 & 1) == 0;
    if ( (v23 & 1) == 0 )
    {
      numeral_rational = 0;
      if ( v22 == 1 )
      {
        v13 = sub_182CFC0(qword_1C7F2C0, &v19);
        v9 = qword_1C7F2C0;
        numeral_rational = v13;
        if ( (_BYTE)v13 )
        {
          numeral_rational = (v29 & 1) == 0;
          if ( (v29 & 1) == 0 )
          {
            numeral_rational = 0;
            if ( v28 == 1 )
            {
              v14 = sub_182CFC0(qword_1C7F2C0, &v25);
              v9 = qword_1C7F2C0;
              numeral_rational = v14;
              if ( (_BYTE)v14 )
              {
                v15 = sub_182D050(qword_1C7F2C0, &v19);
                v16 = qword_1C7F2C0;
                *a3 = v15;
                *a4 = sub_182D050(v16, &v25);
                v9 = qword_1C7F2C0;
              }
            }
          }
        }
      }
    }
    sub_182CBA0(v9, &v25);
    sub_182CBA0(v9, &v28);
    v10 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v19);
    sub_182CBA0(v10, &v22);
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
  }
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v12, v18);
LABEL_13:
  if ( v6 )
LABEL_17:
    byte_1C7EBA0 = 1;
  return numeral_rational;
}

