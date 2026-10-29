/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047D20
// Address: 0x0000000100047D20

//----- (0000000100047D20) ----------------------------------------------------
__int64 __fastcall sub_100047D20(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int16 v3; // w8
  unsigned __int64 v4; // x1
  unsigned __int64 v7; // x25
  unsigned __int64 v8; // x22
  _QWORD *v9; // x27
  __int64 v10; // x23
  __int64 v11; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x8
  _QWORD *v14; // x23
  __int64 result; // x0
  _QWORD *v16; // x26
  unsigned __int64 v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  unsigned __int64 v24; // x22
  _QWORD *v25; // [xsp+0h] [xbp-80h]
  _QWORD v26[2]; // [xsp+10h] [xbp-70h] BYREF
  __int64 v27; // [xsp+20h] [xbp-60h]

  v3 = a2;
  v4 = a2 & 0xFFFFFFFFFFFFF000LL;
  *(_QWORD *)(a1 + 4144) = v4;
  if ( v4 >= a3 )
    return 0xFFFFFFFFLL;
  v7 = 0;
  v8 = v3 & 0xFFF;
  v9 = (_QWORD *)(a1 + 4152);
  while ( 1 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 2) == 0 )
    {
      v26[1] = 0;
      v27 = 0;
      v26[0] = off_10009A9D0;
      v25 = v26;
      v10 = callui(86);
      v26[0] = &off_10009A9F8;
      qsem_free(v27);
      if ( v10 )
        return 4294967289LL;
      v4 = *(_QWORD *)(a1 + 4144);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 288LL))(
            *(_QWORD *)(a1 + 16),
            v4,
            a1 + 48,
            4096,
            *(_QWORD *)(a1 + 40));
    v12 = *(_QWORD *)(a1 + 4144);
    if ( v11 != 4096 )
    {
      *(_QWORD *)(a1 + 4176) = v12;
      return 4294967289LL;
    }
    v13 = a3 - v12;
    if ( v13 >= 0x1000 )
      v13 = 4096;
    *(_QWORD *)(a1 + 4240) = v13;
    v14 = *(_QWORD **)(a1 + 4152);
    if ( v14 != v9 )
      break;
LABEL_15:
    if ( (sub_1000480F4(a1, v8) & 1) != 0 )
      return 1;
    if ( *(_QWORD *)(a1 + 4216) )
    {
      while ( v8 < *(_QWORD *)(a1 + 4240) )
      {
        if ( (sub_10004826C(a1, v8) & 1) != 0 )
          return 1;
        ++v8;
      }
    }
    *(_QWORD *)(a1 + 4144) += 4096LL;
    if ( v7 < 0x3E7 )
    {
      ++v7;
    }
    else
    {
      v17 = qtime64();
      v24 = HIDWORD(v17);
      if ( (unsigned int)(HIDWORD(v17) - *(_DWORD *)(a1 + 4232)) < 5 )
      {
        v7 = 0;
      }
      else
      {
        sub_100004854(*(_QWORD *)(a1 + 16), &byte_10008E2F5, v18, v19, v20, v21, v22, v23, (char)v25);
        v7 = 0;
        *(_DWORD *)(a1 + 4232) = v24;
      }
    }
    v8 = 0;
    v4 = *(_QWORD *)(a1 + 4144);
    if ( v4 >= a3 )
      return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      result = sub_100047F94(a1, v14 + 2);
      if ( (_DWORD)result )
        break;
      v14 = (_QWORD *)*v14;
      if ( v14 == v9 )
        goto LABEL_15;
    }
    if ( (_DWORD)result == 1 )
      return result;
    v16 = (_QWORD *)*v14;
    *(_QWORD *)v14[1] = *v14;
    v16[1] = v14[1];
    qfree(v14);
    --*(_QWORD *)(a1 + 4168);
    v14 = v16;
    if ( v16 == v9 )
      goto LABEL_15;
  }
}
// 100047EE4: variable 'v18' is possibly undefined
// 100047EE4: variable 'v19' is possibly undefined
// 100047EE4: variable 'v20' is possibly undefined
// 100047EE4: variable 'v21' is possibly undefined
// 100047EE4: variable 'v22' is possibly undefined
// 100047EE4: variable 'v23' is possibly undefined
// 100047EE4: variable 'v25' is possibly undefined
// 10008E2F5: using guessed type char byte_10008E2F5;
// 10009A9D0: using guessed type __int64 (__fastcall *off_10009A9D0[3])();
// 10009A9F8: using guessed type _UNKNOWN *off_10009A9F8;
// 10009D680: using guessed type __int64 (__fastcall *callui)(_QWORD);
