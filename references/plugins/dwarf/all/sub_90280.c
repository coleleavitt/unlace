__int64 __fastcall sub_90280(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v20[8]; // [rsp+8h] [rbp-40h] BYREF

  v20[0] = a4;
  if ( !a4 )
  {
    LODWORD(a6) = 1;
    return (unsigned int)a6;
  }
  if ( a3 != -1 )
    qlseek(a2, a3, 0);
  sub_901A0(a2, v20, 1u, a6, a3, a5);
  v10 = v20[0];
  v11 = a1[1];
  if ( v11 < v20[0] )
  {
    v17 = *a1;
    if ( a1[2] < v20[0] )
    {
      v18 = qvector_reserve(a1, v17, v20[0], 1);
      v11 = a1[1];
      *a1 = v18;
      v17 = v18;
    }
    memset((void *)(v17 + v11), 0, v10 - v11);
    a1[1] = v10;
    v12 = *a1;
    if ( a7 )
    {
      v13 = a6;
      sub_16EA0();
LABEL_9:
      v14 = 0;
      while ( 1 )
      {
        LODWORD(a6) = callui(27, v13);
        if ( (_BYTE)a6 )
          goto LABEL_15;
        v13 = v12;
        v15 = v10 - v14;
        if ( v10 - v14 > 0x8000 )
          v15 = 0x8000;
        if ( qlread(a2, v12, v15) != v15 )
          goto LABEL_16;
        v14 += v15;
        v12 += v15;
        if ( v14 >= v10 )
          goto LABEL_15;
      }
    }
LABEL_21:
    LOBYTE(a6) = qlread(a2, v12, v10) == v10;
    return (unsigned int)a6;
  }
  if ( v20[0] != v11 )
    a1[1] = v20[0];
  v12 = *a1;
  if ( !a7 )
    goto LABEL_21;
  v13 = a6;
  sub_16EA0();
  if ( v10 )
    goto LABEL_9;
LABEL_15:
  LODWORD(a6) = 1;
LABEL_16:
  callui(24, 10);
  return (unsigned int)a6;
}
