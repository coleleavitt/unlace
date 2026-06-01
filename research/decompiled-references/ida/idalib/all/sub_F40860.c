void __fastcall sub_F40860(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int128 v5; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]

  sub_F2AD60(a1, a2);
  if ( *(_QWORD *)(a2 + 48) )
  {
    *(_QWORD *)&v5 = *(_QWORD *)(a2 + 48);
    v6 = 0;
    v7 = 0;
    sub_F3F2B0(a1, (__int64)&byte_22F0C30, 0, v2, v3, v4, 0, (__int128)_mm_loadh_ps((const double *)&v5));
  }
}
