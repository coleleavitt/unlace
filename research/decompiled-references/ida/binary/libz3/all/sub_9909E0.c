__int64 __fastcall sub_9909E0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 *v5; // r13
  __int64 result; // rax
  __int64 v8; // r11
  __int64 v9; // rdi
  unsigned int v10; // esi
  __int64 *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r11
  unsigned int v16; // esi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 *v23; // r14
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r11
  __int64 v29; // r8
  __int64 *v30; // r14
  __int64 v31; // r15
  __int64 v32; // r12
  __int64 *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r11
  unsigned int v36; // ecx
  __int64 *j; // rdx
  __int64 v38; // rax
  unsigned int v39; // ecx
  __int64 i; // rdx
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // [rsp+0h] [rbp-48h]

  v3 = a1;
  v4 = (__int64)a2 - a1;
  v5 = (__int64 *)((char *)a2 + (_QWORD)a3 - a1);
  result = ((__int64)a2 - a1) >> 4;
  v43 = result;
  if ( (__int64)a2 - a1 <= 96 )
  {
    if ( a2 == (__int64 *)a1 )
      return result;
    v15 = a1 + 16;
    v3 = a1;
    if ( a2 == (__int64 *)(a1 + 16) )
      return result;
LABEL_11:
    while ( 1 )
    {
      v16 = *(_DWORD *)(v15 + 8);
      result = v15;
      v15 += 16;
      v17 = *(_QWORD *)(v15 - 16);
      if ( *(_DWORD *)(v3 + 8) >= v16 )
        break;
      v18 = (result - v3) >> 4;
      if ( result - v3 > 0 )
      {
        do
        {
          v19 = *(_QWORD *)(result - 16);
          result -= 16;
          *(_QWORD *)(result + 16) = v19;
          *(_DWORD *)(result + 24) = *(_DWORD *)(result + 8);
          --v18;
        }
        while ( v18 );
      }
      *(_QWORD *)v3 = v17;
      *(_DWORD *)(v3 + 8) = v16;
      if ( a2 == (__int64 *)v15 )
        goto LABEL_15;
    }
    v39 = *(_DWORD *)(v15 - 24);
    for ( i = v15 - 32; v39 < v16; i -= 16 )
    {
      v41 = *(_QWORD *)i;
      *(_DWORD *)(i + 24) = v39;
      *(_QWORD *)(i + 16) = v41;
      result = i;
      v39 = *(_DWORD *)(i - 8);
    }
    *(_QWORD *)result = v17;
    *(_DWORD *)(result + 8) = v16;
    goto LABEL_10;
  }
  do
  {
    v8 = v3;
    v3 += 112;
    v9 = v3 - 96;
    do
    {
      v10 = *(_DWORD *)(v9 + 8);
      v11 = (__int64 *)v9;
      v9 += 16;
      v12 = *(_QWORD *)(v9 - 16);
      if ( *(_DWORD *)(v3 - 104) >= v10 )
      {
        v36 = *(_DWORD *)(v9 - 24);
        for ( j = (__int64 *)(v9 - 32); v36 < v10; j -= 2 )
        {
          v38 = *j;
          *((_DWORD *)j + 6) = v36;
          j[2] = v38;
          v11 = j;
          v36 = *((_DWORD *)j - 2);
        }
        *v11 = v12;
        *((_DWORD *)v11 + 2) = v10;
      }
      else
      {
        v13 = ((__int64)v11 - v8) >> 4;
        if ( (__int64)v11 - v8 > 0 )
        {
          do
          {
            v14 = *(v11 - 2);
            v11 -= 2;
            v11[2] = v14;
            *((_DWORD *)v11 + 6) = *((_DWORD *)v11 + 2);
            --v13;
          }
          while ( v13 );
        }
        *(_QWORD *)(v3 - 112) = v12;
        *(_DWORD *)(v3 - 104) = v10;
      }
    }
    while ( v3 != v9 );
    result = (__int64)a2 - v3;
  }
  while ( (__int64)a2 - v3 > 96 );
  v15 = v8 + 128;
  if ( a2 != (__int64 *)v3 )
  {
LABEL_10:
    if ( a2 != (__int64 *)v15 )
      goto LABEL_11;
  }
LABEL_15:
  v20 = 7;
  if ( v4 > 112 )
  {
    while ( 1 )
    {
      v21 = 2 * v20;
      if ( v43 < 2 * v20 )
      {
        v27 = v43;
        v22 = (__int64)a3;
        v23 = (__int64 *)a1;
      }
      else
      {
        v22 = (__int64)a3;
        v23 = (__int64 *)a1;
        v24 = 32 * v20;
        v25 = -2 * v20;
        do
        {
          v26 = v23;
          v23 = (__int64 *)((char *)v23 + v24);
          v22 = sub_98F160(v26, &v23[v25], &v23[v25], v23, v22);
          v27 = ((char *)a2 - (char *)v23) >> 4;
        }
        while ( v21 <= v27 );
      }
      if ( v20 <= v27 )
        v27 = v20;
      sub_98F160(v23, &v23[2 * v27], &v23[2 * v27], a2, v22);
      if ( v43 < v28 )
        break;
      v29 = a1;
      v30 = a3;
      v31 = 16 * v28;
      v32 = 16 * v21 - 16 * v28;
      do
      {
        v33 = v30;
        v30 = (__int64 *)((char *)v30 + v31);
        v29 = sub_98F160(v33, (__int64 *)((char *)v30 + v32), (__int64 *)((char *)v30 + v32), v30, v29);
        v34 = ((char *)v5 - (char *)v30) >> 4;
      }
      while ( v35 <= v34 );
      if ( v34 <= v21 )
        v21 = ((char *)v5 - (char *)v30) >> 4;
      result = sub_98F160(v30, &v30[2 * v21], &v30[2 * v21], v5, v29);
      if ( v43 <= v20 )
        return result;
    }
    v42 = v43;
    if ( v43 > v21 )
      v42 = v21;
    return sub_98F160(a3, &a3[2 * v42], &a3[2 * v42], v5, a1);
  }
  return result;
}

