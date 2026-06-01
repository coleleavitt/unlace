__int64 __fastcall sub_917470(__int64 a1, __int64 a2, int a3)
{
  __m128i *exception; // rbx
  char *v4; // rax
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r14
  unsigned int *v11; // r15
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // edi
  __int64 *v19; // rcx
  int v20; // edx
  char *v21; // rsi
  __int64 v22; // rdx
  __int64 *v23; // r8
  __int64 result; // rax
  unsigned int *v25; // rdx
  __int64 v26; // r15
  unsigned int *v27; // rbx
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  _DWORD *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  _QWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned int **v36; // rcx
  unsigned int v37; // r12d
  unsigned int v38; // ecx
  unsigned int *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  _QWORD v43[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v44; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(unsigned int *)(a2 + 24);
  if ( !(_DWORD)v5 )
  {
LABEL_34:
    sub_1872CE0("");
    sub_1873130(114, 223);
  }
  v7 = a2;
  v8 = a2 + 8 * v5;
  v9 = a2;
LABEL_3:
  while ( 2 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(unsigned int **)(v9 + 32);
    if ( !(unsigned int)sub_8E7030(v10)
      || (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v10 + 7488) + 56LL))(
           *(_QWORD *)(v10 + 7488),
           v11) )
    {
      v12 = *(_QWORD **)(a1 + 16);
      if ( v11 == *(unsigned int **)(v12[13] + 864LL) )
      {
LABEL_12:
        v16 = sub_8E80A0(v12, v11);
        goto LABEL_13;
      }
      v13 = v12[1104];
      if ( *((_WORD *)v11 + 2) || (v14 = *(_DWORD **)(*((_QWORD *)v11 + 2) + 24LL)) == nullptr || *v14 || v14[1] != 8 )
      {
        if ( v13 )
        {
          v15 = *v11;
          v16 = 1;
          if ( (unsigned int)v15 >= *(_DWORD *)(v13 - 4) )
            goto LABEL_13;
LABEL_11:
          if ( *(_DWORD *)(v13 + 4 * v15) == 0x7FFFFFFF )
            goto LABEL_13;
          goto LABEL_12;
        }
      }
      else if ( v13 )
      {
        v15 = **((unsigned int **)v11 + 4);
        v16 = 1;
        if ( (unsigned int)v15 >= *(_DWORD *)(v13 - 4) )
        {
LABEL_13:
          if ( a3 == v16 )
          {
            v17 = *(unsigned int *)(a1 + 32);
            v18 = v11[3];
            v19 = *(__int64 **)(a1 + 24);
            v20 = v17 - 1;
            v17 *= 8;
            v21 = (char *)v19 + v17;
            v22 = 8LL * (v18 & v20);
            v23 = &v19[(unsigned __int64)v22 / 8];
            if ( v22 != v17 )
            {
              for ( result = (__int64)&v19[(unsigned __int64)v22 / 8]; v21 != (char *)result; result += 8 )
              {
                v25 = *(unsigned int **)result;
                if ( *(_QWORD *)result > 1u )
                {
                  if ( v25[3] == v18 && v11 == v25 )
                    return result;
                }
                else if ( !v25 )
                {
                  goto LABEL_21;
                }
              }
            }
            if ( v19 != v23 )
            {
              while ( 1 )
              {
                result = *v19;
                if ( (unsigned __int64)*v19 > 1 )
                {
                  if ( *(_DWORD *)(result + 12) == v18 && v11 == (unsigned int *)result )
                    return result;
                }
                else if ( !result )
                {
                  v9 += 8;
                  if ( v9 == v8 )
                    goto LABEL_22;
                  goto LABEL_3;
                }
                if ( v23 == ++v19 )
                  goto LABEL_21;
              }
            }
          }
          goto LABEL_21;
        }
        goto LABEL_11;
      }
      v16 = 1;
      goto LABEL_13;
    }
LABEL_21:
    v9 += 8;
    if ( v9 != v8 )
      continue;
    break;
  }
  while ( 1 )
  {
LABEL_22:
    v26 = *(_QWORD *)(a1 + 16);
    v27 = *(unsigned int **)(v7 + 32);
    if ( (unsigned int)sub_8E7030(v26)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v26 + 7488) + 56LL))(
            *(_QWORD *)(v26 + 7488),
            v27) )
    {
      goto LABEL_33;
    }
    v28 = *(_QWORD **)(a1 + 16);
    if ( v27 == *(unsigned int **)(v28[13] + 864LL) )
      goto LABEL_31;
    v29 = v28[1104];
    if ( *((_WORD *)v27 + 2) || (v30 = *(_DWORD **)(*((_QWORD *)v27 + 2) + 24LL)) == nullptr || *v30 || v30[1] != 8 )
    {
      if ( v29 )
      {
        v31 = *v27;
        v32 = 1;
        if ( (unsigned int)v31 >= *(_DWORD *)(v29 - 4) )
          goto LABEL_32;
LABEL_30:
        if ( *(_DWORD *)(v29 + 4 * v31) == 0x7FFFFFFF )
          goto LABEL_32;
LABEL_31:
        v32 = sub_8E80A0(v28, v27);
        goto LABEL_32;
      }
LABEL_54:
      v32 = 1;
      goto LABEL_32;
    }
    if ( !v29 )
      goto LABEL_54;
    v31 = **((unsigned int **)v27 + 4);
    v32 = 1;
    if ( (unsigned int)v31 < *(_DWORD *)(v29 - 4) )
      goto LABEL_30;
LABEL_32:
    if ( a3 == v32 )
      break;
LABEL_33:
    v7 += 8;
    if ( v7 == v8 )
      goto LABEL_34;
  }
  v33 = *(_QWORD **)(a1 + 48);
  if ( v33 )
  {
    v34 = *((_DWORD *)v33 - 1);
    if ( v34 == *((_DWORD *)v33 - 2) )
    {
      v37 = (3 * v34 + 1) >> 1;
      v38 = 8 * v37 + 8;
      if ( 8 * v34 + 8 >= v38 || v34 >= v37 )
      {
        exception = (__m128i *)__cxa_allocate_exception(0x28u);
        v4 = (char *)operator new(0x2Bu);
        strcpy(v4, "Overflow encountered when expanding vector");
        exception->m128i_i64[1] = (__int64)v4;
        exception->m128i_i64[0] = (__int64)off_1C63128;
        v43[0] = &v44;
        exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
        v43[1] = 0;
        v44 = 0;
        sub_233E40((__int64)v43);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v33 - 1, v38);
      v40 = v39[1];
      v33 = v39 + 2;
      *v39 = v37;
      *(_QWORD *)(a1 + 48) = v39 + 2;
      LODWORD(v39) = v40;
      v36 = (unsigned int **)&v33[v40];
      result = (unsigned int)((_DWORD)v39 + 1);
    }
    else
    {
      v35 = v34;
      result = v34 + 1;
      v36 = (unsigned int **)&v33[v35];
    }
  }
  else
  {
    v41 = (_QWORD *)sub_186B270(0x18u);
    *v41 = 2;
    result = 1;
    v33 = v41 + 1;
    *(_QWORD *)(a1 + 48) = v33;
    v36 = (unsigned int **)v33;
  }
  *v36 = v27;
  *((_DWORD *)v33 - 1) = result;
  return result;
}

