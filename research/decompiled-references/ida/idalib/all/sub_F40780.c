void __fastcall sub_F40780(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = sub_F61460(a2);
  if ( v2 )
  {
    *(_QWORD *)&v6 = v2;
    v7 = 0;
    v8 = 0;
    sub_F3F2B0(a1, (__int64)&byte_22F0C30, 0, v3, v4, v5, 0, (__int128)_mm_loadh_ps((const double *)&v6));
  }
}
