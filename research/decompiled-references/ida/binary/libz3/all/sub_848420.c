__m128 *__fastcall sub_848420(__m128 *a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  __int64 v7; // r12
  __int64 v8; // r8
  __int64 v10; // rax
  int v11; // edi
  __int64 *v12; // rcx
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // r9
  __int64 *i; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  _QWORD *v20; // r13
  _QWORD *v21; // rax
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // r9
  __int64 v25; // r14
  _QWORD *v26; // rsi
  int v27; // edx
  _QWORD *v28; // r12
  unsigned int v29; // eax
  __int64 v30; // rax
  _DWORD *v31; // rax
  unsigned __int64 v32; // r12
  __int64 v33; // rax
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rsi
  double v38; // rdi
  bool v39; // zf
  unsigned int v40; // edx
  size_t v41; // rsi
  _DWORD *v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // r13
  __int64 v45; // rax
  __int64 *v46; // rbx
  unsigned __int64 v47; // r13
  __int64 v48; // rsi
  int v49[2]; // [rsp+8h] [rbp-A0h]
  int v50[2]; // [rsp+8h] [rbp-A0h]
  int v51[2]; // [rsp+10h] [rbp-98h]
  __int64 v52; // [rsp+18h] [rbp-90h]
  int v53; // [rsp+20h] [rbp-88h]
  char v54; // [rsp+28h] [rbp-80h]
  int v55; // [rsp+38h] [rbp-70h]
  int v56[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v57; // [rsp+48h] [rbp-60h]
  __int64 v58; // [rsp+50h] [rbp-58h] BYREF
  double v59[10]; // [rsp+58h] [rbp-50h] BYREF

  v7 = sub_792250(*(_QWORD *)a2);
  if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a2 + 16), a3) )
  {
    *a1 = _mm_loadh_ps((const double *)(a2 + 16));
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    return a1;
  }
  v10 = *(unsigned int *)(v7 + 8);
  v11 = *(_DWORD *)(a3 + 12);
  v12 = *(__int64 **)v7;
  v13 = v10 - 1;
  v10 *= 16;
  v14 = (__int64 *)(*(_QWORD *)v7 + v10);
  v15 = 16LL * (v11 & v13);
  v16 = (__int64 *)(*(_QWORD *)v7 + v15);
  if ( v15 != v10 )
  {
    for ( i = (__int64 *)(*(_QWORD *)v7 + v15); v14 != i; i += 2 )
    {
      v18 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v18 + 12) == v11 && a3 == v18 )
        {
LABEL_27:
          sub_847A00(a1, a2, i[1]);
          return a1;
        }
      }
      else if ( !v18 )
      {
        goto LABEL_12;
      }
    }
  }
  for ( ; v16 != v12; v12 += 2 )
  {
    v30 = *v12;
    if ( (unsigned __int64)*v12 > 1 )
    {
      if ( *(_DWORD *)(v30 + 12) == v11 && a3 == v30 )
      {
        i = v12;
        goto LABEL_27;
      }
    }
    else if ( !v30 )
    {
      break;
    }
  }
LABEL_12:
  if ( *(_WORD *)(a3 + 4) )
    goto LABEL_33;
  v19 = *(unsigned int *)(a3 + 24);
  if ( (_DWORD)v19 )
  {
    v20 = (_QWORD *)(a3 + 32);
    *(_QWORD *)v49 = *(_QWORD *)(a2 + 16);
    sub_848420((unsigned int)v56, a2, *(_QWORD *)(a3 + 32), (_DWORD)v12, v8, (_DWORD)v16);
    *(_QWORD *)v51 = *(_QWORD *)v56;
    v21 = (_QWORD *)sub_186B270(0x18u);
    v24 = *(_QWORD *)v51;
    v25 = a3 + 32 + 8 * v19;
    *v21 = 2;
    v26 = v21 + 1;
    v27 = 1;
    v28 = v21 + 1;
    while ( 1 )
    {
      ++v20;
      *v26 = v24;
      *((_DWORD *)v28 - 1) = v27;
      if ( (_QWORD *)v25 == v20 )
        break;
      sub_848420((unsigned int)v56, a2, *v20, v22, v23, v24);
      v24 = *(_QWORD *)v56;
      v29 = *((_DWORD *)v28 - 1);
      if ( v29 == *((_DWORD *)v28 - 2) )
      {
        v40 = (3 * v29 + 1) >> 1;
        v41 = 8 * v40 + 8;
        if ( 8 * v29 + 8 >= (unsigned int)v41 || v29 >= v40 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v58, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v58);
          sub_233E40((__int64)&v58);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v52 = *(_QWORD *)v56;
        v51[0] = (3 * v29 + 1) >> 1;
        v42 = (_DWORD *)sub_186B300(v28 - 1, v41);
        v28 = v42 + 2;
        v24 = v52;
        *v42 = v51[0];
        v43 = (unsigned int)v42[1];
        v26 = &v42[2 * v43 + 2];
        v27 = v43 + 1;
      }
      else
      {
        v26 = &v28[v29];
        v27 = v29 + 1;
      }
    }
    v44 = *(_QWORD *)(a2 + 16);
    v45 = sub_15DC610(
            v44,
            *(_QWORD *)(a3 + 16),
            v27,
            (int)v28,
            v23,
            v24,
            (int)v56,
            v49[0],
            v51[0],
            v52,
            v53,
            v54,
            v49[0],
            v55,
            v56[0],
            v57);
    *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)v44);
    if ( v45 )
      ++*(_DWORD *)(v45 + 8);
    v46 = v28;
    v47 = (unsigned __int64)&v28[*((unsigned int *)v28 - 1)];
    if ( (unsigned __int64)v28 < v47 )
    {
      do
      {
        v48 = *v46;
        if ( *v46 )
        {
          v39 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v39 )
            sub_15D7BC0(*(_QWORD *)v50, v48);
        }
        ++v46;
      }
      while ( (unsigned __int64)v46 < v47 );
    }
    sub_186B220(v28 - 1);
    return a1;
  }
  v31 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v31 || *v31 != 3 || v31[1] )
  {
LABEL_33:
    sub_1374110(&v58, *(_QWORD *)(a2 + 176), a3, v12, v8, v16);
    if ( a3 == v58 )
    {
      *a1 = _mm_loadh_ps(v59);
    }
    else
    {
      sub_848420((_DWORD)a1, a2, v58, v34, v35, v36);
      v37 = v58;
      v38 = v59[0];
      if ( v58 )
      {
        v39 = (*(_DWORD *)(v58 + 8))-- == 1;
        if ( v39 )
          sub_15D7BC0(*(_QWORD *)&v38, v37);
      }
    }
  }
  else
  {
    v32 = *(_QWORD *)(a2 + 16);
    sub_15D1F10(a3);
    v33 = sub_15E1890(v32);
    *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)v32);
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
  }
  return a1;
}

