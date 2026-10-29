/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008420
// Address: 0x0000000100008420

//----- (0000000100008420) ----------------------------------------------------
__int64 __fastcall sub_100008420(__int64 a1, _QWORD *a2, int a3, unsigned __int64 a4, int a5)
{
  unsigned int v8; // r15d
  __int64 v9; // r12
  __int64 *v10; // rax
  __int64 **v11; // r13
  __int64 **v12; // r12
  char *v13; // r15
  __int64 v14; // rax
  __int64 *v15; // rsi
  _Unwind_Exception *v17; // rax
  __int128 v18; // [rsp+8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+18h] [rbp-38h]

  sub_1000022E0(a1);
  if ( a3 != 4 )
    return (unsigned __int8)sub_100067730(a1, a3, a4, a5);
  if ( a5 <= 0 )
  {
    a5 = *(_DWORD *)(a1 + 416);
    if ( !a2 )
      goto LABEL_8;
  }
  else if ( !a2 )
  {
    goto LABEL_8;
  }
  if ( (int)sub_100063A50((_BYTE *)a1, a2, a4, a5) < 0 )
    return (unsigned int)-2;
LABEL_8:
  *(_QWORD *)&v18 = a4;
  LOBYTE(v19) = a5;
  HIDWORD(v19) = 0;
  if ( (unsigned __int8)a5 >= 8u )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x704u);
    _Unwind_Resume(v17);
  }
  if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64, char *, _QWORD, _QWORD))(*(_QWORD *)a1 + 288LL))(
          a1,
          a4,
          (char *)&v18 + 8,
          a5,
          0) )
    return (unsigned int)-2;
  v9 = *(int *)(a1 + 416);
  v8 = 0;
  if ( (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 296LL))(
         a1,
         a4,
         *(_QWORD *)(a1 + 408),
         v9,
         0) == v9 )
  {
    v10 = *(__int64 **)(a1 + 440);
    if ( v10 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = (__int64 **)v10;
          if ( v10[4] <= a4 )
            break;
          v10 = (__int64 *)*v10;
          v11 = v12;
          if ( !*v12 )
            goto LABEL_18;
        }
        if ( v10[4] >= a4 )
          break;
        v10 = (__int64 *)v10[1];
        if ( !v10 )
        {
          v11 = v12 + 1;
          goto LABEL_18;
        }
      }
      v13 = (char *)v10;
    }
    else
    {
      v11 = (__int64 **)(a1 + 440);
      v12 = (__int64 **)(a1 + 440);
LABEL_18:
      v13 = (char *)operator new(0x40u);
      *((_QWORD *)v13 + 4) = a4;
      *((_QWORD *)v13 + 5) = -1;
      v13[56] = 0;
      *((_DWORD *)v13 + 15) = 0;
      *(_OWORD *)v13 = 0;
      *((_QWORD *)v13 + 2) = v12;
      *v11 = (__int64 *)v13;
      v14 = **(_QWORD **)(a1 + 432);
      v15 = (__int64 *)v13;
      if ( v14 )
      {
        *(_QWORD *)(a1 + 432) = v14;
        v15 = *v11;
      }
      sub_10000C830(*(__int64 **)(a1 + 440), v15);
      ++*(_QWORD *)(a1 + 448);
    }
    *((_QWORD *)v13 + 7) = v19;
    *(_OWORD *)(v13 + 40) = v18;
    return 1;
  }
  return v8;
}
// 10000861E: variable 'v17' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
