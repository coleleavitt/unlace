__int64 __fastcall sub_641200(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // r8d
  int v4; // r9d
  __int64 v6; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-1088h] BYREF
  void *ptr; // [rsp+10h] [rbp-1078h] BYREF
  __int128 v9; // [rsp+18h] [rbp-1070h]
  char v10[8]; // [rsp+30h] [rbp-1058h] BYREF
  __int128 v11; // [rsp+38h] [rbp-1050h]
  __int64 v12; // [rsp+48h] [rbp-1040h]
  _BYTE v13[4104]; // [rsp+50h] [rbp-1038h] BYREF
  unsigned __int64 v14; // [rsp+1058h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 48) && *(_QWORD *)(a2 + 80) && *(_QWORD *)(a2 + 56) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v9 = 0;
    ptr = nullptr;
    v10[0] = 2;
    v12 = 0;
    v11 = 0;
    free_idcv(v10);
    v10[0] = 8;
    *(_QWORD *)&v11 = v2;
    if ( !(*(unsigned __int8 (__fastcall **)(char *, char *, char *, __int64, void **))(a2 + 80))(
            v10,
            "loader_input_t",
            v10,
            1,
            &ptr) )
      sub_368890();
    qsnprintf((unsigned int)v13, 4096, (unsigned int)"*.%s", *(_QWORD *)(a2 + 24), v3, v4);
    v6 = *(_QWORD *)(a1 + 8);
    v7[0] = off_2B36F50;
    *(_QWORD *)(v6 + 8) = v10;
    v7[1] = *(_QWORD *)(a1 + 8);
    sub_641020(0, 0, (__int64)v13, (__int64)v7, 1);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = 0;
    free_idcv(v10);
    if ( ptr )
    {
      *(_QWORD *)&v9 = 0;
      qfree(ptr);
    }
  }
  return 0;
}
