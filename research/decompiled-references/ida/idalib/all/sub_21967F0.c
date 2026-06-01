__int64 *__fastcall sub_21967F0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  char v4; // al
  char v5; // dl
  const char *v6; // rax
  __int64 v7; // rbp
  _QWORD v9[4]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v10; // [rsp+20h] [rbp-58h]
  _QWORD v11[4]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v12; // [rsp+50h] [rbp-28h]

  v4 = *((_BYTE *)a2 + 32);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v6 = "truncated or malformed object (";
      a4 = v9[1];
      v10 = 259;
      v5 = 3;
      v9[0] = "truncated or malformed object (";
    }
    else
    {
      if ( *((_BYTE *)a2 + 33) == 1 )
      {
        a3 = a2[1];
        a2 = (__int64 *)*a2;
      }
      else
      {
        v4 = 2;
      }
      v9[2] = a2;
      v9[0] = "truncated or malformed object (";
      LOBYTE(v10) = 3;
      v9[3] = a3;
      v5 = 2;
      HIBYTE(v10) = v4;
      v6 = (const char *)v9;
    }
    v11[0] = v6;
    v11[1] = a4;
    v11[2] = ")";
    LOBYTE(v12) = v5;
    HIBYTE(v12) = 3;
  }
  else
  {
    v10 = 256;
    v12 = 256;
  }
  v7 = operator new(0x38u);
  sub_2195A00(v7, (__int64)v11, 3);
  *a1 = v7;
  return a1;
}
