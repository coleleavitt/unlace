/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgetz
// Address: 0x00000000000B9EC8

//----- (00000000000B9EC8) ----------------------------------------------------
__int64 __fastcall qlgetz(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x23
  __int64 v9; // x25
  int v10; // w8
  _BYTE dest[4]; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v13; // [xsp+8h] [xbp-58h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a4 >= 1 )
  {
    if ( a2 == -1 )
    {
      v8 = 0;
    }
    else if ( a1 )
    {
      if ( *(int *)a1 < 2 )
      {
        if ( (unsigned int)qfseek(*(FILE **)(a1 + 8), 0, 1) )
          v8 = -1;
        else
          v8 = qftell(*(FILE **)(a1 + 8));
        if ( *(int *)a1 < 2 )
        {
          if ( !(unsigned int)qfseek(*(FILE **)(a1 + 8), a2, 0) )
            qftell(*(FILE **)(a1 + 8));
        }
        else
        {
          *(_QWORD *)(a1 + 24) = a2;
        }
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = a2;
      }
    }
    else
    {
      v8 = -1;
    }
    v9 = 0;
    while ( v9 + 1 < (unsigned __int64)a4 && a1 )
    {
      if ( *(int *)a1 < 2 )
      {
        if ( qfread(*(FILE **)(a1 + 8), dest, 1u) != 1 )
          break;
      }
      else if ( sub_B9818((pthread_mutex_t *)a1, dest, 1u) != 1 )
      {
        break;
      }
      v10 = dest[0];
      *(_BYTE *)(a3 + v9++) = dest[0];
      if ( !v10 )
        goto LABEL_23;
    }
    *(_BYTE *)(a3 + v9) = 0;
    if ( !a1 )
      return a3;
LABEL_23:
    if ( a2 != -1 )
    {
      if ( *(int *)a1 < 2 )
      {
        if ( !(unsigned int)qfseek(*(FILE **)(a1 + 8), v8, 0) )
          qftell(*(FILE **)(a1 + 8));
      }
      else
      {
        *(_QWORD *)(a1 + 24) = v8;
      }
    }
  }
  return a3;
}
// B9FF4: conditional instruction was optimized away because x20.8!=0
