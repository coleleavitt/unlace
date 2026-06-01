void __fastcall sub_F1CDA0(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  size_t v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  size_t v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  __int128 v17; // [rsp+10h] [rbp-38h]
  __int128 v18; // [rsp+20h] [rbp-28h]

  v2 = (__int64)a2;
  sub_F07020(a1, (__int64)a2);
  if ( *((_QWORD *)a2 + 11) )
  {
    v16 = *((_QWORD *)a2 + 11);
    v17 = 0u;
    v18 = (__int128)_mm_loadh_ps((const double *)&v16);
    v7 = j__strlen(&byte_22CD811);
    a2 = &byte_22CD811;
    sub_F1B570(a1, (__int64)&byte_22CD811, v7, v8, v9, v10, v17, v18);
  }
  v11 = sub_B8A0E0(v2, (__int64)a2, v3, v4, v5, v6);
  if ( v11 )
  {
    v16 = v11;
    v17 = 0u;
    v18 = (__int128)_mm_loadh_ps((const double *)&v16);
    v12 = j__strlen(&byte_22CD811);
    sub_F1B570(a1, (__int64)&byte_22CD811, v12, v13, v14, v15, v17, v18);
  }
}

