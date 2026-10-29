__int64 __fastcall sub_92F320(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbp
  _QWORD *v3; // r12
  void *v4; // r14
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // r15d
  size_t v10; // rdi
  unsigned int *v11; // rax
  int *v12; // r13
  unsigned int *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  int *v16; // rdi
  int *i; // rax
  int v18; // ecx
  char v19; // si
  __int64 v20; // rcx
  char v21; // si
  __int64 v22; // rcx
  __int64 v23; // rax
  int *v24; // r12
  void *v25; // r14
  int *v26; // rsi
  __int64 v27; // r15
  void *v28; // rdi
  __int64 v29; // r13
  _QWORD *v30; // r12
  _QWORD *v31; // r14
  __int64 v32; // rbp
  _QWORD *v33; // rsi
  void *v34; // rax
  int v35; // edx
  int v36; // eax
  __int64 v37; // rbp
  _QWORD *v38; // rsi
  char **exception; // rbx
  unsigned int *v40; // [rsp+0h] [rbp-78h]
  unsigned int v41; // [rsp+8h] [rbp-70h]
  __int64 v42; // [rsp+8h] [rbp-70h]
  void *v43; // [rsp+8h] [rbp-70h]
  int v45; // [rsp+1Ch] [rbp-5Ch]
  __int64 v46[11]; // [rsp+20h] [rbp-58h] BYREF

  result = a1[4];
  v2 = (_QWORD *)a1[42];
  if ( !result )
  {
    if ( !v2 )
      return result;
    result = *((unsigned int *)v2 - 1);
    v45 = 0;
    v41 = 0;
    if ( !(_DWORD)result )
      return result;
LABEL_4:
    v3 = &v2[4 * result];
    do
    {
      v4 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v2);
      v5 = v2 + 2;
      v2 += 4;
      sub_182CBA0(v4, v5);
    }
    while ( v2 != v3 );
    result = (__int64)a1;
    v2 = (_QWORD *)a1[42];
    goto LABEL_7;
  }
  v41 = *(_DWORD *)(result - 4);
  v45 = v41;
  if ( !v2 )
  {
    result = v41;
    if ( !v41 )
      return result;
    goto LABEL_9;
  }
  result = *((unsigned int *)v2 - 1);
  if ( (_DWORD)result )
    goto LABEL_4;
LABEL_7:
  *((_DWORD *)v2 - 1) = 0;
  if ( v41 )
  {
    if ( v2 )
    {
LABEL_10:
      while ( 1 )
      {
        v7 = *((_DWORD *)v2 - 2);
        v8 = v41;
        if ( v7 >= v41 )
          break;
        while ( 1 )
        {
          v9 = (3 * v7 + 1) >> 1;
          v10 = 32 * v9 + 8;
          if ( 32 * v7 + 8 >= (unsigned int)v10 || v7 >= v9 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_91CD50(v46, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v46);
            sub_233E40((__int64)v46);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v11 = (unsigned int *)sub_186B270(v10);
          v40 = v11;
          v2 = v11 + 2;
          v12 = (int *)a1[42];
          v13 = v11;
          if ( !v12 )
            break;
          v14 = (unsigned int)*(v12 - 1);
          v15 = v2;
          v13[1] = v14;
          v16 = &v12[8 * v14];
          for ( i = v12; v16 != i; *(v15 - 1) = v22 )
          {
            v18 = *i;
            v19 = *((_BYTE *)i + 4);
            i += 8;
            v15 += 4;
            *((_DWORD *)v15 - 8) = v18;
            *((_BYTE *)v15 - 28) = v19 & 3 | *((_BYTE *)v15 - 28) & 0xFC;
            v20 = *((_QWORD *)i - 3);
            *((_QWORD *)i - 3) = 0;
            *(v15 - 3) = v20;
            v21 = *((_BYTE *)i - 12);
            *((_DWORD *)v15 - 4) = *(i - 4);
            *((_BYTE *)v15 - 12) = v21 & 3 | *((_BYTE *)v15 - 12) & 0xFC;
            v22 = *((_QWORD *)i - 1);
            *((_QWORD *)i - 1) = 0;
          }
          v23 = (unsigned int)*(v12 - 1);
          if ( (_DWORD)v23 )
          {
            v24 = &v12[8 * v23];
            do
            {
              v25 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v12);
              v26 = v12 + 4;
              v12 += 8;
              sub_182CBA0(v25, v26);
            }
            while ( v12 != v24 );
            v12 = (int *)a1[42];
          }
          sub_186B220(v12 - 2);
          v8 = v41;
          a1[42] = v2;
          *v40 = v9;
          v7 = *((_DWORD *)v2 - 2);
          if ( v7 >= v41 )
            goto LABEL_21;
        }
        v11[1] = 0;
        *v11 = v9;
        a1[42] = v2;
      }
LABEL_21:
      result = (__int64)v2;
      *((_DWORD *)v2 - 1) = v8;
      do
      {
        *(_OWORD *)(result + 16) = 0;
        result += 32;
        *(_OWORD *)(result - 32) = 0;
        *(_DWORD *)(result - 16) = 1;
        *(_BYTE *)(result - 28) = 0;
        *(_BYTE *)(result - 12) = 0;
      }
      while ( &v2[4 * v8] != (_QWORD *)result );
      goto LABEL_23;
    }
LABEL_9:
    v6 = (_QWORD *)sub_186B270(0x48u);
    v2 = v6 + 1;
    *v6 = 2;
    a1[42] = v6 + 1;
    goto LABEL_10;
  }
