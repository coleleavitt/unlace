__int64 __fastcall sub_DB1E70(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  int v7; // esi
  __int64 v8; // r12
  unsigned int v9; // edi
  int v10; // eax
  int v11; // ecx
  __int64 v12; // r8
  size_t v13; // r15
  __int64 v14; // rsi
  size_t v15; // rbx
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  _QWORD *v23; // r12
  unsigned int v24; // eax
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  __int64 v27; // rax
  int v28; // r9d
  _OWORD *v29; // rax
  __int64 v30; // rdx
  const double *v31; // rcx
  int v32; // r10d
  double *v33; // r11
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  int v37; // esi
  int v38; // eax
  unsigned int v39; // ebx
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rdx
  _DWORD *v43; // r15
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // r12
  int v48; // [rsp+10h] [rbp-88h]
  __int64 v49[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(_DWORD *)(a2 + 12);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_DWORD *)(a1 + 24);
  v10 = (*(_DWORD *)(a3 + 12) - v7) ^ (v7 << 8);
  v11 = ((v10 ^ ((v7 - v10) << 16)) + v10 - v7) ^ ((v7 - v10) << 10);
  v12 = 24LL * (v11 & (v9 - 1));
  v13 = 24LL * v9;
  v14 = v8 + v12;
  v15 = v8 + v13;
  if ( v12 != v13 )
  {
    for ( result = v8 + v12; v15 != result; result += 24 )
    {
      v17 = *(_QWORD *)(result + 8);
      if ( v17 > 1 )
      {
        if ( *(_DWORD *)result == v11 && a2 == v17 && a3 == *(_QWORD *)(result + 16) )
          return result;
      }
      else if ( !v17 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v8 != v14 )
  {
    for ( result = v8; v14 != result; result += 24 )
    {
      v21 = *(_QWORD *)(result + 8);
      if ( v21 > 1 )
      {
        if ( *(_DWORD *)result == v11 && a2 == v21 && a3 == *(_QWORD *)(result + 16) )
          return result;
      }
      else if ( !v21 )
      {
        break;
      }
    }
  }
LABEL_8:
  if ( 3 * v9 < 4 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 32)) )
  {
    v48 = 2 * v9;
    v13 = 48LL * v9;
    v27 = sub_186B270(v13);
    v28 = 2 * v9;
    v8 = v27;
    v29 = (_OWORD *)(v27 + 8);
    v30 = v8 + v13 + 8;
    if ( 2 * v9 )
    {
      if ( (((_BYTE)v30 - (_BYTE)v29) & 8) == 0 || (*v29 = 0, v29 = (_OWORD *)(v8 + 32), v30 != v8 + 32) )
      {
        do
        {
          *v29 = 0;
          v29 += 3;
          *(_OWORD *)((char *)v29 - 24) = 0;
        }
        while ( (_OWORD *)v30 != v29 );
      }
    }
    v31 = *(const double **)(a1 + 16);
    v32 = v48 - 1;
    v15 = v8 + v13;
    v33 = (double *)&v31[3 * *(unsigned int *)(a1 + 24)];
    if ( v31 != v33 )
    {
      do
      {
        if ( *((_QWORD *)v31 + 1) > 1u )
        {
          v34 = 24LL * (*(_DWORD *)v31 & (unsigned int)v32);
          v35 = v8 + v34;
          if ( v13 == v34 )
          {
LABEL_57:
            if ( v8 == v35 )
            {
LABEL_77:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v36 = v8;
            while ( *(_QWORD *)(v36 + 8) )
            {
              v36 += 24;
              if ( v35 == v36 )
                goto LABEL_77;
            }
          }
          else
          {
            v36 = v8 + v34;
            while ( *(_QWORD *)(v36 + 8) )
            {
              v36 += 24;
              if ( v15 == v36 )
                goto LABEL_57;
            }
          }
          *(_DWORD *)v36 = *(_DWORD *)v31;
          *(__m128 *)(v36 + 8) = _mm_loadh_ps(v31 + 2);
        }
        v31 += 3;
      }
      while ( v33 != v31 );
      v33 = *(double **)(a1 + 16);
    }
    if ( v33 )
    {
      sub_186B220(v33);
      v28 = 2 * v9;
      v32 = v48 - 1;
    }
    v37 = *(_DWORD *)(a2 + 12);
    v38 = *(_DWORD *)(a3 + 12);
    *(_QWORD *)(a1 + 16) = v8;
    *(_DWORD *)(a1 + 24) = v28;
    *(_DWORD *)(a1 + 32) = 0;
    v11 = ((v37 - ((v37 << 8) ^ (v38 - v37))) << 10)
        ^ (((v37 << 8) ^ (v38 - v37)) - v37 + ((v37 << 8) ^ (v38 - v37) ^ ((v37 - ((v37 << 8) ^ (v38 - v37))) << 16)));
    v12 = 24LL * (v11 & (unsigned int)v32);
    v14 = v8 + v12;
  }
  if ( v12 != v13 )
  {
    v18 = v14;
    v19 = 0;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v18 + 8);
      if ( v20 > 1 )
      {
        if ( *(_DWORD *)v18 == v11 && a2 == v20 && a3 == *(_QWORD *)(v18 + 16) )
        {
          *(_QWORD *)(v18 + 8) = a2;
          goto LABEL_38;
        }
      }
      else
      {
        if ( !v20 )
        {
          if ( v19 )
            goto LABEL_75;
          v19 = v18;
          goto LABEL_76;
        }
        v19 = v18;
      }
      v18 += 24;
      if ( v18 == v15 )
        goto LABEL_32;
    }
  }
  v19 = 0;
  while ( 1 )
  {
LABEL_32:
    if ( v8 == v14 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v22 = *(_QWORD *)(v8 + 8);
    if ( v22 <= 1 )
      break;
    if ( *(_DWORD *)v8 == v11 && a2 == v22 && a3 == *(_QWORD *)(v8 + 16) )
    {
      *(_QWORD *)(v8 + 8) = a2;
      goto LABEL_38;
    }
LABEL_31:
    v8 += 24;
  }
  if ( v22 )
  {
    v19 = v8;
    goto LABEL_31;
  }
  if ( v19 )
LABEL_75:
    --*(_DWORD *)(a1 + 32);
  else
    v19 = v8;
LABEL_76:
  *(_QWORD *)(v19 + 8) = a2;
  *(_QWORD *)(v19 + 16) = a3;
  *(_DWORD *)v19 = v11;
  ++*(_DWORD *)(a1 + 28);
LABEL_38:
  v23 = *(_QWORD **)(a1 + 8);
  if ( v23 )
  {
    v24 = *((_DWORD *)v23 - 1);
    if ( v24 == *((_DWORD *)v23 - 2) )
    {
      v39 = (3 * v24 + 1) >> 1;
      v40 = 16 * v39 + 8;
      if ( 16 * v24 + 8 >= v40 || v24 >= v39 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v49, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = sub_186B270(v40);
      v42 = *(_QWORD *)(a1 + 8);
      v43 = (_DWORD *)v41;
      v23 = (_QWORD *)(v41 + 8);
      if ( v42 )
      {
        v44 = *(unsigned int *)(v42 - 4);
        *(_DWORD *)(v41 + 4) = v44;
        v45 = 0;
        v46 = 16 * v44;
        if ( v46 )
        {
          do
          {
            *(__m128i *)&v43[v45 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v42 + v45));
            v45 += 16LL;
          }
          while ( v46 != v45 );
        }
        sub_186B220((void *)(v42 - 8));
        v26 = &v23[2 * (unsigned int)v43[1]];
        result = (unsigned int)(v43[1] + 1);
      }
      else
      {
        *(_DWORD *)(v41 + 4) = 0;
        v26 = (_QWORD *)(v41 + 8);
        result = 1;
      }
      *(_QWORD *)(a1 + 8) = v23;
      *v43 = v39;
    }
    else
    {
      v25 = v24;
      result = v24 + 1;
      v26 = &v23[2 * v25];
    }
  }
  else
  {
    v47 = (_QWORD *)sub_186B270(0x28u);
    *v47 = 2;
    result = 1;
    v23 = v47 + 1;
    *(_QWORD *)(a1 + 8) = v23;
    v26 = v23;
  }
  *v26 = a2;
  v26[1] = a3;
  *((_DWORD *)v23 - 1) = result;
  return result;
}

