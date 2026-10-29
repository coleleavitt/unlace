/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000090E0
// Address: 0x00000001000090E0

//----- (00000001000090E0) ----------------------------------------------------
__int64 __fastcall sub_1000090E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r14d
  unsigned __int8 v5; // bl
  __int64 (__fastcall **v7)(); // [rsp+8h] [rbp-88h] BYREF
  int v8; // [rsp+10h] [rbp-80h]
  __int128 v9; // [rsp+14h] [rbp-7Ch]
  __int64 v10; // [rsp+24h] [rbp-6Ch]
  __int128 v11; // [rsp+30h] [rbp-60h]
  __int128 v12; // [rsp+40h] [rbp-50h]
  __int128 v13; // [rsp+50h] [rbp-40h]
  __int64 v14; // [rsp+60h] [rbp-30h]

  v3 = -1;
  if ( *(_QWORD *)(a1 + 1016) && rangeset_t_find_range(a1 + 1008, a3) )
  {
    v8 = 16;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v7 = off_1000A7638;
    v14 = a2;
    v5 = sub_10001AE50(a1 + 864, a3, &v7, 0);
    v7 = off_1000A7540;
    if ( *((_QWORD *)&v11 + 1) )
    {
      *(_QWORD *)&v12 = 0;
      qfree(*((void **)&v11 + 1));
    }
    return (v5 - 1) | 1u;
  }
  return v3;
}
// 1000A7540: using guessed type __int64 (__fastcall *off_1000A7540[7])();
// 1000A7638: using guessed type __int64 (__fastcall *off_1000A7638[7])();
