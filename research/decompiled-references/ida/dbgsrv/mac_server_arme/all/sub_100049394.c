/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100049394
// Address: 0x0000000100049394

//----- (0000000100049394) ----------------------------------------------------
__int64 __fastcall sub_100049394(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v9; // x1
  unsigned __int64 v11; // x27
  unsigned __int64 v12; // x22
  _QWORD *v13; // x25
  __int64 v14; // x23
  __int64 v15; // x0
  unsigned __int64 v16; // x8
  bool v17; // cf
  unsigned __int64 v18; // x8
  _QWORD *v19; // x23
  __int64 result; // x0
  _QWORD *v21; // x28
  unsigned __int64 v22; // x0
  unsigned __int64 v23; // x22
  char v24; // [xsp+0h] [xbp-80h]
  char v25[16]; // [xsp+10h] [xbp-70h] BYREF
  __int64 v26; // [xsp+20h] [xbp-60h]

  v9 = (a3 - 1) & 0xFFFFFFFFFFFFF000LL;
  *(_QWORD *)(a1 + 4144) = v9;
  if ( v9 + 4096 <= a2 )
    return 0xFFFFFFFFLL;
  v11 = 0;
  v12 = a3 - v9;
  v13 = (_QWORD *)(a1 + 4152);
  while ( 1 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 2) == 0 )
    {
      v26 = 0;
      v14 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, char *, va_list, va_list, __int64))callui)(
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
      if ( v14 )
        return 4294967289LL;
      v9 = *(_QWORD *)(a1 + 4144);
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 288LL))(
            *(_QWORD *)(a1 + 16),
            v9,
            a1 + 48,
            4096,
            *(_QWORD *)(a1 + 40));
    v16 = *(_QWORD *)(a1 + 4144);
    if ( v15 != 4096 )
    {
      *(_QWORD *)(a1 + 4176) = v16;
      return 4294967289LL;
    }
    v17 = a2 >= v16;
    v18 = a2 - v16;
    if ( !v17 )
      v18 = 0;
    *(_QWORD *)(a1 + 4240) = v18;
    v19 = *(_QWORD **)(a1 + 4152);
    if ( v19 != v13 )
      break;
LABEL_15:
    if ( (sub_10004993C(a1, v12) & 1) != 0 )
      return 1;
    if ( *(_QWORD *)(a1 + 4216) )
    {
      while ( *(_QWORD *)(a1 + 4240) < v12 )
      {
        if ( (sub_100049AFC(a1, v12) & 1) != 0 )
          return 1;
        --v12;
      }
    }
    *(_QWORD *)(a1 + 4144) -= 4096LL;
    if ( v11 < 0x3E7 )
    {
      ++v11;
    }
    else
    {
      v22 = qtime64();
      v23 = HIDWORD(v22);
      if ( (unsigned int)(HIDWORD(v22) - *(_DWORD *)(a1 + 4232)) < 5 )
      {
        v11 = 0;
      }
      else
      {
        sub_100004BD4(*(_QWORD *)(a1 + 16), &byte_1000931E5, a3, a4, a5, a6, a7, a8, v24);
        v11 = 0;
        *(_DWORD *)(a1 + 4232) = v23;
      }
    }
    v9 = *(_QWORD *)(a1 + 4144);
    v12 = 4096;
    if ( v9 + 4096 <= a2 )
      return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      result = sub_1000497C0(a1, v19 + 2);
      if ( (_DWORD)result )
        break;
      v19 = (_QWORD *)*v19;
      if ( v19 == v13 )
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
    if ( v21 == v13 )
      goto LABEL_15;
  }
}
// 100049440: variable 'a3' is possibly undefined
// 100049440: variable 'a4' is possibly undefined
// 100049440: variable 'a5' is possibly undefined
// 100049440: variable 'a6' is possibly undefined
// 100049440: variable 'a7' is possibly undefined
// 100049440: variable 'a8' is possibly undefined
// 10004959C: variable 'v24' is possibly undefined
// 1000931E5: using guessed type char byte_1000931E5;
// 10009EA10: using guessed type __int64 (__fastcall *off_10009EA10[3])();
// 10009EA38: using guessed type _UNKNOWN *off_10009EA38;
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
