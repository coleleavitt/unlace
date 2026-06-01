__int64 __fastcall sub_4E6750(__int64 a1, char a2)
{
  int v2; // eax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v9; // [rsp+8h] [rbp-70h]
  char v10[8]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+38h] [rbp-40h]
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 4);
  v13 = __readfsqword(0x28u);
  if ( a2 && (v2 & 0x80u) == 0 )
    return 2;
  if ( (v2 & 0x8000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 88);
    v9 = 0;
    ptr = nullptr;
    v10[0] = 2;
    v12 = 0;
    v11 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(char *, __int64, const char *, _QWORD, _QWORD, void **))(v4 + 104))(
            v10,
            a1 + 96,
            "init",
            0,
            0,
            &ptr) )
      sub_378D50();
    v5 = v11;
    if ( (*(_BYTE *)(a1 + 5) & 1) != 0 )
    {
      copy_idcv(a1 + 96);
      v5 = 2;
    }
    free_idcv(v10);
    if ( ptr )
    {
      *(_QWORD *)&v9 = 0;
      qfree(ptr);
    }
    return v5;
  }
  if ( (v2 & 0x100) == 0 )
    return (*(__int64 (**)(void))(a1 + 8))();
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 || (v5 = *(_QWORD *)(a1 + 72)) != 0 )
    sub_4E5210();
  v7 = (*(__int64 (**)(void))(v6 + 8))();
  *(_QWORD *)(a1 + 72) = v7;
  if ( v7 == -1 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    return v5;
  }
  if ( v7 )
  {
    *(_QWORD *)(v7 + 96) = *(_QWORD *)(a1 + 64);
    return 2;
  }
  return v5;
}
