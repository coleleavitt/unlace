__int64 __fastcall sub_7D0460(
        const __m128i *a1,
        unsigned int a2,
        __int64 a3,
        _DWORD **a4,
        unsigned __int8 a5,
        double a6)
{
  char **exception; // rbp
  __int64 v7; // rdx
  __int64 v12; // rax
  const __m128i *v13; // r13
  __int64 v14; // rax
  size_t v15; // rsi
  __int64 v16; // rcx
  char v17; // r8
  unsigned int v18; // r15d
  __int64 v19; // rdx
  char v20; // r15
  __int64 result; // rax
  _DWORD *v22; // rdi
  _DWORD *v23; // r9
  _DWORD *v24; // rdx
  unsigned int v25; // esi
  __int64 v26; // r10
  __int64 v27; // rax
  bool v28; // bp
  unsigned int v29; // r14d
  _DWORD *v30; // rdx
  unsigned int v31; // r14d
  __int64 v32; // rax
  unsigned int *v33; // rax
  __int64 v34; // rax
  int v35; // r15d
  __int64 v36; // r13
  _QWORD *v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rsi
  int v40; // eax
  __int64 *v41; // rsi
  __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned int *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // r15d
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rsi
  _QWORD *v51; // rcx
  unsigned int v53; // [rsp+14h] [rbp-64h]
  unsigned int v54; // [rsp+18h] [rbp-60h]
  char v55; // [rsp+18h] [rbp-60h]
  char v56; // [rsp+1Eh] [rbp-5Ah]
  char v57; // [rsp+1Fh] [rbp-59h]
  __int64 v58[11]; // [rsp+20h] [rbp-58h] BYREF

  v12 = a1[1].m128i_i64[1];
  if ( v12 && (v56 = *(_BYTE *)(v12 + 352)) != 0 && (sub_7A4170(a1), !a5) )
  {
    v34 = a1[146].m128i_i64[1];
    if ( v34 )
      v35 = *(_DWORD *)(v34 - 4);
    else
      v35 = 0;
    v36 = sub_180C100(&a1[134], 24);
    *(_QWORD *)(v36 + 8) = (char *)a1 + 2344;
    v37 = (_QWORD *)a1[133].m128i_i64[0];
    *(_QWORD *)v36 = off_1C54810;
    *(_DWORD *)(v36 + 16) = v35;
    if ( v37 )
    {
      v38 = *((_DWORD *)v37 - 1);
      if ( v38 == *((_DWORD *)v37 - 2) )
      {
        v47 = (3 * v38 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v38 + 8 >= (unsigned int)v48 || v38 >= v47 )
        {
LABEL_54:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_116834(v58, "Overflow encountered when expanding vector", v7);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v58);
          sub_233E40((__int64)v58);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v49 = (unsigned int *)sub_186B300(v37 - 1, v48);
        v50 = v49[1];
        v37 = v49 + 2;
        *v49 = v47;
        a1[133].m128i_i64[0] = (__int64)(v49 + 2);
        LODWORD(v49) = v50;
        v41 = &v37[v50];
        v40 = (_DWORD)v49 + 1;
      }
      else
      {
        v39 = v38;
        v40 = v38 + 1;
        v41 = &v37[v39];
      }
    }
    else
    {
      v51 = (_QWORD *)sub_186B270(0x18u);
      *v51 = 2;
      v40 = 1;
      v37 = v51 + 1;
      a1[133].m128i_i64[0] = (__int64)v37;
      v41 = v37;
    }
    *v41 = v36;
    *((_DWORD *)v37 - 1) = v40;
    v42 = a1[147].m128i_i64[0];
    if ( v42 )
      *(_DWORD *)(v42 - 4) = 0;
  }
  else
  {
    v56 = 0;
  }
  v13 = *(const __m128i **)a3;
  sub_13D4540(&a1[99].m128i_u64[1]);
  v14 = a1[146].m128i_i64[0];
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  v15 = a2;
  if ( a1 == v13 )
    sub_7CD620(a1, a2, (int *)(a3 + 8), a6, (__int64)a4, a5);
  else
    (*(void (__fastcall **)(const __m128i *, _QWORD, __int64, _DWORD **, _QWORD))(v13->m128i_i64[0] + 80))(
      v13,
      a2,
      a3,
      a4,
      a5);
  v16 = a1[146].m128i_i64[0];
  if ( v16 )
  {
    v17 = 0;
    v18 = 0;
    v53 = *(_DWORD *)(v16 - 4);
    if ( v53 )
    {
      do
      {
        v19 = *(_QWORD *)(v16 + 8LL * v18);
        if ( (v19 & 7) == 1 )
        {
          v29 = v19;
          v30 = *a4;
          v31 = v29 >> 4;
          if ( *a4 )
          {
            v32 = (unsigned int)*(v30 - 1);
            if ( (_DWORD)v32 == *(v30 - 2) )
            {
              v43 = (unsigned int)(3 * v32 + 1) >> 1;
              v15 = 4 * v43 + 8;
              if ( 4 * (int)v32 + 8 >= (unsigned int)v15 || (unsigned int)v32 >= v43 )
                goto LABEL_54;
              v57 = v17;
              v54 = (unsigned int)(3 * v32 + 1) >> 1;
              v44 = (unsigned int *)sub_186B300(v30 - 2, v15);
              v17 = v57;
              v30 = v44 + 2;
              *v44 = v54;
              v45 = v44[1];
              *a4 = v30;
              v16 = a1[146].m128i_i64[0];
              v33 = &v30[v45];
            }
            else
            {
              v33 = &v30[v32];
            }
          }
          else
          {
            v55 = v17;
            v46 = (_QWORD *)sub_186B270(0x10u);
            v16 = a1[146].m128i_i64[0];
            v17 = v55;
            v30 = v46 + 1;
            *v46 = 2;
            *a4 = v46 + 1;
            v33 = (unsigned int *)(v46 + 1);
          }
          *v33 = v31;
          ++*(v30 - 1);
        }
        else
        {
          v15 = 4294967294LL;
          (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, _DWORD **, _QWORD))(**(_QWORD **)(v19 & 0xFFFFFFFFFFFFFFF8LL)
                                                                                       + 80LL))(
            *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL),
            4294967294LL,
            v19 & 0xFFFFFFFFFFFFFFF8LL,
            a4,
            a5);
          v16 = a1[146].m128i_i64[0];
          v17 = 1;
        }
        ++v18;
      }
      while ( v16 && v18 < *(_DWORD *)(v16 - 4) );
    }
    v20 = v17;
  }
  else
  {
    v53 = 0;
    v20 = 0;
  }
  result = sub_13D4550(&a1[99].m128i_u64[1], v15);
  v22 = *a4;
  if ( *a4 )
  {
    v23 = &v22[*(v22 - 1)];
    result = (unsigned int)*(v22 - 1);
    if ( v22 == v23 )
    {
      v25 = 0;
    }
    else
    {
      v24 = *a4;
      v25 = 0;
      v26 = *(_QWORD *)(a1[1].m128i_i64[1] + 3296);
      do
      {
        if ( *(_DWORD *)(v26 + 24LL * (*v24 >> 1)) )
        {
          v27 = v25++;
          v22[v27] = *v24;
        }
        ++v24;
      }
      while ( v24 != v23 );
      result = (unsigned int)*(v22 - 1);
    }
    *(v22 - 1) = v25;
    v28 = v25 < (unsigned int)result;
  }
  else
  {
    v28 = 0;
  }
  if ( v56 )
  {
    result = sub_7A4970((__int64)a1, a2, v53, a1 == v13);
    if ( a2 != -2 && (v20 || v28) )
      return sub_7A1EE0((__int64)a1, a2, a4);
  }
  return result;
}

