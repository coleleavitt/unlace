void __fastcall sub_847430(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 i; // rbx
  __m128 *v3; // rax
  __m128 *v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx

  v1 = *(__int64 **)(a1 + 312);
  for ( i = *(_QWORD *)a1; v1; v1 = (__int64 *)v1[2] )
  {
    v7 = sub_845240(i);
    v8 = *v1;
    if ( *v1 && v7 )
    {
      *(_QWORD *)(v8 + 16) &= ~1uLL;
      *(_QWORD *)(v8 + 24) = v7;
    }
    sub_8452F0(i, 37);
    if ( *(_DWORD *)i )
      goto LABEL_6;
    v9 = *(_QWORD *)(i + 80);
    v10 = *(_QWORD *)(v9 + 8);
    v11 = v10 + 16;
    if ( (unsigned __int64)(v10 + 16) > 0xFF0 )
    {
      v3 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(i + 56))(
                       4096,
                       *(_QWORD *)(*(_QWORD *)(i + 56) + 16LL));
      if ( v3 )
      {
        v3->m128_u64[0] = *(_QWORD *)(i + 80);
        *(_QWORD *)(i + 80) = v3;
        v4 = v3 + 1;
        v4[-1].m128_u64[1] = 16;
LABEL_5:
        *v4 = _mm_loadh_ps((const double *)(a1 + 392));
        *(_QWORD *)(a1 + 392) = v4;
        goto LABEL_6;
      }
      *(_DWORD *)i = 2;
    }
    else
    {
      v4 = (__m128 *)(v9 + v10 + 16);
      *(_QWORD *)(v9 + 8) = v11;
      if ( v4 )
        goto LABEL_5;
    }
LABEL_6:
    v5 = v1[1];
    v6 = sub_8452F0(i, 36);
    if ( v6 && v5 )
    {
      v6[2] &= ~1uLL;
      v6[3] = v5;
    }
  }
  *(_QWORD *)(a1 + 312) = 0;
}