LABEL_23:
  if ( v45 <= 0 )
    return result;
  v27 = 0;
  v28 = qword_1C7F2C0;
  while ( 2 )
  {
    v29 = 0;
    v30 = &v2[4 * v27];
    v31 = (_QWORD *)(a1[31] + 8 * v27);
    while ( 1 )
    {
      if ( (_DWORD)v27 == (_DWORD)v29 )
        goto LABEL_33;
      v32 = *v31 + 48 * v29;
      if ( *(_DWORD *)v32 == -1 )
        goto LABEL_33;
      v42 = v32 + 8;
      if ( (*(_BYTE *)(v32 + 28) & 1) != 0
        || *(_DWORD *)(v32 + 24) != 1
        || (*((_BYTE *)v30 + 20) & 1) != 0
        || *((_DWORD *)v30 + 4) != 1 )
      {
        if ( !(unsigned __int8)sub_1848D40(v28, v42, v30) )
          goto LABEL_32;
      }
      else
      {
        v34 = v28;
        if ( (*(_BYTE *)(v32 + 12) & 1) == 0 && (*((_BYTE *)v30 + 4) & 1) == 0 )
        {
          v35 = *(_DWORD *)(v32 + 8);
          if ( v35 >= *(_DWORD *)v30 )
            goto LABEL_33;
          goto LABEL_40;
        }
        if ( (int)sub_182C7B0(v28, v42, v30) >= 0 )
          goto LABEL_32;
      }
      v34 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v32 + 12) & 1) != 0 )
      {
        v43 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v30, v32 + 8);
        v34 = v43;
        goto LABEL_41;
      }
      v35 = *(_DWORD *)(v32 + 8);
LABEL_40:
      *((_BYTE *)v30 + 4) &= ~1u;
      *(_DWORD *)v30 = v35;
LABEL_41:
      if ( (*(_BYTE *)(v32 + 28) & 1) != 0 )
      {
        sub_182C690(v34, v30 + 2, v32 + 24);
LABEL_32:
        v28 = qword_1C7F2C0;
        goto LABEL_33;
      }
      v36 = *(_DWORD *)(v32 + 24);
      v28 = qword_1C7F2C0;
      *((_BYTE *)v30 + 20) &= ~1u;
      *((_DWORD *)v30 + 4) = v36;
LABEL_33:
      if ( v45 == v29 + 1 )
        break;
      ++v29;
    }
    v33 = (_QWORD *)a1[42];
    v2 = v33;
    if ( v29 != v27 )
    {
      ++v27;
      continue;
    }
    break;
  }
  v37 = 0;
  while ( 1 )
  {
    v38 = &v33[v37];
    v37 += 4;
    result = sub_1831620(v28, v38);
    if ( 4LL * v45 == v37 )
      break;
    v28 = qword_1C7F2C0;
    v33 = (_QWORD *)a1[42];
  }
  return result;
}

