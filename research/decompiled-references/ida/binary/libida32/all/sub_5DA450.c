__int64 __fastcall sub_5DA450(const __m128i *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 **v3; // rax
  __m128i v4; // xmm1
  __int64 *v5; // r15
  __int64 v6; // rbp
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
  unsigned int v18; // ebp
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r12
  char *v22; // rbx
  void *v23; // rdi
  void *v24; // rdi
  char *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v30; // [rsp+0h] [rbp-E0h]
  __int64 v31; // [rsp+0h] [rbp-E0h]
  _QWORD v32[2]; // [rsp+8h] [rbp-D8h] BYREF
  __int16 v33; // [rsp+18h] [rbp-C8h]
  __int64 (__fastcall **v34)(int, int, int, int, int, int, int, int, int, void *, __int64, int, __int64); // [rsp+28h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-B0h]
  void *ptr; // [rsp+38h] [rbp-A8h]
  __int128 v37; // [rsp+40h] [rbp-A0h]
  __m128i v38; // [rsp+50h] [rbp-90h]
  void *v39; // [rsp+68h] [rbp-78h] BYREF
  __int128 v40; // [rsp+70h] [rbp-70h]
  __int128 v41; // [rsp+80h] [rbp-60h]
  __int64 v42; // [rsp+90h] [rbp-50h]
  int v43; // [rsp+98h] [rbp-48h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-40h]

  v2 = 0;
  v44 = __readfsqword(0x28u);
  v35 = a2;
  v34 = &off_2B05F50;
  v3 = (__int64 **)a1->m128i_i64[0];
  v4 = _mm_unpackhi_epi64(_mm_loadu_si128(a1), _mm_loadu_si128(a1 + 1));
  ptr = nullptr;
  v42 = 0;
  v43 = 1;
  v37 = 0;
  v38 = v4;
  v40 = 0;
  v41 = 0;
  v39 = nullptr;
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
    v10 = v40;
    v11 = (char *)v39;
    if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 + 1) )
    {
      v30 = *v5;
      v39 = (void *)qvector_reserve(&v39, v39, v40 + 1, 128);
      v10 = v40;
      v11 = (char *)v39;
      v2 = 0;
      v8 = v30;
    }
    v12 = v10 << 7;
    v13 = &v11[v12];
    *(_OWORD *)v13 = v2;
    v14 = (__int64)&v11[v12 + 64];
    *((_QWORD *)v13 + 2) = 0;
    *((_QWORD *)v13 + 5) = 0;
    *((_QWORD *)v13 + 12) = 1;
    *((_DWORD *)v13 + 26) = -1;
    *((_QWORD *)v13 + 14) = 0;
    v13[120] = 0;
    *(_OWORD *)(v13 + 24) = v2;
    *((_OWORD *)v13 + 3) = v2;
    *((_OWORD *)v13 + 4) = v2;
    v15 = *(_QWORD *)(v8 + 72);
    *(_QWORD *)&v40 = v40 + 1;
    if ( !v15 )
      goto LABEL_19;
    v32[1] = v15;
    idati = a2;
    v33 = 256;
    if ( !a2 )
    {
      v31 = (__int64)&v11[v12 + 64];
      idati = get_idati(v14, v11);
      v14 = v31;
    }
    v32[0] = idati;
    v2 = 0;
    if ( !(unsigned __int8)create_tinfo(v14, 61, 61, v32) )
      goto LABEL_19;
    ++v5;
    *((_DWORD *)v13 + 29) |= 0x20u;
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
  if ( !(_QWORD)v40 )
    goto LABEL_12;
  v18 = sub_5501A0((__int64 *)&v39, *(double *)&v2, *(double *)v4.m128i_i64);
  if ( (_BYTE)v18 )
  {
    v19 = 0;
    if ( !(_QWORD)v40 )
    {
LABEL_12:
      v17 = (char *)v39;
      v18 = 1;
      if ( !v39 )
      {
LABEL_13:
        v18 = 1;
        goto LABEL_29;
      }
      goto LABEL_28;
    }
    while ( !(unsigned int)sub_5DA100(&v34, (__int64 *)v39 + 16 * v19 + 8, *((_QWORD *)v39 + 16 * v19), 0) )
    {
      if ( ++v19 >= (unsigned __int64)v40 )
        goto LABEL_20;
    }
  }
LABEL_19:
  v18 = 0;
LABEL_20:
  v17 = (char *)v39;
  if ( v39 )
  {
    v20 = v40;
    if ( (_QWORD)v40 )
    {
      v21 = 0;
      do
      {
        v22 = &v17[128 * v21];
        clear_tinfo_t(v22 + 64);
        v23 = *((void **)v22 + 5);
        if ( v23 )
        {
          *((_QWORD *)v22 + 6) = 0;
          qfree(v23);
        }
        v24 = *((void **)v22 + 2);
        if ( v24 )
        {
          *((_QWORD *)v22 + 3) = 0;
          qfree(v24);
        }
        ++v21;
        v17 = (char *)v39;
      }
      while ( v20 != v21 );
    }
LABEL_28:
    *(_QWORD *)&v40 = 0;
    qfree(v17);
  }
LABEL_29:
  v25 = (char *)ptr;
  v35 = 0;
  v34 = (__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, void *, __int64, int, __int64))&off_2BD1408;
  if ( ptr )
  {
    v26 = v37;
    if ( (_QWORD)v37 )
    {
      v27 = 0;
      do
      {
        v28 = v27++;
        clear_tinfo_t(&v25[16 * v28]);
        v25 = (char *)ptr;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v37 = 0;
    qfree(v25);
  }
  return v18;
}

