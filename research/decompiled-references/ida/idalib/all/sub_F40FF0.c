void __fastcall sub_F40FF0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  __int128 v7; // [rsp+10h] [rbp-38h]
  __int128 v8; // [rsp+20h] [rbp-28h]

  if ( ((*(_BYTE *)(a2 + 18) >> 3) & 3) == 1 )
    sub_995540(*(_QWORD *)(a1 + 1096), " decltype(auto)");
  if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(a2 + 17) & 4) == 0 )
    sub_995540(*(_QWORD *)(a1 + 1096), " undeduced");
  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = *(_QWORD *)(a2 + 32);
    v7 = 0u;
    v8 = (__int128)_mm_loadh_ps((const double *)&v6);
    v2 = j__strlen(&byte_22F0C30);
    sub_F3F2B0(a1, (__int64)&byte_22F0C30, v2, v3, v4, v5, v7, v8);
  }
}
