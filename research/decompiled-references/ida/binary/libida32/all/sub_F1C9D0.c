void __fastcall sub_F1C9D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h]
  __int64 v11; // [rsp+18h] [rbp-20h]

  v5 = sub_F3D1D0(a2, a2, a3, a4, a5);
  if ( v5 )
  {
    *(_QWORD *)&v9 = v5;
    v10 = 0;
    v11 = 0;
    sub_F1B570(a1, (__int64)&byte_22CD811, 0, v6, v7, v8, 0, (__int128)_mm_loadh_ps((const double *)&v9));
  }
}

