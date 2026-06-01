/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100014DE8
// Address: 0x0000000100014DE8

//----- (0000000100014DE8) ----------------------------------------------------
__int64 __fastcall sub_100014DE8(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x8
  __int64 v5; // x22
  unsigned __int64 v6; // x21
  __int64 v7; // x25
  __int64 v8; // d8
  __int64 result; // x0
  _QWORD *v10; // x1
  __int64 v11; // x8
  char *v12; // x26
  char *v13; // x8
  _QWORD *v14; // x1
  __int64 v15; // x8
  char *v16; // x21
  __int64 v17; // d8
  char *v18; // x8
  _Unwind_Exception *v19; // x0
  __int64 (__fastcall **v20)(); // [xsp+8h] [xbp-88h] BYREF
  __int16 v21; // [xsp+10h] [xbp-80h]
  char v22; // [xsp+12h] [xbp-7Eh]
  _BYTE v23[21]; // [xsp+13h] [xbp-7Dh] BYREF

  v4 = *(_QWORD *)(a2 + 80);
  if ( !v4 )
  {
    result = (__int64)sub_10000EB00(a2, 0, 0, 1);
    if ( !(_DWORD)result )
      return result;
    v14 = (_QWORD *)*a1;
    v15 = a1[1];
    if ( a1[2] < (unsigned __int64)(v15 + 1) )
    {
      v14 = qvector_reserve(a1, v14, v15 + 1, 0x1Cu);
      *a1 = v14;
      v15 = a1[1];
    }
    v16 = (char *)v14 + 28 * v15;
    *(_QWORD *)v16 = 0;
    *((_QWORD *)v16 + 1) = 0;
    *((_DWORD *)v16 + 6) = 0;
    *((_QWORD *)v16 + 2) = 0;
    ++a1[1];
    if ( *(_QWORD *)(a2 + 120) == -1 )
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(20005);
      _Unwind_Resume(v19);
    }
    v20 = off_1000996B8;
    v21 = 0;
    v22 = 0;
    v17 = *(_QWORD *)(a2 + 168);
    sub_10000F5AC(a2, (__int64)&v20);
    *(_QWORD *)v16 = v17;
    if ( (_BYTE)v21 )
      v18 = v23;
    else
      v18 = byte_1000757BD;
    *(_OWORD *)(v16 + 8) = *(_OWORD *)v18;
    if ( HIBYTE(v21) == 1 )
      *((_DWORD *)v16 + 6) |= 1u;
    if ( *(_BYTE *)(a2 + 160) == 1 )
      *((_DWORD *)v16 + 6) |= 2u;
    if ( v22 == 1 )
      *((_DWORD *)v16 + 6) |= 4u;
    return 1;
  }
  if ( (int)v4 < 1 )
    return 1;
  v5 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(a2 + 80) & 0x7FFFFFFFLL;
  while ( *(_QWORD *)(a2 + 80) > v6 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v5);
    result = (__int64)sub_10000EB00(a2, v6, 0, 1);
    if ( !(_DWORD)result )
      return result;
    v10 = (_QWORD *)*a1;
    v11 = a1[1];
    if ( a1[2] < (unsigned __int64)(v11 + 1) )
    {
      v10 = qvector_reserve(a1, v10, v11 + 1, 0x1Cu);
      *a1 = v10;
      v11 = a1[1];
    }
    v12 = (char *)v10 + 28 * v11;
    *(_QWORD *)v12 = 0;
    *((_QWORD *)v12 + 1) = 0;
    *((_DWORD *)v12 + 6) = 0;
    *((_QWORD *)v12 + 2) = 0;
    ++a1[1];
    v20 = off_1000996B8;
    v21 = 0;
    v22 = 0;
    sub_10000F5AC(a2, (__int64)&v20);
    *(_QWORD *)v12 = v8;
    if ( (_BYTE)v21 )
      v13 = v23;
    else
      v13 = byte_1000757BD;
    *(_OWORD *)(v12 + 8) = *(_OWORD *)v13;
    if ( HIBYTE(v21) == 1 )
      *((_DWORD *)v12 + 6) |= 1u;
    if ( *(_BYTE *)(a2 + 160) == 1 )
      *((_DWORD *)v12 + 6) |= 2u;
    if ( v22 == 1 )
      *((_DWORD *)v12 + 6) |= 4u;
    ++v6;
    v5 += 20;
    if ( v7 == v6 )
      return 1;
  }
  return 0;
}
// 1000150D0: variable 'v19' is possibly undefined
// 1000996B8: using guessed type __int64 (__fastcall *off_1000996B8[37])();
// 10009D90D: using guessed type char under_debugger;
