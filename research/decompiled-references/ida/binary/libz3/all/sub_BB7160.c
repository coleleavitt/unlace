unsigned __int64 __fastcall sub_BB7160(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  _DWORD *v4; // rbp
  _DWORD *v5; // rbx
  unsigned __int64 result; // rax
  int v7; // r8d
  __int64 v8; // rcx
  int v9; // eax
  int v10; // esi
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // r13
  unsigned int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // r14
  int v22; // esi
  int v23; // eax
  int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // ecx
  _OWORD *v31; // rax
  __int64 v32; // rdx
  const double *v33; // r15
  double *v34; // r11
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  size_t v38; // [rsp+10h] [rbp-68h]
  int v39; // [rsp+18h] [rbp-60h]
  _QWORD v40[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a2;
  v5 = a3;
  result = *a2;
  if ( *a3 >= (unsigned int)result )
  {
    v5 = a2;
    v4 = a3;
  }
  if ( v5 == v4 )
    return result;
  v7 = v5[3];
  v8 = *(_QWORD *)(a1 + 8);
  v9 = (v4[3] - v7) ^ (v7 << 8);
  v10 = ((v9 ^ ((v7 - v9) << 16)) + v9 - v7) ^ ((v7 - v9) << 10);
  v11 = 24LL * (v10 & (unsigned int)(*(_DWORD *)(a1 + 16) - 1));
  v12 = 24LL * *(unsigned int *)(a1 + 16);
  v13 = v8 + v11;
  v14 = v8 + v12;
  if ( v11 != v12 )
  {
    for ( result = v8 + v11; v14 != result; result += 24LL )
    {
      v15 = *(_QWORD *)(result + 8);
      if ( v15 > 1 )
      {
        if ( *(_DWORD *)result == v10 && v5 == (_DWORD *)v15 && v4 == *(_DWORD **)(result + 16) )
          return result;
      }
      else if ( !v15 )
      {
        goto LABEL_11;
      }
    }
  }
  for ( ; v13 != v8; v8 += 24 )
  {
    result = *(_QWORD *)(v8 + 8);
    if ( result > 1 )
    {
      if ( *(_DWORD *)v8 == v10 && v5 == (_DWORD *)result && v4 == *(_DWORD **)(v8 + 16) )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_11:
  ++v5[2];
  v40[0] = v5;
  sub_BB70A0((_QWORD *)(a1 + 40), v40);
  ++v4[2];
  v40[0] = v4;
  sub_BB70A0((_QWORD *)(a1 + 56), v40);
  v16 = *(unsigned int *)(a1 + 16);
  v17 = *(_DWORD *)(a1 + 24);
  if ( 3 * (int)v16 < (unsigned int)(4 * (v17 + *(_DWORD *)(a1 + 20))) )
  {
    v39 = 2 * v16;
    v38 = 24LL * (unsigned int)(2 * v16);
    v29 = sub_186B270(v38);
    v30 = v39;
    v18 = v29;
    v20 = v38;
    v31 = (_OWORD *)(v29 + 8);
    v32 = v18 + v38 + 8;
    if ( v39 )
    {
      if ( (((_BYTE)v32 - (_BYTE)v31) & 8) == 0 || (*v31 = 0, v31 = (_OWORD *)(v18 + 32), v32 != v18 + 32) )
      {
        do
        {
          *v31 = 0;
          v31 += 3;
          *(_OWORD *)((char *)v31 - 24) = 0;
        }
        while ( (_OWORD *)v32 != v31 );
      }
    }
    v33 = *(const double **)(a1 + 8);
    v19 = v39 - 1;
    v21 = v18 + v38;
    v34 = (double *)&v33[3 * *(unsigned int *)(a1 + 16)];
    if ( v33 != v34 )
    {
      do
      {
        if ( *((_QWORD *)v33 + 1) > 1u )
        {
          v35 = 24LL * (*(_DWORD *)v33 & v19);
          v36 = v18 + v35;
          if ( v38 == v35 )
          {
LABEL_57:
            if ( v18 == v36 )
            {
LABEL_70:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v37 = v18;
            while ( *(_QWORD *)(v37 + 8) )
            {
              v37 += 24;
              if ( v36 == v37 )
                goto LABEL_70;
            }
          }
          else
          {
            v37 = v18 + v35;
            while ( *(_QWORD *)(v37 + 8) )
            {
              v37 += 24;
              if ( v21 == v37 )
                goto LABEL_57;
            }
          }
          *(_DWORD *)v37 = *(_DWORD *)v33;
          *(__m128 *)(v37 + 8) = _mm_loadh_ps(v33 + 2);
        }
        v33 += 3;
      }
      while ( v34 != v33 );
      v34 = *(double **)(a1 + 8);
    }
    if ( v34 )
    {
      sub_186B220(v34);
      v30 = v39;
      v20 = v38;
      v19 = v39 - 1;
    }
    *(_QWORD *)(a1 + 8) = v18;
    v17 = 0;
    *(_DWORD *)(a1 + 16) = v30;
    *(_DWORD *)(a1 + 24) = 0;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 8);
    v19 = v16 - 1;
    v20 = 24 * v16;
    v21 = v18 + 24 * v16;
  }
  v22 = v5[3];
  v23 = (v4[3] - v22) ^ (v22 << 8);
  v24 = ((v23 ^ ((v22 - v23) << 16)) + v23 - v22) ^ ((v22 - v23) << 10);
  v25 = v24 & v19;
  v26 = v18 + 24 * v25;
  if ( 24 * v25 != v20 )
  {
    result = v18 + 24 * v25;
    v27 = 0;
    while ( 1 )
    {
      v28 = *(_QWORD *)(result + 8);
      if ( v28 > 1 )
      {
        if ( *(_DWORD *)result == v24 && v5 == (_DWORD *)v28 && v4 == *(_DWORD **)(result + 16) )
        {
          *(_QWORD *)(result + 8) = v5;
          return result;
        }
      }
      else
      {
        if ( !v28 )
        {
          if ( v27 )
            goto LABEL_68;
          v27 = result;
          goto LABEL_69;
        }
        v27 = result;
      }
      result += 24LL;
      if ( result == v21 )
        goto LABEL_36;
    }
  }
  v27 = 0;
  while ( 1 )
  {
LABEL_36:
    if ( v26 == v18 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = *(_QWORD *)(v18 + 8);
    if ( result <= 1 )
      break;
    if ( *(_DWORD *)v18 == v24 && v5 == (_DWORD *)result && v4 == *(_DWORD **)(v18 + 16) )
    {
      *(_QWORD *)(v18 + 8) = v5;
      return result;
    }
LABEL_35:
    v18 += 24;
  }
  if ( result )
  {
    v27 = v18;
    goto LABEL_35;
  }
  if ( v27 )
LABEL_68:
    *(_DWORD *)(a1 + 24) = v17 - 1;
  else
    v27 = v18;
LABEL_69:
  *(_QWORD *)(v27 + 8) = v5;
  *(_QWORD *)(v27 + 16) = v4;
  *(_DWORD *)v27 = v24;
  ++*(_DWORD *)(a1 + 20);
  return result;
}

