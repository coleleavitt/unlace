void __fastcall sub_F40EE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  size_t v6; // rax
  __int64 v7; // rax
  size_t v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  __int128 v13; // [rsp+10h] [rbp-38h]
  __int128 v14; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = j__strlen(" depth ");
  v4 = sub_9954E0(v2, " depth ", v3);
  v5 = sub_227B910(v4, *(_WORD *)(a2 + 20) & 0x7FFF);
  v6 = j__strlen(" index ");
  v7 = sub_9954E0(v5, " index ", v6);
  sub_227B910(v7, *(unsigned __int16 *)(a2 + 22));
  if ( *(char *)(a2 + 21) < 0 )
    sub_995540(*(_QWORD *)(a1 + 1096), " pack");
  if ( *(_QWORD *)(a2 + 32) )
  {
    v12 = *(_QWORD *)(a2 + 32);
    v13 = 0u;
    v14 = (__int128)_mm_loadh_ps((const double *)&v12);
    v8 = j__strlen(&byte_22F0C30);
    sub_F3F2B0(a1, (__int64)&byte_22F0C30, v8, v9, v10, v11, v13, v14);
  }
}
