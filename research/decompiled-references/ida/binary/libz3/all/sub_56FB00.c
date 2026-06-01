__int64 __fastcall sub_56FB00(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r13
  __m128i v5; // xmm0
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  size_t v9; // rdx
  int v10; // r14d
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int v14; // edx
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 i; // rbx
  int v19; // eax
  unsigned int *v20; // rdi
  __int64 v21; // rax
  int v22; // edx
  int v23; // eax
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rbx
  int v29; // eax
  __int64 v30; // r10
  int v31; // eax
  unsigned int *v32; // rdi
  __int64 v33; // rax
  int v34; // eax
  __int64 ptr; // [rsp+0h] [rbp-88h]
  __int64 v36; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+10h] [rbp-78h]
  int v38; // [rsp+1Ch] [rbp-6Ch]
  __int64 *v39; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v40; // [rsp+30h] [rbp-58h] BYREF
  int v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+3Ch] [rbp-4Ch]
  int v43; // [rsp+44h] [rbp-44h]

  v4 = *(_QWORD **)a2;
  v42 = 0;
  v43 = 0;
  if ( v4 )
  {
    v5 = _mm_loadl_epi64((const __m128i *)(v4 - 1));
    v36 = v5.m128i_i64[0];
    v6 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v5, 229));
    v7 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v5) + 8);
    v8 = *(_QWORD **)a2;
    ptr = (__int64)v7;
    v4 = v7 + 1;
    *v7 = v5.m128i_i64[0];
    if ( v8 )
    {
      v9 = 8LL * *((unsigned int *)v8 - 1);
      if ( v9 <= 8 )
      {
        if ( v9 == 8 )
          v7[1] = *v8;
      }
      else
      {
        memmove(v7 + 1, v8, v9);
      }
    }
    v10 = *(_DWORD *)(a2 + 8);
    v41 = v10;
    if ( v6 )
    {
      v40 = v4;
      v39 = nullptr;
      sub_577180(&v39, &v40);
      v29 = sub_568680(&v39, v6);
      v11 = v29;
      if ( v30 )
      {
        LODWORD(v36) = v29;
        sub_186B220((void *)(v30 - 8));
        v11 = v36;
      }
    }
    else
    {
      v11 = 778;
    }
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 8);
    ptr = -8;
    v11 = 778;
    v41 = v10;
  }
  v12 = *(unsigned int *)(a1 + 40);
  v13 = *(_QWORD *)(a1 + 32);
  v14 = v12 - 1;
  v12 *= 32;
  v15 = v13 + v12;
  v16 = 32LL * (v11 & v14);
  v17 = v13 + v16;
  if ( v16 != v12 )
  {
    for ( i = v13 + v16; v15 != i; i += 32 )
    {
      v19 = *(_DWORD *)(i + 4);
      if ( v19 != 2 )
      {
        if ( !v19 )
          goto LABEL_27;
        continue;
      }
      if ( *(_DWORD *)i != v11 )
        continue;
      v20 = *(unsigned int **)(i + 8);
      if ( v20 )
      {
        v21 = *(v20 - 1);
        if ( !v4 )
        {
          v22 = 0;
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v4 )
          goto LABEL_18;
        v21 = 0;
      }
      v22 = *((_DWORD *)v4 - 1);
LABEL_16:
      if ( (_DWORD)v21 == v22 )
      {
        v38 = v11;
        v37 = v15;
        v36 = v17;
        v23 = memcmp(v20, v4, 8 * v21);
        v17 = v36;
        v15 = v37;
        v11 = v38;
        if ( !v23 )
        {
LABEL_18:
          if ( v10 == *(_DWORD *)(i + 16) )
            goto LABEL_19;
        }
      }
    }
  }
  if ( v13 == v17 )
  {
LABEL_27:
    if ( v4 )
      sub_186B220((void *)ptr);
LABEL_29:
    v27 = sub_186B270(0xB8u);
    sub_56E270(v27, a1, a2, 0);
    return v27;
  }
  while ( 1 )
  {
    v31 = *(_DWORD *)(v13 + 4);
    if ( v31 != 2 )
    {
      if ( !v31 )
        goto LABEL_27;
      goto LABEL_34;
    }
    if ( *(_DWORD *)v13 == v11 )
      break;
LABEL_34:
    v13 += 32;
    if ( v17 == v13 )
      goto LABEL_27;
  }
  v32 = *(unsigned int **)(v13 + 8);
  if ( !v32 )
  {
    if ( !v4 )
      goto LABEL_41;
    v33 = 0;
    goto LABEL_39;
  }
  v33 = *(v32 - 1);
  if ( v4 )
  {
LABEL_39:
    if ( (_DWORD)v33 != *((_DWORD *)v4 - 1) )
      goto LABEL_34;
    LODWORD(v37) = v11;
    v36 = v17;
    v34 = memcmp(v32, v4, 8 * v33);
    v17 = v36;
    v11 = v37;
    if ( v34 )
      goto LABEL_34;
    goto LABEL_41;
  }
  if ( (_DWORD)v33 )
    goto LABEL_34;
LABEL_41:
  if ( v10 != *(_DWORD *)(v13 + 16) )
    goto LABEL_34;
  i = v13;
LABEL_19:
  if ( v4 )
    sub_186B220((void *)ptr);
  v24 = **(_QWORD **)(i + 24);
  if ( !v24 )
    goto LABEL_29;
  v25 = *(_DWORD *)(v24 - 4);
  if ( !v25 )
    goto LABEL_29;
  v26 = (unsigned int)(v25 - 1);
  v27 = *(_QWORD *)(v24 + 8 * v26);
  *(_DWORD *)(v24 - 4) = v26;
  return v27;
}

