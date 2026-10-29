unsigned __int64 __fastcall sub_6C01A0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rbx
  __int64 v4; // [rsp+0h] [rbp-68h] BYREF
  char v5; // [rsp+8h] [rbp-60h]
  __int128 v6; // [rsp+10h] [rbp-58h] BYREF
  void (__fastcall *v7)(__int128 *, __int128 *, __int64); // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  unsigned __int64 v9; // [rsp+38h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v4 = -1;
  v5 = 0;
  sub_4108F0(a1, (__int64)&v4, a2);
  for ( i = v4; v4 != -1; i = v4 )
  {
    if ( sub_3BD540((__int64)a1, i) )
    {
      if ( (sub_3BE900(a1, i, 4) & 0x600) == 0x400 )
      {
        v6 = 0;
        v7 = nullptr;
        v8 = 0;
        sub_3D19E0((_DWORD)a1, i);
        if ( v7 )
          v7(&v6, &v6, 3);
      }
    }
    sub_410A70(a1, (__int64)&v4, a2);
  }
  return v9 - __readfsqword(0x28u);
}
