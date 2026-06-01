/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008E30
// Address: 0x0000000100008E30

//----- (0000000100008E30) ----------------------------------------------------
__int64 __fastcall sub_100008E30(__int64 a1, __int64 *a2, int a3)
{
  char v3; // r14
  kern_return_t v4; // ecx
  __int64 result; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 (__fastcall **v14[3])(_QWORD, _QWORD *); // [rsp+8h] [rbp-88h] BYREF
  __int128 v15; // [rsp+20h] [rbp-70h] BYREF
  __int64 v16; // [rsp+30h] [rbp-60h]
  __int128 v17; // [rsp+40h] [rbp-50h] BYREF
  __int64 v18; // [rsp+50h] [rbp-40h]
  char v19; // [rsp+5Fh] [rbp-31h] BYREF

  v3 = a3;
  if ( !a3 || (v4 = task_suspend(*(_DWORD *)(a1 + 848)), result = 4294967291LL, !v4) )
  {
    result = 4294967291LL;
    if ( *(_DWORD *)(a1 + 860) != 4 )
    {
      v17 = 0;
      v18 = 0;
      sub_100008CD0(a1, (__int64)&v17, (unsigned __int64 *)(a1 + 1072));
      v6 = *(_QWORD **)(a1 + 1136);
      if ( v6 != (_QWORD *)(a1 + 1144) )
      {
        do
        {
          sub_100008CD0(a1, (__int64)&v17, v6 + 5);
          v7 = (_QWORD *)v6[1];
          if ( v7 )
          {
            do
            {
              v8 = v7;
              v7 = (_QWORD *)*v7;
            }
            while ( v7 );
          }
          else
          {
            do
            {
              v8 = (_QWORD *)v6[2];
              v9 = *v8 == (_QWORD)v6;
              v6 = v8;
            }
            while ( !v9 );
          }
          v6 = v8;
        }
        while ( v8 != (_QWORD *)(a1 + 1144) );
      }
      v15 = 0;
      v16 = 0;
      v14[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *))&off_1000A7620;
      v14[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *))a1;
      v14[2] = (__int64 (__fastcall **)(_QWORD, _QWORD *))&v15;
      sub_100008850(a1, v14);
      _BitScanReverse64(&v10, 0xCCCCCCCCCCCCCCCDLL * ((80LL * *((_QWORD *)&v17 + 1)) >> 4));
      v11 = (2 * ((unsigned int)v10 ^ 0x3F)) ^ 0x7ELL;
      if ( !(80LL * *((_QWORD *)&v17 + 1)) )
        v11 = 80LL * *((_QWORD *)&v17 + 1);
      sub_10000CE10(v17, (__int128 *)(v17 + 80LL * *((_QWORD *)&v17 + 1)), (__int64)&v19, v11, 1);
      _BitScanReverse64(&v12, 0xCCCCCCCCCCCCCCCDLL * ((80LL * *((_QWORD *)&v15 + 1)) >> 4));
      v13 = (2 * ((unsigned int)v12 ^ 0x3F)) ^ 0x7ELL;
      if ( !(80LL * *((_QWORD *)&v15 + 1)) )
        v13 = 80LL * *((_QWORD *)&v15 + 1);
      sub_10000CE10(v15, (__int128 *)(v15 + 80LL * *((_QWORD *)&v15 + 1)), (__int64)&v19, v13, 1);
      sub_100019D00((__int64)a2, (__int64 *)&v15, (__int64 *)&v17);
      sub_100008B90(a1, a2);
      if ( v3 && task_resume(*(_DWORD *)(a1 + 848)) )
      {
        if ( under_debugger != 1 )
          interr(0x7582u);
        BUG();
      }
      sub_10000C380((char **)&v15);
      sub_10000C380((char **)&v17);
      return 1;
    }
  }
  return result;
}
// 1000A7620: using guessed type __int64 (__fastcall *off_1000A7620)();
// 1000AE23D: using guessed type char under_debugger;
