__int64 __fastcall sub_623F90(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // r8d
  int v4; // r9d
  char v6; // [rsp+0h] [rbp-1088h]
  void *ptr; // [rsp+10h] [rbp-1078h] BYREF
  __int128 v8; // [rsp+18h] [rbp-1070h]
  char v9[8]; // [rsp+30h] [rbp-1058h] BYREF
  __int128 v10; // [rsp+38h] [rbp-1050h]
  __int64 v11; // [rsp+48h] [rbp-1040h]
  char v12; // [rsp+50h] [rbp-1038h] BYREF
  unsigned __int64 v13; // [rsp+1058h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 48) && *(_QWORD *)(a2 + 80) && *(_QWORD *)(a2 + 56) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v8 = 0;
    ptr = nullptr;
    v9[0] = 2;
    v11 = 0;
    v10 = 0;
    free_idcv(v9);
    v9[0] = 8;
    *(_QWORD *)&v10 = v2;
    if ( !(*(unsigned __int8 (__fastcall **)(char *, char *, char *, __int64, void **))(a2 + 80))(
            v9,
            "loader_input_t",
            v9,
            1,
            &ptr) )
      sub_365330();
    qsnprintf((int)&v12, 4096, (int)"*.%s", *(_QWORD *)(a2 + 24), v3, v4, v6);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v9;
    sub_623DB0();
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = 0;
    free_idcv(v9);
    if ( ptr )
    {
      *(_QWORD *)&v8 = 0;
      qfree(ptr);
    }
  }
  return 0;
}

