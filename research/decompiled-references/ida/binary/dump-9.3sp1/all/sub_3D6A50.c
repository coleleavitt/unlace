__int64 __fastcall sub_3D6A50(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __m128i *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r10d
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r10d
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  __int16 v27; // ax
  __int64 v28; // rcx
  __int64 result; // rax
  _QWORD *v30; // rax
  int v31; // r10d
  __int64 v32; // r15
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // [rsp+0h] [rbp-118h]
  __int64 v36; // [rsp+0h] [rbp-118h]
  __int64 v37; // [rsp+8h] [rbp-110h]
  double v38[2]; // [rsp+10h] [rbp-108h] BYREF
  double v39; // [rsp+20h] [rbp-F8h] BYREF
  int v40; // [rsp+28h] [rbp-F0h]
  char v41; // [rsp+2Fh] [rbp-E9h]
  int v42; // [rsp+38h] [rbp-E0h] BYREF
  int v43; // [rsp+3Ch] [rbp-DCh] BYREF
  __int128 v44; // [rsp+40h] [rbp-D8h] BYREF
  int v45; // [rsp+50h] [rbp-C8h]
  __m128i v46; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+70h] [rbp-A8h]
  __int64 v48; // [rsp+78h] [rbp-A0h]
  __int64 v49; // [rsp+80h] [rbp-98h]
  __int64 v50; // [rsp+88h] [rbp-90h]
  __int64 (__fastcall **v51)(); // [rsp+90h] [rbp-88h] BYREF
  __int128 v52; // [rsp+98h] [rbp-80h]
  _BYTE v53[12]; // [rsp+A8h] [rbp-70h]
  __int128 v54; // [rsp+B8h] [rbp-60h]
  __int128 v55; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v56; // [rsp+D8h] [rbp-40h]

  v56 = __readfsqword(0x28u);
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
  v44 = -1;
  if ( !v9 )
    return 0;
  v10 = *(_DWORD *)(a1 + 40);
  v51 = nullptr;
  v52 = 0;
  if ( !(unsigned __int8)sub_3D44C0((unsigned __int64)&v51, v9, v10) || (v11 = &v51[v52], v11 == v51) )
  {
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree((__int64)v51);
    }
    return 0;
  }
  v12 = (unsigned __int64 *)v51;
  v13 = -1;
  do
  {
    v14 = *v12;
    v45 = v13;
    sub_3D2990((_QWORD *)v6, (__int64 *)&v44, v14, 0.0);
    ++v12;
    v13 = v45;
  }
  while ( v11 != (__int64 (__fastcall **)())v12 );
  if ( v51 )
  {
    v40 = v45;
    *(_QWORD *)&v52 = 0;
    qfree((__int64)v51);
    v13 = v40;
  }
  if ( v13 < 0 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 64) + 64LL) <= v13 )
    return 0;
  v51 = off_4E90B0;
  if ( (unsigned int)(*(_DWORD *)(v6 + 60) - 1) > 1 )
    return 0;
  HIDWORD(v52) = v13;
  v40 = v13;
  v54 = -1;
  v55 = -1;
  LODWORD(v52) = 0;
  *(_QWORD *)((char *)&v52 + 4) = 3;
  *(_QWORD *)v53 = 0;
  *(_DWORD *)&v53[8] = 73;
  sub_3D4D30(a1, (__int64)&v51, v6, NAN);
  v42 = 0;
  v15 = *(__m128i **)a1;
  v43 = 0;
  v16 = *(_QWORD *)((char *)&v52 + 4);
  v17 = *(_QWORD *)&v53[4];
  v39 = *((double *)&v55 + 1);
  callui(56, v15, 1, &v42, &v43, &callui, v35, v54, *((_QWORD *)&v54 + 1), v55);
  v20 = v40;
  if ( (_DWORD)v8 == 1 )
  {
    v30 = sub_3D6580(*(_QWORD **)(a1 + 48), *(_DWORD *)(a1 + 56), -1, 0);
    v31 = v40;
    v32 = (__int64)v30;
    v46.m128i_i64[0] = *(_QWORD *)(a1 + 64);
    v33 = *(_QWORD *)(a1 + 72);
    if ( v33 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(v33 + 8), 1u);
      else
        ++*(_DWORD *)(v33 + 8);
    }
    v15 = &v46;
    v40 = v31;
    v46.m128i_i64[1] = v33;
    v34 = sub_3D5A90(v32, &v46);
    v20 = v40;
    if ( v46.m128i_i64[1] )
    {
      v41 = v34;
      sub_3D56E0((volatile signed __int32 *)v46.m128i_i64[1]);
      v34 = v41;
      v20 = v40;
    }
    if ( v34 )
    {
      v7 = (_QWORD *)v32;
      goto LABEL_15;
    }
    sub_3D62E0(*(_QWORD *)(a1 + 48));
    return 0;
  }
LABEL_15:
  v40 = v20;
  v47 = 0;
  v48 = -1;
  v49 = 0;
  v50 = 0;
  v46 = 0;
  v21 = qalloc_or_throw(72, (__int64)v15, v18, v19);
  v24 = v40;
  *(_QWORD *)v21 = off_4E90B0;
  *(_DWORD *)(v21 + 8) = 0;
  v25 = _mm_loadh_ps(v38);
  *(_QWORD *)(v21 + 12) = v16;
  *(__m128 *)(v21 + 40) = v25;
  *(_DWORD *)(v21 + 20) = v24;
  v26 = _mm_loadh_ps(&v39);
  *(_DWORD *)(v21 + 24) = 0;
  *(_QWORD *)(v21 + 28) = v17;
  *(__m128 *)(v21 + 56) = v26;
  v50 = v21;
  v27 = v43;
  WORD2(v48) = 0;
  LODWORD(v48) = -1;
  LODWORD(v49) = 1;
  if ( v43 < 0 )
    v27 = 0;
  v28 = 0;
  HIWORD(v48) = v27;
  if ( (unsigned int)v8 <= 5 )
    v28 = dword_4314E0[v8];
  result = callui(149, *v7, &v46, v28, v22, v23, v36, v37, *(_QWORD *)&v38[0], *(_QWORD *)&v38[1]);
  if ( v50 )
  {
    LOBYTE(v37) = result;
    qfree(v50);
    return (unsigned __int8)v37;
  }
  return result;
}
