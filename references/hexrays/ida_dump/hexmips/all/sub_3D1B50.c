__int64 __fastcall sub_3D1B50(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  _QWORD *v7; // r12
  __int64 v8; // rbx
  const char *v9; // rax
  int v10; // edx
  __int64 (__fastcall **v11)(); // rbp
  unsigned __int64 *v12; // r14
  int v13; // r10d
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r13
  int v18; // r10d
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r10d
  __m128 v23; // xmm0
  __m128 v24; // xmm0
  __int16 v25; // ax
  __int64 v26; // rcx
  __int64 result; // rax
  __int64 *v28; // rax
  int v29; // r10d
  __int64 v30; // r15
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // [rsp+0h] [rbp-118h]
  __int64 v34; // [rsp+0h] [rbp-118h]
  __int64 v35; // [rsp+8h] [rbp-110h]
  double v36[2]; // [rsp+10h] [rbp-108h] BYREF
  double v37; // [rsp+20h] [rbp-F8h] BYREF
  int v38; // [rsp+28h] [rbp-F0h]
  char v39; // [rsp+2Fh] [rbp-E9h]
  int v40; // [rsp+38h] [rbp-E0h] BYREF
  int v41; // [rsp+3Ch] [rbp-DCh] BYREF
  __int128 v42; // [rsp+40h] [rbp-D8h] BYREF
  int v43; // [rsp+50h] [rbp-C8h]
  __m128i v44; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+70h] [rbp-A8h]
  __int64 v46; // [rsp+78h] [rbp-A0h]
  __int64 v47; // [rsp+80h] [rbp-98h]
  __int64 v48; // [rsp+88h] [rbp-90h]
  __int64 (__fastcall **v49)(); // [rsp+90h] [rbp-88h] BYREF
  __int128 v50; // [rsp+98h] [rbp-80h]
  _BYTE v51[12]; // [rsp+A8h] [rbp-70h]
  __int128 v52; // [rsp+B8h] [rbp-60h]
  __int128 v53; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v54; // [rsp+D8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 80) )
    return 0;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = (_QWORD *)a1;
  if ( !v6 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(v6 + 60) - 1) > 1 )
    return 0;
  v8 = a2;
  v9 = (const char *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                       70,
                       *(_QWORD *)a1,
                       1,
                       &callui,
                       a5,
                       a6);
  v42 = -1;
  if ( !v9 )
    return 0;
  v10 = *(_DWORD *)(a1 + 40);
  v49 = nullptr;
  v50 = 0;
  if ( !(unsigned __int8)sub_3CF5C0((unsigned __int64)&v49, v9, v10) || (v11 = &v49[v50], v11 == v49) )
  {
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    return 0;
  }
  v12 = (unsigned __int64 *)v49;
  v13 = -1;
  do
  {
    v14 = *v12;
    v43 = v13;
    sub_3CDA90((_QWORD *)v6, (__int64)&v42, v14, 0.0);
    ++v12;
    v13 = v43;
  }
  while ( v11 != (__int64 (__fastcall **)())v12 );
  if ( v49 )
  {
    v38 = v43;
    *(_QWORD *)&v50 = 0;
    qfree(v49);
    v13 = v38;
  }
  if ( v13 < 0 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 64) + 64LL) <= v13 )
    return 0;
  v49 = off_4C97D0;
  if ( (unsigned int)(*(_DWORD *)(v6 + 60) - 1) > 1 )
    return 0;
  HIDWORD(v50) = v13;
  v38 = v13;
  v52 = -1;
  v53 = -1;
  LODWORD(v50) = 0;
  *(_QWORD *)((char *)&v50 + 4) = 3;
  *(_QWORD *)v51 = 0;
  *(_DWORD *)&v51[8] = 73;
  sub_3CFE30(a1, (__int64)&v49, v6, NAN);
  v40 = 0;
  v15 = *(_QWORD *)a1;
  v41 = 0;
  v16 = *(_QWORD *)((char *)&v50 + 4);
  v17 = *(_QWORD *)&v51[4];
  v37 = *((double *)&v53 + 1);
  callui(56, v15, 1, &v40, &v41, &callui, v33, v52, *((_QWORD *)&v52 + 1), v53);
  v18 = v38;
  if ( (_DWORD)v8 == 1 )
  {
    v28 = sub_3D1680(*(_QWORD **)(a1 + 48), *(_DWORD *)(a1 + 56), -1, 0);
    v29 = v38;
    v30 = (__int64)v28;
    v44.m128i_i64[0] = *(_QWORD *)(a1 + 64);
    v31 = *(_QWORD *)(a1 + 72);
    if ( v31 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(v31 + 8), 1u);
      else
        ++*(_DWORD *)(v31 + 8);
    }
    v38 = v29;
    v44.m128i_i64[1] = v31;
    v32 = sub_3D0B90(v30, &v44);
    v18 = v38;
    if ( v44.m128i_i64[1] )
    {
      v39 = v32;
      sub_3D07E0((volatile signed __int32 *)v44.m128i_i64[1]);
      v32 = v39;
      v18 = v38;
    }
    if ( v32 )
    {
      v7 = (_QWORD *)v30;
      goto LABEL_15;
    }
    sub_3D13E0(*(_QWORD *)(a1 + 48));
    return 0;
  }
LABEL_15:
  v38 = v18;
  v45 = 0;
  v46 = -1;
  v47 = 0;
  v48 = 0;
  v44 = 0;
  v19 = qalloc_or_throw(72);
  v22 = v38;
  *(_QWORD *)v19 = off_4C97D0;
  *(_DWORD *)(v19 + 8) = 0;
  v23 = _mm_loadh_ps(v36);
  *(_QWORD *)(v19 + 12) = v16;
  *(__m128 *)(v19 + 40) = v23;
  *(_DWORD *)(v19 + 20) = v22;
  v24 = _mm_loadh_ps(&v37);
  *(_DWORD *)(v19 + 24) = 0;
  *(_QWORD *)(v19 + 28) = v17;
  *(__m128 *)(v19 + 56) = v24;
  v48 = v19;
  v25 = v41;
  WORD2(v46) = 0;
  LODWORD(v46) = -1;
  LODWORD(v47) = 1;
  if ( v41 < 0 )
    v25 = 0;
  v26 = 0;
  HIWORD(v46) = v25;
  if ( (unsigned int)v8 <= 5 )
    v26 = dword_413EE0[v8];
  result = callui(149, *v7, &v44, v26, v20, v21, v34, v35, *(_QWORD *)&v36[0], *(_QWORD *)&v36[1]);
  if ( v48 )
  {
    LOBYTE(v35) = result;
    qfree(v48);
    return (unsigned __int8)v35;
  }
  return result;
}
