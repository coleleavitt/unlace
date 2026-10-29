const __m128i *__fastcall sub_DEA6A0(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  __int64 (__fastcall *v7)(__int64, __int64 *); // rax
  char *i; // rax
  __int64 *v9; // r10
  __int64 v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  unsigned int v14; // edx
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 *j; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // r14
  _BYTE *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // rbx
  _BYTE *v30; // rax
  char *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r9
  const __m128i *v34; // rbx
  __int64 v36; // r9
  char *v37; // rcx
  __int64 v38; // rax
  int v39; // edi
  unsigned int v40; // edx
  char *v41; // rsi
  __int64 v42; // rdx
  char *v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 (__fastcall *v46)(__int64, __int64, __int64 *, const __m128i *); // rax
  __int64 v47; // r15
  char *v48; // rbp
  char *v49; // r12
  __int64 v50; // rsi
  __int64 v52; // rax
  __int64 v53; // r10
  _OWORD *v54; // rax
  __int64 v55; // rax
  char **exception; // rbp
  __int64 v58; // [rsp+8h] [rbp-120h]
  __int64 v59[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+50h] [rbp-D8h]
  void *ptr; // [rsp+58h] [rbp-D0h]
  __int64 v62; // [rsp+60h] [rbp-C8h]
  _BYTE v63[192]; // [rsp+68h] [rbp-C0h] BYREF

  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a1 + 72LL);
  if ( v7 == sub_DDBB40 )
  {
    i = (char *)a1[3];
    if ( !i )
      goto LABEL_12;
    if ( !*(_DWORD *)i )
      goto LABEL_33;
    v9 = a4;
    if ( *(_DWORD *)i == 1 )
    {
LABEL_39:
      v36 = *v9;
      v37 = *((char **)i + 2);
      v38 = *((unsigned int *)i + 6);
      v39 = *(_DWORD *)(*v9 + 12);
      v40 = v38 - 1;
      v38 *= 16;
      v41 = &v37[v38];
      v42 = 16LL * (v39 & v40);
      v43 = &v37[v42];
      if ( v42 != v38 )
      {
        for ( i = &v37[v42]; v41 != i; i += 16 )
        {
          v44 = *(_QWORD *)i;
          if ( *(_QWORD *)i > 1u )
          {
            if ( *(_DWORD *)(v44 + 12) == v39 && v36 == v44 )
            {
LABEL_33:
              v34 = *((const __m128i **)i + 1);
              goto LABEL_34;
            }
          }
          else if ( !v44 )
          {
            goto LABEL_12;
          }
        }
      }
      if ( v37 != v43 )
      {
        while ( 1 )
        {
          v55 = *(_QWORD *)v37;
          if ( *(_QWORD *)v37 > 1u )
          {
            if ( *(_DWORD *)(v55 + 12) == v39 && v36 == v55 )
            {
              i = v37;
              goto LABEL_33;
            }
          }
          else if ( !v55 )
          {
            goto LABEL_12;
          }
          v37 += 16;
          if ( v43 == v37 )
            goto LABEL_12;
        }
      }
    }
    else
    {
LABEL_5:
      v10 = *v9;
      v11 = *((__int64 **)i + 2);
      v12 = *((unsigned int *)i + 6);
      v13 = *(_DWORD *)(*v9 + 12);
      v14 = v12 - 1;
      v12 *= 16;
      v15 = (__int64 *)((char *)v11 + v12);
      v16 = 16LL * (v13 & v14);
      v17 = &v11[(unsigned __int64)v16 / 8];
      if ( v16 != v12 )
      {
        for ( j = &v11[(unsigned __int64)v16 / 8]; v15 != j; j += 2 )
        {
          v19 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v19 + 12) == v13 && v10 == v19 )
            {
LABEL_37:
              i = (char *)j[1];
              if ( !i )
                goto LABEL_12;
              ++v9;
              if ( *(_DWORD *)i == 1 )
                goto LABEL_39;
              goto LABEL_5;
            }
          }
          else if ( !v19 )
          {
            goto LABEL_12;
          }
        }
      }
      if ( v11 != v17 )
      {
        while ( 1 )
        {
          v45 = *v11;
          if ( (unsigned __int64)*v11 > 1 )
          {
            if ( *(_DWORD *)(v45 + 12) == v13 && v10 == v45 )
            {
              j = v11;
              goto LABEL_37;
            }
          }
          else if ( !v45 )
          {
            goto LABEL_12;
          }
          v11 += 2;
          if ( v17 == v11 )
            goto LABEL_12;
        }
      }
    }
    goto LABEL_12;
  }
  v34 = (const __m128i *)v7((__int64)a1, a4);
