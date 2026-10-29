__int64 __fastcall sub_216480(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  int *v5; // rsi
  int v6; // eax
  __int64 v8; // r12
  int v9; // edx
  __int64 v10; // r12
  int v11; // eax
  int v12; // edx
  size_t v13; // rdx
  size_t v14; // rcx
  __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rdi
  void *v18; // rax
  void *v19; // rax
  void *v20; // rax
  size_t na; // [rsp+0h] [rbp-A0h]
  size_t nb; // [rsp+0h] [rbp-A0h]
  size_t n; // [rsp+0h] [rbp-A0h]
  __m128i v24; // [rsp+8h] [rbp-98h] BYREF
  _QWORD *v25; // [rsp+18h] [rbp-88h] BYREF
  __int64 v26; // [rsp+20h] [rbp-80h]
  int v27; // [rsp+28h] [rbp-78h]
  int v28; // [rsp+38h] [rbp-68h] BYREF
  void *src; // [rsp+40h] [rbp-60h]
  __int128 v30; // [rsp+48h] [rbp-58h]
  unsigned __int64 v31; // [rsp+60h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  v4 = dbg;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = (int *)*(int *)(v4 + 64);
  sub_216180((int **)a1, v5);
  v25 = a2;
  v6 = 0;
  v26 = 0;
  v27 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(dbg + 64) <= v6 )
        return a1;
      v8 = v6;
      v9 = *(unsigned __int8 *)(*a2 + ((unsigned __int64)v6 >> 3));
      if ( _bittest(&v9, v6 & 7) )
        break;
      v10 = *(_QWORD *)a1 + 32LL * v6;
      v28 = -2;
      src = (void *)-1LL;
      v30 = 0;
      if ( (int *)v10 != &v28 )
      {
        v12 = *(_DWORD *)v10;
        v11 = -2;
        goto LABEL_21;
      }
LABEL_17:
      sub_20D150((__int64)&v25);
      v6 = v26;
      if ( (int)v26 < 0 )
        return a1;
    }
    v5 = (int *)&v25;
    sub_20D070((__int64)&v28, (int *)&v25);
    v10 = *(_QWORD *)a1 + 32 * v8;
    if ( (int *)v10 != &v28 )
    {
      v11 = v28;
      v12 = *(_DWORD *)v10;
      if ( v28 < -1 )
      {
LABEL_21:
        if ( v12 >= -1 )
        {
          v17 = *(_QWORD *)(v10 + 8);
          if ( v17 )
          {
            *(_QWORD *)(v10 + 16) = 0;
            qfree(v17, (const char *)v5);
            v11 = v28;
          }
        }
        *(_QWORD *)(v10 + 8) = src;
      }
      else if ( v12 < -1 )
      {
        *(_QWORD *)(v10 + 8) = 0;
        *(_OWORD *)(v10 + 16) = 0;
        if ( (_QWORD)v30 )
        {
          nb = v30;
          v18 = (void *)qalloc_or_throw(v30);
          *(_QWORD *)(v10 + 8) = v18;
          v5 = (int *)src;
          *(_QWORD *)(v10 + 24) = nb;
          memcpy(v18, v5, nb);
          v11 = v28;
          *(_QWORD *)(v10 + 16) = nb;
        }
      }
      else
      {
        v13 = v30;
        v14 = 0;
        if ( (_QWORD)v30 )
        {
          n = v30;
          v19 = (void *)qalloc_or_throw(v30);
          v5 = (int *)src;
          v20 = memcpy(v19, src, n);
          v13 = n;
          v14 = (size_t)v20;
        }
        v15 = *(_QWORD *)(v10 + 8);
        v16 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
        if ( v15 )
        {
          *(_QWORD *)(v10 + 16) = 0;
          na = v14;
          v24 = v16;
          qfree(v15, (const char *)v5);
          v16 = _mm_load_si128(&v24);
          v14 = na;
        }
        *(_QWORD *)(v10 + 8) = v14;
        v11 = v28;
        *(__m128i *)(v10 + 16) = v16;
      }
      *(_DWORD *)v10 = v11;
    }
    if ( v28 >= -1 && src )
    {
      *(_QWORD *)&v30 = 0;
      qfree(src, (const char *)v5);
    }
    goto LABEL_17;
  }
  return a1;
}
