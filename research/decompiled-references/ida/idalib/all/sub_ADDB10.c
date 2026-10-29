void __fastcall sub_ADDB10(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int128 v7; // [rsp+10h] [rbp-28h]
  __int64 v8; // [rsp+20h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 4) != 1 || !a2 || (*(_BYTE *)(a2 + 29) & 2) == 0 )
  {
    v6 = a2;
    LOBYTE(v8) = 0;
    v7 = (__int128)_mm_loadh_ps((const double *)&v6);
    v2 = sub_ACAA10(a1);
    sub_ADD590((char *)(a1 + 8), (char *)&byte_22F0C30, v2, v3, v4, v5, v7, v8);
  }
}
