/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004FB60
// Address: 0x000000010004FB60

//----- (000000010004FB60) ----------------------------------------------------
__int64 __fastcall sub_10004FB60(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v8; // rsi
  __int64 result; // rax
  unsigned __int64 v10; // r13
  _QWORD *v11; // rbx
  unsigned __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  bool v16; // cf
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r12
  _QWORD *v22; // r12
  unsigned __int64 v23; // [rsp+0h] [rbp-60h]
  unsigned __int64 v24; // [rsp+10h] [rbp-50h]
  __int64 (__fastcall **v25)(); // [rsp+18h] [rbp-48h] BYREF
  __int128 v26; // [rsp+20h] [rbp-40h]

  v8 = (a3 - 1) & 0xFFFFFFFFFFFFF000LL;
  *(_QWORD *)(a1 + 4144) = v8;
  result = 0xFFFFFFFFLL;
  v24 = a2;
  if ( v8 + 4096 > a2 )
  {
    v10 = a3 - v8;
    v11 = (_QWORD *)(a1 + 4152);
    v12 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(a1 + 32) & 2) == 0 )
      {
        v26 = 0;
        v25 = off_1000A92B0;
        v13 = callui(86, (unsigned int)&v25, 0, (unsigned int)&callui, a5, a6, v23);
        v25 = (__int64 (__fastcall **)())&off_1000A92D8;
        qsem_free(*((_DWORD **)&v26 + 1));
        if ( v13 )
          return 4294967289LL;
        v8 = *(_QWORD *)(a1 + 4144);
      }
      v23 = v12;
      v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 16)
                                                                                          + 288LL))(
              *(_QWORD *)(a1 + 16),
              v8,
              a1 + 48,
              4096,
              *(_QWORD *)(a1 + 40));
      v15 = *(_QWORD *)(a1 + 4144);
      if ( v14 != 4096 )
        break;
      v16 = v24 < v15;
      v17 = v24 - v15;
      v18 = 0;
      if ( !v16 )
        v18 = v17;
      *(_QWORD *)(a1 + 4240) = v18;
      v19 = *(_QWORD **)(a1 + 4152);
      if ( v19 != v11 )
      {
        do
        {
          result = sub_10004FF80(a1, v19 + 2);
          if ( (_DWORD)result )
          {
            if ( (_DWORD)result == 1 )
              return result;
            v22 = (_QWORD *)*v19;
            *(_QWORD *)v19[1] = *v19;
            v22[1] = v19[1];
            qfree(v19);
            --*(_QWORD *)(a1 + 4168);
          }
          else
          {
            v22 = (_QWORD *)*v19;
          }
          v19 = v22;
        }
        while ( v22 != v11 );
      }
      if ( sub_100050120(a1, v10) )
        return 1;
      if ( *(_QWORD *)(a1 + 4216) && *(_QWORD *)(a1 + 4240) < v10 )
      {
        while ( !sub_100050310(a1, v10) )
        {
          if ( *(_QWORD *)(a1 + 4240) >= --v10 )
            goto LABEL_15;
        }
        return 1;
      }
LABEL_15:
      *(_QWORD *)(a1 + 4144) -= 4096LL;
      if ( v23 < 0x3E7 )
      {
        v12 = v23 + 1;
      }
      else
      {
        v20 = qtime64();
        v21 = HIDWORD(v20);
        if ( (unsigned int)(HIDWORD(v20) - *(_DWORD *)(a1 + 4232)) >= 5 )
        {
          sub_100005090(*(_QWORD *)(a1 + 16), (char *)&_s);
          *(_DWORD *)(a1 + 4232) = v21;
        }
        v12 = 0;
      }
      v8 = *(_QWORD *)(a1 + 4144);
      v10 = 4096;
      if ( v8 + 4096 <= v24 )
        return 0xFFFFFFFFLL;
    }
    *(_QWORD *)(a1 + 4176) = v15;
    return 4294967289LL;
  }
  return result;
}
// 10004FBF8: variable 'a5' is possibly undefined
// 10004FBF8: variable 'a6' is possibly undefined
// 10004FBF8: variable 'v23' is possibly undefined
// 1000A92B0: using guessed type __int64 (__fastcall *off_1000A92B0[2])();
// 1000A92D8: using guessed type _UNKNOWN *off_1000A92D8;
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
