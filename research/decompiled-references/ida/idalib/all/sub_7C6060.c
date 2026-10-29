__int64 __fastcall sub_7C6060(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 *v3; // r12
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v8; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v10; // [rsp+18h] [rbp-50h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v8 = qbasename(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 64LL));
  v2 = *(_QWORD **)(a1 + 136);
  v3 = (__int64 *)v2[5];
  if ( *v3 )
  {
    do
    {
      if ( (unk_2CD6F06 & 0x10) != 0 )
      {
        ptr = nullptr;
        v10 = 0;
        sub_35A790((char **)&ptr);
        sub_368890();
      }
      v4 = *v3;
      v5 = v3[1];
      v3 += 2;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64))(a1 + 72))(
        a1 + 144,
        a1 + 152,
        1,
        v4,
        4,
        v5,
        17);
    }
    while ( *v3 );
    v2 = *(_QWORD **)(a1 + 136);
  }
  v6 = v2[7];
  if ( v6 )
  {
    if ( (*(_DWORD *)&debug & 0x100000) != 0 )
    {
      ptr = nullptr;
      v10 = 0;
      sub_35A790((char **)&ptr);
      sub_368890();
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, const char *, __int64, __int64, __int64, __int64, __int64))(a1 + 72))(
      a1 + 144,
      a1 + 152,
      1,
      v2[6],
      14,
      "application/octet-stream",
      16,
      v8,
      10,
      v6,
      17);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 48))(a2, 10024, *(_QWORD *)(a1 + 144));
}
