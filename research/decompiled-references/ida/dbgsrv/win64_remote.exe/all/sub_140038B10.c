/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140038B10
// Address: 0x0000000140038B10

//----- (0000000140038B10) ----------------------------------------------------
unsigned __int64 __fastcall sub_140038B10(_JBTYPE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  unsigned __int64 result; // rax
  __int16 v7; // cx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int16 v10; // cx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int16 v13; // cx
  char v14[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  char v16[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  char v18[8]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h]

  sub_1400389F0(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      result = a1[39].Part[0];
      v14[0] = 1;
      v15 = 0;
      v7 = *(_WORD *)(result + 24);
      if ( v7 != 43 )
        break;
      LOBYTE(v5) = 1;
      sub_1400388C0(a1, (__int64)v14, v5);
      v8 = v15;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v9 = a1[39].Part[0];
            v16[0] = 1;
            v17 = 0;
            v10 = *(_WORD *)(v9 + 24);
            if ( v10 != 42 )
              break;
            LOBYTE(v5) = 1;
            sub_1400388C0(a1, (__int64)v16, v5);
            v8 = v17 * v15;
            v15 *= v17;
          }
          if ( v10 != 47 )
            break;
          LOBYTE(v5) = 1;
          sub_1400388C0(a1, (__int64)v16, v5);
          if ( !v17 )
            goto LABEL_37;
          if ( v14[0] || v16[0] )
          {
            v8 = v15 / (unsigned __int64)v17;
            v15 /= (unsigned __int64)v17;
          }
          else
          {
            v8 = v15 / v17;
            v15 /= v17;
          }
        }
        if ( v10 != 37 )
          break;
        LOBYTE(v5) = 1;
        sub_1400388C0(a1, (__int64)v16, v5);
        if ( !v17 )
LABEL_37:
          longjmp(a1 + 23, 86);
        if ( v14[0] || v16[0] )
        {
          v8 = v15 % (unsigned __int64)v17;
          v15 %= (unsigned __int64)v17;
        }
        else
        {
          v8 = v15 % v17;
          v15 %= v17;
        }
      }
      *(_QWORD *)(a2 + 8) += v8;
    }
    if ( v7 != 45 )
      return result;
    LOBYTE(v5) = 1;
    sub_1400388C0(a1, (__int64)v14, v5);
    v11 = v15;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = a1[39].Part[0];
          v18[0] = 1;
          v19 = 0;
          v13 = *(_WORD *)(v12 + 24);
          if ( v13 != 42 )
            break;
          LOBYTE(v5) = 1;
          sub_1400388C0(a1, (__int64)v18, v5);
          v11 = v19 * v15;
          v15 *= v19;
        }
        if ( v13 != 47 )
          break;
        LOBYTE(v5) = 1;
        sub_1400388C0(a1, (__int64)v18, v5);
        if ( !v19 )
          goto LABEL_38;
        if ( v14[0] || v18[0] )
        {
          v11 = v15 / (unsigned __int64)v19;
          v15 /= (unsigned __int64)v19;
        }
        else
        {
          v11 = v15 / v19;
          v15 /= v19;
        }
      }
      if ( v13 != 37 )
        break;
      LOBYTE(v5) = 1;
      sub_1400388C0(a1, (__int64)v18, v5);
      if ( !v19 )
LABEL_38:
        longjmp(a1 + 23, 86);
      if ( v14[0] || v18[0] )
      {
        v11 = v15 % (unsigned __int64)v19;
        v15 %= (unsigned __int64)v19;
      }
      else
      {
        v11 = v15 % v19;
        v15 %= v19;
      }
    }
    *(_QWORD *)(a2 + 8) -= v11;
  }
}
// 140038B67: variable 'v5' is possibly undefined
