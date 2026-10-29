__int64 __fastcall sub_91C000(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(_QWORD *, __int64); // rcx
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // ecx
  __int64 *v18; // rbx
  __m128 *v19; // r15
  unsigned int v20; // edi
  int v21; // r9d
  __int64 v22; // r8
  __int64 *v23; // rbp
  __int64 v24; // rdi
  __int64 *v25; // rsi
  __int64 *i; // rax
  _DWORD *v27; // rdx
  unsigned int v28; // r12d
  _QWORD *v29; // rdi
  _DWORD *v30; // rdx
  _DWORD *v31; // rdx
  unsigned int v32; // ebx
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  __int64 *v36; // rax
  __m128i *v37; // r10
  const __m128i *v38; // rcx
  unsigned int v39; // r9d
  __m128i *v40; // r11
  __int64 v41; // rax
  __int64 *v42; // rdx
  __m128i *v43; // rax
  __m128i v44; // xmm0
  _QWORD *v45; // rax
  char **exception; // rbx
  __int64 v47[11]; // [rsp+40h] [rbp-58h] BYREF

  result = sub_8E7030(*(_QWORD *)(a1 + 8));
  if ( !(_DWORD)result )
    return result;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *a2 >> 5;
  if ( v7 && (unsigned int)v8 < *(_DWORD *)(v7 - 4) && (*(_DWORD *)(v7 + 4 * v8) & (1 << *a2)) != 0 )
  {
    v9 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*(_QWORD *)a3 + 16LL);
    if ( v9 == sub_8E31E0 )
      return (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)a3 + 32LL))(a3, a1);
    else
      return ((__int64 (__fastcall *)(unsigned __int64, __int64, _DWORD *))v9)(a3, a1, a2);
  }
  v10 = *(_QWORD **)(a1 + 120);
  ++a2[2];
  if ( v10 )
  {
    v11 = *((_DWORD *)v10 - 1);
    if ( v11 == *((_DWORD *)v10 - 2) )
    {
      v32 = (3 * v11 + 1) >> 1;
      v33 = 16 * v32 + 8;
      if ( 16 * v11 + 8 >= (unsigned int)v33 || v11 >= v32 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v47, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v47);
        sub_233E40((__int64)v47);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = (unsigned int *)sub_186B300(v10 - 1, v33);
      v35 = v34[1];
      v10 = v34 + 2;
      *v34 = v32;
      *(_QWORD *)(a1 + 120) = v34 + 2;
      LODWORD(v34) = v35;
      v14 = &v10[2 * v35];
      v13 = (_DWORD)v34 + 1;
    }
    else
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v10[2 * v12];
    }
  }
  else
  {
    v45 = (_QWORD *)sub_186B270(0x28u);
    v10 = v45 + 1;
    *v45 = 2;
    v13 = 1;
    *(_QWORD *)(a1 + 120) = v10;
    v14 = v10;
  }
  *(_DWORD *)v14 = 2;
  v14[1] = a2;
  *((_DWORD *)v10 - 1) = v13;
  v15 = sub_180C100(*(_QWORD *)(a1 + 8) + 8400LL, 16);
  v16 = *(unsigned int *)(a1 + 56);
  v17 = a2[3];
  v18 = *(__int64 **)(a1 + 48);
  v19 = (__m128 *)v15;
  v20 = v16 - 1;
  v21 = *(_DWORD *)(a1 + 56);
  v22 = 16 * v16;
  v23 = &v18[(unsigned __int64)v22 / 8];
  v24 = 16LL * (v17 & v20);
  v25 = &v18[(unsigned __int64)v24 / 8];
  if ( v24 != v22 )
  {
    for ( i = &v18[(unsigned __int64)v24 / 8]; v23 != i; i += 2 )
    {
      v27 = (_DWORD *)*i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( v27[3] == v17 && a2 == v27 )
        {
LABEL_22:
          *v19 = _mm_loadh_ps((const double *)i + 1);
          goto LABEL_23;
        }
      }
      else if ( !v27 )
      {
        goto LABEL_17;
      }
    }
  }
  if ( v18 != v25 )
  {
    for ( i = *(__int64 **)(a1 + 48); v25 != i; i += 2 )
    {
      v31 = (_DWORD *)*i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( v31[3] == v17 && a2 == v31 )
          goto LABEL_22;
      }
      else if ( !v31 )
      {
        break;
      }
    }
  }
