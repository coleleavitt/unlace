unsigned __int64 __fastcall sub_105BD0(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // eax
  _UNKNOWN **v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  __int128 v8; // [rsp+10h] [rbp-28h]
  int v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a2 + 44);
  v6 = &off_4DCBE8;
  v7 = 0;
  v8 = 0;
  v9 = v4;
  sub_1058A0((__int64)&v6, a2, a3, a4);
  v6 = &off_4EAFB0;
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v10 - __readfsqword(0x28u);
}
