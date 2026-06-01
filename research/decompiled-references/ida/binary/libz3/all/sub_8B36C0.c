__int64 __fastcall sub_8B36C0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // r12d
  int v5; // edx
  __int64 v6; // r14
  __int64 v7; // r11
  unsigned int v8; // ebp
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r13
  int v12; // r9d
  unsigned int v13; // esi
  unsigned int i; // r8d
  unsigned int v15; // r15d
  __int64 v16; // rdx
  unsigned int *v17; // r10
  unsigned int v18; // edi
  unsigned int *v19; // rsi
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // r15d
  int *v23; // r15
  int v24; // r13d
  int v25; // eax
  __int64 v26; // rdx
  int v27; // r9d
  unsigned int v28; // esi
  unsigned int v29; // r15d
  __int64 v30; // rdx
  unsigned int v31; // edi
  unsigned int v32; // r13d
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int v35; // ebp
  unsigned int *v36; // rdx
  unsigned int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rax
  int *v42; // rdx
  int v43; // r12d
  __int64 v44; // rsi
  __int64 v45; // rdi
  int v46; // edx
  __int64 v47; // r10
  _DWORD *v48; // rcx
  __int64 v49; // r9
  unsigned int *v50; // r8
  __int64 v51; // rax
  char **exception; // rbx
  __int64 v54; // rdx
  unsigned int v55; // [rsp+4h] [rbp-64h]
  unsigned int v56; // [rsp+4h] [rbp-64h]
  unsigned int v57; // [rsp+8h] [rbp-60h]
  int v58; // [rsp+Ch] [rbp-5Ch]
  __int64 v59[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 1624);
  ++*(_DWORD *)(a1 + 1656);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(_QWORD *)(a1 + 1576);
  v4 = 0;
  *(_DWORD *)(a1 + 1632) = -1;
  *(_BYTE *)(a1 + 1608) = 0;
  v58 = 0;
  v5 = *(_DWORD *)(v3 - 4);
LABEL_28:
  if ( v5 == 1 )
    return 1;
  v6 = *(unsigned int *)(v3 + 4);
  v7 = *(_QWORD *)(a1 + 1584);
  v8 = *(_DWORD *)(v3 + 4);
  v9 = (_DWORD *)(v7 + 4 * v6);
  if ( v5 != 2 )
  {
    v26 = *(unsigned int *)(v3 + 4LL * (unsigned int)(v5 - 1));
    *(_DWORD *)(v3 + 4) = v26;
    *(_DWORD *)(v7 + 4 * v26) = 1;
    *v9 = 0;
    v11 = *(unsigned int *)(v3 + 4);
    v27 = *(_DWORD *)(v3 - 4) - 1;
    *(_DWORD *)(v3 - 4) = v27;
    if ( v27 > 2 )
    {
      v55 = v4;
      v28 = 2;
      for ( i = 1; ; i = v20 )
      {
        v20 = v28 + 1;
        v17 = (unsigned int *)(v3 + 4LL * v28);
        v31 = *v17;
        v30 = *v17;
        if ( v27 <= (int)(v28 + 1) || (v29 = *(_DWORD *)(v3 + 4LL * v20), v29 >= v31) )
        {
          v20 = v28;
        }
        else
        {
          v30 = v29;
          v17 = (unsigned int *)(v3 + 4LL * v20);
          v31 = *v17;
        }
        v19 = (unsigned int *)(v3 + 4LL * i);
        if ( (unsigned int)v30 >= (unsigned int)v11 )
          break;
        *v19 = v31;
        v28 = 2 * v20;
        *(_DWORD *)(v7 + 4 * v30) = i;
        if ( v27 <= (int)(2 * v20) )
        {
LABEL_56:
          v4 = v55;
          v19 = v17;
          i = v20;
          goto LABEL_15;
        }
      }
LABEL_14:
      v4 = v55;
LABEL_15:
      *v19 = v11;
      *(_DWORD *)(v7 + 4 * v11) = i;
      goto LABEL_17;
    }
LABEL_59:
    v19 = (unsigned int *)(v3 + 4);
    i = 1;
    goto LABEL_15;
  }
  while ( 1 )
  {
    *v9 = 0;
    --*(_DWORD *)(v3 - 4);
LABEL_17:
    if ( v8 == -1 )
      return 1;
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)a1) || *(_DWORD *)(a1 + 1568) < v4 )
      return 0;
    if ( *(_BYTE *)(a1 + 1608) )
      goto LABEL_26;
    v21 = *(_QWORD *)(a1 + 1624);
    v22 = v8 >> 5;
    if ( !v21 )
    {
      v32 = v22 + 1;
      v56 = v8;
      v21 = sub_186B270(0x10u) + 8;
      v57 = 0;
      *(_QWORD *)(v21 - 8) = 2;
      *(_QWORD *)(a1 + 1624) = v21;
LABEL_43:
      while ( 1 )
      {
        v37 = *(_DWORD *)(v21 - 8);
        if ( v37 >= v32 )
          break;
        v33 = (3 * v37 + 1) >> 1;
        v34 = 4 * v33 + 8;
        v35 = v33;
        if ( 4 * v37 + 8 >= (unsigned int)v34 || v37 >= v33 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v59, "Overflow encountered when expanding vector", v54);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v59);
          sub_233E40((__int64)v59);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v36 = (unsigned int *)sub_186B300((void *)(v21 - 8), v34);
        v21 = (__int64)(v36 + 2);
        *(_QWORD *)(a1 + 1624) = v36 + 2;
        *v36 = v35;
      }
      v8 = v56;
      *(_DWORD *)(v21 - 4) = v32;
      v38 = 4LL * v32;
      v39 = 4LL * v57;
      v23 = (int *)(v21 + 4LL * v22);
      v24 = 1 << v56;
      if ( v39 != v38 )
        memset((void *)(v21 + v39), 0, v38 - v39);
      v25 = *v23;
      goto LABEL_47;
    }
    if ( v22 >= *(_DWORD *)(v21 - 4) )
    {
      v56 = v8;
      v32 = v22 + 1;
      v57 = *(_DWORD *)(v21 - 4);
      goto LABEL_43;
    }
    v23 = (int *)(v21 + 4LL * v22);
    v24 = 1 << v8;
    v25 = *v23;
    if ( ((1 << v8) & *v23) != 0 )
    {
      if ( *(_DWORD *)(a1 + 1612) < (unsigned int)++v58 )
        *(_BYTE *)(a1 + 1608) = 1;
LABEL_26:
      if ( !(unsigned __int8)sub_8B3420(a1, v8) )
        break;
      goto LABEL_27;
    }
