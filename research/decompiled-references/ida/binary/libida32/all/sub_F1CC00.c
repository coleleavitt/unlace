void __fastcall sub_F1CC00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int128 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  __int64 v13; // [rsp+18h] [rbp-30h]

  v6 = sub_F3A790(a2, a2, a3, a4, a5, a6);
  if ( v6 )
  {
    *(_QWORD *)&v11 = v6;
    v12 = 0;
    v13 = 0;
    v11 = (__int128)_mm_loadh_ps((const double *)&v11);
    sub_F1B570(a1, (__int64)&byte_22CD811, 0, v7, v8, v9, 0, v11);
  }
  v10 = sub_F3A7B0(a2);
  sub_F0B870(a1, v10);
}

