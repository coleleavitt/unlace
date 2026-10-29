__int64 __fastcall sub_5F62E0(const __m128i *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 **v3; // rax
  __m128i v4; // xmm1
  __int64 *v5; // rbp
  __int64 v6; // r12
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  char *v11; // rsi
  __int64 v12; // rdx
  char *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 idati; // rax
  char *v17; // rdi
  unsigned int v18; // r12d
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // rbp
  char *v23; // rbx
  void *v24; // rdi
  void *v25; // rdi
  char *v26; // rdi
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v31; // [rsp+0h] [rbp-E0h]
  __int64 v32; // [rsp+0h] [rbp-E0h]
  _QWORD v33[2]; // [rsp+8h] [rbp-D8h] BYREF
  __int16 v34; // [rsp+18h] [rbp-C8h]
  __int64 (__fastcall **v35)(int, int, int, int, int, int, int, int, int, void *, __int64, int, __int64); // [rsp+28h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-B0h]
  void *ptr; // [rsp+38h] [rbp-A8h]
  __int128 v38; // [rsp+40h] [rbp-A0h]
  __m128i v39; // [rsp+50h] [rbp-90h]
  void *v40; // [rsp+68h] [rbp-78h] BYREF
  __int128 v41; // [rsp+70h] [rbp-70h]
  __int128 v42; // [rsp+80h] [rbp-60h]
  __int64 v43; // [rsp+90h] [rbp-50h]
  int v44; // [rsp+98h] [rbp-48h]
  unsigned __int64 v45; // [rsp+A0h] [rbp-40h]

  v2 = 0;
  v45 = __readfsqword(0x28u);
  v36 = a2;
  v35 = &off_2B2FF10;
  v3 = (__int64 **)a1->m128i_i64[0];
  v4 = _mm_unpackhi_epi64(_mm_loadu_si128(a1), _mm_loadu_si128(a1 + 1));
  ptr = nullptr;
  v43 = 0;
  v44 = 1;
  v38 = 0;
  v39 = v4;
  v41 = 0;
  v42 = 0;
  v40 = nullptr;
  v5 = *v3;
  v6 = (__int64)&(*v3)[(_QWORD)v3[1]];
  if ( (__int64 *)v6 == *v3 )
    goto LABEL_13;
  while ( 1 )
  {
    v8 = *v5;
    v9 = *(_QWORD *)(*v5 + 40);
    if ( (v9 & 0x200000) == 0 )
      break;
    if ( (*(_BYTE *)(v8 + 186) & 0x3F) != 0x3D )
    {
      if ( !under_debugger )
        interr(1556);
      goto LABEL_40;
    }
    v10 = v41;
    v11 = (char *)v40;
    if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 1) )
    {
      v31 = *v5;
      v40 = (void *)qvector_reserve(&v40, v40, v41 + 1, 144);
      v10 = v41;
      v11 = (char *)v40;
      v2 = 0;
      v8 = v31;
    }
    v12 = 144 * v10;
    v13 = &v11[v12];
    *(_OWORD *)v13 = v2;
    v14 = (__int64)&v11[v12 + 64];
    *((_QWORD *)v13 + 2) = 0;
    *((_QWORD *)v13 + 5) = 0;
    *((_QWORD *)v13 + 14) = (char *)&dword_0 + 1;
    *((_DWORD *)v13 + 30) = -1;
    *((_QWORD *)v13 + 16) = 0;
    v13[136] = 0;
    *(_OWORD *)(v13 + 24) = v2;
    *((_OWORD *)v13 + 3) = v2;
    *((_OWORD *)v13 + 4) = v2;
    v15 = *(_QWORD *)(v8 + 72);
    *(_QWORD *)&v41 = v41 + 1;
    if ( !v15 )
      goto LABEL_19;
    v33[1] = v15;
    idati = a2;
    v34 = 256;
    if ( !a2 )
    {
      v32 = (__int64)&v11[v12 + 64];
      idati = get_idati(v14, v11);
      v14 = v32;
    }
    v33[0] = idati;
    v2 = 0;
    if ( !(unsigned __int8)create_tinfo(v14, 61, 61, v33) )
      goto LABEL_19;
    ++v5;
    *((_DWORD *)v13 + 33) |= 0x20u;
    if ( (__int64 *)v6 == v5 )
      goto LABEL_11;
  }
  if ( (v9 & 0x400000) != 0 )
  {
    if ( !under_debugger )
      interr(1557);
LABEL_40:
    BUG();
  }
LABEL_11:
  if ( !(_QWORD)v41 )
    goto LABEL_12;
  v18 = sub_569960((__int64 *)&v40, *(double *)&v2, *(double *)v4.m128i_i64);
  if ( (_BYTE)v18 )
  {
    v19 = 0;
    v20 = 0;
    if ( !(_QWORD)v41 )
    {
LABEL_12:
      v17 = (char *)v40;
      v18 = 1;
      if ( !v40 )
      {
LABEL_13:
        v18 = 1;
        goto LABEL_29;
      }
      goto LABEL_28;
    }
    while ( !(unsigned int)sub_5F5F80(&v35, (__int64 *)((char *)v40 + v19 + 64), *(_QWORD *)((char *)v40 + v19), 0) )
    {
      ++v20;
      v19 += 144;
      if ( v20 >= (unsigned __int64)v41 )
        goto LABEL_20;
    }
  }
LABEL_19:
  v18 = 0;
LABEL_20:
  v17 = (char *)v40;
  if ( v40 )
  {
    v21 = v41;
    if ( (_QWORD)v41 )
    {
      v22 = 0;
      do
      {
        v23 = &v17[144 * v22];
        clear_tinfo_t(v23 + 64);
        v24 = *((void **)v23 + 5);
        if ( v24 )
        {
          *((_QWORD *)v23 + 6) = 0;
          qfree(v24);
        }
        v25 = *((void **)v23 + 2);
        if ( v25 )
        {
          *((_QWORD *)v23 + 3) = 0;
          qfree(v25);
        }
        ++v22;
        v17 = (char *)v40;
      }
      while ( v21 != v22 );
    }
LABEL_28:
    *(_QWORD *)&v41 = 0;
    qfree(v17);
  }
LABEL_29:
  v26 = (char *)ptr;
  v36 = 0;
  v35 = (__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, void *, __int64, int, __int64))&off_2BFB408;
  if ( ptr )
  {
    v27 = v38;
    if ( (_QWORD)v38 )
    {
      v28 = 0;
      do
      {
        v29 = v28++;
        clear_tinfo_t(&v26[16 * v29]);
        v26 = (char *)ptr;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v38 = 0;
    qfree(v26);
  }
  return v18;
}
