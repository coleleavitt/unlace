__int64 __fastcall sub_DB74E0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD **v10; // rbp
  _QWORD **v11; // r13
  _QWORD *v12; // r12
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdi
  char *v16; // r12
  int v17; // ecx
  unsigned int v18; // esi
  char *v19; // rdx
  char *v20; // rbp
  char *v21; // r13
  __int64 v22; // rdi
  unsigned int v23; // ebp
  __int64 v24; // r12
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  _QWORD *v28; // rbp
  _QWORD *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // r15d
  char *v37; // r11
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 i; // rcx
  unsigned __int64 v42; // r14
  __int64 v43; // rax
  void *v44; // r13
  unsigned int v45; // esi
  __int64 v46; // [rsp+0h] [rbp-68h]
  unsigned int *v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+10h] [rbp-58h]
  char *dest; // [rsp+18h] [rbp-50h]
  __int64 v50; // [rsp+20h] [rbp-48h]
  __int64 v51; // [rsp+28h] [rbp-40h]

  v8 = a1 + 192;
  *(_DWORD *)(v8 - 96) = a2;
  *(_DWORD *)(v8 - 92) = a4;
  *(_QWORD *)(v8 - 88) = a5;
  sub_DB60E0(v8, a3, a2);
  v9 = *(_QWORD *)(a1 + 152);
  if ( v9 && *(_DWORD *)(v9 - 4) )
  {
    v33 = *(_QWORD *)(a1 + 160);
    if ( v33 )
      *(_DWORD *)(v33 - 4) = 0;
    sub_DB5410(a1, (__int64 *)(a1 + 160));
    if ( !*(_DWORD *)(a1 + 44) || !(unsigned __int8)sub_DB0920((__int64 *)a1, (__int64 **)(a1 + 160), a6) )
    {
      v34 = *(_QWORD *)(a1 + 168);
      if ( v34 )
        *(_DWORD *)(v34 - 4) = 0;
      sub_DB6930(a1, (unsigned int ***)(a1 + 160), (_QWORD *)(a1 + 168));
      v35 = *(_QWORD *)(a1 + 160);
      if ( v35 )
        *(_DWORD *)(v35 - 4) = 0;
      sub_DB2C50(a1, (__int64 **)(a1 + 168), (_QWORD *)(a1 + 160), a6);
      v36 = (*(_DWORD *)(a6 + 16) == 0) + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL);
      if ( v36 )
      {
        v37 = *(char **)(a1 + 160);
        if ( v37 )
        {
          v38 = *((unsigned int *)v37 - 1);
          if ( (_DWORD)v38 )
          {
            v39 = 8 * v38;
            v47 = (unsigned int *)&v37[8 * v38];
            v46 = *(_QWORD *)(a1 + 184);
            v40 = (((8 * v38) >> 3) + 1) >> 1;
            for ( i = v40; ; i = (v48 + 1) >> 1 )
            {
              v42 = 8 * i;
              v51 = v40;
              v50 = v39;
              dest = v37;
              v48 = i;
              v43 = operator new(8 * i, (const std::nothrow_t *)&std::nothrow);
              v37 = dest;
              v39 = v50;
              v40 = v51;
              v44 = (void *)v43;
              if ( v43 )
                break;
              if ( v48 == 1 )
              {
                v42 = 0;
                sub_DB9330(dest, v47, v46, 1, v50);
                goto LABEL_60;
              }
            }
            if ( v48 == v51 )
            {
              sub_DB9EA0(dest, &dest[v42], v43, v46);
              sub_DB9EA0(&dest[v42], v47, v44, v46);
              sub_DB8A80(dest, v46);
            }
            else
            {
              sub_DBA2C0(dest, v47, v43, v48, v46);
            }
LABEL_60:
            operator delete(v44, v42);
            sub_DB6A40(a1, v36, (_QWORD *)(a1 + 160), a6);
          }
        }
      }
    }
  }
  v10 = *(_QWORD ***)(a1 + 288);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 == v11 )
      goto LABEL_13;
    do
    {
      v12 = *v10;
      if ( *v10 )
      {
        v13 = v12[1];
        if ( v13 )
          sub_186B220((void *)(v13 - 8));
        if ( *v12 )
          sub_186B220((void *)(*v12 - 8LL));
        sub_186B220(v12);
      }
      ++v10;
    }
    while ( v11 != v10 );
    v11 = *(_QWORD ***)(a1 + 288);
    if ( v11 )
