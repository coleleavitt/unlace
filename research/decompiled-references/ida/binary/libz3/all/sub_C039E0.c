__int64 __fastcall sub_C039E0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // r9
  int v5; // esi
  __int64 v6; // r10
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // r13d
  __int64 v23; // r15
  _OWORD *v24; // rax
  __int64 v25; // rdx
  const double *v26; // r12
  unsigned int v27; // r9d
  __int64 v28; // r8
  double *v29; // r14
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx

  v2 = a1[2];
  v3 = a1[3];
  v4 = a1[4];
  v5 = *(_DWORD *)(v3 + 12);
  v6 = *(_QWORD *)v2;
  v7 = (*(_DWORD *)(v4 + 12) - v5) ^ (v5 << 8);
  v8 = ((v7 ^ ((v5 - v7) << 16)) + v7 - v5) ^ ((v5 - v7) << 10);
  v9 = *(unsigned int *)(v2 + 8);
  v10 = v9 - 1;
  v9 *= 24;
  v11 = *(_QWORD *)v2 + v9;
  v12 = 24LL * (v8 & v10);
  v13 = *(_QWORD *)v2 + v12;
  if ( v12 != v9 )
  {
    result = *(_QWORD *)v2 + v12;
    do
    {
      v15 = *(_QWORD *)(result + 8);
      if ( v15 > 1 )
      {
        if ( *(_DWORD *)result == v8 && v3 == v15 && v4 == *(_QWORD *)(result + 16) )
          goto LABEL_15;
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
      result += 24;
    }
    while ( v11 != result );
    if ( v6 != v13 )
    {
      result = *(_QWORD *)v2;
      goto LABEL_41;
    }
    goto LABEL_8;
  }
  result = *(_QWORD *)v2;
  if ( v6 == v13 )
  {
LABEL_8:
    v16 = a1[1];
    goto LABEL_9;
  }
LABEL_41:
  while ( 1 )
  {
    v33 = *(_QWORD *)(result + 8);
    if ( v33 > 1 )
      break;
    if ( !v33 )
      goto LABEL_8;
LABEL_40:
    result += 24;
    if ( v13 == result )
      goto LABEL_8;
  }
  if ( *(_DWORD *)result != v8 || v3 != v33 || v4 != *(_QWORD *)(result + 16) )
    goto LABEL_40;
LABEL_15:
  v19 = result + 24;
  if ( v11 == result + 24 )
    v19 = *(_QWORD *)v2;
  v20 = *(_DWORD *)(v2 + 12) - 1;
  if ( !*(_QWORD *)(v19 + 8) )
  {
    *(_QWORD *)(result + 8) = 0;
    *(_DWORD *)(v2 + 12) = v20;
    goto LABEL_8;
  }
  *(_QWORD *)(result + 8) = 1;
  v21 = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v2 + 12) = v20;
  result = (unsigned int)(v21 + 1);
  if ( v20 < 0x40 )
    v20 = 64;
  *(_DWORD *)(v2 + 16) = result;
  if ( v20 >= (unsigned int)result )
    goto LABEL_8;
  result = sub_186AF10(v3);
  if ( !(_BYTE)result )
  {
    v22 = *(_DWORD *)(v2 + 8);
    v23 = sub_186B270(24LL * v22);
    v24 = (_OWORD *)(v23 + 8);
    v25 = v23 + 24LL * v22 + 8;
    if ( v22 )
    {
      if ( ((24 * (_BYTE)v22) & 8) == 0 || (*v24 = 0, v24 = (_OWORD *)(v23 + 32), v23 + 32 != v25) )
      {
        do
        {
          *v24 = 0;
          v24 += 3;
          *(_OWORD *)((char *)v24 - 24) = 0;
        }
        while ( v24 != (_OWORD *)v25 );
      }
    }
    result = *(unsigned int *)(v2 + 8);
    v26 = *(const double **)v2;
    v27 = result - 1;
    v28 = 24 * result;
    v29 = (double *)(*(_QWORD *)v2 + 24 * result);
    v30 = v23 + 24 * result;
    if ( *(double **)v2 != v29 )
    {
      do
      {
        if ( *((_QWORD *)v26 + 1) > 1u )
        {
          v31 = 24LL * (*(_DWORD *)v26 & v27);
          v32 = v23 + v31;
          if ( v28 == v31 )
          {
LABEL_55:
            if ( v23 == v32 )
            {
LABEL_60:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            result = v23;
            while ( *(_QWORD *)(result + 8) )
            {
              result += 24;
              if ( v32 == result )
                goto LABEL_60;
            }
          }
          else
          {
            result = v23 + v31;
            while ( *(_QWORD *)(result + 8) )
            {
              result += 24;
              if ( v30 == result )
                goto LABEL_55;
            }
          }
          *(_DWORD *)result = *(_DWORD *)v26;
          *(__m128 *)(result + 8) = _mm_loadh_ps(v26 + 2);
        }
        v26 += 3;
      }
      while ( v29 != v26 );
      v29 = *(double **)v2;
    }
    if ( v29 )
      result = sub_186B220(v29);
    *(_QWORD *)v2 = v23;
    *(_DWORD *)(v2 + 16) = 0;
  }
  v3 = a1[3];
  v16 = a1[1];
  if ( v3 )
  {
LABEL_9:
    v17 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v17 )
    {
      result = sub_15D7BC0(v16, v3);
      v16 = a1[1];
    }
  }
  v18 = a1[4];
  if ( v18 )
  {
    v17 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v17 )
      return sub_15D7BC0(v16, v18);
  }
  return result;
}

