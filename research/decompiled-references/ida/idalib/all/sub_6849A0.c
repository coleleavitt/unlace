unsigned __int64 __fastcall sub_6849A0(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        void *a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        __int64 a15)
{
  unsigned __int64 *v15; // rax
  __int128 v17; // [rsp+0h] [rbp-48h]
  __int64 v18; // [rsp+10h] [rbp-38h]
  __int64 v19; // [rsp+18h] [rbp-30h]
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( (sub_3BE900(a1, a2, 4) & 0x600) == 0x200 )
  {
    v17 = 0;
    v18 = 0;
    v19 = 0;
    sub_3D19E0((_DWORD)a1, a2);
  }
  v15 = sub_5CAA10((__int64)a1, a2);
  if ( v15 && *v15 != a2 )
    return sub_5D4180((int)a1, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  else
    return v20 - __readfsqword(0x28u);
}
