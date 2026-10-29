/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5940
// Address: 0x00000000000A5940

//----- (00000000000A5940) ----------------------------------------------------
__int64 __fastcall sub_A5940(__int64 a1, __int64 *a2)
{
  __int64 v4; // x0
  unsigned int v5; // w19
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  const char *v11; // x0
  const char *v12; // x20
  size_t v13; // x0
  unsigned __int64 v14; // x22
  size_t v15; // x21
  void **v16; // x23
  void *v17; // x0
  __int64 v18; // x8
  _QWORD v19[2]; // [xsp+0h] [xbp-50h] BYREF

  v19[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  if ( v4 && !*(_BYTE *)(a1 + 8) )
  {
    v6 = v4;
    sub_A6458((__int64)a2);
    v7 = *a2;
    v8 = a2[1];
    sub_A5008(v19, v6, 0, v8);
    if ( v8 < 1 )
    {
LABEL_7:
      v5 = 0;
    }
    else
    {
      while ( 1 )
      {
        v9 = sub_A48FC(v6);
        if ( v9 < 0 )
          break;
        sub_A5050(v19);
        v8 -= v9;
        v7 += v9;
        if ( v8 <= 0 )
          goto LABEL_7;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
      *(_BYTE *)(a1 + 8) = 1;
      if ( (unsigned int)sub_A4914(v6) == -15059582 )
      {
        v5 = -1;
      }
      else
      {
        v11 = (const char *)sub_A4920(v6);
        v12 = v11;
        if ( v11 && (v13 = strlen(v11)) != 0 )
        {
          v14 = v13 + 1;
          v15 = v13;
          v16 = (void **)(a1 + 16);
          if ( *(_QWORD *)(a1 + 32) >= v13 + 1 )
          {
            v17 = *v16;
          }
          else
          {
            v17 = qvector_reserve((pthread_mutex_t *)(a1 + 16), *v16, v14, 1u);
            *v16 = v17;
          }
          *(_QWORD *)(a1 + 24) = v14;
          memmove(v17, v12, v15);
          v18 = *(_QWORD *)(a1 + 16);
          v5 = -1;
          *(_BYTE *)(v18 + v15) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 24) = 0;
          v5 = -1;
        }
      }
    }
    sub_A5028(v19);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v5;
}
