/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C2AC
// Address: 0x000000000007C2AC

//----- (000000000007C2AC) ----------------------------------------------------
__int64 *__fastcall sub_7C2AC(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 **v5; // x26
  __int64 *v6; // x27
  const char *v8; // x23
  const char *v9; // x24
  __int64 *result; // x0
  __int64 *v11; // x1
  __int64 v12; // x8
  _QWORD v13[4]; // [xsp+0h] [xbp-80h] BYREF

  v13[3] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (__int64 **)(a1 + 8);
  v6 = *(__int64 **)(a1 + 8);
  if ( v6 )
  {
    v5 = (__int64 **)(a1 + 8);
    if ( *(_QWORD *)(a2 + 8) )
      v8 = *(const char **)a2;
    else
      v8 = &byte_F154B;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v6[5] ? (const char *)v6[4] : &byte_F154B;
        if ( strcmp(v8, v9) < 0 )
          break;
        if ( (strcmp(v9, v8) & 0x80000000) == 0 )
          goto LABEL_16;
        v5 = (__int64 **)(v6 + 1);
        if ( !v6[1] )
          goto LABEL_16;
        v6 = (__int64 *)v6[1];
      }
      if ( !*v6 )
        break;
      v5 = (__int64 **)v6;
      v6 = (__int64 *)*v6;
    }
    v5 = (__int64 **)v6;
    result = (__int64 *)*v6;
    if ( !*v6 )
      goto LABEL_19;
  }
  else
  {
    v6 = (__int64 *)(a1 + 8);
LABEL_16:
    result = *v5;
    if ( !*v5 )
    {
LABEL_19:
      sub_7C40C(a1, a4, (__int64)v13);
      v11 = (__int64 *)v13[0];
      *(_QWORD *)v13[0] = 0;
      v11[1] = 0;
      v11[2] = (__int64)v6;
      *v5 = v11;
      v12 = **(_QWORD **)a1;
      if ( v12 )
      {
        *(_QWORD *)a1 = v12;
        v11 = *v5;
      }
      sub_48ED8(*(__int64 **)(a1 + 8), v11);
      ++*(_QWORD *)(a1 + 16);
      return (__int64 *)v13[0];
    }
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
