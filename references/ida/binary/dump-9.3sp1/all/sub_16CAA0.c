__int64 __fastcall sub_16CAA0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v9; // rcx
  __int64 v10; // r14
  size_t v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  unsigned int v15; // r14d
  int v17; // ebp
  __int64 v18; // rsi
  unsigned int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r13
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // eax
  _BYTE *v26; // [rsp+0h] [rbp-128h]
  int v27; // [rsp+8h] [rbp-120h]
  size_t n; // [rsp+10h] [rbp-118h]
  _QWORD *v29; // [rsp+18h] [rbp-110h]
  _BYTE v30[12]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v31[2]; // [rsp+30h] [rbp-F8h] BYREF
  void *src; // [rsp+40h] [rbp-E8h]
  __int128 v33; // [rsp+48h] [rbp-E0h]
  __int64 v34[2]; // [rsp+60h] [rbp-C8h] BYREF
  void *v35; // [rsp+70h] [rbp-B8h]
  __int128 v36; // [rsp+78h] [rbp-B0h]
  _QWORD v37[3]; // [rsp+90h] [rbp-98h] BYREF
  char v38; // [rsp+A8h] [rbp-80h]
  __int64 v39; // [rsp+B0h] [rbp-78h]
  char v40; // [rsp+B8h] [rbp-70h]
  __int64 v41; // [rsp+C0h] [rbp-68h]
  __int64 v42; // [rsp+C8h] [rbp-60h]
  __int128 v43; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v44; // [rsp+E8h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( a4 == a5 )
    return 0;
  v31[0] = 0;
  v31[1] = 0;
  src = nullptr;
  v33 = 0;
  sub_127FE0(a1, (__int64)v31, a2, 0, a5, a6, a3, v27, n, (int)v29, *(__int64 *)v30);
  sub_64000(v34, (__int64)v31);
  v10 = v33;
  v35 = nullptr;
  v36 = 0;
  if ( (_QWORD)v33 )
  {
    n = 16 * v33;
    v35 = (void *)qalloc_or_throw(16 * v33, (__int64)v31, 16 * v33, v9);
    *((_QWORD *)&v36 + 1) = v10;
    memcpy(v35, src, n);
    *(_QWORD *)&v36 = v10;
  }
  v11 = sub_A9D90(a1, v34, a4, a5, 1u);
  if ( !v11 )
  {
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree((__int64)v35);
    }
    qfree(v34[0]);
    if ( src )
    {
      *(_QWORD *)&v33 = 0;
      qfree((__int64)src);
    }
    qfree(v31[0]);
    return 0;
  }
  n = v11;
  v15 = -1;
  if ( !(unsigned __int8)sub_1205A0(v26, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0, v12, v13, v14) )
  {
    v37[0] = off_4DDD78;
    v38 = 0;
    v37[1] = 0;
    v37[2] = 0;
    v39 = 0;
    v40 = 0;
    v41 = a2;
    v42 = 0;
    v29 = v37;
    v43 = 0;
    v17 = sub_129C50((_QWORD *)a1, v31, n, a5, (__int64)v37);
    if ( v17
      || (v18 = *(int *)(a2 + 4),
          v19 = *(_DWORD *)(a2 + 4),
          LODWORD(n) = sub_138140(*(_QWORD **)(a1 + 64), v18, 1),
          (_DWORD)n == -1) )
    {
      v15 = -1;
    }
    else
    {
      v22 = j__qalloc_or_throw(80, v18, v20, v21);
      v23 = n;
      *(_OWORD *)(v22 + 8) = 0;
      *(_QWORD *)(v22 + 40) = 0;
      *(_QWORD *)(v22 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v22 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v22 + 56) = 0;
      *(_QWORD *)(v22 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v22 + 72) = 0;
      n = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), _mm_cvtsi32_si128(v23)).m128i_u64[0];
      sub_1253A0(v22, (__int64)v26);
      *(_DWORD *)v30 = 1;
      *(_QWORD *)&v30[4] = n;
      sub_125180(v22 + 64, v30);
      sub_11CDA0((__int64)v30);
      sub_A3160(a1, (_QWORD *)v22, *(_QWORD *)(a4 + 16));
      if ( !(_QWORD)v43 )
      {
        if ( !under_debugger )
          sub_383060(50302);
        BUG();
      }
      v24 = 0;
      do
      {
        sub_125180(*(_QWORD *)(v42 + 8 * v24), (unsigned __int8 *)(v22 + 64));
        v24 = ++v17;
      }
      while ( v17 < (unsigned __int64)v43 );
      v25 = *(_DWORD *)(a1 + 24);
      v15 = v43;
      BYTE1(v25) &= ~2u;
      LOBYTE(v25) = v25 | 0x80;
      *(_DWORD *)(a1 + 24) = v25;
    }
    v37[0] = off_4DDD78;
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42);
    }
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree((__int64)v35);
  }
  qfree(v34[0]);
  if ( src )
  {
    *(_QWORD *)&v33 = 0;
    qfree((__int64)src);
  }
  qfree(v31[0]);
  return v15;
}
