unsigned __int64 __fastcall sub_311B20(__int64 *a1, __int64 a2)
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
  __int64 v14; // rdi
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r15d
  unsigned int i; // r12d
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __m128i *v25; // rcx
  __int64 *v26; // rdx
  __m128i v27; // [rsp+0h] [rbp-D8h] BYREF
  __int64 *v28; // [rsp+10h] [rbp-C8h]
  __int64 v29; // [rsp+18h] [rbp-C0h]
  __int64 *v30; // [rsp+20h] [rbp-B8h]
  __m128i *v31; // [rsp+28h] [rbp-B0h]
  __int64 v32; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-A0h]
  int v34; // [rsp+40h] [rbp-98h]
  __int64 v35; // [rsp+50h] [rbp-88h] BYREF
  int v36; // [rsp+60h] [rbp-78h]
  __m128i v37; // [rsp+70h] [rbp-68h] BYREF
  __int64 v38; // [rsp+80h] [rbp-58h]
  __int64 v39[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+98h] [rbp-40h]

  v3 = *a1;
  v40 = __readfsqword(0x28u);
  v31 = &v37;
  v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v37, (__m128i)(unsigned __int64)&v37);
  v4 = *(_QWORD *)(a2 + 8) + 24LL * (*(int (__fastcall **)(__int64 *))(v3 + 80))(a1);
  sub_648D0((__int64 *)v4, (__int64 *)(a2 + 56));
  v5 = _mm_load_si128(&v27);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(a2 + 72);
  v37 = v5;
  v38 = 0;
  v39[0] = 0;
  v39[1] = 0;
  sub_310F30(a1, &v37, 0);
  v30 = v39;
  v29 = a2 + 32;
  v27.m128i_i64[0] = (__int64)&v35;
  while ( v38 )
  {
    v6 = v37.m128i_i64[0];
    v7 = *(_QWORD *)v37.m128i_i64[0];
    v8 = *(_DWORD *)(v37.m128i_i64[0] + 16);
    **(_QWORD **)(v37.m128i_i64[0] + 8) = *(_QWORD *)v37.m128i_i64[0];
    *(_QWORD *)(v7 + 8) = *(_QWORD *)(v6 + 8);
    qfree(v6);
    --v38;
    sub_64340(v30, v8);
    v28 = &v32;
    sub_64000(&v32, v29);
    v34 = *(_DWORD *)(a2 + 48);
    v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, v8);
    v10 = 0;
    if ( v9 > 0 )
    {
      do
      {
        v11 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 112))(a1, v8, v10);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 152))(a1, v8, v11) )
        {
          sub_64000((__int64 *)v27.m128i_i64[0], v29);
          v36 = *(_DWORD *)(a2 + 48);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
            a2,
            v27.m128i_i64[0],
            (unsigned int)v11,
            v8);
          if ( *(_DWORD *)(a2 + 80) == 1 )
            sub_64280(v28, (__int64 *)v27.m128i_i64[0]);
          else
            sub_64700(v28, (__int64 *)v27.m128i_i64[0]);
          qfree(v35);
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    v12 = 24LL * (int)v8;
    if ( sub_647F0(v12 + *(_QWORD *)(a2 + 8), (__int64)v28) )
    {
      v16 = *(_QWORD *)(a2 + 8) + v12;
      v17 = *(_QWORD *)v16;
      *(_QWORD *)v16 = v32;
      v32 = v17;
      v18 = *(_QWORD *)(v16 + 8);
      *(_QWORD *)(v16 + 8) = v33;
      v33 = v18;
      LODWORD(v18) = *(_DWORD *)(v16 + 16);
      *(_DWORD *)(v16 + 16) = v34;
      v34 = v18;
      v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 104))(a1, v8);
      if ( v19 > 0 )
      {
        for ( i = 0; i != v19; ++i )
        {
          v21 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, v8, i);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 152))(a1, v21, v8)
            && (unsigned __int8)sub_64190(v30, v21) )
          {
            v24 = qalloc_or_throw(24, (unsigned int)v21, v22, v23);
            v25 = v31;
            *(_DWORD *)(v24 + 16) = v21;
            *(_QWORD *)v24 = v25;
            v26 = (__int64 *)v37.m128i_i64[1];
            *(_QWORD *)(v24 + 8) = v37.m128i_i64[1];
            *v26 = v24;
            v37.m128i_i64[1] = v24;
            ++v38;
          }
        }
      }
    }
    qfree(v32);
  }
  qfree(v39[0]);
  for ( j = (__m128i *)v37.m128i_i64[0]; j != v31; --v38 )
  {
    v14 = (__int64)j;
    j = (__m128i *)j->m128i_i64[0];
    **(_QWORD **)(v14 + 8) = j;
    j->m128i_i64[1] = *(_QWORD *)(v14 + 8);
    qfree(v14);
  }
  return v40 - __readfsqword(0x28u);
}
