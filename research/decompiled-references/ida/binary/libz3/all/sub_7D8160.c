__int64 __fastcall sub_7D8160(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // r8
  __int64 v4; // rax
  int v5; // esi
  unsigned int v6; // edx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // r14
  _OWORD *v20; // rax
  _OWORD *v21; // r13
  _OWORD *v22; // rdx
  __int64 v23; // rax
  void *v24; // rdi
  unsigned int v25; // r8d
  const __m128i *v26; // r12
  const __m128i *v27; // rcx
  __int64 v28; // r15
  char *v29; // r14
  __int64 v30; // rax
  _OWORD *v31; // rdx

  v2 = a1[2];
  v3 = a1[3];
  v4 = *(unsigned int *)(v2 + 8);
  v5 = *(_DWORD *)(v3 + 12);
  v6 = v4 - 1;
  result = 16 * v4;
  v8 = *(_QWORD *)v2 + result;
  v9 = 16LL * (v5 & v6);
  v10 = *(_QWORD *)v2 + v9;
  if ( v9 == result )
  {
LABEL_14:
    if ( *(_QWORD *)v2 != v10 )
    {
      result = *(_QWORD *)v2;
      while ( 1 )
      {
        v15 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v15 + 12) == v5 && v3 == v15 )
            goto LABEL_23;
        }
        else if ( !v15 )
        {
          goto LABEL_8;
        }
        result += 16;
        if ( v10 == result )
          goto LABEL_8;
      }
    }
    goto LABEL_8;
  }
  result = *(_QWORD *)v2 + v9;
  while ( 1 )
  {
    v11 = *(_QWORD *)result;
    if ( *(_QWORD *)result > 1u )
      break;
    if ( !v11 )
      goto LABEL_8;
LABEL_5:
    result += 16;
    if ( v8 == result )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v11 + 12) != v5 || v3 != v11 )
    goto LABEL_5;
LABEL_23:
  v16 = (_QWORD *)(result + 16);
  if ( v8 == result + 16 )
    v16 = *(_QWORD **)v2;
  v17 = *(_DWORD *)(v2 + 12) - 1;
  if ( !*v16 )
  {
    *(_QWORD *)result = 0;
    *(_DWORD *)(v2 + 12) = v17;
LABEL_8:
    v12 = a1[1];
    goto LABEL_9;
  }
  *(_QWORD *)result = 1;
  v18 = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v2 + 12) = v17;
  result = (unsigned int)(v18 + 1);
  if ( v17 < 0x40 )
    v17 = 64;
  *(_DWORD *)(v2 + 16) = result;
  if ( v17 >= (unsigned int)result )
    goto LABEL_8;
  result = sub_186AF10(v10);
  if ( !(_BYTE)result )
  {
    v19 = *(unsigned int *)(v2 + 8);
    v20 = (_OWORD *)sub_186B270(16 * v19);
    v21 = v20;
    v22 = &v20[v19];
    if ( (_DWORD)v19 )
    {
      if ( ((16 * (_BYTE)v19) & 0x10) == 0 || (*v20 = 0, ++v20, v20 != v22) )
      {
        do
        {
          *v20 = 0;
          v20 += 2;
          *(v20 - 1) = 0;
        }
        while ( v20 != v22 );
      }
    }
    v23 = *(unsigned int *)(v2 + 8);
    v24 = *(void **)v2;
    v25 = v23 - 1;
    result = 16 * v23;
    v26 = *(const __m128i **)v2;
    v27 = (const __m128i *)(*(_QWORD *)v2 + result);
    v28 = result;
    v29 = (char *)v21 + result;
    if ( *(const __m128i **)v2 != v27 )
    {
      do
      {
        result = v26->m128i_i64[0];
        if ( v26->m128i_i64[0] > 1uLL )
        {
          v30 = 16LL * (*(_DWORD *)(result + 12) & v25);
          v31 = &v21[(unsigned __int64)v30 / 0x10];
          if ( v28 == v30 )
          {
LABEL_50:
            if ( v21 == v31 )
            {
LABEL_55:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            result = (__int64)v21;
            while ( *(_QWORD *)result )
            {
              result += 16;
              if ( v31 == (_OWORD *)result )
                goto LABEL_55;
            }
          }
          else
          {
            result = (__int64)&v21[(unsigned __int64)v30 / 0x10];
            while ( *(_QWORD *)result )
            {
              result += 16;
              if ( v29 == (char *)result )
                goto LABEL_50;
            }
          }
          *(__m128i *)result = _mm_loadu_si128(v26);
        }
        ++v26;
      }
      while ( v27 != v26 );
      v24 = *(void **)v2;
    }
    if ( v24 )
      result = sub_186B220(v24);
    *(_QWORD *)v2 = v21;
    *(_DWORD *)(v2 + 16) = 0;
  }
  v3 = a1[3];
  v12 = a1[1];
  if ( v3 )
  {
LABEL_9:
    v13 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v13 )
    {
      result = sub_15D7BC0(v12, v3);
      v12 = a1[1];
    }
  }
  v14 = a1[4];
  if ( v14 )
  {
    v13 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v13 )
      return sub_15D7BC0(v12, v14);
  }
  return result;
}

