/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A034
// Address: 0x000000010004A034

//----- (000000010004A034) ----------------------------------------------------
__int64 __fastcall sub_10004A034(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int16 v8; // w8
  unsigned __int64 v9; // x1
  unsigned __int64 v12; // x28
  unsigned __int64 v13; // x22
  _QWORD *v14; // x25
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x8
  unsigned __int64 v18; // x8
  _QWORD *v19; // x23
  __int64 result; // x0
  _QWORD *v21; // x21
  unsigned __int64 v22; // x0
  unsigned __int64 v23; // x22
  char v24; // [xsp+0h] [xbp-80h]
  char v25[16]; // [xsp+10h] [xbp-70h] BYREF
  __int64 v26; // [xsp+20h] [xbp-60h]

  v8 = a2;
  v9 = a2 & 0xFFFFFFFFFFFFF000LL;
  *(_QWORD *)(a1 + 4144) = v9;
  if ( v9 >= a3 )
    return 0xFFFFFFFFLL;
  v12 = 0;
  v13 = v8 & 0xFFF;
  v14 = (_QWORD *)(a1 + 4152);
  while ( 1 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 2) == 0 )
    {
      v26 = 0;
      v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, char *, va_list, va_list, __int64))callui)(
              86,
              v9,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              v25,
              nullptr,
              (va_list)off_10009EA10,
              0);
      *(_QWORD *)v25 = &off_10009EA38;
      qsem_free(v26);
      if ( v15 )
        return 4294967289LL;
      v9 = *(_QWORD *)(a1 + 4144);
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 288LL))(
            *(_QWORD *)(a1 + 16),
            v9,
            a1 + 48,
            4096,
            *(_QWORD *)(a1 + 40));
    v17 = *(_QWORD *)(a1 + 4144);
    if ( v16 != 4096 )
    {
      *(_QWORD *)(a1 + 4176) = v17;
      return 4294967289LL;
    }
    v18 = a3 - v17;
    if ( v18 >= 0x1000 )
      v18 = 4096;
    *(_QWORD *)(a1 + 4240) = v18;
    v19 = *(_QWORD **)(a1 + 4152);
    if ( v19 != v14 )
      break;
LABEL_15:
    if ( (sub_10004A450(a1, v13) & 1) != 0 )
      return 1;
    if ( *(_QWORD *)(a1 + 4216) )
    {
      while ( v13 < *(_QWORD *)(a1 + 4240) )
      {
        if ( (sub_10004A5D0(a1, v13) & 1) != 0 )
          return 1;
        ++v13;
      }
    }
    *(_QWORD *)(a1 + 4144) += 4096LL;
    if ( v12 < 0x3E7 )
    {
      ++v12;
    }
    else
    {
      v22 = qtime64();
      v23 = HIDWORD(v22);
      if ( (unsigned int)(HIDWORD(v22) - *(_DWORD *)(a1 + 4232)) < 5 )
      {
        v12 = 0;
      }
      else
      {
        sub_100004BD4(*(_QWORD *)(a1 + 16), &byte_1000931E5, a3, a4, a5, a6, a7, a8, v24);
        v12 = 0;
        *(_DWORD *)(a1 + 4232) = v23;
      }
    }
    v13 = 0;
    v9 = *(_QWORD *)(a1 + 4144);
    if ( v9 >= a3 )
      return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      result = sub_10004A2EC(a1, v19 + 2);
      if ( (_DWORD)result )
        break;
      v19 = (_QWORD *)*v19;
      if ( v19 == v14 )
        goto LABEL_15;
    }
    if ( (_DWORD)result == 1 )
      return result;
    v21 = (_QWORD *)*v19;
    *(_QWORD *)v19[1] = *v19;
    v21[1] = v19[1];
    qfree(v19);
    --*(_QWORD *)(a1 + 4168);
    v19 = v21;
    if ( v21 == v14 )
      goto LABEL_15;
  }
}
// 10004A0D8: variable 'a3' is possibly undefined
// 10004A0D8: variable 'a4' is possibly undefined
// 10004A0D8: variable 'a5' is possibly undefined
// 10004A0D8: variable 'a6' is possibly undefined
// 10004A0D8: variable 'a7' is possibly undefined
// 10004A0D8: variable 'a8' is possibly undefined
// 10004A23C: variable 'v24' is possibly undefined
// 1000931E5: using guessed type char byte_1000931E5;
// 10009EA10: using guessed type __int64 (__fastcall *off_10009EA10[3])();
// 10009EA38: using guessed type _UNKNOWN *off_10009EA38;
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
