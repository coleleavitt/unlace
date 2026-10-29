/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000507A0
// Address: 0x00000001000507A0

//----- (00000001000507A0) ----------------------------------------------------
__int64 __fastcall sub_1000507A0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  __int16 v6; // r13
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // r13
  _QWORD *v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  _QWORD *v19; // r12
  unsigned __int64 v20; // [rsp+0h] [rbp-60h]
  __int64 (__fastcall **v22)(); // [rsp+18h] [rbp-48h] BYREF
  __int128 v23; // [rsp+20h] [rbp-40h]

  v6 = a2;
  v7 = a2 & 0xFFFFFFFFFFFFF000LL;
  *(_QWORD *)(a1 + 4144) = v7;
  result = 0xFFFFFFFFLL;
  if ( v7 < a3 )
  {
    v9 = v6 & 0xFFF;
    v10 = (_QWORD *)(a1 + 4152);
    v11 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(a1 + 32) & 2) == 0 )
      {
        v23 = 0;
        v22 = off_1000A92B0;
        v12 = callui(86, (unsigned int)&v22, 0, (unsigned int)&callui, a5, a6, v20);
        v22 = (__int64 (__fastcall **)())&off_1000A92D8;
        qsem_free(*((_DWORD **)&v23 + 1));
        if ( v12 )
          return 4294967289LL;
        v7 = *(_QWORD *)(a1 + 4144);
      }
      v20 = v11;
      v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 16)
                                                                                          + 288LL))(
              *(_QWORD *)(a1 + 16),
              v7,
              a1 + 48,
              4096,
              *(_QWORD *)(a1 + 40));
      v14 = *(_QWORD *)(a1 + 4144);
      if ( v13 != 4096 )
        break;
      v15 = a3 - v14;
      if ( a3 - v14 >= 0x1000 )
        v15 = 4096;
      *(_QWORD *)(a1 + 4240) = v15;
      v16 = *(_QWORD **)(a1 + 4152);
      if ( v16 != v10 )
      {
        do
        {
          result = sub_100050A40(a1, v16 + 2);
          if ( (_DWORD)result )
          {
            if ( (_DWORD)result == 1 )
              return result;
            v19 = (_QWORD *)*v16;
            *(_QWORD *)v16[1] = *v16;
            v19[1] = v16[1];
            qfree(v16);
            --*(_QWORD *)(a1 + 4168);
          }
          else
          {
            v19 = (_QWORD *)*v16;
          }
          v16 = v19;
        }
        while ( v19 != v10 );
      }
      if ( sub_100050BA0(a1, v9) )
        return 1;
      if ( *(_QWORD *)(a1 + 4216) && v9 < *(_QWORD *)(a1 + 4240) )
      {
        while ( !sub_100050D60(a1, v9) )
        {
          if ( ++v9 >= *(_QWORD *)(a1 + 4240) )
            goto LABEL_15;
        }
        return 1;
      }
LABEL_15:
      *(_QWORD *)(a1 + 4144) += 4096LL;
      if ( v20 < 0x3E7 )
      {
        v11 = v20 + 1;
      }
      else
      {
        v17 = qtime64();
        v18 = HIDWORD(v17);
        if ( (unsigned int)(HIDWORD(v17) - *(_DWORD *)(a1 + 4232)) >= 5 )
        {
          sub_100005090(*(_QWORD *)(a1 + 16), (char *)&_s);
          *(_DWORD *)(a1 + 4232) = v18;
        }
        v11 = 0;
      }
      v7 = *(_QWORD *)(a1 + 4144);
      v9 = 0;
      if ( v7 >= a3 )
        return 0xFFFFFFFFLL;
    }
    *(_QWORD *)(a1 + 4176) = v14;
    return 4294967289LL;
  }
  return result;
}
// 10005082E: variable 'a5' is possibly undefined
// 10005082E: variable 'a6' is possibly undefined
// 10005082E: variable 'v20' is possibly undefined
// 1000A92B0: using guessed type __int64 (__fastcall *off_1000A92B0[2])();
// 1000A92D8: using guessed type _UNKNOWN *off_1000A92D8;
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
