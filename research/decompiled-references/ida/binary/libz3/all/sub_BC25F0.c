__int64 __fastcall sub_BC25F0(__int64 a1, __int64 a2, __m128 a3)
{
  char **exception; // rbp
  __int64 v4; // rdx
  char **v5; // rbp
  __int64 v6; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  int v11; // edx
  __int64 result; // rax
  int v13; // r8d
  int v14; // r9d
  _DWORD *v15; // r10
  __int64 v16; // rbp
  _QWORD *v17; // rax
  unsigned int *v18; // rsi
  __int64 v19; // rax
  int v20; // r12d
  unsigned int v21; // ebp
  _QWORD *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r14d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  _DWORD *v29; // rax
  _QWORD *v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 *v34; // rdx
  unsigned int v35; // ebp
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rax
  unsigned int v40; // esi
  _QWORD *v41; // rdi
  unsigned int *v42; // rdx
  int v43; // r11d
  __int64 v44; // rsi
  __int64 *v45; // rcx
  unsigned __int64 v46; // [rsp+8h] [rbp-60h] BYREF
  __int64 v47[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !*(_WORD *)(a2 + 4) )
  {
    v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v9 )
    {
      if ( *v9 == *(_DWORD *)(a1 + 1744) && (v9[1] == 13 || v9[1] == 7 || v9[1] == 6 || v9[1] == 8 || v9[1] == 10) )
        goto LABEL_20;
    }
  }
  if ( (unsigned __int8)sub_BCED40(a1 + 1728, a2) )
    goto LABEL_20;
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_26;
  v10 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v10 )
    goto LABEL_26;
  v11 = *(_DWORD *)(a1 + 1744);
  if ( v11 == *v10
    && (v10[1] == 41
     || v10[1] == 42
     || v10[1] == 43
     || v10[1] == 46
     || v10[1] == 48
     || v10[1] == 50
     || v10[1] == 49
     || !v10[1]
     || v10[1] == 14
     || v11 == *v10 && (v10[1] == 12 || v10[1] == 47)) )
  {
LABEL_20:
    sub_BBC620(a1, a2);
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_26;
    v10 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v10 )
      goto LABEL_26;
    v11 = *(_DWORD *)(a1 + 1744);
  }
  if ( *v10 != v11
    || v10[1] != 42 && v10[1] != 43
    || (sub_BB8310(a1, a2), v11 = *(_DWORD *)(a1 + 1744), !*(_WORD *)(a2 + 4))
    && (v10 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr )
  {
    if ( *v10 != v11 )
    {
LABEL_25:
      if ( *v10 == v11 && v10[1] == 44 )
        sub_BBB990(a1, a2);
      goto LABEL_26;
    }
    if ( v10[1] != 22 || *(_DWORD *)(a2 + 24) != 3 )
    {
      if ( v10[1] == 23 && *(_DWORD *)(a2 + 24) == 4 )
      {
        v18 = *(unsigned int **)(a2 + 56);
        goto LABEL_52;
      }
      if ( v10[1] == 20 && *(_DWORD *)(a2 + 24) == 2 )
      {
        v18 = *(unsigned int **)(a2 + 40);
        goto LABEL_52;
      }
      if ( v10[1] != 21 )
        goto LABEL_25;
      if ( *(_DWORD *)(a2 + 24) != 3 )
        goto LABEL_26;
    }
    v18 = *(unsigned int **)(a2 + 48);
LABEL_52:
    sub_BBB240(a1, v18);
    v19 = *(_QWORD *)(a1 + 512);
    if ( v19 )
      v20 = *(_DWORD *)(v19 - 4);
    else
      v20 = 0;
    v21 = *(_DWORD *)(a1 + 496);
    v22 = *(_QWORD **)(a1 + 528);
    LODWORD(v46) = v21;
    if ( v22 )
      goto LABEL_58;
    v28 = (_QWORD *)sub_186B270(0x10u);
    v22 = v28 + 1;
    *v28 = 2;
    *(_QWORD *)(a1 + 528) = v28 + 1;
    v29 = v28 + 1;
    while ( 1 )
    {
      *v29 = 0;
      ++*((_DWORD *)v22 - 1);
LABEL_58:
      v23 = *((unsigned int *)v22 - 1);
      if ( v21 < (unsigned int)v23 )
        break;
      if ( (_DWORD)v23 == *((_DWORD *)v22 - 2) )
      {
        v24 = (unsigned int)(3 * v23 + 1) >> 1;
        v25 = 4 * v24 + 8;
        if ( 4 * (int)v23 + 8 >= (unsigned int)v25 || (unsigned int)v23 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v47, "Overflow encountered when expanding vector", v4);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v47);
          sub_233E40((__int64)v47);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v22 - 1, v25);
        v22 = v26 + 2;
        *v26 = v24;
        v27 = v26[1];
        *(_QWORD *)(a1 + 528) = v22;
        v29 = (_DWORD *)v22 + v27;
      }
      else
      {
        v29 = (_DWORD *)v22 + v23;
      }
    }
    if ( v21 < *(_DWORD *)(a1 + 500) )
    {
      sub_BB7E40((_QWORD *)(a1 + 536), (unsigned int *)&v46);
      sub_BB7E40((_QWORD *)(a1 + 544), (unsigned int *)(4LL * v21 + *(_QWORD *)(a1 + 528)));
      v30 = *(_QWORD **)(a1 + 512);
      *(_DWORD *)(*(_QWORD *)(a1 + 528) + 4LL * v21) = v20;
      if ( v30 )
      {
LABEL_72:
        v31 = *((_DWORD *)v30 - 1);
        if ( v31 == *((_DWORD *)v30 - 2) )
        {
          v35 = (3 * v31 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v31 + 8 >= (unsigned int)v36 || v31 >= v35 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_154526(v47, "Overflow encountered when expanding vector", v6);
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v47);
            sub_233E40((__int64)v47);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v37 = (unsigned int *)sub_186B300(v30 - 1, v36);
          v38 = v37[1];
          v30 = v37 + 2;
          *v37 = v35;
          *(_QWORD *)(a1 + 512) = v37 + 2;
          LODWORD(v37) = v38;
          v34 = &v30[v38];
          v33 = (_DWORD)v37 + 1;
        }
        else
        {
          v32 = v31;
          v33 = v31 + 1;
          v34 = &v30[v32];
        }
LABEL_74:
        *v34 = a2;
        *((_DWORD *)v30 - 1) = v33;
        v11 = *(_DWORD *)(a1 + 1744);
        ++*(_DWORD *)(a1 + 496);
        if ( *(_WORD *)(a2 + 4) )
          goto LABEL_26;
        v10 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
        if ( !v10 )
          goto LABEL_26;
        goto LABEL_25;
      }
    }
    else
    {
      v30 = *(_QWORD **)(a1 + 512);
      *((_DWORD *)v22 + v21) = v20;
      if ( v30 )
        goto LABEL_72;
    }
    v39 = (_QWORD *)sub_186B270(0x18u);
    v30 = v39 + 1;
    *v39 = 2;
    v33 = 1;
    *(_QWORD *)(a1 + 512) = v30;
    v34 = v30;
    goto LABEL_74;
  }
