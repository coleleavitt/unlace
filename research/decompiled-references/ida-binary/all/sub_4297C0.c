__int64 __fastcall sub_4297C0(unsigned int *a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdx
  const char *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  size_t v10; // r8
  void *v11; // r13
  __int64 v12; // rax
  int v13; // r11d
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  int v16; // r10d
  char v17; // r9
  char *v18; // rax
  __int64 v19; // rax
  size_t v20; // r13
  __int64 (*v21)(); // r14
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // rdi
  char v28; // r13
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-C0h]
  int na; // [rsp+8h] [rbp-B8h]
  size_t n; // [rsp+8h] [rbp-B8h]
  int v33; // [rsp+18h] [rbp-A8h]
  unsigned __int8 v34; // [rsp+1Eh] [rbp-A2h]
  char v35; // [rsp+1Fh] [rbp-A1h]
  size_t v36; // [rsp+20h] [rbp-A0h]
  __int64 v37; // [rsp+28h] [rbp-98h] BYREF
  __int128 v38; // [rsp+30h] [rbp-90h]
  void *v39; // [rsp+48h] [rbp-78h] BYREF
  __int128 v40; // [rsp+50h] [rbp-70h]
  int v41; // [rsp+60h] [rbp-60h]
  __int64 v42; // [rsp+64h] [rbp-5Ch]
  int v43; // [rsp+6Ch] [rbp-54h]
  char v44; // [rsp+70h] [rbp-50h]
  unsigned __int64 v45; // [rsp+80h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a3 + 8);
  v38 = 0;
  v37 = 0;
  if ( v6 )
    v37 = qvector_reserve(&v37, 0, v6, 48);
  v7 = (const char *)&v37;
  v34 = (*(__int64 (__fastcall **)(unsigned int *, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 1192LL))(
          a1,
          &v37,
          a3,
          a1[633]);
  v8 = v37;
  if ( v34 )
  {
    v30 = v37 + 48 * v38;
    if ( v30 != v37 )
    {
      v9 = v37;
      while ( 1 )
      {
        v19 = *(_QWORD *)a1;
        v39 = nullptr;
        v40 = 0;
        v20 = *(_QWORD *)(v9 + 8);
        v21 = *(__int64 (**)())(v19 + 1216);
        if ( v20 )
        {
          v39 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 8));
          *((_QWORD *)&v40 + 1) = v20;
          v7 = *(const char **)v9;
          memcpy(v39, *(const void **)v9, v20);
          *(_QWORD *)&v40 = v20;
        }
        v41 = *(_DWORD *)(v9 + 24);
        v42 = *(_QWORD *)(v9 + 28);
        v43 = *(_DWORD *)(v9 + 36);
        v44 = *(_BYTE *)(v9 + 40);
        if ( v21 == sub_4290F0 )
        {
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree(v39, v7);
          }
        }
        else
        {
          v7 = (const char *)&v39;
          v28 = ((__int64 (__fastcall *)(unsigned int *, void **))v21)(a1, &v39);
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree(v39, (const char *)&v39);
          }
          if ( !v28 )
            goto LABEL_15;
        }
        if ( !a2 )
        {
          v8 = v37;
          goto LABEL_21;
        }
        v10 = *(_QWORD *)(v9 + 8);
        v11 = nullptr;
        if ( v10 )
        {
          n = *(_QWORD *)(v9 + 8);
          v11 = (void *)qalloc_or_throw(n);
          memcpy(v11, *(const void **)v9, n);
          v10 = n;
        }
        v12 = a2[1];
        v13 = *(_DWORD *)(v9 + 24);
        v14 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 28));
        v15 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 32));
        v16 = *(_DWORD *)(v9 + 36);
        v17 = *(_BYTE *)(v9 + 40);
        v7 = (const char *)*a2;
        if ( a2[2] < (unsigned __int64)(v12 + 1) )
        {
          v36 = v10;
          v35 = *(_BYTE *)(v9 + 40);
          v33 = *(_DWORD *)(v9 + 36);
          na = *(_DWORD *)(v9 + 24);
          v29 = qvector_reserve(a2, v7, v12 + 1, 48);
          *a2 = v29;
          v7 = (const char *)v29;
          v10 = v36;
          v12 = a2[1];
          v17 = v35;
          v16 = v33;
          v15 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v15));
          v14 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v14));
          v13 = na;
        }
        v18 = (char *)&v7[48 * v12];
        *(_QWORD *)v18 = v11;
        *((_DWORD *)v18 + 6) = v13;
        *((_DWORD *)v18 + 9) = v16;
        v18[40] = v17;
        *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
        *(_QWORD *)(v18 + 28) = _mm_unpacklo_epi32(v14, v15).m128i_u64[0];
        ++a2[1];
LABEL_15:
        v9 += 48;
        if ( v30 == v9 )
        {
          v8 = v37;
          break;
        }
      }
    }
    if ( a2 )
      v34 = a2[1] != 0;
    else
      v34 = 0;
  }
LABEL_21:
  if ( v8 )
  {
    v22 = v38;
    if ( (_QWORD)v38 )
    {
      v23 = 0;
      v24 = v8;
      do
      {
        v25 = (__int64 *)(v24 + 48 * v23);
        v26 = *v25;
        if ( *v25 )
        {
          v25[1] = 0;
          qfree(v26, v7);
          v24 = v37;
        }
        ++v23;
      }
      while ( v22 != v23 );
      v8 = v24;
    }
    *(_QWORD *)&v38 = 0;
    qfree(v8, v7);
  }
  return v34;
}
