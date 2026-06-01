_BYTE *__fastcall sub_E2BEE0(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rdi
  _BYTE *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  __int64 v11; // r13
  __int64 **v12; // rcx
  const __m128i *v13; // rbx
  __int64 i; // rbp
  __m128i v15; // xmm0
  __int64 v16; // rdx
  unsigned __int8 v17; // r15
  __int64 v18; // r14
  unsigned __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  _BYTE *result; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 *v27; // rbx
  __m128i v28; // [rsp+10h] [rbp-78h] BYREF
  __int64 v29; // [rsp+20h] [rbp-68h]
  __int64 *v30; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+38h] [rbp-50h]
  char v32; // [rsp+40h] [rbp-48h]
  __int64 v33; // [rsp+48h] [rbp-40h]

  v5 = a1[1];
  v6 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(v5 + 24) )
  {
    sub_2257CD0(v5, 73);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v6 + 1;
    *v6 = 73;
  }
  v28.m128i_i64[0] = a2;
  v30 = a1;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v7 = sub_EFEE90(&v28, 0);
  if ( !v7 )
  {
    v10 = *a3;
    v7 = v31;
    if ( !*a3 )
      goto LABEL_29;
    goto LABEL_5;
  }
  v10 = *a3;
  v31 = v7;
  if ( v10 )
  {
LABEL_5:
    v11 = (unsigned int)(v10 - 1);
    v12 = &v30;
    v13 = (const __m128i *)(a3 + 2);
    for ( i = 0; ; ++i )
    {
      v15 = _mm_loadu_si128(v13);
      v16 = v13[1].m128i_i64[0];
      v17 = 1;
      v28 = v15;
      v29 = v16;
      if ( v7 && !v32 )
      {
        v18 = v33;
        if ( !v33 )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8 * i + 24);
          if ( sub_B68190(v18) )
          {
            if ( (v28.m128i_i32[0] & 0x7FFFFFFF) != 9 )
              v33 = v18;
          }
        }
        if ( (unsigned __int8)sub_EF9830(&v28) && (!sub_B68190(v18) || v33) )
        {
          v32 = 1;
          v17 = 1;
        }
        else
        {
          v16 = v31;
          if ( !v31 || (*(_BYTE *)(v31 + 28) & 0x7F) != 0x47 )
            goto LABEL_22;
          v19 = *(_QWORD *)(v31 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v31 + 16) & 4) != 0 )
            v19 = *(_QWORD *)v19;
          if ( (*(_BYTE *)(v19 + 8) & 0x7Fu) - 59 > 2 || (v20 = v19 - 64) == 0 || !sub_B731B0(v20) )
          {
            v17 = 1;
            if ( sub_E2AAC0(&v30, v18, (__int64)&v28)
              && v18
              && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) > 0x9Fu )
            {
              sub_E2A700(a1, v18, (__m128)v15, v16, (__int64)v12, v8);
            }
          }
          else
          {
LABEL_22:
            v17 = 0;
            if ( (*(_BYTE *)(v18 + 28) & 0x7F) == 0x2F )
              v17 = sub_F34140(*(_QWORD *)(*(_QWORD *)(v18 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0;
          }
        }
      }
      v13 = (const __m128i *)((char *)v13 + 24);
      sub_E2B990(a1, v17, v16, (__int64)v12, v8, v9, v15, v28.m128i_i64[0]);
      v7 = v31;
      if ( i == v11 )
        break;
    }
LABEL_29:
    if ( !v7 )
      goto LABEL_36;
  }
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x47 )
  {
    v21 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
      v21 = *(_QWORD *)v21;
    if ( (*(_BYTE *)(v21 + 8) & 0x7Fu) - 59 <= 2 )
    {
      v22 = v21 - 64;
      if ( v22 )
      {
        if ( sub_B731B0(v22) )
          goto LABEL_36;
        v7 = v31;
      }
    }
    v23 = a1[1];
    v26 = *(_QWORD *)(v7 + 56);
    v25 = *(_QWORD *)(v23 + 24);
    result = *(_BYTE **)(v23 + 32);
    if ( (*(_BYTE *)(v26 + 23) & 0x40) == 0 )
      goto LABEL_37;
    v27 = *(unsigned __int16 **)(v26 + 8LL * (*(_DWORD *)(v26 + 20) & 0x1FFFFFFF) + 24);
    if ( !v27 || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) <= 0x9Fu )
      goto LABEL_37;
    if ( (unsigned __int64)result >= v25 )
    {
      sub_2257CD0(v23, 81);
    }
    else
    {
      *(_QWORD *)(v23 + 32) = result + 1;
      *result = 81;
    }
    sub_E24970((__int64)a1, v27, (unsigned __int16 *)0xFFFFFFFFLL, 0, v8, v9);
  }
LABEL_36:
  v23 = a1[1];
  result = *(_BYTE **)(v23 + 32);
  v25 = *(_QWORD *)(v23 + 24);
LABEL_37:
  if ( (unsigned __int64)result >= v25 )
    return (_BYTE *)sub_2257CD0(v23, 69);
  *(_QWORD *)(v23 + 32) = result + 1;
  *result = 69;
  return result;
}

