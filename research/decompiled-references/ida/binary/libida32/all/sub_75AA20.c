__int64 __fastcall sub_75AA20(__int64 *a1, unsigned int a2, char *a3, unsigned int *a4)
{
  bool v6; // zf
  unsigned __int64 v8; // rax
  __int64 result; // rax
  char *v10; // r13
  char *v11; // rax
  __int64 v12; // r15
  _QWORD *v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _BYTE *v18; // rax
  _BYTE *v19; // rcx
  int v20; // r13d
  __int64 v21; // r13
  unsigned __int64 v22; // rdi
  __int64 v23; // r14
  _QWORD *v24; // r8
  int v25; // eax
  __int64 v26; // r14
  char *v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  unsigned int v32; // eax
  _QWORD *v33; // r13
  void *v34; // rdi
  _QWORD *v35; // r13
  void *v36; // rdi
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r13
  char v41; // al
  __int64 v42; // rax
  void (*v43)(); // r10
  const char *v44; // rdx
  const char *v45; // r15
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // [rsp+20h] [rbp-B0h]
  __int64 v49; // [rsp+28h] [rbp-A8h]
  _QWORD *v50; // [rsp+30h] [rbp-A0h]
  __int64 v51; // [rsp+30h] [rbp-A0h]
  _QWORD *v52; // [rsp+30h] [rbp-A0h]
  unsigned __int8 v54; // [rsp+3Ch] [rbp-94h]
  _BYTE v55[11]; // [rsp+44h] [rbp-8Ch] BYREF
  char v56; // [rsp+4Fh] [rbp-81h]
  unsigned int v57; // [rsp+50h] [rbp-80h] BYREF
  __int64 v58; // [rsp+58h] [rbp-78h]
  char *s; // [rsp+60h] [rbp-70h] BYREF
  __m128i v60; // [rsp+68h] [rbp-68h]
  void *ptr; // [rsp+80h] [rbp-50h] BYREF
  __int128 v62; // [rsp+88h] [rbp-48h]
  unsigned __int64 v63; // [rsp+98h] [rbp-38h]

  v6 = a1[10] == 0;
  v63 = __readfsqword(0x28u);
  if ( v6 && (unsigned __int64)a1[7] > 0xFFFF )
    return 8;
  v8 = sub_756AE0((__int64)a1, a2, a3);
  *(_DWORD *)&v55[7] = v8;
  v56 = BYTE4(v8);
  if ( (_DWORD)v8 != -1 )
  {
    if ( a4 )
    {
      if ( !v56 )
        LODWORD(v8) = -1;
      *a4 = v8;
    }
    return 1;
  }
  sub_755A50((__int64 *)&s, a3);
  v10 = s;
  if ( v60.m128i_i64[0] <= 1uLL )
  {
    result = 5;
  }
  else
  {
    v11 = strchr(s, 47);
    if ( v11 && v11 - v10 != -1 )
    {
      if ( !under_debugger )
        interr(3426);
      BUG();
    }
    if ( *v10 != 46 )
    {
LABEL_14:
      v48 = a1[10];
      if ( v48 )
      {
        v12 = *(_QWORD *)(a1[9] + 8 * v48 - 8);
        a1[10] = v48 - 1;
      }
      else
      {
        LODWORD(v12) = a1[7];
        sub_75A6B0(a1 + 6, a1[7] + 1);
        v46 = a1[6] + 176 * a1[7];
        *(_OWORD *)(v46 + 8) = 0;
        *(_OWORD *)(v46 + 32) = 0;
        *(_QWORD *)(v46 + 48) = v46 + 96;
        *(_QWORD *)v46 = 0;
        *(_QWORD *)(v46 + 24) = 0;
        *(_QWORD *)(v46 + 56) = 1;
        *(_QWORD *)(v46 + 64) = 0;
        *(_QWORD *)(v46 + 72) = 0;
        *(_QWORD *)(v46 + 88) = 0;
        *(_QWORD *)(v46 + 96) = 0;
        *(_QWORD *)(v46 + 104) = v46 + 152;
        *(_QWORD *)(v46 + 112) = 1;
        *(_QWORD *)(v46 + 120) = 0;
        *(_QWORD *)(v46 + 128) = 0;
        *(_QWORD *)(v46 + 144) = 0;
        *(_QWORD *)(v46 + 152) = 0;
        *(_DWORD *)(v46 + 160) = 0;
        *(_QWORD *)(v46 + 164) = 0;
        *(_DWORD *)(v46 + 80) = 1065353216;
        *(_DWORD *)(v46 + 136) = 1065353216;
        ++a1[7];
      }
      v13 = (_QWORD *)(a1[6] + 176LL * a2);
      v14 = v13[4];
      v15 = v13[3];
      v16 = 5 * v14;
      v17 = v15 + 5 * v14;
      if ( v15 == v17 )
      {
        v49 = 0;
        v21 = 0;
      }
      else
      {
        v18 = (_BYTE *)(v15 + 4);
        v19 = (_BYTE *)(v17 + 4);
        v20 = 0;
        do
        {
          if ( !*v18 )
            break;
          v18 += 5;
          ++v20;
        }
        while ( v19 != v18 );
        v49 = v20;
        v21 = 5LL * v20;
      }
      v22 = v14 + 1;
      if ( v13[5] < v22 )
      {
        v52 = v13;
        v47 = qvector_reserve(v13 + 3, v15, v22, 5);
        v13 = v52;
        v15 = v47;
        v52[3] = v47;
        v16 = 5LL * v52[4];
      }
      v23 = v15 + v21;
      v50 = v13;
      memmove((void *)(v15 + v21 + 5), (const void *)(v15 + v21), v16 - v21);
      v24 = v50;
      *(_DWORD *)v23 = v12;
      *(_BYTE *)(v23 + 4) = 1;
      v25 = *((_DWORD *)v50 + 41);
      ++v50[4];
      *(_DWORD *)v55 = v12;
      if ( (v25 & 4) == 0 )
      {
        sub_753C70(v50 + 13, (unsigned int *)v55);
        v24 = v50;
        v25 = *((_DWORD *)v50 + 41);
      }
      *((_DWORD *)v24 + 41) = v25 | 1;
      v26 = a1[6] + 176LL * (unsigned int)v12;
      v27 = *(char **)v26;
      v28 = _mm_loadu_si128((const __m128i *)(v26 + 8));
      *(_QWORD *)v26 = s;
      s = v27;
      *(_QWORD *)(v26 + 8) = v60.m128i_i64[0];
      v29 = v60.m128i_i64[1];
      *(_DWORD *)(v26 + 160) = a2;
      v30 = *(_DWORD *)(v26 + 164);
      *(_QWORD *)(v26 + 16) = v29;
      v31 = a1[5];
      v60 = v28;
      if ( (*(_BYTE *)(v31 + 8) & 4) != 0 && (*((_BYTE *)v24 + 164) & 4) != 0 )
      {
        if ( (v30 & 4) == 0 )
        {
          v32 = v30 | 4;
          goto LABEL_29;
        }
      }
      else if ( (v30 & 4) != 0 )
      {
        v32 = v30 & 0xFFFFFFFB;
LABEL_29:
        v33 = *(_QWORD **)(v26 + 120);
        *(_DWORD *)(v26 + 164) = v32;
        while ( v33 )
        {
          v34 = v33;
          v33 = (_QWORD *)*v33;
          operator delete(v34, 0x10u);
        }
        memset(*(void **)(v26 + 104), 0, 8LL * *(_QWORD *)(v26 + 112));
        v35 = *(_QWORD **)(v26 + 64);
        *(_QWORD *)(v26 + 128) = 0;
        *(_QWORD *)(v26 + 120) = 0;
        while ( v35 )
        {
          v36 = v35;
          v35 = (_QWORD *)*v35;
          operator delete(v36, 0x10u);
        }
        memset(*(void **)(v26 + 48), 0, 8LL * *(_QWORD *)(v26 + 56));
        v37 = *(_DWORD *)(v26 + 164);
        *(_QWORD *)(v26 + 72) = 0;
        *(_QWORD *)(v26 + 64) = 0;
        if ( (v37 & 4) == 0 )
        {
          v38 = *(_QWORD *)(v26 + 24);
          v39 = 5LL * *(_QWORD *)(v26 + 32);
          v51 = v38 + v39;
          if ( v38 != v38 + v39 )
          {
            v40 = *(_QWORD *)(v26 + 24);
            do
            {
              if ( *(_BYTE *)(v40 + 4) )
              {
                LODWORD(ptr) = *(_DWORD *)v40;
                sub_753C70((__int64 *)(v26 + 104), (unsigned int *)&ptr);
              }
              else
              {
                v57 = *(_DWORD *)v40;
                sub_753C70((__int64 *)(v26 + 48), &v57);
              }
              v40 += 5;
            }
            while ( v40 != v51 );
            v37 = *(_DWORD *)(v26 + 164);
          }
        }
        v30 = v37 | 1;
      }
      v42 = v30 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v26 + 164) = v42;
      v43 = *(void (**)())(*a1 + 96);
      if ( v43 != nullsub_214 )
        ((void (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD, bool, __int64, __int64, __int64))v43)(
          a1,
          a2,
          v49,
          (unsigned int)v12,
          v48 == 0,
          v26,
          v42,
          1);
      if ( a4 )
        *a4 = v12;
      ptr = nullptr;
      v57 = a2;
      v62 = 0;
      v58 = v49;
      sub_758660((__int64)a1, (__int64)&ptr, &v57, 0);
      v44 = haystack;
      if ( (_QWORD)v62 )
        v44 = (const char *)ptr;
      v45 = v44;
      sub_396090(0x41u, a1[4]);
      sub_754740((__int64)a1, 65, v45);
      if ( ptr )
        qfree(ptr);
      v10 = s;
      result = 0;
      goto LABEL_57;
    }
    v41 = v10[1];
    if ( v41 )
    {
      if ( v41 != 46 || v10[2] )
        goto LABEL_14;
      if ( a4 )
        *a4 = *(_DWORD *)(a1[6] + 176LL * a2 + 160);
    }
    else if ( a4 )
    {
      *a4 = a2;
    }
    result = 1;
  }
LABEL_57:
  if ( v10 )
  {
    v54 = result;
    v60.m128i_i64[0] = 0;
    qfree(v10);
    return v54;
  }
  return result;
}

