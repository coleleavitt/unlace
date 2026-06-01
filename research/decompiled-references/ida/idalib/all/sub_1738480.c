void __fastcall sub_1738480(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned int v10; // esi
  unsigned int v11; // eax
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int8 v14; // cl
  char v15; // al
  bool v16; // di
  char ***v17; // rdi
  void *v18; // rdi
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // r12
  unsigned __int64 v23; // r13
  __int64 v24; // r12
  __int64 v25; // r13
  unsigned __int64 i; // rax
  __int64 v27; // r15
  int v28; // r10d
  int v29; // eax
  unsigned __int64 v30; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v31; // [rsp+8h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-70h] BYREF
  __int128 v33; // [rsp+20h] [rbp-60h] BYREF
  __int128 v34; // [rsp+30h] [rbp-50h]

  v6 = a3 & 7;
  if ( (a3 & 7) != 0 )
    return;
  v7 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  v8 = a1[4];
  v34 = 0;
  *(_OWORD *)ptr = 0;
  v33 = 0;
  v31 = v7;
  LODWORD(v34) = a4;
  if ( v8 && a1[5] == a2 )
  {
    BYTE8(v33) = 1;
    ptr[1] = (void *)0x100000000LL;
    ptr[0] = &v33;
    v22 = 8 * (((*(_BYTE *)(v8 + 2) & 8) != 0) + 1LL) + 32;
    v7 = *(unsigned int *)(v8 + 16);
    v23 = v22 + 8 * v7;
    v24 = v8 + v22;
    v25 = v8 + v23;
    if ( v25 != v24 )
    {
      for ( i = 1; ; i = HIDWORD(ptr[1]) )
      {
        a4 = (unsigned int)v6;
        v27 = *(_QWORD *)(*(_QWORD *)v24 + 8LL);
        v7 = (unsigned int)v6 + 1LL;
        if ( v7 > i )
        {
          sub_2237220(ptr, &v33, v7, 8);
          v7 = LODWORD(ptr[1]);
          *((_QWORD *)ptr[0] + LODWORD(ptr[1])) = v27;
        }
        else
        {
          *((_QWORD *)ptr[0] + (unsigned int)v6) = v27;
        }
        v24 += 8;
        v6 = (unsigned int)++LODWORD(ptr[1]);
        if ( v25 == v24 )
          break;
      }
      v8 = a1[4];
    }
    if ( a1[6] != v8 )
    {
LABEL_5:
      v9 = a1[2];
      v10 = *(_DWORD *)(v9 + 16);
      if ( v10 )
        goto LABEL_6;
LABEL_22:
      v30 = 0;
      goto LABEL_23;
    }
  }
  else if ( a1[6] != a2 )
  {
    goto LABEL_5;
  }
  v9 = a1[2];
  v10 = *(_DWORD *)(v9 + 16);
  *((_QWORD *)&v34 + 1) = a1[7];
  if ( !v10 )
    goto LABEL_22;
LABEL_6:
  v7 = v31;
  v6 = v10 - 1;
  v11 = v6 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
  v12 = *(_QWORD *)v9 + ((unsigned __int64)v11 << 6);
  v13 = *(_QWORD *)v12;
  if ( v31 == *(_QWORD *)v12 )
    goto LABEL_7;
  v28 = 1;
  a6 = 0;
  if ( v13 == -4096 )
  {
LABEL_47:
    v29 = *(_DWORD *)(v9 + 8);
    a4 = 3 * v10;
    v30 = v12;
    v19 = v29 + 1;
    if ( 4 * v19 < (unsigned int)a4 )
    {
      a4 = v10 - *(_DWORD *)(v9 + 12) - v19;
      if ( (unsigned int)a4 > v10 >> 3 )
        goto LABEL_25;
      goto LABEL_24;
    }
LABEL_23:
    v10 *= 2;
LABEL_24:
    sub_1737F80((__int64 **)v9, v10, v7, a4, v6, a6);
    sub_16FE800((__int64 *)v9, (__int64 *)&v31, &v30);
    v7 = v31;
    v12 = v30;
    v19 = *(_DWORD *)(v9 + 8) + 1;
LABEL_25:
    v20 = *(_QWORD *)v12 == -4096;
    *(_DWORD *)(v9 + 8) = v19;
    if ( !v20 )
      --*(_DWORD *)(v9 + 12);
    *(_QWORD *)v12 = v7;
    v21 = v31;
    v17 = (char ***)(v12 + 16);
    *(_OWORD *)(v12 + 8) = 0;
    *(_OWORD *)(v12 + 24) = 0;
    v15 = BYTE8(v33);
    *(_OWORD *)(v12 + 40) = 0;
    *(_QWORD *)(v12 + 56) = 0;
    *(_DWORD *)(v12 + 48) = 2;
    *(_QWORD *)(v12 + 8) = v21;
    goto LABEL_28;
  }
  while ( 1 )
  {
    if ( !a6 && v13 == -8192 )
      a6 = v12;
    v11 = v6 & (v28 + v11);
    v12 = *(_QWORD *)v9 + ((unsigned __int64)v11 << 6);
    v13 = *(_QWORD *)v12;
    if ( v31 == *(_QWORD *)v12 )
      break;
    if ( v13 == -4096 )
    {
      if ( a6 )
        v12 = a6;
      goto LABEL_47;
    }
    ++v28;
  }
LABEL_7:
  v14 = *(_BYTE *)(v12 + 40);
  v15 = BYTE8(v33);
  if ( v14 < BYTE8(v33)
    || v14 == BYTE8(v33)
    && ((v16 = *(_QWORD *)(v12 + 56) != 0, (unsigned __int8)v16 < (unsigned __int8)(*((_QWORD *)&v34 + 1) != 0))
     || v16 == (*((_QWORD *)&v34 + 1) != 0) && *(_DWORD *)(v12 + 48) < (int)v34) )
  {
    *(_QWORD *)(v12 + 8) = v31;
    v17 = (char ***)(v12 + 16);
    if ( v14 )
    {
      if ( v15 )
      {
        sub_1712470(v17, (char ***)ptr);
        v15 = BYTE8(v33);
      }
      else
      {
        v18 = *(void **)(v12 + 16);
        *(_BYTE *)(v12 + 40) = 0;
        if ( v18 != (void *)(v12 + 32) )
          free(v18);
        v15 = BYTE8(v33);
      }
LABEL_32:
      *(_DWORD *)(v12 + 48) = v34;
      *(_QWORD *)(v12 + 56) = *((_QWORD *)&v34 + 1);
      goto LABEL_11;
    }
LABEL_28:
    if ( !v15 )
    {
      *(_DWORD *)(v12 + 48) = v34;
      *(_QWORD *)(v12 + 56) = *((_QWORD *)&v34 + 1);
      return;
    }
    *(_QWORD *)(v12 + 16) = v12 + 32;
    *(_QWORD *)(v12 + 24) = 0x100000000LL;
    if ( LODWORD(ptr[1]) )
      sub_1712470(v17, (char ***)ptr);
    *(_BYTE *)(v12 + 40) = 1;
    v15 = BYTE8(v33);
    goto LABEL_32;
  }
LABEL_11:
  if ( v15 )
  {
    if ( ptr[0] != &v33 )
      free(ptr[0]);
  }
}
