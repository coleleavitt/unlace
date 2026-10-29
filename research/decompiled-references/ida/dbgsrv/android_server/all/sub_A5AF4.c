/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5AF4
// Address: 0x00000000000A5AF4

//----- (00000000000A5AF4) ----------------------------------------------------
__int64 __fastcall sub_A5AF4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x20
  __int64 v7; // x24
  int v8; // w25
  unsigned int v9; // w19
  const char *v10; // x0
  const char *v11; // x20
  size_t v12; // x0
  unsigned __int64 v13; // x22
  size_t v14; // x21
  void **v15; // x23
  void *v16; // x0
  _QWORD v18[2]; // [xsp+0h] [xbp-60h] BYREF

  v18[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_A5008(v18, v6, 1, a3);
  if ( !a3 )
  {
LABEL_9:
    v9 = 0;
    goto LABEL_20;
  }
  do
  {
    while ( (int)sub_A492C(v6) >= 1 )
    {
      v7 = sub_A4908(v6);
      if ( v7 < 1 )
        goto LABEL_7;
      sub_A5050(v18);
      a3 -= v7;
      a2 += v7;
      if ( !a3 )
        goto LABEL_9;
    }
    v7 = -1;
LABEL_7:
    v8 = sub_A4914(v6);
  }
  while ( v8 == -21015 );
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( v7 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    if ( v8 != -15059582 )
    {
      v10 = (const char *)sub_A4920(v6);
      v11 = v10;
      if ( v10 && (v12 = strlen(v10)) != 0 )
      {
        v13 = v12 + 1;
        v14 = v12;
        v15 = (void **)(a1 + 16);
        if ( *(_QWORD *)(a1 + 32) >= v12 + 1 )
        {
          v16 = *v15;
        }
        else
        {
          v16 = qvector_reserve((pthread_mutex_t *)(a1 + 16), *v15, v13, 1u);
          *v15 = v16;
        }
        *(_QWORD *)(a1 + 24) = v13;
        memmove(v16, v11, v14);
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + v14) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 24) = 0;
      }
    }
  }
  v9 = -1;
LABEL_20:
  sub_A5028(v18);
  return v9;
}
// A5BB8: conditional instruction was optimized away because x22.8!=0
