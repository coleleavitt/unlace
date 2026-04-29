__int64 __fastcall sub_117D0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v23[8]; // [rsp+8h] [rbp-40h] BYREF

  v23[0] = a4;
  if ( !a4 )
  {
    LODWORD(a6) = 1;
    return (unsigned int)a6;
  }
  if ( a3 != -1 )
    qlseek(a2, a3, 0);
  sub_116F0(a2, v23, 1u, a6, a3, a5);
  v12 = v23[0];
  v13 = a1[1];
  if ( v13 < v23[0] )
  {
    v20 = *a1;
    if ( a1[2] < v23[0] )
    {
      v21 = qvector_reserve(a1, v20, v23[0], 1, v10, v11);
      v13 = a1[1];
      *a1 = v21;
      v20 = v21;
    }
    memset((void *)(v20 + v13), 0, v12 - v13);
    a1[1] = v12;
    v14 = *a1;
    if ( a7 )
    {
      v15 = a6;
      sub_5CB0((__int64)"Loading %s");
LABEL_9:
      v17 = 0;
      while ( 1 )
      {
        LODWORD(a6) = callui(27, v15, v16);
        if ( (_BYTE)a6 )
          goto LABEL_15;
        v15 = v14;
        v18 = v12 - v17;
        if ( v12 - v17 > 0x8000 )
          v18 = 0x8000;
        if ( qlread(a2, v14, v18) != v18 )
          goto LABEL_16;
        v17 += v18;
        v14 += v18;
        if ( v17 >= v12 )
          goto LABEL_15;
      }
    }
LABEL_21:
    LOBYTE(a6) = qlread(a2, v14, v12) == v12;
    return (unsigned int)a6;
  }
  if ( v23[0] != v13 )
    a1[1] = v23[0];
  v14 = *a1;
  if ( !a7 )
    goto LABEL_21;
  v15 = a6;
  sub_5CB0((__int64)"Loading %s");
  if ( v12 )
    goto LABEL_9;
LABEL_15:
  LODWORD(a6) = 1;
LABEL_16:
  callui(24, 10, 0);
  return (unsigned int)a6;
}
