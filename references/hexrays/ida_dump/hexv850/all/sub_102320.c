unsigned __int64 __fastcall sub_102320(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rdi
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  __int128 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v7 = &off_4B0E38;
  v8 = 0;
  v9 = 0;
  sub_102170((__int64)&v7, a2, a3, a4);
  v5 = v8;
  *(_DWORD *)(a1 + 4) |= 4u;
  v7 = (__int64 (__fastcall **)())&off_4BED08;
  if ( v5 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v5);
  }
  return v10 - __readfsqword(0x28u);
}
