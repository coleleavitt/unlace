void __fastcall sub_F409C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]

  if ( *(_QWORD *)(a2 + 32) )
  {
    *(_QWORD *)&v6 = *(_QWORD *)(a2 + 32);
    v7 = 0;
    v8 = 0;
    v6 = (__int128)_mm_loadh_ps((const double *)&v6);
    sub_F3F2B0(a1, (__int64)&byte_22F0C30, 0, a4, a5, a6, 0, v6);
  }
  if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
    sub_995540(*(_QWORD *)(a1 + 1096), " divergent");
}
