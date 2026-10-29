__int64 __fastcall sub_3BE320(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rsi
  void *v8; // rcx
  unsigned int v9; // ebx
  __m128i v11; // xmm1
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 i; // rbx
  __int64 v16; // rax
  __m128i v17; // xmm2
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rax
  const char *v22; // rcx
  __m128i v23; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+10h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+18h] [rbp-A8h]
  __int64 v26; // [rsp+30h] [rbp-90h] BYREF
  __int64 v27; // [rsp+38h] [rbp-88h]
  __int64 v28; // [rsp+50h] [rbp-70h]
  __int128 v29; // [rsp+58h] [rbp-68h]
  __int64 v30; // [rsp+70h] [rbp-50h] BYREF
  __m128i v31; // [rsp+78h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v25 = 0;
  v24 = 0;
  sub_3A8D50(&v24, a3, 0);
  sub_40BCC0(&v26, &v24);
  v28 = 0;
  v29 = 0;
  get_ea_name();
  if ( !v27 )
  {
    v22 = s1;
    if ( (_QWORD)v29 )
      LODWORD(v22) = v28;
    sub_2B1D90((unsigned int)"No %ss to %a[%s] found from functions", (unsigned int)"xref", a3, (_DWORD)v22, v5, v6);
    goto LABEL_7;
  }
  v7 = s1;
  if ( (_QWORD)v29 )
    LOBYTE(v7) = v28;
  v8 = &unk_419FBC;
  if ( v27 == 1 )
    v8 = &unk_419691;
  if ( (unsigned int)sub_339D30(
                       1,
                       (unsigned int)"AUTOHIDE REGISTRY\nDecompile %zu function%s that %s %a[%s]?",
                       v27,
                       (_DWORD)v8,
                       (unsigned int)"xref",
                       a3,
                       (char)v7) != 1 )
  {
LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  sub_3B4200(&v30, a2, a3, &v26);
  v11 = _mm_loadu_si128(&v31);
  v12 = *a1;
  v13 = v30;
  v31 = 0;
  v30 = 0;
  v23 = v11;
  if ( v12 )
  {
    v14 = a1[1];
    if ( v14 )
    {
      for ( i = 0; i != v14; ++i )
      {
        v16 = v12 + 48 * i;
        if ( *(_QWORD *)(v16 + 16) )
        {
          *(_QWORD *)(v16 + 24) = 0;
          qfree();
          v12 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree();
    v17 = _mm_load_si128(&v23);
    v18 = v30;
    *a1 = v13;
    *(__m128i *)(a1 + 1) = v17;
    if ( v18 )
    {
      v19 = v31.m128i_i64[0];
      if ( v31.m128i_i64[0] )
      {
        v20 = 0;
        do
        {
          v21 = v18 + 48 * v20;
          if ( *(_QWORD *)(v21 + 16) )
          {
            *(_QWORD *)(v21 + 24) = 0;
            qfree();
            v18 = v30;
          }
          ++v20;
        }
        while ( v19 != v20 );
      }
      v31.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    *a1 = v13;
    *(__m128i *)(a1 + 1) = v11;
  }
  v9 = 1;
LABEL_8:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  if ( v26 )
  {
    v27 = 0;
    qfree();
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  return v9;
}
