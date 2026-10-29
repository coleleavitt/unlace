void __fastcall sub_F1C180(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rbx
  _QWORD *i; // rbp
  __int128 v7; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  __int64 v9; // [rsp+18h] [rbp-40h]
  __int128 v10; // [rsp+20h] [rbp-38h]

  sub_F07020(a1, a2);
  sub_F068D0(a1, *(_QWORD *)(a2 + 48));
  v5 = *(_QWORD **)(a2 + 56);
  for ( i = &v5[*(unsigned int *)(a2 + 64)]; i != v5; ++v5 )
  {
    if ( *v5 )
    {
      *(_QWORD *)&v7 = *v5;
      v8 = 0;
      v9 = 0;
      v7 = (__int128)_mm_loadh_ps((const double *)&v7);
      v10 = v7;
      sub_F1B570(a1, (__int64)&byte_22CD811, 0, v2, v3, v4, 0, v7);
    }
  }
}

