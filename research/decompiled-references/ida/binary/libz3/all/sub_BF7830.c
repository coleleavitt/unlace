__int64 __fastcall sub_BF7830(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // rbp
  int v6; // eax
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // r14
  _QWORD *v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rdi
  __m128i v17; // [rsp+0h] [rbp-48h] BYREF

  LODWORD(v5) = 0;
  LOBYTE(v6) = sub_BB0D70(a1 + 920, a2, a3);
  if ( !(_BYTE)v6 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    LODWORD(v5) = v6;
    v9 = sub_15E1B70(v8);
    v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)v8);
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    sub_14B9B80(a1 + 1192, &v17);
    v10 = *(_QWORD *)(a1 + 24);
    v11 = v17.m128i_i64[0];
    if ( v17.m128i_i64[0] != *(_QWORD *)(v10 + 856) && *(_QWORD *)(v10 + 864) != v17.m128i_i64[0] )
    {
      v12 = sub_966570(a1, a2);
      v13 = sub_966570(a1, a3);
      if ( v13[1] != v12[1] && !(unsigned __int8)sub_8E77E0(*(_QWORD *)(a1 + 16), (__int64)v12, (__int64)v13) )
      {
        v14 = *(_QWORD *)(a1 + 16);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v14 + 7488) + 48LL))(*(_QWORD *)(v14 + 7488), *v12);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 7488) + 64LL))(*(_QWORD *)(v14 + 7488));
        v5 = *(_QWORD *)(a1 + 16);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 7488) + 48LL))(*(_QWORD *)(v5 + 7488), *v13);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 7488) + 64LL))(*(_QWORD *)(v5 + 7488));
        LODWORD(v5) = sub_8F5D90(*(_QWORD *)(a1 + 16), (__int64)v12, (__int64)v13);
        if ( (_BYTE)v5 )
        {
          v5 = *(_QWORD *)(a1 + 16);
          LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)(v5 + 8848) + (unsigned int)sub_966380(a1, a2, a3)) != 0xFF;
        }
      }
      v11 = v17.m128i_i64[0];
    }
    if ( v11 )
    {
      v15 = v17.m128i_i64[1];
      if ( (*(_DWORD *)(v11 + 8))-- == 1 )
        sub_15D7BC0(v15, v11);
    }
  }
  return (unsigned int)v5;
}

