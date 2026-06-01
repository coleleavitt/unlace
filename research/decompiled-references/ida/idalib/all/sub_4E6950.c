__int64 __fastcall sub_4E6950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // eax
  __int64 (*v7)(void); // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v12; // [rsp+8h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v6 = *(_DWORD *)(a1 + 4);
  v13 = __readfsqword(0x28u);
  if ( (v6 & 0x8000) != 0 )
  {
    if ( (v6 & 0x100) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 88);
      v12 = 0;
      ptr = nullptr;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const char *, _QWORD, _QWORD, void **))(v10 + 104))(
              0,
              a1 + 96,
              "term",
              0,
              0,
              &ptr) )
        sub_378D50();
      if ( ptr )
      {
        *(_QWORD *)&v12 = 0;
        qfree(ptr);
      }
    }
  }
  else if ( (v6 & 0x100) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 72);
    if ( v9 )
      callui(182, v9, *(_QWORD *)(a1 + 64), (int)&callui, a5, a6);
  }
  else
  {
    v7 = *(__int64 (**)(void))(a1 + 16);
    if ( v7 )
      return v7();
  }
  return v13 - __readfsqword(0x28u);
}
