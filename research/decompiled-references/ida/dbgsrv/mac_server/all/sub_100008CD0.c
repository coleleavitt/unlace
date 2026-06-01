/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008CD0
// Address: 0x0000000100008CD0

//----- (0000000100008CD0) ----------------------------------------------------
__int64 __fastcall sub_100008CD0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  char *v5; // rdi
  __int64 (__fastcall **v7)(); // [rsp+8h] [rbp-88h] BYREF
  int v8; // [rsp+10h] [rbp-80h]
  __int128 v9; // [rsp+14h] [rbp-7Ch]
  __int64 v10; // [rsp+24h] [rbp-6Ch]
  __int128 v11; // [rsp+30h] [rbp-60h]
  __int128 v12; // [rsp+40h] [rbp-50h]
  __int128 v13; // [rsp+50h] [rbp-40h]
  __int64 v14; // [rsp+60h] [rbp-30h]
  __int64 v15; // [rsp+68h] [rbp-28h]
  _BYTE *v16; // [rsp+70h] [rbp-20h]

  if ( a3[3] )
    v5 = (char *)a3[2];
  else
    v5 = (char *)_s1;
  v8 = 16;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v7 = off_1000A75D0;
  v14 = a1;
  v15 = a2;
  v16 = qbasename(v5);
  sub_100005930(a1, &v7, a3);
  v7 = off_1000A7540;
  if ( *((_QWORD *)&v11 + 1) )
  {
    *(_QWORD *)&v12 = 0;
    qfree(*((void **)&v11 + 1));
  }
  return __stack_chk_guard;
}
// 1000A7540: using guessed type __int64 (__fastcall *off_1000A7540[7])();
// 1000A75D0: using guessed type __int64 (__fastcall *off_1000A75D0[7])();
