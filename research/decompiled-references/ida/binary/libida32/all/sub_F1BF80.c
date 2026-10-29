void __fastcall sub_F1BF80(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v6; // xmm0
  __int128 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]

  if ( a2 )
  {
    *(_QWORD *)&v7 = a2;
    v8 = a1;
    v9 = a3;
    v6 = (__int128)_mm_loadh_ps((const double *)&v7);
    v10 = a4;
    v7 = v6;
    sub_F1B570(a1, (__int64)&byte_22CD811, 0, a4, a5, a6, __PAIR128__(a4, a3), v6);
  }
}

