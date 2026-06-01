void __fastcall sub_F1D070(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  size_t v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  size_t v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  __int128 v13; // [rsp+10h] [rbp-38h]
  __int128 v14; // [rsp+20h] [rbp-28h]

  sub_F07020(a1, *(_QWORD *)(a2 + 48));
  v3 = *(_QWORD *)(a1 + 1096);
  if ( *(_QWORD *)(a2 + 56) )
    sub_971800(v3, " synthesize");
  else
    sub_971800(v3, " dynamic");
  if ( *(_QWORD *)(a2 + 48) )
  {
    v12 = *(_QWORD *)(a2 + 48);
    v13 = 0u;
    v14 = (__int128)_mm_loadh_ps((const double *)&v12);
    v4 = j__strlen(&byte_22CD811);
    sub_F1B570(a1, (__int64)&byte_22CD811, v4, v5, v6, v7, v13, v14);
  }
  if ( *(_QWORD *)(a2 + 56) )
  {
    v12 = *(_QWORD *)(a2 + 56);
    v13 = 0u;
    v14 = (__int128)_mm_loadh_ps((const double *)&v12);
    v8 = j__strlen(&byte_22CD811);
    sub_F1B570(a1, (__int64)&byte_22CD811, v8, v9, v10, v11, v13, v14);
  }
}

