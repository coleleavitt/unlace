bool __fastcall sub_20510E0(char *a1, __int64 a2)
{
  char v2; // dl
  unsigned int v3; // ebp
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rbp
  char v9; // al
  char *v10; // rdi
  char v11; // [rsp+Fh] [rbp-69h]
  _QWORD v12[4]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v13[72]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a1;
  if ( *a1 == 5 )
  {
    v3 = *((_DWORD *)a1 + 8);
    if ( v3 <= 0x40 )
      return *((_QWORD *)a1 + 3) == 0;
    else
      return (unsigned int)sub_2206780(a1 + 24) == v3;
  }
  else if ( v2 == 6 )
  {
    v5 = sub_21F90B0(a1, a2);
    sub_21FBFD0(v13, 0.0);
    sub_22023D0(v12, v13, v5);
    sub_21F9830(v13);
    v6 = *((_QWORD *)a1 + 3);
    sub_22028C0(v12, v6, 1, v13);
    v8 = *((_QWORD *)a1 + 3);
    v9 = 0;
    if ( v8 == v12[0] )
    {
      v10 = a1 + 24;
      if ( v8 == sub_21F90D0(v12, v6, v7) )
        v9 = sub_2201080(v10, v12);
      else
        v9 = sub_21F96E0(v10, v12);
    }
    v11 = v9;
    sub_9955A0(v12);
    return v11;
  }
  else
  {
    return v2 == 2 || (unsigned __int8)(v2 - 7) <= 2u;
  }
}
