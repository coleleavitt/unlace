unsigned __int64 __fastcall sub_14D60(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, ".end", 27);
  v5 = 0;
  v6 = 0;
  v1 = getinf(16);
  if ( get_ea_name(&v5, v1, 3, 0, v2, v3) > 0 )
  {
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, " #", 0);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v5, 0);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFF);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  return v7 - __readfsqword(0x28u);
}
