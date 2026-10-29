/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007744
// Address: 0x0000000100007744

//----- (0000000100007744) ----------------------------------------------------
__int64 __fastcall sub_100007744(__int64 a1, _QWORD *a2, int a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v11; // x21
  __int64 *v12; // x8
  __int64 **v13; // x23
  __int64 **v14; // x22
  unsigned __int64 v15; // x8
  char *v16; // x21
  __int64 v17; // x8
  __int64 *v18; // x1
  _Unwind_Exception *v19; // x0
  __int128 v20; // [xsp+0h] [xbp-50h] BYREF
  __int64 v21; // [xsp+10h] [xbp-40h]

  sub_100001EE8(a1);
  if ( a3 != 4 )
    return sub_10005C7F0((_DWORD *)a1, a3, a4);
  if ( (int)a5 <= 0 )
  {
    a5 = *(unsigned int *)(a1 + 416);
    if ( !a2 )
      goto LABEL_8;
  }
  else if ( !a2 )
  {
    goto LABEL_8;
  }
  if ( (sub_1000588A0((_BYTE *)a1, a2, a4, a5) & 0x80000000) != 0 )
    return 4294967294LL;
LABEL_8:
  *(_QWORD *)&v20 = a4;
  LOBYTE(v21) = a5;
  HIDWORD(v21) = 0;
  if ( (unsigned __int8)a5 >= 8u )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(1796);
    _Unwind_Resume(v19);
  }
  if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64, char *, _QWORD, _QWORD))(*(_QWORD *)a1 + 288LL))(
          a1,
          a4,
          (char *)&v20 + 8,
          (int)a5,
          0) )
    return 4294967294LL;
  v11 = *(int *)(a1 + 416);
  if ( (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 296LL))(
         a1,
         a4,
         *(_QWORD *)(a1 + 408),
         v11,
         0) != v11 )
    return 0;
  v12 = *(__int64 **)(a1 + 440);
  if ( v12 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = (__int64 **)v12;
        v15 = v12[4];
        if ( v15 <= a4 )
          break;
        v12 = *v14;
        v13 = v14;
        if ( !*v14 )
          goto LABEL_18;
      }
      if ( v15 >= a4 )
        break;
      v12 = v14[1];
      if ( !v12 )
      {
        v13 = v14 + 1;
        goto LABEL_18;
      }
    }
    v16 = (char *)v14;
  }
  else
  {
    v13 = (__int64 **)(a1 + 440);
    v14 = (__int64 **)(a1 + 440);
LABEL_18:
    v16 = (char *)operator new(0x40u);
    *((_QWORD *)v16 + 4) = a4;
    *((_QWORD *)v16 + 5) = -1;
    v16[56] = 0;
    *((_DWORD *)v16 + 15) = 0;
    *(_QWORD *)v16 = 0;
    *((_QWORD *)v16 + 1) = 0;
    *((_QWORD *)v16 + 2) = v14;
    *v13 = (__int64 *)v16;
    v17 = **(_QWORD **)(a1 + 432);
    v18 = (__int64 *)v16;
    if ( v17 )
    {
      *(_QWORD *)(a1 + 432) = v17;
      v18 = *v13;
    }
    sub_10000B394(*(__int64 **)(a1 + 440), v18);
    ++*(_QWORD *)(a1 + 448);
  }
  *(_OWORD *)(v16 + 40) = v20;
  *((_QWORD *)v16 + 7) = v21;
  return 1;
}
// 100007954: variable 'v19' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
