__int64 __fastcall sub_B6D020(__int64 a1, __m128i *a2, void *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // r15
  int v9; // r9d
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // zf
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 **v17; // rax
  __int64 *v18; // rbx
  __int64 v21; // rbp
  __int16 v22; // ax
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  __m128i *v25; // rdi
  __int64 v26; // rdx
  _BYTE *v27; // rsi
  __int64 v28; // rdx
  _BYTE *v29; // rdi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // eax
  size_t v34; // rdx
  _QWORD *v35; // r14
  unsigned int *v36; // rax
  __int64 v37; // rdx
  size_t v38; // rdx
  __int64 v39; // [rsp+0h] [rbp-A8h] BYREF
  void *v40; // [rsp+8h] [rbp-A0h]
  __int64 v41; // [rsp+10h] [rbp-98h]
  __int64 v42; // [rsp+18h] [rbp-90h]
  _QWORD *v43; // [rsp+20h] [rbp-88h]
  __int64 v44; // [rsp+28h] [rbp-80h] BYREF
  void *dest; // [rsp+30h] [rbp-78h] BYREF
  __m128 v46; // [rsp+38h] [rbp-70h] BYREF
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t n; // [rsp+58h] [rbp-50h]
  _QWORD v49[9]; // [rsp+60h] [rbp-48h] BYREF

  v6 = a2;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x47 )
    return (unsigned int)sub_B6D020(*(_QWORD *)(a1 + 48));
  v40 = a3;
  v46.m128_i8[8] = 0;
  dest = &v46.m128_u16[4];
  v46.m128_u64[0] = 0;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
  {
    v9 = 0;
    goto LABEL_40;
  }
  v11 = sub_B68690(a1, (__int64)a2, (__int64)a3, a4, a5, a6);
  v14 = (*(_BYTE *)(a1 + 29) & 1) == 0;
  v15 = v40;
  v16 = *((unsigned int *)v11 + 2);
  v39 = *v11 + 8 * v16;
  if ( v14 )
  {
    v18 = nullptr;
  }
  else
  {
    v17 = (__int64 **)sub_B68690(a1, (__int64)a2, (__int64)v40, v16, v12, v13);
    v15 = v40;
    v18 = *v17;
  }
  v9 = 0;
  if ( v18 == (__int64 *)v39 )
  {
LABEL_40:
    if ( v6 )
    {
      LODWORD(v39) = v9;
      sub_A96780(v6, (__m128i *)&dest);
      v9 = v39;
    }
    goto LABEL_22;
  }
  v41 = (__int64)v15;
  v40 = v49;
  v43 = (_QWORD *)a5;
  v42 = a4;
  while ( 1 )
  {
    v21 = *v18;
    v22 = *(_WORD *)(*v18 + 36);
    if ( v22 != 199 )
      break;
    if ( v9 <= 1 )
    {
      v9 = 2;
      if ( a2 )
      {
        v27 = *(_BYTE **)(v21 + 48);
        v28 = *(unsigned int *)(v21 + 40);
        src = v40;
        sub_B64130(&src, v27, (__int64)&v27[v28]);
        v29 = dest;
        if ( src == v40 )
        {
          v38 = n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)dest = v49[0];
            else
              memcpy(dest, v40, n);
            v38 = n;
            v29 = dest;
          }
          v46.m128_u64[0] = v38;
          v29[v38] = 0;
          v29 = src;
          goto LABEL_29;
        }
        if ( dest == &v46.m128_u16[4] )
        {
          v44 = v49[0];
          dest = src;
          v46 = _mm_loadh_ps((const double *)&v44);
        }
        else
        {
          v44 = v49[0];
          v30 = v46.m128_u64[1];
          dest = src;
          v46 = _mm_loadh_ps((const double *)&v44);
          if ( v29 )
          {
            src = v29;
            v49[0] = v30;
LABEL_29:
            n = 0;
            *v29 = 0;
            if ( src != v40 )
              operator delete(src);
            v9 = 2;
            goto LABEL_11;
          }
        }
        src = v40;
        v29 = v40;
        goto LABEL_29;
      }
    }
LABEL_11:
    if ( (__int64 *)v39 == ++v18 )
    {
      v6 = a2;
      goto LABEL_40;
    }
  }
  if ( v22 == 386 )
  {
    if ( !a2 )
      goto LABEL_21;
    v23 = *(_BYTE **)(v21 + 48);
    v24 = *(unsigned int *)(v21 + 40);
    src = v49;
    sub_B64130(&src, v23, (__int64)&v23[v24]);
    v25 = (__m128i *)a2->m128i_i64[0];
    if ( src == v49 )
    {
      v34 = n;
      if ( n )
      {
        if ( n == 1 )
          v25->m128i_i8[0] = v49[0];
        else
          memcpy(v25, src, n);
        v34 = n;
        v25 = (__m128i *)a2->m128i_i64[0];
      }
      a2->m128i_i64[1] = v34;
      v25->m128i_i8[v34] = 0;
      v25 = (__m128i *)src;
      goto LABEL_19;
    }
    if ( v25 == &a2[1] )
    {
      v39 = v49[0];
      a2->m128i_i64[0] = (__int64)src;
      *(__m128 *)((char *)a2 + 8) = _mm_loadh_ps((const double *)&v39);
    }
    else
    {
      v39 = v49[0];
      v26 = a2[1].m128i_i64[0];
      a2->m128i_i64[0] = (__int64)src;
      *(__m128 *)((char *)a2 + 8) = _mm_loadh_ps((const double *)&v39);
      if ( v25 )
      {
        src = v25;
        v49[0] = v26;
        goto LABEL_19;
      }
    }
    v25 = (__m128i *)v49;
    src = v49;
LABEL_19:
    n = 0;
    v25->m128i_i8[0] = 0;
    if ( src != v49 )
      operator delete(src);
    goto LABEL_21;
  }
  if ( v22 != 142 )
    goto LABEL_11;
  v31 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
  {
    LODWORD(v44) = v9;
    v31 = sub_B68580(a1);
    v9 = v44;
  }
  v32 = *(_QWORD *)(v31 + 88);
  LODWORD(v44) = v9;
  v33 = sub_B6C720(v32, v21, (__int64)a2, v41, v42);
  v9 = v44;
  if ( v33 != 3 )
  {
    if ( v33 > (int)v44 )
    {
      v9 = v33;
      if ( a2 )
      {
        LODWORD(v44) = v33;
        sub_A96780((__m128i *)&dest, a2);
        v9 = v44;
      }
    }
    goto LABEL_11;
  }
  v35 = v43;
  if ( v43 )
  {
    v36 = *(unsigned int **)(*(_QWORD *)(v21 + 40) + 16LL);
    v37 = *v36;
    *v43 = v36 + 4;
    v35[1] = v37;
  }
LABEL_21:
  v9 = 3;
LABEL_22:
  if ( dest != &v46.m128_u16[4] )
  {
    LODWORD(v39) = v9;
    operator delete(dest);
    return (unsigned int)v39;
  }
  return (unsigned int)v9;
}

