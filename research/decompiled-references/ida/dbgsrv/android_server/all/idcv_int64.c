/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_int64
// Address: 0x000000000006F55C

//----- (000000000006F55C) ----------------------------------------------------
__int64 __fastcall idcv_int64(__int64 a1, int8x16x2_t a2)
{
  __int64 result; // x0
  unsigned int v4; // w0
  int v5; // kr00_4
  int v6; // w8
  const char *v7; // x0
  _QWORD v8[2]; // [xsp+0h] [xbp-30h] BYREF

  v8[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 )
  {
    do
    {
      if ( *(_BYTE *)a1 != 10 )
      {
        switch ( *(_BYTE *)a1 )
        {
          case 2:
            result = 0;
            *(_BYTE *)a1 = 9;
            return result;
          case 3:
            v5 = eetol64(v8, (int8x16_t *)(a1 + 8), 0, a2) - 1;
            result = 0;
            v6 = 97;
            switch ( v5 )
            {
              case 0:
                goto LABEL_17;
              case 1:
                goto LABEL_19;
              case 3:
                v4 = 86;
                return set_qerrno(v4);
              case 4:
                v6 = 98;
LABEL_19:
                v4 = v6;
                return set_qerrno(v4);
              default:
                return result;
            }
          case 7:
            if ( *(_QWORD *)(a1 + 16) )
              v7 = *(const char **)(a1 + 8);
            else
              v7 = &byte_F154B;
            v8[0] = 0;
            qsscanf(v7, "%lli", v8);
            free_idcv((__int64 *)a1);
LABEL_17:
            *(_BYTE *)a1 = 9;
            *(_QWORD *)(a1 + 8) = v8[0];
            return 0;
          case 9:
            return 0;
          default:
            goto LABEL_7;
        }
      }
    }
    while ( deref_idcv((unsigned __int8 *)a1, 2) );
    return get_qerrno();
  }
  else
  {
LABEL_7:
    v4 = 1531;
    return set_qerrno(v4);
  }
}
// 6F604: variable 'a2' is possibly undefined
// F154B: using guessed type char byte_F154B;
