__int64 __fastcall sub_77AE60(__int64 *a1, unsigned __int64 a2, char *a3, _QWORD *a4)
{
  bool v6; // zf
  __int64 v8; // rax
  char v9; // dl
  __int64 result; // rax
  char *v11; // r13
  char *v12; // rax
  __int64 v13; // r15
  _QWORD *v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _BYTE *v19; // rax
  _BYTE *v20; // rcx
  int v21; // r13d
  __int64 v22; // r13
  unsigned __int64 v23; // rdi
  __int64 v24; // r14
  _QWORD *v25; // r8
  int v26; // eax
  char *v27; // rdx
  __int64 v28; // r14
  char *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  unsigned int v34; // eax
  _QWORD *v35; // r13
  void *v36; // rdi
  _QWORD *v37; // r13
  void *v38; // rdi
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r13
  char v43; // al
  __int64 v44; // rax
  void (*v45)(); // r10
  const char *v46; // rdx
  const char *v47; // r15
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // [rsp+20h] [rbp-C0h]
  unsigned __int64 v51; // [rsp+28h] [rbp-B8h]
  _QWORD *v52; // [rsp+30h] [rbp-B0h]
  __int64 v53; // [rsp+30h] [rbp-B0h]
  _QWORD *v54; // [rsp+30h] [rbp-B0h]
  unsigned __int8 v56; // [rsp+38h] [rbp-A8h]
  _BYTE v57[24]; // [rsp+48h] [rbp-98h] BYREF
  unsigned __int64 v58[2]; // [rsp+60h] [rbp-80h] BYREF
  char *s; // [rsp+70h] [rbp-70h] BYREF
  __m128i v60; // [rsp+78h] [rbp-68h]
  void *ptr; // [rsp+90h] [rbp-50h] BYREF
  __int128 v62; // [rsp+98h] [rbp-48h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-38h]

  v6 = a1[10] == 0;
  v63 = __readfsqword(0x28u);
  if ( v6 && (unsigned __int64)a1[7] > 0xFFFF )
    return 8;
  v8 = sub_777000((__int64)a1, a2, a3);
  *(_QWORD *)&v57[15] = v8;
  v57[23] = v9;
  if ( v8 != -1 )
  {
    if ( a4 )
    {
      if ( !v9 )
        v8 = -1;
      *a4 = v8;
    }
    return 1;
  }
  sub_775F70((__int64 *)&s, a3);
  v11 = s;
  if ( v60.m128i_i64[0] <= 1uLL )
  {
    result = 5;
  }
  else
  {
    v12 = strchr(s, 47);
    if ( v12 && v12 - v11 != -1 )
    {
      if ( !under_debugger )
        interr(3426);
      BUG();
    }
    if ( *v11 != 46 )
    {
LABEL_14:
      v50 = a1[10];
      if ( v50 )
      {
        v13 = *(_QWORD *)(a1[9] + 8 * v50 - 8);
        a1[10] = v50 - 1;
      }
      else
      {
        v13 = a1[7];
        sub_77AB00(a1 + 6, v13 + 1);
        v48 = a1[6] + 176 * a1[7];
        *(_OWORD *)(v48 + 8) = 0;
        *(_OWORD *)(v48 + 32) = 0;
        *(_QWORD *)(v48 + 48) = v48 + 96;
        *(_QWORD *)v48 = 0;
        *(_QWORD *)(v48 + 24) = 0;
        *(_QWORD *)(v48 + 56) = 1;
        *(_QWORD *)(v48 + 64) = 0;
        *(_QWORD *)(v48 + 72) = 0;
        *(_QWORD *)(v48 + 88) = 0;
        *(_QWORD *)(v48 + 96) = 0;
        *(_QWORD *)(v48 + 104) = v48 + 152;
        *(_QWORD *)(v48 + 112) = 1;
        *(_QWORD *)(v48 + 120) = 0;
        *(_QWORD *)(v48 + 128) = 0;
        *(_QWORD *)(v48 + 144) = 0;
        *(_QWORD *)(v48 + 152) = 0;
        *(_QWORD *)(v48 + 160) = 0;
        *(_QWORD *)(v48 + 168) = 0;
        *(_DWORD *)(v48 + 80) = 1065353216;
        *(_DWORD *)(v48 + 136) = 1065353216;
        ++a1[7];
      }
      v14 = (_QWORD *)(a1[6] + 176 * a2);
      v15 = v14[4];
      v16 = v14[3];
      v17 = 9 * v15;
      v18 = v16 + 9 * v15;
      if ( v16 == v18 )
      {
        v51 = 0;
        v22 = 0;
      }
      else
      {
        v19 = (_BYTE *)(v16 + 8);
        v20 = (_BYTE *)(v18 + 8);
        v21 = 0;
        do
        {
          if ( !*v19 )
            break;
          v19 += 9;
          ++v21;
        }
        while ( v20 != v19 );
        v51 = v21;
        v22 = 9LL * v21;
      }
      v23 = v15 + 1;
      if ( v14[5] < v23 )
      {
        v54 = v14;
        v49 = qvector_reserve(v14 + 3, v16, v23, 9);
        v14 = v54;
        v16 = v49;
        v54[3] = v49;
        v17 = 9LL * v54[4];
      }
      v24 = v16 + v22;
      v52 = v14;
      memmove((void *)(v16 + v22 + 9), (const void *)(v16 + v22), v17 - v22);
      v25 = v52;
      *(_QWORD *)v24 = v13;
      *(_BYTE *)(v24 + 8) = 1;
      v26 = *((_DWORD *)v52 + 42);
      ++v52[4];
      *(_QWORD *)v57 = v13;
      if ( (v26 & 4) == 0 )
      {
        sub_7740F0(v52 + 13, (unsigned __int64 *)v57);
        v25 = v52;
        v26 = *((_DWORD *)v52 + 42);
      }
      v27 = s;
      *((_DWORD *)v25 + 42) = v26 | 1;
      v28 = a1[6] + 176 * v13;
      v29 = *(char **)v28;
      v30 = _mm_loadu_si128((const __m128i *)(v28 + 8));
      *(_QWORD *)v28 = v27;
      s = v29;
      *(_QWORD *)(v28 + 8) = v60.m128i_i64[0];
      v31 = v60.m128i_i64[1];
      *(_QWORD *)(v28 + 160) = a2;
      v32 = *(_DWORD *)(v28 + 168);
      *(_QWORD *)(v28 + 16) = v31;
      v33 = a1[5];
      v60 = v30;
      if ( (*(_BYTE *)(v33 + 8) & 4) != 0 && (v25[21] & 4) != 0 )
      {
        if ( (v32 & 4) == 0 )
        {
          v34 = v32 | 4;
          goto LABEL_29;
        }
      }
      else if ( (v32 & 4) != 0 )
      {
        v34 = v32 & 0xFFFFFFFB;
LABEL_29:
        v35 = *(_QWORD **)(v28 + 120);
        *(_DWORD *)(v28 + 168) = v34;
        while ( v35 )
        {
          v36 = v35;
          v35 = (_QWORD *)*v35;
          operator delete(v36, 0x10u);
        }
        memset(*(void **)(v28 + 104), 0, 8LL * *(_QWORD *)(v28 + 112));
        v37 = *(_QWORD **)(v28 + 64);
        *(_QWORD *)(v28 + 128) = 0;
        *(_QWORD *)(v28 + 120) = 0;
        while ( v37 )
        {
          v38 = v37;
          v37 = (_QWORD *)*v37;
          operator delete(v38, 0x10u);
        }
        memset(*(void **)(v28 + 48), 0, 8LL * *(_QWORD *)(v28 + 56));
        v39 = *(_DWORD *)(v28 + 168);
        *(_QWORD *)(v28 + 72) = 0;
        *(_QWORD *)(v28 + 64) = 0;
        if ( (v39 & 4) == 0 )
        {
          v40 = *(_QWORD *)(v28 + 24);
          v41 = 9LL * *(_QWORD *)(v28 + 32);
          v53 = v40 + v41;
          if ( v40 != v40 + v41 )
          {
            v42 = *(_QWORD *)(v28 + 24);
            do
            {
              if ( *(_BYTE *)(v42 + 8) )
              {
                ptr = *(void **)v42;
                sub_7740F0((__int64 *)(v28 + 104), (unsigned __int64 *)&ptr);
              }
              else
              {
                v58[0] = *(_QWORD *)v42;
                sub_7740F0((__int64 *)(v28 + 48), v58);
              }
              v42 += 9;
            }
            while ( v53 != v42 );
            v39 = *(_DWORD *)(v28 + 168);
          }
        }
        v32 = v39 | 1;
      }
      v44 = v32 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v28 + 168) = v44;
      v45 = *(void (**)())(*a1 + 96);
      if ( v45 != nullsub_235 )
        ((void (__fastcall *)(__int64 *, unsigned __int64, unsigned __int64, __int64, bool, __int64, __int64, __int64))v45)(
          a1,
          a2,
          v51,
          v13,
          v50 == 0,
          v28,
          v44,
          1);
      if ( a4 )
        *a4 = v13;
      ptr = nullptr;
      v58[0] = a2;
      v62 = 0;
      v58[1] = v51;
      sub_778B10((__int64)a1, (__int64)&ptr, v58, 0);
      v46 = haystack;
      if ( (_QWORD)v62 )
        v46 = (const char *)ptr;
      v47 = v46;
      sub_39ADA0(0x41u, a1[4]);
      sub_774BB0((__int64)a1, 65, v47);
      if ( ptr )
        qfree(ptr);
      v11 = s;
      result = 0;
      goto LABEL_57;
    }
    v43 = v11[1];
    if ( v43 )
    {
      if ( v43 != 46 || v11[2] )
        goto LABEL_14;
      if ( a4 )
        *a4 = *(_QWORD *)(a1[6] + 176 * a2 + 160);
    }
    else if ( a4 )
    {
      *a4 = a2;
    }
    result = 1;
  }
LABEL_57:
  if ( v11 )
  {
    v56 = result;
    v60.m128i_i64[0] = 0;
    qfree(v11);
    return v56;
  }
  return result;
}