LABEL_26:
  v46 = 0;
  result = sub_1408E10(a1 + 1848, a2, &v46);
  if ( (_BYTE)result )
    result = sub_BC1270(a1, v46, *(_DWORD *)(a1 + 4152), 1u, v13, v14, a3);
  if ( !*(_WORD *)(a2 + 4) )
  {
    result = *(_QWORD *)(a2 + 16);
    v15 = *(_DWORD **)(result + 24);
    if ( v15 )
    {
      if ( *(_DWORD *)(a1 + 1744) == *v15 )
      {
        if ( v15[1] != 12 || *(_DWORD *)(a2 + 24) != 1 )
          goto LABEL_35;
        v40 = *(_DWORD *)(a1 + 1104);
        v41 = *(_QWORD **)(a1 + 1096);
        v46 = *(_QWORD *)(a2 + 32);
        result = (__int64)sub_BB04C0(v41, v40, v46);
        if ( result )
          goto LABEL_87;
        v47[0] = 0;
        result = *(_QWORD *)(a1 + 16);
        v44 = *(_QWORD *)(result + 8656);
        if ( v44 )
        {
          result = *v42;
          v45 = v47;
          if ( (unsigned int)result < *(_DWORD *)(v44 - 4) )
            v45 = (__int64 *)(v44 + 8 * result);
        }
        else
        {
          v45 = v47;
        }
        if ( !*v45
          || (result = sub_BBB240(a1, v42), v43 = *(_DWORD *)(a1 + 1744), !*(_WORD *)(a2 + 4))
          && (result = *(_QWORD *)(a2 + 16), (v15 = *(_DWORD **)(result + 24)) != nullptr) )
        {
LABEL_87:
          if ( *v15 == v43 )
          {
LABEL_35:
            if ( (v15[1] == 19 || v15[1] == 18 || v15[1] == 17) && !*(_QWORD *)(a1 + 4160) )
            {
              v16 = *(_QWORD *)(a1 + 16);
              v17 = (_QWORD *)sub_180C100(v16 + 8400, 24);
              *v17 = off_1C55450;
              v17[1] = a1 + 4160;
              v17[2] = 0;
              v47[0] = (__int64)v17;
              result = sub_BB4880((_QWORD *)(v16 + 9456), v47);
              *(_QWORD *)(a1 + 4160) = a2;
            }
          }
        }
      }
    }
  }
  return result;
}