LABEL_47:
    *v23 = v25 | v24;
    if ( !(unsigned __int8)sub_8B3420(a1, v8) )
      break;
LABEL_27:
    v3 = *(_QWORD *)(a1 + 1576);
    ++v4;
    v5 = *(_DWORD *)(v3 - 4);
    if ( !*(_BYTE *)(a1 + 1608) )
      goto LABEL_28;
    if ( v5 == 1 )
      return 1;
    v6 = *(unsigned int *)(v3 + 4);
    v7 = *(_QWORD *)(a1 + 1584);
    v8 = *(_DWORD *)(v3 + 4);
    v9 = (_DWORD *)(v7 + 4 * v6);
    if ( v5 != 2 )
    {
      v10 = *(unsigned int *)(v3 + 4LL * (unsigned int)(v5 - 1));
      *(_DWORD *)(v3 + 4) = v10;
      *(_DWORD *)(v7 + 4 * v10) = 1;
      *v9 = 0;
      v11 = *(unsigned int *)(v3 + 4);
      v12 = *(_DWORD *)(v3 - 4) - 1;
      *(_DWORD *)(v3 - 4) = v12;
      if ( v12 > 2 )
      {
        v55 = v4;
        v13 = 2;
        for ( i = 1; ; i = v20 )
        {
          v20 = v13 + 1;
          v17 = (unsigned int *)(v3 + 4LL * v13);
          v18 = *v17;
          v16 = *v17;
          if ( v12 <= (int)(v13 + 1) || (v15 = *(_DWORD *)(v3 + 4LL * v20), v15 >= v18) )
          {
            v20 = v13;
            v19 = (unsigned int *)(v3 + 4LL * i);
            if ( (unsigned int)v16 >= (unsigned int)v11 )
              goto LABEL_14;
          }
          else
          {
            v16 = v15;
            v17 = (unsigned int *)(v3 + 4LL * v20);
            v18 = *v17;
            v19 = (unsigned int *)(v3 + 4LL * i);
            if ( v15 >= (unsigned int)v11 )
              goto LABEL_14;
          }
          *v19 = v18;
          v13 = 2 * v20;
          *(_DWORD *)(v7 + 4 * v16) = i;
          if ( v12 <= (int)(2 * v20) )
            goto LABEL_56;
        }
      }
      goto LABEL_59;
    }
  }
  v40 = *(_QWORD *)(a1 + 1584);
  v41 = *(_QWORD *)(a1 + 1576);
  LODWORD(v59[0]) = v8;
  v42 = (int *)(v40 + 4 * v6);
  if ( v41 )
  {
    v43 = *(_DWORD *)(v41 - 4);
    *v42 = v43;
    sub_893BD0((unsigned int **)(a1 + 1576), (unsigned int *)v59);
    v44 = *(_QWORD *)(a1 + 1576);
    v45 = (unsigned int)v43;
    v46 = v43 >> 1;
    v47 = *(_QWORD *)(a1 + 1584);
    v48 = (_DWORD *)(v44 + 4LL * (unsigned int)v43);
    v49 = (unsigned int)*v48;
    if ( v43 >> 1 )
    {
      while ( 1 )
      {
        v48 = (_DWORD *)(v44 + 4 * v45);
        v50 = (unsigned int *)(v44 + 4LL * (unsigned int)v46);
        v51 = *v50;
        if ( (unsigned int)v49 >= (unsigned int)v51 )
          break;
        *v48 = v51;
        *(_DWORD *)(v47 + 4 * v51) = v43;
        v43 = v46;
        v46 >>= 1;
        if ( !v46 )
        {
          v48 = v50;
          v43 = 1;
          break;
        }
        v45 = (unsigned int)v43;
      }
    }
  }
  else
  {
    *v42 = 0;
    v43 = 0;
    sub_893BD0((unsigned int **)(a1 + 1576), (unsigned int *)v59);
    v48 = *(_DWORD **)(a1 + 1576);
    v47 = *(_QWORD *)(a1 + 1584);
    v49 = (unsigned int)*v48;
  }
  *v48 = v49;
  *(_DWORD *)(v47 + 4 * v49) = v43;
  *(_DWORD *)(a1 + 1632) = v8;
  ++*(_DWORD *)(a1 + 1652);
  return 0xFFFFFFFFLL;
}

