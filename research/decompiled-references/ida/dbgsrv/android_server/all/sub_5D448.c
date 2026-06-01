/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D448
// Address: 0x000000000005D448

//----- (000000000005D448) ----------------------------------------------------
__int64 __fastcall sub_5D448(__int64 a1, __int64 a2)
{
  __int64 v3; // x10
  unsigned __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w15
  char v7; // w16
  bool v8; // cf
  _BYTE *v9; // x8
  size_t v10; // x0
  char v12; // [xsp+8h] [xbp-428h] BYREF
  _BYTE v13[1031]; // [xsp+9h] [xbp-427h] BYREF

  *(_QWORD *)&v13[1023] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v12 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( (unsigned int)(v3 - 2) <= 0x1E )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( !v4 )
      goto LABEL_10;
    v5 = 0;
    do
    {
      v6 = v4 % (int)v3;
      if ( v6 <= 9 )
        v7 = 48;
      else
        v7 = 55;
      v8 = v4 >= (int)v3;
      v13[v5++ - 1] = v7 + v6;
      v4 /= (unsigned __int64)(int)v3;
    }
    while ( v8 );
    if ( v5 )
    {
      v9 = &v13[v5 - 1];
    }
    else
    {
LABEL_10:
      v9 = v13;
      v12 = 48;
    }
    *v9 = 0;
    memrev(&v12, v9 - &v12);
  }
  v10 = __strlen_chk(&v12, 1024);
  *(_BYTE *)a2 = 7;
  sub_4968C((pthread_mutex_t *)(a2 + 8), &v12, v10);
  return 0;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
