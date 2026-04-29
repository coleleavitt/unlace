__int64 __fastcall sub_2BDD50(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rdx
  const void *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 j; // r12
  _QWORD *v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v29; // rdi
  __int64 v30; // r13
  __int64 i; // r12
  _QWORD *v32; // rbp
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // [rsp+8h] [rbp-70h] BYREF
  __int64 *v36; // [rsp+10h] [rbp-68h]
  __int64 *v37; // [rsp+18h] [rbp-60h]
  _BYTE v38[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-40h]

  v9 = *a2;
  v10 = a2[1];
  v36 = a2;
  v11 = *(_QWORD *)(a1 + 112);
  v39 = __readfsqword(0x28u);
  v35 = v9 + v10;
  *(__m128 *)v38 = _mm_loadh_ps((const double *)&v35);
  v13 = qalloc_or_throw(24);
  *(_QWORD *)v13 = 0;
  *(_OWORD *)(v13 + 8) = 0;
  v14 = (__int64 *)v13;
  v37 = (__int64 *)v38;
  if ( !(unsigned __int8)sub_2BD560(v11, (_QWORD *)v13, (__int64)v38, nullptr) )
  {
    if ( v14 )
    {
      v29 = *v14;
      if ( *v14 )
      {
        v30 = v14[1];
        if ( v30 )
        {
          for ( i = 0; i != v30; ++i )
          {
            v32 = (_QWORD *)(v29 + 80 * i);
            clear_tinfo_t(v32 + 8);
            v33 = v32[5];
            if ( v33 )
            {
              v32[6] = 0;
              qfree(v33);
            }
            v34 = v32[2];
            if ( v34 )
            {
              v32[3] = 0;
              qfree(v34);
            }
            cleanup_argloc(v32);
            v29 = *v14;
          }
        }
        v14[1] = 0;
        qfree(v29);
      }
      qfree(v14);
    }
    return v39 - __readfsqword(0x28u);
  }
  if ( !v14 )
    return v39 - __readfsqword(0x28u);
  if ( v35 != *(_QWORD *)v38 )
    sub_66B20((__int64)"%a: ignored garbage at the end of the blob '%c'\n", 0.0, a3);
  v15 = *v14;
  v16 = *v14 + 80 * v14[1];
  if ( v16 != *v14 )
  {
    do
    {
      v17 = v15 + 64;
      v15 += 80;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 32LL))(a4, v17, a5, a6, 1);
    }
    while ( v16 != v15 );
  }
  memset(v38, 0, sizeof(v38));
  sub_2B58C0(v37, v14, nullptr);
  v18 = v36;
  v19 = *(_QWORD *)&v38[8];
  v20 = *(const void **)v38;
  v36[1] = 0;
  if ( v19 )
  {
    v21 = v19 - 1;
    if ( v21 )
    {
      sub_2AB490(v18, v20, v21);
      v20 = *(const void **)v38;
    }
  }
  if ( v20 )
  {
    *(_QWORD *)&v38[8] = 0;
    qfree(v20);
  }
  v22 = *v14;
  if ( *v14 )
  {
    v23 = v14[1];
    if ( v23 )
    {
      for ( j = 0; j != v23; ++j )
      {
        v25 = (_QWORD *)(v22 + 80 * j);
        clear_tinfo_t(v25 + 8);
        v26 = v25[5];
        if ( v26 )
        {
          v25[6] = 0;
          qfree(v26);
        }
        v27 = v25[2];
        if ( v27 )
        {
          v25[3] = 0;
          qfree(v27);
        }
        cleanup_argloc(v25);
        v22 = *v14;
      }
    }
    v14[1] = 0;
    qfree(v22);
  }
  return qfree(v14);
}
