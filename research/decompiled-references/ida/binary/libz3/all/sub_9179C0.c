__int64 __fastcall sub_9179C0(__int64 a1, _QWORD *a2)
{
  __m128i *exception; // rbp
  char *v3; // rax
  unsigned int *v6; // rbx
  __int64 v7; // rax
  unsigned int **v8; // rcx
  unsigned int v9; // edi
  int v10; // edx
  unsigned int **v11; // rsi
  __int64 v12; // rdx
  unsigned int **v13; // r8
  unsigned int **i; // rax
  unsigned int *v15; // rdx
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  unsigned int **v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // rax
  _DWORD *v23; // rdx
  __int64 v24; // rdx
  __int64 result; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 *v28; // rcx
  int v29; // edi
  unsigned int v30; // edx
  char *v31; // rsi
  __int64 v32; // rdx
  __int64 *v33; // r8
  __int64 v34; // rdx
  unsigned int v35; // edx
  __int64 v36; // rcx
  int v37; // edx
  _QWORD *v38; // rcx
  unsigned int *v39; // rax
  __int64 v40; // rax
  __int64 *v41; // rcx
  int v42; // edi
  unsigned int v43; // edx
  char *v44; // rsi
  __int64 v45; // rdx
  __int64 *v46; // r8
  __int64 v47; // rdx
  unsigned int v48; // r12d
  unsigned int v49; // ecx
  unsigned int *v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r13d
  unsigned int v53; // ecx
  unsigned int *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rdx
  _QWORD *v57; // rax
  _QWORD v58[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v59[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = (unsigned int *)a2[4];
  v7 = *(unsigned int *)(a1 + 32);
  v8 = *(unsigned int ***)(a1 + 24);
  v9 = v6[3];
  v10 = v7 - 1;
  v7 *= 8;
  v11 = (unsigned int **)((char *)v8 + v7);
  v12 = 8LL * (v9 & v10);
  v13 = &v8[(unsigned __int64)v12 / 8];
  if ( v12 != v7 )
  {
    for ( i = &v8[(unsigned __int64)v12 / 8]; v11 != i; ++i )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( v15[3] == v9 && v6 == v15 )
          goto LABEL_12;
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v8; ++v8 )
  {
    v39 = *v8;
    if ( (unsigned __int64)*v8 > 1 )
    {
      if ( v39[3] == v9 && v6 == v39 )
        goto LABEL_12;
    }
    else if ( !v39 )
    {
      break;
    }
  }
LABEL_8:
  v16 = *(_QWORD **)(a1 + 48);
  if ( v16 )
  {
    v17 = *((_DWORD *)v16 - 1);
    if ( v17 == *((_DWORD *)v16 - 2) )
    {
      v52 = (3 * v17 + 1) >> 1;
      v53 = 8 * v52 + 8;
      if ( 8 * v17 + 8 >= v53 || v17 >= v52 )
        goto LABEL_82;
      v54 = (unsigned int *)sub_186B300(v16 - 1, v53);
      v55 = v54[1];
      v16 = v54 + 2;
      *v54 = v52;
      *(_QWORD *)(a1 + 48) = v54 + 2;
      LODWORD(v54) = v55;
      v20 = (unsigned int **)&v16[v55];
      v19 = (_DWORD)v54 + 1;
    }
    else
    {
      v18 = v17;
      v19 = v17 + 1;
      v20 = (unsigned int **)&v16[v18];
    }
  }
  else
  {
    v56 = (_QWORD *)sub_186B270(0x18u);
    *v56 = 2;
    v19 = 1;
    v16 = v56 + 1;
    *(_QWORD *)(a1 + 48) = v16;
    v20 = (unsigned int **)v16;
  }
  *v20 = v6;
  v6 = (unsigned int *)a2[4];
  *((_DWORD *)v16 - 1) = v19;
LABEL_12:
  v21 = *(_QWORD **)(a1 + 16);
  if ( *(unsigned int **)(v21[13] + 864LL) != v6 )
  {
    v22 = v21[1104];
    if ( *((_WORD *)v6 + 2) || (v23 = *(_DWORD **)(*((_QWORD *)v6 + 2) + 24LL)) == nullptr || *v23 || v23[1] != 8 )
    {
      if ( !v22 )
        goto LABEL_45;
      v24 = *v6;
      if ( (unsigned int)v24 >= *(_DWORD *)(v22 - 4) )
        goto LABEL_45;
    }
    else
    {
      if ( !v22 )
        goto LABEL_45;
      v24 = **((unsigned int **)v6 + 4);
      if ( (unsigned int)v24 >= *(_DWORD *)(v22 - 4) )
        goto LABEL_45;
    }
    if ( *(_DWORD *)(v22 + 4 * v24) == 0x7FFFFFFF )
      goto LABEL_45;
  }
  result = sub_8E80A0(v21, v6);
  if ( !(_DWORD)result )
  {
    sub_1872CE0("");
    sub_1873130(114, 263);
  }
  if ( (_DWORD)result == 1 )
  {
LABEL_45:
    v26 = a2[5];
    v40 = *(unsigned int *)(a1 + 32);
    v41 = *(__int64 **)(a1 + 24);
    v42 = *(_DWORD *)(v26 + 12);
    v43 = v40 - 1;
    v40 *= 8;
    v44 = (char *)v41 + v40;
    v45 = 8LL * (v42 & v43);
    v46 = &v41[(unsigned __int64)v45 / 8];
    if ( v45 != v40 )
    {
      for ( result = (__int64)&v41[(unsigned __int64)v45 / 8]; v44 != (char *)result; result += 8 )
      {
        v47 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v47 + 12) == v42 && v26 == v47 )
            return result;
        }
        else if ( !v47 )
        {
          goto LABEL_52;
        }
      }
    }
    for ( ; v46 != v41; ++v41 )
    {
      result = *v41;
      if ( (unsigned __int64)*v41 > 1 )
      {
        if ( *(_DWORD *)(result + 12) == v42 && v26 == result )
          return result;
      }
      else if ( !result )
      {
        break;
      }
    }
LABEL_52:
    result = *(_QWORD *)(a1 + 48);
    if ( result )
    {
      v35 = *(_DWORD *)(result - 4);
      if ( v35 == *(_DWORD *)(result - 8) )
      {
        v48 = (3 * v35 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v35 + 8 < v49 && v35 < v48 )
          goto LABEL_56;
        goto LABEL_82;
      }
      goto LABEL_31;
    }
LABEL_81:
    v57 = (_QWORD *)sub_186B270(0x18u);
    v37 = 1;
    *v57 = 2;
    result = (__int64)(v57 + 1);
    *(_QWORD *)(a1 + 48) = result;
    v38 = (_QWORD *)result;
    goto LABEL_32;
  }
  if ( (_DWORD)result != -1 )
    return result;
  v26 = a2[6];
  v27 = *(unsigned int *)(a1 + 32);
  v28 = *(__int64 **)(a1 + 24);
  v29 = *(_DWORD *)(v26 + 12);
  v30 = v27 - 1;
  v27 *= 8;
  v31 = (char *)v28 + v27;
  v32 = 8LL * (v29 & v30);
  v33 = &v28[(unsigned __int64)v32 / 8];
  if ( v32 != v27 )
  {
    for ( result = (__int64)&v28[(unsigned __int64)v32 / 8]; v31 != (char *)result; result += 8 )
    {
      v34 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v34 + 12) == v29 && v26 == v34 )
          return result;
      }
      else if ( !v34 )
      {
        goto LABEL_29;
      }
    }
  }
  for ( ; v33 != v28; ++v28 )
  {
    result = *v28;
    if ( (unsigned __int64)*v28 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v29 && v26 == result )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_29:
  result = *(_QWORD *)(a1 + 48);
  if ( !result )
    goto LABEL_81;
  v35 = *(_DWORD *)(result - 4);
  if ( v35 == *(_DWORD *)(result - 8) )
  {
    v48 = (3 * v35 + 1) >> 1;
    v49 = 8 * v48 + 8;
    if ( 8 * v35 + 8 < v49 && v35 < v48 )
    {
LABEL_56:
      v50 = (unsigned int *)sub_186B300((void *)(result - 8), v49);
      result = (__int64)(v50 + 2);
      v51 = v50[1];
      *(_QWORD *)(a1 + 48) = v50 + 2;
      *v50 = v48;
      LODWORD(v50) = v51;
      v38 = (_QWORD *)(result + 8 * v51);
      v37 = (_DWORD)v50 + 1;
      goto LABEL_32;
    }
LABEL_82:
    v58[0] = v59;
    exception = (__m128i *)__cxa_allocate_exception(0x28u);
    v3 = (char *)operator new(0x2Bu);
    strcpy(v3, "Overflow encountered when expanding vector");
    exception->m128i_i64[1] = (__int64)v3;
    exception->m128i_i64[0] = (__int64)off_1C63128;
    exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
    v58[0] = v59;
    v58[1] = 0;
    v59[0] = 0;
    sub_233E40((__int64)v58);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_31:
  v36 = v35;
  v37 = v35 + 1;
  v38 = (_QWORD *)(result + 8 * v36);
LABEL_32:
  *v38 = v26;
  *(_DWORD *)(result - 4) = v37;
  return result;
}