LABEL_17:
  v19->m128_u64[0] = a3;
  v19->m128_u64[1] = 0;
LABEL_23:
  v28 = 2 * v21;
  if ( 3 * v21 < (unsigned int)(4 * (*(_DWORD *)(a1 + 60) + *(_DWORD *)(a1 + 64))) )
  {
    v36 = (__int64 *)sub_186B270(16LL * v28);
    v22 = 16LL * v28;
    v18 = v36;
    v37 = (__m128i *)&v36[(unsigned __int64)v22 / 8];
    if ( v28 )
    {
      if ( ((16 * (_BYTE)v28) & 0x10) == 0 || (*(_OWORD *)v36 = 0, v36 += 2, v36 != (__int64 *)v37) )
      {
        do
        {
          *(_OWORD *)v36 = 0;
          v36 += 4;
          *((_OWORD *)v36 - 1) = 0;
        }
        while ( v36 != (__int64 *)v37 );
      }
    }
    v38 = *(const __m128i **)(a1 + 48);
    v39 = v28 - 1;
    v23 = (__int64 *)v37;
    v40 = (__m128i *)&v38[*(unsigned int *)(a1 + 56)];
    if ( v38 != v40 )
    {
      do
      {
        while ( v38->m128i_i64[0] <= 1uLL )
        {
          if ( v40 == ++v38 )
            goto LABEL_64;
        }
        v41 = 16LL * (*(_DWORD *)(v38->m128i_i64[0] + 12) & v39);
        v42 = &v18[(unsigned __int64)v41 / 8];
        if ( v22 == v41 )
        {
LABEL_68:
          if ( v18 == v42 )
          {
LABEL_73:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v43 = (__m128i *)v18;
          while ( v43->m128i_i64[0] )
          {
            if ( v42 == (__int64 *)++v43 )
              goto LABEL_73;
          }
        }
        else
        {
          v43 = (__m128i *)&v18[(unsigned __int64)v41 / 8];
          while ( v43->m128i_i64[0] )
          {
            if ( v37 == ++v43 )
              goto LABEL_68;
          }
        }
        v44 = _mm_loadu_si128(v38++);
        *v43 = v44;
      }
      while ( v40 != v38 );
LABEL_64:
      v40 = *(__m128i **)(a1 + 48);
    }
    if ( v40 )
    {
      sub_186B220(v40);
      v39 = v28 - 1;
      v22 = 16LL * v28;
    }
    v17 = a2[3];
    *(_QWORD *)(a1 + 48) = v18;
    *(_DWORD *)(a1 + 56) = v28;
    *(_DWORD *)(a1 + 64) = 0;
    v24 = 16LL * (v17 & v39);
    v25 = &v18[(unsigned __int64)v24 / 8];
  }
  if ( v24 != v22 )
  {
    result = (__int64)v25;
    v29 = nullptr;
    while ( 1 )
    {
      v30 = *(_DWORD **)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( v30[3] == v17 && a2 == v30 )
        {
          *(_QWORD *)result = a2;
          *(_QWORD *)(result + 8) = v19;
          return result;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v29 )
            goto LABEL_19;
          v29 = (_QWORD *)result;
          goto LABEL_20;
        }
        v29 = (_QWORD *)result;
      }
      result += 16;
      if ( (__int64 *)result == v23 )
        goto LABEL_35;
    }
  }
  v29 = nullptr;
  while ( 1 )
  {
LABEL_35:
    if ( v25 == v18 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = *v18;
    if ( (unsigned __int64)*v18 <= 1 )
      break;
    if ( *(_DWORD *)(result + 12) == v17 && a2 == (_DWORD *)result )
    {
      *v18 = (__int64)a2;
      v18[1] = (__int64)v19;
      return result;
    }
LABEL_34:
    v18 += 2;
  }
  if ( result )
  {
    v29 = v18;
    goto LABEL_34;
  }
  if ( v29 )
LABEL_19:
    --*(_DWORD *)(a1 + 64);
  else
    v29 = v18;
LABEL_20:
  *v29 = a2;
  v29[1] = v19;
  ++*(_DWORD *)(a1 + 60);
  return result;
}

