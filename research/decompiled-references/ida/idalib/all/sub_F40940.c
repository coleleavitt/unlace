void __fastcall sub_F40940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int128 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  __int64 v13; // [rsp+18h] [rbp-30h]

  v6 = sub_F5E4D0(a2, a2, a3, a4, a5, a6);
  if ( v6 )
  {
    *(_QWORD *)&v11 = v6;
    v12 = 0;
    v13 = 0;
    v11 = (__int128)_mm_loadh_ps((const double *)&v11);
    sub_F3F2B0(a1, (__int64)&byte_22F0C30, 0, v7, v8, v9, 0, v11);
  }
  v10 = sub_F5E4F0(a2);
  sub_F2F5B0(a1, v10);
}
