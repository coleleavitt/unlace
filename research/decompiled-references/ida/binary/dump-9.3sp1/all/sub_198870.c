__int64 __fastcall sub_198870(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  char v21; // r13
  __int64 *v22; // r13
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r15
  __int64 *v25; // r13
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // r15
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v36; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v37; // [rsp+18h] [rbp-70h]
  __int64 v38; // [rsp+20h] [rbp-68h] BYREF
  __int128 v39; // [rsp+28h] [rbp-60h] BYREF
  __int128 v40; // [rsp+38h] [rbp-50h]
  unsigned __int64 v41; // [rsp+48h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v1 = a1[4];
  if ( *(_DWORD *)v1 != 2 )
    return 0;
  v35 = 0;
  v3 = v1 + 48;
  if ( *(_BYTE *)(v1 + 48) == 4 )
  {
    v4 = *(_QWORD *)(v1 + 56);
    if ( *(_DWORD *)v4 != 12 || !(unsigned __int8)sub_11FD80((char *)(v4 + 48), &v35, 0) )
      return 0;
    v3 = *(_QWORD *)(v1 + 56) + 32LL;
  }
  if ( !(unsigned __int8)sub_32F330(v3, &v38) )
    return 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1[5] + 16LL) + 24LL))(*(_QWORD *)(a1[5] + 16LL));
  v7 = a1[5];
  v8 = *(_QWORD *)(v7 + 120);
  v9 = v8 + (*(_QWORD *)(v7 + 128) << 7);
  if ( v8 == v9 )
    return 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v8 + 8) & 0x12) != 0 )
      goto LABEL_10;
    v10 = *(_QWORD *)(v8 + 72);
    if ( v10 + *(__int16 *)(v6 + 2) == v38 )
      break;
    if ( v38 == v10 + *(__int16 *)(v6 + 4) )
    {
      v11 = *(_QWORD *)(v8 + 56);
      goto LABEL_15;
    }
LABEL_10:
    v8 += 128;
    if ( v9 == v8 )
      return 0;
  }
  v11 = *(_QWORD *)(v8 + 32);
LABEL_15:
  if ( v11 != -1 )
  {
    v12 = v35 + v11;
    v13 = *(int *)(a1[4] + 68LL);
    v36 = v12 + *(_QWORD *)(a1[1] + 1440LL);
    v37 = v13;
    if ( (unsigned __int8)sub_317E70(a1 + 8, &v36, 0) )
    {
      v14 = v36;
      v15 = v37;
      v38 = 0;
      v39 = 0;
      if ( v36 + v37 - 1 >= v36 )
      {
        v38 = qvector_reserve((__int64)&v38, 0, 1, 16);
        *(__m128i *)(v38 + 16 * v39) = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v15);
        *(_QWORD *)&v39 = v39 + 1;
      }
      v16 = &v38;
      v21 = sub_317F40(a1 + 8, &v38);
      if ( v38 )
      {
        *(_QWORD *)&v39 = 0;
        qfree(v38);
      }
      if ( !v21 )
      {
        if ( !under_debugger )
          sub_383060(52050);
        BUG();
      }
      v22 = (__int64 *)a1[6];
      if ( v22 )
      {
        v23 = v36;
        v24 = v37;
        v38 = 0;
        v39 = 0u;
        v40 = 0;
        if ( v36 + v37 - 1 >= v36 )
        {
          *((_QWORD *)&v39 + 1) = qvector_reserve((__int64)&v39 + 8, 0, 1, 16);
          v17 = 16 * v40;
          *(__m128i *)(*((_QWORD *)&v39 + 1) + 16 * v40) = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v24);
          *(_QWORD *)&v40 = v40 + 1;
        }
        sub_64640(v22, &v38, v17, v18, v19, v20);
        v16 = (__int64 *)&v39 + 1;
        sub_317C60(v22 + 2, (char *)&v39 + 8);
        if ( *((_QWORD *)&v39 + 1) )
        {
          *(_QWORD *)&v40 = 0;
          qfree(*((__int64 *)&v39 + 1));
        }
        qfree(v38);
      }
      v25 = (__int64 *)a1[7];
      if ( v25 )
      {
        v26 = v36;
        v27 = v37;
        v38 = 0;
        v39 = 0u;
        v40 = 0;
        if ( v36 + v37 - 1 >= v36 )
        {
          *((_QWORD *)&v39 + 1) = qvector_reserve((__int64)&v39 + 8, 0, 1, 16);
          v17 = 16 * v40;
          *(__m128i *)(*((_QWORD *)&v39 + 1) + 16 * v40) = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v27);
          *(_QWORD *)&v40 = v40 + 1;
        }
        sub_64640(v25, &v38, v17, v18, v19, v20);
        v16 = (__int64 *)&v39 + 1;
        sub_317C60(v25 + 2, (char *)&v39 + 8);
        if ( *((_QWORD *)&v39 + 1) )
        {
          *(_QWORD *)&v40 = 0;
          qfree(*((__int64 *)&v39 + 1));
        }
        qfree(v38);
      }
      *(_DWORD *)a1[4] = 4;
      v28 = a1[4];
      v29 = a1[1];
      sub_11CDA0(v28 + 32);
      *(_BYTE *)(v28 + 32) = 5;
      v32 = (_QWORD *)j__qalloc_or_throw(16, (__int64)v16, v30, v31);
      *v32 = v29;
      v32[1] = v12;
      *(_QWORD *)(v28 + 40) = v32;
      *(_DWORD *)(a1[4] + 36LL) = *(_DWORD *)(a1[4] + 68LL);
      sub_11CDA0(a1[4] + 48LL);
      v33 = a1[2];
      v34 = *(_DWORD *)(v33 + 24);
      BYTE1(v34) &= ~2u;
      LOBYTE(v34) = v34 | 0x80;
      *(_DWORD *)(v33 + 24) = v34;
    }
  }
  return 0;
}