LABEL_34:
  if ( !v34 )
  {
LABEL_12:
    v60 = *a2;
    ptr = v63;
    v62 = 0x1000000000LL;
    v20 = a1[5];
    if ( v20 )
    {
      v21 = *(unsigned int *)(v20 - 4);
      if ( (_DWORD)v21 )
      {
        v22 = 8 * v21;
        v23 = 0;
        while ( 1 )
        {
          v26 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, __int64 *))(**(_QWORD **)(v20 + v23) + 88LL))(
                  *(_QWORD *)(v20 + v23),
                  a2,
                  a3,
                  a4);
          v27 = v26;
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          v28 = v62;
          if ( (unsigned int)v62 < HIDWORD(v62) )
          {
            v24 = ptr;
          }
          else
          {
            v58 = v26;
            v29 = (unsigned int)(2 * HIDWORD(v62));
            v30 = (_BYTE *)sub_186B270(8 * v29);
            v28 = v62;
            v31 = (char *)ptr;
            v24 = v30;
            v27 = v58;
            if ( (_DWORD)v62 )
            {
              if ( (unsigned int)(v62 - 1) <= 2 || v30 == (char *)ptr + 8 )
              {
                v52 = 0;
                v53 = 8LL * (unsigned int)v62;
                do
                {
                  *(_QWORD *)&v24[v52] = *(_QWORD *)&v31[v52];
                  v52 += 8;
                }
                while ( v53 != v52 );
              }
              else
              {
                v32 = 0;
                v33 = 16LL * ((unsigned int)v62 >> 1);
                do
                {
                  *(__m128i *)&v24[v32] = _mm_loadu_si128((const __m128i *)&v31[v32]);
                  v32 += 16;
                }
                while ( v33 != v32 );
                if ( (v28 & 1) != 0 )
                  *(_QWORD *)&v24[8 * (v28 & 0xFFFFFFFE)] = *(_QWORD *)&v31[8 * (v28 & 0xFFFFFFFE)];
              }
            }
            if ( v31 && v31 != v63 )
            {
              sub_186B220(v31);
              v28 = v62;
              v27 = v58;
            }
            ptr = v24;
            HIDWORD(v62) = v29;
          }
          v25 = v28;
          v23 += 8;
          v21 = v28 + 1;
          *(_QWORD *)&v24[8 * v25] = v27;
          LODWORD(v62) = v21;
          if ( v23 == v22 )
            break;
          v20 = a1[5];
        }
      }
      else
      {
        v24 = v63;
      }
    }
    else
    {
      v24 = v63;
      v21 = 0;
    }
    v34 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _BYTE *))(*(_QWORD *)a1[4] + 64LL))(
                             a1[4],
                             a2,
                             v21,
                             v24);
    if ( *((_DWORD *)a1 + 3) != a3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v59, "mismatch between number of declared and supplied sort parameters");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v59);
      sub_233E40((__int64)v59);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v46 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, const __m128i *))(*a1 + 64LL);
    if ( v46 == sub_DDBCB0 )
    {
      v47 = a1[3];
      if ( !v47 )
      {
        v47 = sub_17E9C90(a2[1], 40);
        *(_QWORD *)(v47 + 8) = 0;
        *(_DWORD *)v47 = a3;
        v54 = (_OWORD *)sub_186B270(0x80u);
        *v54 = 0;
        v54[1] = 0;
        v54[2] = 0;
        v54[3] = 0;
        v54[4] = 0;
        v54[5] = 0;
        v54[6] = 0;
        v54[7] = 0;
        *(_QWORD *)(v47 + 16) = v54;
        *(_QWORD *)(v47 + 24) = 8;
        *(_DWORD *)(v47 + 32) = 0;
        a1[3] = v47;
      }
      sub_DE9EC0((unsigned int *)v47, (__int64)a2, a4, v34);
    }
    else
    {
      v46((__int64)a1, (__int64)a2, a4, v34);
    }
    v48 = (char *)ptr;
    v49 = (char *)ptr + 8 * (unsigned int)v62;
    if ( ptr < v49 )
    {
      do
      {
        while ( 1 )
        {
          v50 = *(_QWORD *)v48;
          if ( *(_QWORD *)v48 )
          {
            if ( (*(_DWORD *)(v50 + 8))-- == 1 )
              break;
          }
          v48 += 8;
          if ( v48 >= v49 )
            goto LABEL_67;
        }
        sub_15D7BC0(v60, v50);
        v48 += 8;
      }
      while ( v48 < v49 );
LABEL_67:
      v48 = (char *)ptr;
    }
    if ( v48 != v63 && v48 )
      sub_186B220(v48);
  }
  return v34;
}

