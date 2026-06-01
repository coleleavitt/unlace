__int64 __fastcall sub_41C900(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r13
  int v15; // [rsp+4h] [rbp-34h] BYREF
  int v16; // [rsp+8h] [rbp-30h] BYREF
  int v17; // [rsp+Ch] [rbp-2Ch] BYREF

  if ( (unsigned int)(a3 - 4) > 1 )
  {
    sub_458930(a2, 1, a4, "string first last ?string?");
    return 1;
  }
  sub_48F2D0(a4[1], &v17);
  v8 = a4[2];
  if ( (unsigned int)sub_49FAC0(a2, v8, (unsigned int)--v17, &v16)
    || (unsigned int)sub_49FAC0(a2, a4[3], (unsigned int)v17, &v15) )
  {
    return 1;
  }
  if ( v15 >= v16 && v15 >= 0 && v16 <= v17 )
  {
    v10 = sub_48F2D0(a4[1], &v17);
    v11 = (unsigned int)v16;
    --v17;
    v12 = v10;
    if ( v16 < 0 )
    {
      v11 = 0;
      v16 = 0;
    }
    v13 = sub_48E750(v10, v11);
    v14 = v13;
    if ( a3 == 5 )
      sub_48F180(v13, a4[4]);
    if ( v15 < v17 )
      sub_48EA90(v14, v12 + 2LL * v15 + 2, (unsigned int)(v17 - v15));
    v9 = v14;
  }
  else
  {
    v9 = a4[1];
  }
  sub_48AFD0(a2, v9);
  return 0;
}

