__int64 __fastcall sub_330F0(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, int a5)
{
  __int64 v5; // r13
  int v7; // ebx
  int v8; // edx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  int v11; // ebp
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi
  int v15; // r13d
  int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r13d
  __int64 v20; // r15
  int v21; // ecx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 result; // rax
  int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rbp
  int v35; // ebx
  int v36; // r13d
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // r13
  __int64 v45; // rbx
  int v46; // ebx
  int v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 tinfo_size; // [rsp+0h] [rbp-58h]
  int v54; // [rsp+0h] [rbp-58h]
  int v55; // [rsp+0h] [rbp-58h]
  int v56; // [rsp+8h] [rbp-50h]
  int v57; // [rsp+8h] [rbp-50h]

  v5 = a5;
  v7 = a5;
  tinfo_size = get_tinfo_size(0, *a3, 0);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = ((tinfo_size - v5 + (int)(*(_QWORD *)(a1 + 8) - 1))
      & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL)
      & -*(_DWORD *)(a1 + 8))
     / *(_QWORD *)(a1 + 8);
  v10 = 11 - v8;
  if ( v10 > v9 )
    LODWORD(v10) = ((tinfo_size - v5 + (int)(*(_QWORD *)(a1 + 8) - 1))
                  & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL)
                  & -*(_DWORD *)(a1 + 8))
                 / *(_QWORD *)(a1 + 8);
  if ( (int)v10 <= 0 )
  {
    v25 = get_tinfo_size(0, *a3, 0) - v5;
    if ( a4 )
    {
      v42 = a4[1];
      v43 = *a4;
      if ( a4[2] < (unsigned __int64)(v42 + 1) )
      {
        v52 = qvector_reserve(a4, v43, v42 + 1, 24);
        v42 = a4[1];
        *a4 = v52;
        v43 = v52;
      }
      v44 = v43 + 24 * v42;
      *(_DWORD *)(v44 + 16) = 0xFFFF;
      *(_QWORD *)v44 = 0;
      *(_QWORD *)(v44 + 8) = 0;
      ++a4[1];
      *(_WORD *)(v44 + 16) = v7;
      *(_WORD *)(v44 + 18) = v25;
      v45 = *(_QWORD *)(a1 + 24);
      cleanup_argloc(v44);
      *(_DWORD *)v44 = 1;
      *(_QWORD *)(v44 + 8) = v45;
      goto LABEL_26;
    }
LABEL_37:
    v41 = *(_QWORD *)(a1 + 24);
    cleanup_argloc(a2);
    *(_DWORD *)a2 = 1;
    *(_QWORD *)(a2 + 8) = v41;
    goto LABEL_27;
  }
  if ( v9 == 1 )
  {
    if ( !a4 )
    {
      v54 = *(_DWORD *)(a1 + 16);
      cleanup_argloc(a2);
      *(_DWORD *)a2 = 3;
      *(_DWORD *)(a2 + 8) = v54;
      result = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 24) += result;
      return result;
    }
  }
  else
  {
    v11 = v10;
    if ( v8 > 8 || v9 != 2 || v9 * *(_QWORD *)(a1 + 8) != tinfo_size - v5 )
    {
      if ( a4 )
      {
        v12 = a4[1];
        v13 = a4[2];
        v14 = *a4;
      }
      else
      {
        v40 = qalloc_or_throw(24);
        v14 = 0;
        v13 = 0;
        *(_QWORD *)v40 = 0;
        a4 = (__int64 *)v40;
        *(_OWORD *)(v40 + 8) = 0;
        v12 = 0;
      }
      while ( 1 )
      {
        if ( v13 < v12 + 1 )
        {
          v23 = qvector_reserve(a4, v14, v12 + 1, 24);
          *a4 = v23;
          v14 = v23;
          v12 = a4[1];
        }
        v20 = v14 + 24 * v12;
        *(_QWORD *)v20 = 0;
        v21 = tinfo_size - v5;
        *(_DWORD *)(v20 + 16) = 0xFFFF;
        *(_QWORD *)(v20 + 8) = 0;
        ++a4[1];
        *(_WORD *)(v20 + 16) = v7;
        v22 = *(_QWORD *)(a1 + 8);
        if ( tinfo_size - v5 < v22 )
        {
          *(_WORD *)(v20 + 18) = v21;
          v15 = 0;
          v56 = v21;
          if ( (unsigned __int8)getinf_flag(3, 32) )
            v15 = (*(_DWORD *)(a1 + 8) - v56) << 16;
          v57 = *(_DWORD *)(a1 + 16);
          cleanup_argloc(v20);
          *(_DWORD *)v20 = 3;
          v16 = v57 | v15;
        }
        else
        {
          *(_WORD *)(v20 + 18) = v22;
          v16 = *(_DWORD *)(a1 + 16);
          cleanup_argloc(v20);
          *(_DWORD *)v20 = 3;
        }
        *(_DWORD *)(v20 + 8) = v16;
        v17 = *(_QWORD *)(a1 + 8);
        v18 = *(_QWORD *)(a1 + 24);
        ++*(_DWORD *)(a1 + 16);
        v19 = v7 + v17;
        v7 += v17;
        *(_QWORD *)(a1 + 24) = v17 + v18;
        if ( !--v11 )
          break;
        v12 = a4[1];
        v13 = a4[2];
        v5 = v7;
        v14 = *a4;
      }
      if ( v19 >= tinfo_size )
      {
        result = cleanup_argloc(a2);
        if ( a4 )
        {
          *(_DWORD *)a2 = 2;
          *(_QWORD *)(a2 + 8) = a4;
        }
        return result;
      }
      v25 = get_tinfo_size(0, *a3, 0) - v19;
      if ( a4 )
      {
        v26 = a4[1];
        v27 = *a4;
        if ( a4[2] < (unsigned __int64)(v26 + 1) )
        {
          v49 = qvector_reserve(a4, v27, v26 + 1, 24);
          v26 = a4[1];
          *a4 = v49;
          v27 = v49;
        }
        v28 = v27 + 24 * v26;
        *(_QWORD *)v28 = 0;
        *(_DWORD *)(v28 + 16) = 0xFFFF;
        *(_QWORD *)(v28 + 8) = 0;
        ++a4[1];
        *(_WORD *)(v28 + 16) = v19;
        *(_WORD *)(v28 + 18) = v25;
        v29 = *(_QWORD *)(a1 + 24);
        cleanup_argloc(v28);
        *(_DWORD *)v28 = 1;
        *(_QWORD *)(v28 + 8) = v29;
LABEL_26:
        cleanup_argloc(a2);
        *(_DWORD *)a2 = 2;
        *(_QWORD *)(a2 + 8) = a4;
LABEL_27:
        v30 = v25 + *(_QWORD *)(a1 + 24) + (int)(*(_QWORD *)(a1 + 8) - 1);
        v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16LL) & -*(_DWORD *)(a1 + 8);
        *(_BYTE *)(a1 + 34) = 1;
        result = v31 & v30;
        *(_QWORD *)(a1 + 24) = result;
        return result;
      }
      goto LABEL_37;
    }
    if ( !a4 )
    {
      v55 = *(_DWORD *)(a1 + 16);
      v46 = v8 + 1;
      if ( (unsigned __int8)getinf_flag(3, 32) )
      {
        cleanup_argloc(a2);
        v47 = (v55 << 16) | v46;
      }
      else
      {
        cleanup_argloc(a2);
        v47 = v55 | (v46 << 16);
      }
      *(_DWORD *)a2 = 4;
      *(_DWORD *)(a2 + 8) = v47;
      v48 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 16) += 2;
      result = 2 * v48;
      *(_QWORD *)(a1 + 24) += result;
      return result;
    }
  }
  v32 = a4[1];
  v33 = *a4;
  if ( a4[2] < (unsigned __int64)(v32 + 1) )
  {
    v51 = qvector_reserve(a4, v33, v32 + 1, 24);
    v32 = a4[1];
    *a4 = v51;
    v33 = v51;
  }
  v34 = v33 + 24 * v32;
  *(_DWORD *)(v34 + 16) = 0xFFFF;
  *(_QWORD *)v34 = 0;
  *(_QWORD *)(v34 + 8) = 0;
  ++a4[1];
  *(_WORD *)(v34 + 16) = v7;
  *(_WORD *)(v34 + 18) = tinfo_size - v7;
  v35 = *(_DWORD *)(a1 + 16);
  if ( v9 == 1 )
  {
    cleanup_argloc(v33 + 24 * v32);
    *(_DWORD *)v34 = 3;
    *(_DWORD *)(v34 + 8) = v35;
    v50 = *(_QWORD *)(a1 + 8);
    ++*(_DWORD *)(a1 + 16);
    v39 = *(_QWORD *)(a1 + 24) + v50;
  }
  else
  {
    v36 = v35 + 1;
    if ( (unsigned __int8)getinf_flag(3, 32) )
    {
      cleanup_argloc(v34);
      v37 = v36 | (v35 << 16);
    }
    else
    {
      cleanup_argloc(v34);
      v37 = v35 | (v36 << 16);
    }
    *(_DWORD *)v34 = 4;
    *(_DWORD *)(v34 + 8) = v37;
    v38 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 16) += 2;
    v39 = *(_QWORD *)(a1 + 24) + 2 * v38;
  }
  *(_QWORD *)(a1 + 24) = v39;
  result = cleanup_argloc(a2);
  *(_DWORD *)a2 = 2;
  *(_QWORD *)(a2 + 8) = a4;
  return result;
}