LABEL_13:
      *((_DWORD *)v11 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 132) || (result = *(unsigned int *)(a1 + 136), (_DWORD)result) )
  {
    v15 = *(unsigned int *)(a1 + 128);
    v16 = *(char **)(a1 + 120);
    v17 = 0;
    v18 = *(_DWORD *)(a1 + 128);
    v19 = &v16[24 * v15];
    result = (__int64)v16;
    if ( v16 == v19 )
      goto LABEL_34;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 24;
        if ( v19 == (char *)result )
          goto LABEL_21;
      }
      result += 24;
      ++v17;
    }
    while ( v19 != (char *)result );
LABEL_21:
    if ( v18 <= 0x10 )
      goto LABEL_34;
    result = 3 * v18;
    if ( (unsigned int)result >= 4 * v17 )
      goto LABEL_34;
    if ( v16 )
    {
      v20 = v16;
      v21 = &v16[24 * v15];
      do
      {
        while ( 1 )
        {
          v22 = *((_QWORD *)v20 + 1);
          if ( !v22 )
            break;
          v20 += 24;
          sub_186B220((void *)(v22 - 8));
          if ( v21 == v20 )
            goto LABEL_27;
        }
        v20 += 24;
      }
      while ( v20 != v21 );
LABEL_27:
      sub_186B220(v16);
      v23 = *(_DWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = 0;
      v23 >>= 1;
      v24 = v23;
      *(_DWORD *)(a1 + 128) = v23;
      result = sub_186B270(24LL * v23);
      if ( !v23 )
        goto LABEL_33;
    }
    else
    {
      v45 = v18 >> 1;
      *(_QWORD *)(a1 + 120) = 0;
      v24 = v45;
      *(_DWORD *)(a1 + 128) = v45;
      result = sub_186B270(24LL * v45);
    }
    v25 = (_QWORD *)(result + 24 * v24);
    v26 = (_QWORD *)result;
    do
    {
      *v26 = 0;
      v26 += 3;
      *((_DWORD *)v26 - 2) = 0;
    }
    while ( v26 != v25 );
    v27 = result;
    if ( ((24 * (_BYTE)v24) & 8) == 0
      || (v27 = result + 24, *(_QWORD *)(result + 8) = 0, v25 != (_QWORD *)(result + 24)) )
    {
      do
      {
        *(_QWORD *)(v27 + 8) = 0;
        v27 += 48;
        *(_QWORD *)(v27 - 16) = 0;
      }
      while ( v25 != (_QWORD *)v27 );
    }
LABEL_33:
    *(_QWORD *)(a1 + 120) = result;
LABEL_34:
    *(_QWORD *)(a1 + 132) = 0;
  }
  v28 = *(_QWORD **)(a1 + 152);
  if ( v28 )
  {
    result = *((unsigned int *)v28 - 1);
    v29 = &v28[result];
    if ( v28 >= v29 )
      goto LABEL_43;
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 )
        {
          v31 = *(_QWORD *)(a1 + 144);
          if ( (*(_DWORD *)(v30 + 8))-- == 1 )
            break;
        }
        if ( ++v28 >= v29 )
          goto LABEL_42;
      }
      result = sub_15D7BC0(v31, v30);
      ++v28;
    }
    while ( v28 < v29 );
LABEL_42:
    v28 = *(_QWORD **)(a1 + 152);
    if ( v28 )
LABEL_43:
      *((_DWORD *)v28 - 1) = 0;
  }
  return result;
}

