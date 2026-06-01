__int64 __fastcall sub_569B10(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6, _DWORD *a7)
{
  __int64 v9; // rax
  unsigned int v12; // r11d
  int v13; // esi
  __int64 v14; // r13
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rsi
  unsigned int *v20; // rsi
  int v21; // ecx
  int v22; // r12d
  int v23; // r8d
  __int64 v24; // r15
  __int64 v25; // rdx
  unsigned int *v26; // rax
  unsigned int *v27; // r14
  __int64 v28; // r13
  int v29; // r12d
  __int64 result; // rax
  unsigned int *v31; // rdx
  unsigned int *v32; // r15
  __int64 v33; // rsi
  int v34; // r11d
  unsigned int v35; // ebp
  unsigned int *v36; // r14
  unsigned int v38; // [rsp+8h] [rbp-50h]
  unsigned int v39; // [rsp+Ch] [rbp-4Ch]
  int v41; // [rsp+18h] [rbp-40h]
  int v42; // [rsp+1Ch] [rbp-3Ch]

  v9 = *a1;
  if ( v9 )
    v12 = *(_DWORD *)(v9 - 4);
  else
    v12 = 0;
  v13 = *((_DWORD *)a1 + 4);
  v14 = v12 - v13;
  if ( *(_QWORD *)a2 )
  {
    v39 = *(_DWORD *)(*(_QWORD *)a2 - 4LL);
    v15 = v39;
  }
  else
  {
    v39 = 0;
    v15 = 0;
  }
  v41 = *(_DWORD *)(a2 + 16);
  v38 = v15 - v41;
  if ( (_DWORD)v14 )
  {
    v16 = 0;
    v42 = *((_DWORD *)a1 + 4);
    v17 = 0;
    do
    {
      while ( *a7 != (_DWORD)v16 )
      {
        v18 = v16;
        v19 = (unsigned int)v17;
        ++v16;
        v17 = (unsigned int)(v17 + 1);
        v20 = (unsigned int *)(*a3 + 32 * v19);
        *(_QWORD *)(a6 + *v20) = *((_QWORD *)v20 + 2) & *(_QWORD *)(a6 + *v20)
                               | ((*(_QWORD *)(*a1 + 32 * v18 + 8)
                                 & (*(_QWORD *)(a4 + *(unsigned int *)(*a1 + 32 * v18)) >> *(_DWORD *)(*a1 + 32 * v18 + 4))) << v20[1]);
        if ( v16 == (unsigned int)v14 )
          goto LABEL_10;
      }
      ++v16;
      ++a7;
    }
    while ( v16 != (unsigned int)v14 );
LABEL_10:
    v21 = v15 - v41;
    v13 = v42;
    v22 = v14;
    if ( v38 )
      goto LABEL_11;
LABEL_39:
    v25 = (unsigned int)v17;
    v23 = v22;
    goto LABEL_18;
  }
  v21 = v15 - v41;
  v17 = 0;
  v22 = 0;
  if ( !v38 )
    goto LABEL_39;
LABEL_11:
  v23 = v21 + v22;
  v24 = 0;
  if ( v22 == *a7 )
    goto LABEL_15;
  while ( 1 )
  {
    v25 = (unsigned int)(v17 + 1);
    v26 = (unsigned int *)(*a3 + 32 * v17);
    ++v22;
    v27 = (unsigned int *)(v24 + *(_QWORD *)a2);
    v24 += 32;
    *(_QWORD *)(a6 + *v26) = *((_QWORD *)v26 + 2) & *(_QWORD *)(a6 + *v26)
                           | ((*((_QWORD *)v27 + 1) & (*(_QWORD *)(a5 + *v27) >> v27[1])) << v26[1]);
    if ( v22 == v23 )
      break;
    v17 = (unsigned int)v25;
    while ( v22 == *a7 )
    {
LABEL_15:
      ++v22;
      ++a7;
      v24 += 32;
      if ( v22 == v23 )
      {
        v14 = (unsigned int)v14;
        v25 = (unsigned int)v17;
        if ( (unsigned int)v14 < v12 )
          goto LABEL_19;
        goto LABEL_37;
      }
      v17 = (unsigned int)v17;
    }
  }
  v14 = (unsigned int)v14;
LABEL_18:
  if ( (unsigned int)v14 >= v12 )
  {
LABEL_37:
    result = (unsigned int)v25;
    v29 = v23;
  }
  else
  {
LABEL_19:
    v28 = 32 * v14;
    v29 = v13 + v23;
    if ( v23 == *a7 )
      goto LABEL_23;
    while ( 1 )
    {
      result = (unsigned int)(v25 + 1);
      v31 = (unsigned int *)(*a3 + 32 * v25);
      ++v23;
      v32 = (unsigned int *)(v28 + *a1);
      v28 += 32;
      *(_QWORD *)(a6 + *v31) = *((_QWORD *)v31 + 2) & *(_QWORD *)(a6 + *v31)
                             | ((*((_QWORD *)v32 + 1) & (*(_QWORD *)(a4 + *v32) >> v32[1])) << v31[1]);
      if ( v23 == v29 )
        break;
      v25 = (unsigned int)result;
      while ( v23 == *a7 )
      {
LABEL_23:
        ++v23;
        ++a7;
        v28 += 32;
        if ( v23 == v29 )
        {
          result = (unsigned int)v25;
          goto LABEL_26;
        }
        v25 = (unsigned int)v25;
      }
    }
  }
LABEL_26:
  if ( v38 < v39 )
  {
    v33 = 32LL * v38;
    v34 = v29 + v41;
    if ( *a7 == v29 )
      goto LABEL_31;
    while ( 1 )
    {
      v35 = result + 1;
      result = *a3 + 32 * result;
      ++v29;
      v36 = (unsigned int *)(v33 + *(_QWORD *)a2);
      v33 += 32;
      *(_QWORD *)(a6 + *(unsigned int *)result) = *(_QWORD *)(result + 16) & *(_QWORD *)(a6 + *(unsigned int *)result)
                                                | ((*((_QWORD *)v36 + 1) & (*(_QWORD *)(a5 + *v36) >> v36[1])) << *(_DWORD *)(result + 4));
      if ( v29 == v34 )
        break;
      result = v35;
      while ( *a7 == v29 )
      {
LABEL_31:
        ++v29;
        ++a7;
        v33 += 32;
        if ( v34 == v29 )
          return result;
        result = (unsigned int)result;
      }
    }
  }
  return result;
}

