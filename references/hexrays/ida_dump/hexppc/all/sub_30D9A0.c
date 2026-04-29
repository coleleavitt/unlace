unsigned __int64 __fastcall sub_30D9A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __m128i v5; // xmm0
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // r13d
  int v9; // r15d
  unsigned int v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // rbp
  __m128i *j; // rbx
  __int64 *v14; // rdi
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r15d
  unsigned int i; // r12d
  __int64 v21; // rbp
  __int64 v22; // rax
  __m128i *v23; // rcx
  __int64 *v24; // rdx
  __m128i v25; // [rsp+0h] [rbp-D8h] BYREF
  __int64 *v26; // [rsp+10h] [rbp-C8h]
  __int64 v27; // [rsp+18h] [rbp-C0h]
  __int64 *v28; // [rsp+20h] [rbp-B8h]
  __m128i *v29; // [rsp+28h] [rbp-B0h]
  __int64 v30; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-A0h]
  int v32; // [rsp+40h] [rbp-98h]
  __int64 v33; // [rsp+50h] [rbp-88h] BYREF
  int v34; // [rsp+60h] [rbp-78h]
  __m128i v35; // [rsp+70h] [rbp-68h] BYREF
  __int64 v36; // [rsp+80h] [rbp-58h]
  _QWORD v37[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+98h] [rbp-40h]

  v3 = *a1;
  v38 = __readfsqword(0x28u);
  v29 = &v35;
  v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v35, (__m128i)(unsigned __int64)&v35);
  v4 = *(_QWORD *)(a2 + 8) + 24LL * (*(int (__fastcall **)(__int64 *))(v3 + 80))(a1);
  sub_60E90((__int64 *)v4, (__int64 *)(a2 + 56));
  v5 = _mm_load_si128(&v25);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(a2 + 72);
  v35 = v5;
  v36 = 0;
  v37[0] = 0;
  v37[1] = 0;
  sub_30CDB0(a1, &v35, 0);
  v28 = v37;
  v27 = a2 + 32;
  v25.m128i_i64[0] = (__int64)&v33;
  while ( v36 )
  {
    v6 = v35.m128i_i64[0];
    v7 = *(_QWORD *)v35.m128i_i64[0];
    v8 = *(_DWORD *)(v35.m128i_i64[0] + 16);
    **(_QWORD **)(v35.m128i_i64[0] + 8) = *(_QWORD *)v35.m128i_i64[0];
    *(_QWORD *)(v7 + 8) = *(_QWORD *)(v6 + 8);
    qfree(v6);
    --v36;
    sub_60900(v28, v8);
    v26 = &v30;
    sub_605C0(&v30, v27);
    v32 = *(_DWORD *)(a2 + 48);
    v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, v8);
    v10 = 0;
    if ( v9 > 0 )
    {
      do
      {
        v11 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 112))(a1, v8, v10);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 152))(a1, v8, v11) )
        {
          sub_605C0((__int64 *)v25.m128i_i64[0], v27);
          v34 = *(_DWORD *)(a2 + 48);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
            a2,
            v25.m128i_i64[0],
            (unsigned int)v11,
            v8);
          if ( *(_DWORD *)(a2 + 80) == 1 )
            sub_60840(v26, (__int64 *)v25.m128i_i64[0]);
          else
            sub_60CC0(v26, (__int64 *)v25.m128i_i64[0]);
          qfree(v33);
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    v12 = 24LL * (int)v8;
    if ( sub_60DB0(v12 + *(_QWORD *)(a2 + 8), (__int64)v26) )
    {
      v16 = *(_QWORD *)(a2 + 8) + v12;
      v17 = *(_QWORD *)v16;
      *(_QWORD *)v16 = v30;
      v30 = v17;
      v18 = *(_QWORD *)(v16 + 8);
      *(_QWORD *)(v16 + 8) = v31;
      v31 = v18;
      LODWORD(v18) = *(_DWORD *)(v16 + 16);
      *(_DWORD *)(v16 + 16) = v32;
      v32 = v18;
      v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 104))(a1, v8);
      if ( v19 > 0 )
      {
        for ( i = 0; i != v19; ++i )
        {
          v21 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, v8, i);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 152))(a1, v21, v8)
            && (unsigned __int8)sub_60750(v28, v21) )
          {
            v22 = qalloc_or_throw(24);
            v23 = v29;
            *(_DWORD *)(v22 + 16) = v21;
            *(_QWORD *)v22 = v23;
            v24 = (__int64 *)v35.m128i_i64[1];
            *(_QWORD *)(v22 + 8) = v35.m128i_i64[1];
            *v24 = v22;
            v35.m128i_i64[1] = v22;
            ++v36;
          }
        }
      }
    }
    qfree(v30);
  }
  qfree(v37[0]);
  for ( j = (__m128i *)v35.m128i_i64[0]; j != v29; --v36 )
  {
    v14 = (__int64 *)j;
    j = (__m128i *)j->m128i_i64[0];
    *(_QWORD *)v14[1] = j;
    j->m128i_i64[1] = v14[1];
    qfree(v14);
  }
  return v38 - __readfsqword(0x28u);
}
