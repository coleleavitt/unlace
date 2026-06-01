unsigned __int64 sub_40C290()
{
  __int64 i; // rax
  __int64 v1; // rdi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // r13
  __m128i v7; // xmm1
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __m128 v10; // xmm0
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __m128i v19; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+10h] [rbp-B0h]
  __int64 v21; // [rsp+18h] [rbp-A8h]
  __int64 v22; // [rsp+20h] [rbp-A0h]
  __int64 v23; // [rsp+28h] [rbp-98h]
  __int64 v24; // [rsp+30h] [rbp-90h]
  _QWORD v25[2]; // [rsp+38h] [rbp-88h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-78h]
  __int128 v27; // [rsp+50h] [rbp-70h]
  __int64 v28; // [rsp+68h] [rbp-58h] BYREF
  __int128 v29; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v27 = 0;
  v26 = 0;
  for ( i = netnode_supfirst(); i != -1; i = netnode_supnext() )
  {
    v29 = 0;
    v28 = 0;
    netnode_qsupstr();
    v2 = v29;
    if ( (unsigned __int64)v29 <= 1 )
    {
      v1 = v28;
LABEL_3:
      if ( v1 )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
      }
      continue;
    }
    v3 = v27;
    v4 = v26;
    v5 = v27 + 1;
    if ( (unsigned __int64)&v28 >= v26 && (unsigned __int64)&v28 < v26 + 24LL * *((_QWORD *)&v27 + 1) )
    {
      v6 = v28;
      v7 = _mm_loadl_epi64((const __m128i *)((char *)&v29 + 8));
      v28 = 0;
      v29 = 0;
      if ( *((_QWORD *)&v27 + 1) < v5 )
      {
        v19.m128i_i64[0] = v7.m128i_i64[0];
        v26 = qvector_reserve();
        v4 = v26;
        v7 = _mm_loadl_epi64(&v19);
        v3 = v27;
      }
      v8 = v4 + 24 * v3;
      *(_QWORD *)v8 = v6;
      *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64((__m128i)v2, v7);
      v1 = v28;
      *(_QWORD *)&v27 = v27 + 1;
      goto LABEL_3;
    }
    if ( *((_QWORD *)&v27 + 1) < v5 )
    {
      v26 = qvector_reserve();
      v4 = v26;
      v3 = v27;
    }
    v9 = v4 + 24 * v3;
    v10 = _mm_loadh_ps((const double *)&v29 + 1);
    *(_QWORD *)v9 = v28;
    *(__m128 *)(v9 + 8) = v10;
    *(_QWORD *)&v27 = v27 + 1;
  }
  netnode_kill();
  netnode_check();
  v19.m128i_i64[1] = 0;
  netnode_supset();
  v20 = 1;
  netnode_supset();
  v21 = 1;
  netnode_supset();
  v11 = v27;
  v22 = v27 + 1;
  netnode_supset();
  if ( v11 )
  {
    v23 = 1;
    netnode_supset();
    v24 = 0;
    netnode_supset();
    netnode_supset();
    v12 = 24;
    v13 = 1;
    v19.m128i_i64[0] = (__int64)v25;
    if ( v11 != 1 )
    {
      while ( 1 )
      {
        v25[0] = v13;
        netnode_supset();
        v25[1] = v13 + 1;
        netnode_supset();
        netnode_supset();
        v12 += 24;
        if ( v11 == v13 + 1 )
          break;
        ++v13;
      }
    }
    v28 = 0;
    netnode_supset();
  }
  v14 = v26;
  if ( v26 )
  {
    v15 = v27;
    if ( (_QWORD)v27 )
    {
      v16 = 0;
      do
      {
        v17 = (_QWORD *)(v14 + 24 * v16);
        if ( *v17 )
        {
          v17[1] = 0;
          qfree();
          v14 = v26;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  return v30 - __readfsqword(0x28u);
}
