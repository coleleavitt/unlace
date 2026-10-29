__int64 __fastcall sub_C31A90(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v5; // r13
  __int64 **v6; // rdi
  unsigned int v8; // eax
  __int16 v9; // dx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  int v15; // r13d
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // edx
  unsigned __int8 v19; // dl
  __int64 v20; // rax
  int v21; // r12d
  int v22; // r14d
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r13
  unsigned __int8 v28; // dl
  __int64 v29; // rax
  unsigned int v30; // r15d
  size_t v31; // rsi
  unsigned int *v32; // rax
  _QWORD *v33; // rax
  char **exception; // rbp
  __int64 v35; // [rsp+8h] [rbp-60h] BYREF
  __int64 v36[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = a1[18];
  v6 = *(__int64 ***)v5;
  if ( *(_WORD *)(a2 + 4) == 2 )
  {
    sub_C315D0(v6, (__int64 ***)v5, a2, (__int64 *)(v5 + 184), (__int64 *)(v5 + 200));
    v16 = *(_QWORD *)(v5 + 184);
    goto LABEL_24;
  }
  if ( (unsigned __int8)sub_1666670(*v6, a2) && *(_BYTE *)(*(_QWORD *)v5 + 17LL) )
  {
    sub_C2C300((__int64 *)v5, a2, (__int64 *)(v5 + 184), (__int64 *)(v5 + 200));
    v16 = *(_QWORD *)(v5 + 184);
LABEL_24:
    v36[0] = v16;
    if ( !v16 )
    {
      sub_C28530(a1 + 7, v36);
      v17 = a1[5];
      if ( !v17 )
        return 1;
LABEL_27:
      v18 = *(_DWORD *)(v17 - 4);
      if ( v18 )
        *(_BYTE *)(v17 + 16LL * (unsigned int)(v18 - 1) + 8) |= 2u;
      return 1;
    }
    ++*(_DWORD *)(v16 + 8);
    sub_C28530(a1 + 7, v36);
    if ( a2 == v16 )
      return 1;
LABEL_26:
    v17 = a1[5];
    if ( v17 )
      goto LABEL_27;
    return 1;
  }
  v8 = *(_DWORD *)(a2 + 8);
  if ( !a3 )
  {
    v36[0] = a2;
    *(_DWORD *)(a2 + 8) = v8 + 1;
    sub_C28530(a1 + 7, v36);
    return 1;
  }
  v9 = *(_WORD *)(a2 + 4);
  if ( v8 <= 1 || a2 == a1[15] )
  {
    v15 = 0;
    goto LABEL_19;
  }
  if ( v9 )
  {
    if ( v9 != 2 )
    {
      if ( v9 != 1 )
      {
LABEL_22:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_44;
    }
  }
  else if ( !*(_DWORD *)(a2 + 24) )
  {
LABEL_9:
    v10 = a1[1];
    ++*(_DWORD *)(a2 + 8);
    if ( (unsigned int)sub_C30200(a1[18], *(_QWORD *)(a2 + 16), 0, 0, (int)a1 + 480, (int)a1 + 496) == 5 )
    {
      ++*(_DWORD *)(a2 + 8);
      v36[0] = a2;
      sub_C28530(a1 + 7, v36);
    }
    else
    {
      v11 = a1[60];
      v35 = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      sub_C28530(a1 + 7, &v35);
      sub_C282B0(a1[60], a1[61]);
      a1[60] = 0;
      v12 = a1[5];
      if ( v12 )
      {
        v13 = *(_DWORD *)(v12 - 4);
        if ( v13 )
          *(_BYTE *)(v12 + 16LL * (unsigned int)(v13 - 1) + 8) |= 2u;
      }
    }
    sub_C28290(a2, v10);
    return 1;
  }
  v26 = sub_1680FB0(a1[4], a2, 0);
  v27 = v26;
  if ( v26 )
  {
    v36[0] = v26;
    ++*(_DWORD *)(v26 + 8);
    sub_C28530(a1 + 7, v36);
    if ( a2 == v27 )
      return 1;
    goto LABEL_26;
  }
  v9 = *(_WORD *)(a2 + 4);
  v15 = 1;
LABEL_19:
  if ( v9 == 1 )
  {
LABEL_44:
    sub_C30810(a1, a2);
    return 1;
  }
  if ( v9 != 2 )
  {
    if ( v9 )
      goto LABEL_22;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_9;
    v28 = 3;
    if ( a3 != 3 )
      v28 = (a3 - 1) & 3;
    v29 = a1[7];
    v21 = v28;
    if ( v29 )
      v22 = *(_DWORD *)(v29 - 4);
    else
      v22 = 0;
    v23 = (_QWORD *)a1[5];
    if ( v23 )
    {
      v24 = *((unsigned int *)v23 - 1);
      if ( (_DWORD)v24 == *((_DWORD *)v23 - 2) )
      {
        v30 = (unsigned int)(3 * v24 + 1) >> 1;
        v31 = 16 * v30 + 8;
        if ( 16 * (int)v24 + 8 < (unsigned int)v31 && (unsigned int)v24 < v30 )
        {
LABEL_54:
          v32 = (unsigned int *)sub_186B300(v23 - 1, v31);
          v23 = v32 + 2;
          a1[5] = v32 + 2;
          *v32 = v30;
          v25 = (__int64)&v32[4 * v32[1] + 2];
          goto LABEL_36;
        }
LABEL_64:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C282D0(v36, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      goto LABEL_35;
    }
LABEL_62:
    v33 = (_QWORD *)sub_186B270(0x28u);
    v23 = v33 + 1;
    *v33 = 2;
    a1[5] = v33 + 1;
    v25 = (__int64)(v33 + 1);
    goto LABEL_36;
  }
  v19 = 3;
  if ( a3 != 3 )
    v19 = (a3 - 1) & 3;
  v20 = a1[7];
  v21 = v19;
  if ( v20 )
    v22 = *(_DWORD *)(v20 - 4);
  else
    v22 = 0;
  v23 = (_QWORD *)a1[5];
  if ( !v23 )
    goto LABEL_62;
  v24 = *((unsigned int *)v23 - 1);
  if ( (_DWORD)v24 == *((_DWORD *)v23 - 2) )
  {
    v30 = (unsigned int)(3 * v24 + 1) >> 1;
    v31 = 16 * v30 + 8;
    if ( 16 * (int)v24 + 8 < (unsigned int)v31 && (unsigned int)v24 < v30 )
      goto LABEL_54;
    goto LABEL_64;
  }
LABEL_35:
  v25 = (__int64)&v23[2 * v24];
LABEL_36:
  *(_QWORD *)v25 = a2;
  *(_DWORD *)(v25 + 12) = v22;
  *(_DWORD *)(v25 + 8) = v15 | (16 * v21);
  ++*((_DWORD *)v23 - 1);
  return 0;
}

