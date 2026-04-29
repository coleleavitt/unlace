__int64 __fastcall sub_311760(__int64 *a1, __int64 a2)
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
  __int64 *v13; // rbx
  __int64 *v14; // rbp
  __int64 v15; // rdi
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64, int); // rax
  unsigned int v21; // r12d
  __int64 v22; // r15
  __int64 (__fastcall *v23)(__int64, int, int); // rax
  unsigned int v24; // ebp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __m128i *v28; // rcx
  __int64 *v29; // rdx
  unsigned int v30; // eax
  __m128i v31; // [rsp+0h] [rbp-D8h] BYREF
  __int64 *v32; // [rsp+10h] [rbp-C8h]
  __int64 v33; // [rsp+18h] [rbp-C0h]
  __int64 *v34; // [rsp+20h] [rbp-B8h]
  __m128i *v35; // [rsp+28h] [rbp-B0h]
  __int64 v36; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-A0h]
  int v38; // [rsp+40h] [rbp-98h]
  __int64 v39; // [rsp+50h] [rbp-88h] BYREF
  int v40; // [rsp+60h] [rbp-78h]
  __m128i v41; // [rsp+70h] [rbp-68h] BYREF
  __int64 v42; // [rsp+80h] [rbp-58h]
  __int64 v43[10]; // [rsp+88h] [rbp-50h] BYREF

  v3 = *a1;
  v43[2] = __readfsqword(0x28u);
  v35 = &v41;
  v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v41, (__m128i)(unsigned __int64)&v41);
  v4 = *(_QWORD *)(a2 + 8) + 24LL * (*(int (__fastcall **)(__int64 *))(v3 + 80))(a1);
  sub_648D0((__int64 *)v4, (__int64 *)(a2 + 56));
  v5 = _mm_load_si128(&v31);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(a2 + 72);
  v41 = v5;
  v42 = 0;
  v43[0] = 0;
  v43[1] = 0;
  sub_310F30(a1, &v41, 1);
  v31.m128i_i64[0] = (__int64)&v39;
  while ( v42 )
  {
    v6 = v41.m128i_i64[0];
    v7 = *(_QWORD *)v41.m128i_i64[0];
    v8 = *(_DWORD *)(v41.m128i_i64[0] + 16);
    **(_QWORD **)(v41.m128i_i64[0] + 8) = *(_QWORD *)v41.m128i_i64[0];
    *(_QWORD *)(v7 + 8) = *(_QWORD *)(v6 + 8);
    qfree(v6);
    --v42;
    v34 = v43;
    sub_64340(v43, v8);
    v33 = a2 + 32;
    v32 = &v36;
    sub_64000(&v36, a2 + 32);
    v38 = *(_DWORD *)(a2 + 48);
    v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 104))(a1, v8);
    v10 = 0;
    if ( v9 > 0 )
    {
      do
      {
        v11 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, v8, v10);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 152))(a1, v11, v8) )
        {
          sub_64000((__int64 *)v31.m128i_i64[0], v33);
          v40 = *(_DWORD *)(a2 + 48);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
            a2,
            v31.m128i_i64[0],
            (unsigned int)v11,
            v8);
          if ( *(_DWORD *)(a2 + 80) == 1 )
            sub_64280(v32, (__int64 *)v31.m128i_i64[0]);
          else
            sub_64700(v32, (__int64 *)v31.m128i_i64[0]);
          qfree(v39);
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    v12 = 24LL * (int)v8;
    if ( sub_647F0(v12 + *(_QWORD *)(a2 + 8), (__int64)v32) )
    {
      v17 = *(_QWORD *)(a2 + 8) + v12;
      v18 = *(_QWORD *)v17;
      *(_QWORD *)v17 = v36;
      v36 = v18;
      v19 = *(_QWORD *)(v17 + 8);
      *(_QWORD *)(v17 + 8) = v37;
      v37 = v19;
      LODWORD(v19) = *(_DWORD *)(v17 + 16);
      *(_DWORD *)(v17 + 16) = v38;
      v38 = v19;
      v20 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      LODWORD(v32) = v20 == sub_65090 ? sub_65090((__int64)a1, v8) : (unsigned int)v20((__int64)a1, v8);
      if ( (int)v32 > 0 )
      {
        v21 = 0;
        do
        {
          v22 = *a1;
          v23 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
          if ( v23 == sub_650D0 )
          {
            v24 = sub_650D0((__int64)a1, v8, v21);
          }
          else
          {
            v30 = v23((__int64)a1, v8, v21);
            v22 = *a1;
            v24 = v30;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v22 + 152))(a1, v8, v24)
            && (unsigned __int8)sub_64190(v34, v24) )
          {
            v27 = qalloc_or_throw(24, v24, v25, v26);
            v28 = v35;
            *(_DWORD *)(v27 + 16) = v24;
            *(_QWORD *)v27 = v28;
            v29 = (__int64 *)v41.m128i_i64[1];
            *(_QWORD *)(v27 + 8) = v41.m128i_i64[1];
            *v29 = v27;
            v41.m128i_i64[1] = v27;
            ++v42;
          }
          ++v21;
        }
        while ( (_DWORD)v32 != v21 );
      }
    }
    qfree(v36);
  }
  qfree(v43[0]);
  v13 = (__int64 *)v41.m128i_i64[0];
  v14 = (__int64 *)v35;
  if ( (__m128i *)v41.m128i_i64[0] != v35 )
  {
    do
    {
      v15 = (__int64)v13;
      v13 = (__int64 *)*v13;
      **(_QWORD **)(v15 + 8) = v13;
      v13[1] = *(_QWORD *)(v15 + 8);
      qfree(v15);
      --v42;
    }
    while ( v13 != v14 );
  }
  return 1;
}
