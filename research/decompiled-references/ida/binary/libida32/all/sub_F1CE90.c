void __fastcall sub_F1CE90(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  size_t v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  __int128 v11; // [rsp+10h] [rbp-38h]
  __int128 v12; // [rsp+20h] [rbp-28h]

  sub_F07020(a1, a2);
  if ( *(_QWORD *)(a2 + 96) )
  {
    v10 = *(_QWORD *)(a2 + 96);
    *(_QWORD *)&v11 = "super";
    *((_QWORD *)&v11 + 1) = 5;
    v12 = (__int128)_mm_loadh_ps((const double *)&v10);
    v2 = j__strlen(&byte_22CD811);
    sub_F1B570(a1, (__int64)&byte_22CD811, v2, v3, v4, v5, v11, v12);
  }
  if ( *(_QWORD *)(a2 + 88) )
  {
    v10 = *(_QWORD *)(a2 + 88);
    v11 = 0u;
    v12 = (__int128)_mm_loadh_ps((const double *)&v10);
    v6 = j__strlen(&byte_22CD811);
    sub_F1B570(a1, (__int64)&byte_22CD811, v6, v7, v8, v9, v11, v12);
  }
}

