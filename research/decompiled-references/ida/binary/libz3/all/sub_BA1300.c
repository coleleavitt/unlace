__int64 __fastcall sub_BA1300(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8)
{
  char **exception; // rbp
  __int64 v10; // r12
  __int64 v11; // rbx
  char v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  _QWORD *v20; // rsi
  __int64 result; // rax
  unsigned int v22; // r10d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // r15
  _QWORD *v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rsi
  int v33; // edx
  __int64 v34; // rsi
  __int64 v35; // rax
  unsigned int v36; // r8d
  unsigned int v37; // r12d
  unsigned int v38; // edx
  unsigned int *v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rax
  _QWORD *v47; // [rsp+10h] [rbp-68h]
  _QWORD *v48; // [rsp+10h] [rbp-68h]
  unsigned int v49; // [rsp+1Ch] [rbp-5Ch]
  char *v50[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = a2;
  if ( !a2 )
  {
    v11 = 0;
    v12 = 0;
LABEL_13:
    v14 = (_QWORD *)sub_180C100(a1 + 48, 16);
    v15 = *(_QWORD **)(a1 + 32);
    v16 = v14;
    *v14 = off_1C57C18;
    v14[1] = v11 + 40;
    if ( v15 )
    {
      v17 = *((_DWORD *)v15 - 1);
      if ( v17 == *((_DWORD *)v15 - 2) )
      {
        v22 = (3 * v17 + 1) >> 1;
        v23 = 8 * v22 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v23 || v17 >= v22 )
          goto LABEL_37;
        v49 = (3 * v17 + 1) >> 1;
        v47 = v16;
        v24 = (unsigned int *)sub_186B300(v15 - 1, v23);
        v16 = v47;
        v25 = v24[1];
        v15 = v24 + 2;
        *v24 = v49;
        LODWORD(v24) = v25;
        *(_QWORD *)(a1 + 32) = v15;
        v20 = &v15[v25];
        v19 = (_DWORD)v24 + 1;
      }
      else
      {
        v18 = v17;
        v19 = v17 + 1;
        v20 = &v15[v18];
      }
    }
    else
    {
      v48 = v14;
      v28 = (_QWORD *)sub_186B270(0x18u);
      v16 = v48;
      v15 = v28 + 1;
      *v28 = 2;
      v19 = 1;
      *(_QWORD *)(a1 + 32) = v15;
      v20 = v15;
    }
    *v20 = v16;
    *((_DWORD *)v15 - 1) = v19;
    result = (__int64)sub_BA0DF0(a1, a3, a4, a5, *(double *)a6.m128_u64, *(double *)a7.m128_u64, a8);
    *(_QWORD *)(v11 + 40) = result;
    if ( !v12 )
    {
      v26 = *(_QWORD *)(v10 + 32);
      v27 = sub_180C100(a1 + 48, 24);
      *(_QWORD *)v27 = off_1C56EA8;
      *(_QWORD *)(v27 + 8) = v10 + 32;
      *(_QWORD *)(v27 + 16) = v26;
      v50[0] = (char *)v27;
      sub_B9B610((_QWORD *)(a1 + 32), v50);
      result = sub_B9B270((_QWORD *)(a1 + 88), *(int **)a3);
      *(_QWORD *)(v10 + 32) |= 1LL << result;
    }
    return result;
  }
  while ( 1 )
  {
    v11 = v10;
    v12 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)v11 == *(_QWORD *)a3 )
      {
        v12 = 1;
        if ( *(_WORD *)(v11 + 8) == *(_WORD *)(a3 + 8)
          && *(_QWORD *)(v11 + 16) == *(_QWORD *)(a3 + 16)
          && *(_WORD *)(v11 + 10) == *(_WORD *)(a3 + 10) )
        {
          break;
        }
      }
      if ( !*(_QWORD *)(v11 + 40) )
        goto LABEL_13;
      v11 = *(_QWORD *)(v11 + 40);
    }
    v10 = *(_QWORD *)(v11 + 48);
    v13 = *(_QWORD *)(a3 + 32);
    if ( !v10 )
    {
      if ( !v13 )
      {
        v35 = *(unsigned int *)(a3 + 24);
        v34 = *(_QWORD *)(v11 + 24);
        v36 = *(_DWORD *)(a3 + 24);
        goto LABEL_29;
      }
      v29 = (_QWORD *)sub_180C100(a1 + 48, 16);
      *v29 = off_1C57C18;
      v29[1] = v11 + 48;
      v30 = *(_QWORD **)(a1 + 32);
      if ( !v30 )
      {
        v40 = (_QWORD *)sub_186B270(0x18u);
        *v40 = 2;
        v30 = v40 + 1;
        *(_QWORD *)(a1 + 32) = v30;
        goto LABEL_26;
      }
      v31 = *((_DWORD *)v30 - 2);
      if ( *((_DWORD *)v30 - 1) != v31 )
      {
LABEL_26:
        v32 = *(_QWORD *)(a3 + 32);
        v33 = *((_DWORD *)v30 - 1);
        v30[v33] = v29;
        *((_DWORD *)v30 - 1) = v33 + 1;
        result = (__int64)sub_BA0DF0(a1, v32, a4, a5, *(double *)a6.m128_u64, *(double *)a7.m128_u64, a8);
        *(_QWORD *)(v11 + 48) = result;
        return result;
      }
      v37 = (3 * v31 + 1) >> 1;
      v38 = 8 * v37 + 8;
      if ( 8 * v31 + 8 < v38 && v31 < v37 )
      {
        v39 = (unsigned int *)sub_186B300(v30 - 1, v38);
        v30 = v39 + 2;
        *(_QWORD *)(a1 + 32) = v39 + 2;
        *v39 = v37;
        goto LABEL_26;
      }
LABEL_37:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_151CF2(v50);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v50);
      sub_233E40((__int64)v50);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    if ( !v13 )
      break;
    a3 = *(_QWORD *)(a3 + 32);
  }
  v34 = *(_QWORD *)(v11 + 24);
  if ( v34 )
  {
    v35 = *(unsigned int *)(a3 + 24);
    v36 = *(_DWORD *)(a3 + 24);
LABEL_29:
    result = *(unsigned int *)(*(_QWORD *)(a5 + 8 * v35 + 32) + 24LL);
    if ( *(_DWORD *)(v34 + 16) == (_DWORD)result )
      return sub_BA1130(a1 + 120, v34, a4, a5, v36, 0, a6, a7, a8);
  }
  else
  {
    v41 = sub_180C100(a1 + 48, 16);
    *(_QWORD *)v41 = off_1C57C40;
    *(_QWORD *)(v41 + 8) = v11 + 24;
    v50[0] = (char *)v41;
    sub_B9B610((_QWORD *)(a1 + 32), v50);
    v42 = sub_B9F800(a1 + 120, a4, a5, *(_DWORD *)(a3 + 24), 1, *(double *)a6.m128_u64, *(double *)a7.m128_u64, a8);
    *(_QWORD *)(v11 + 24) = v42;
    v43 = v42;
    v44 = sub_180C100(a1 + 48, 16);
    *(_QWORD *)v44 = off_1C57BF0;
    *(_QWORD *)(v44 + 8) = v43;
    v50[0] = (char *)v44;
    return sub_B9B610((_QWORD *)(a1 + 32), v50);
  }
  return result;
}

