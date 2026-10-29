unsigned __int16 *__fastcall sub_716E30(__int64 a1, signed __int64 a2, __int64 a3, char a4)
{
  _WORD *v4; // r14
  __int64 v6; // r12
  _WORD *v7; // rbp
  unsigned int v8; // ecx
  _WORD *v9; // r15
  _WORD *v10; // r12
  __int64 v11; // rsi
  unsigned __int16 *v12; // rbx
  unsigned __int8 v14; // cl
  int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE *v18; // r8
  unsigned __int8 v19; // cl
  unsigned int v20; // eax
  char *v21; // rcx
  signed int v22; // r10d
  _BYTE *v23; // rdi
  char *v24; // rsi
  unsigned int v25; // eax
  unsigned __int8 v26; // [rsp+1Fh] [rbp-39h]

  v4 = (_WORD *)a2;
  v6 = 2 * a3;
  v7 = *(_WORD **)a1;
  v8 = *(_DWORD *)(*(_QWORD *)a1 - 8LL);
  if ( a4 )
  {
    v9 = v7 + 2;
    v10 = &v7[v6 + 2];
    v11 = (unsigned __int16)v10[1];
    if ( (unsigned int)v11 >= v8
      || (v12 = (_WORD *)((char *)v7 + v11),
          v8 < (unsigned int)v11
             + *(unsigned __int16 *)((char *)v7 + v11 + *(unsigned __int16 *)((char *)v7 + v11) + 2)
             + *(unsigned __int16 *)((char *)v7 + v11)
             + 4) )
    {
      v12 = nullptr;
    }
    else if ( !*(_WORD *)((char *)v7 + v11) )
    {
      return nullptr;
    }
    if ( *v7 )
      return v12;
    a2 = (unsigned int)a3;
    a1 = *(_QWORD *)a1;
    v14 = sub_716CB0((__int64)v7, a3);
  }
  else
  {
    v9 = v7 + 2;
    v10 = &v7[v6 + 2];
    v16 = (unsigned __int16)v10[1];
    if ( (unsigned int)v16 >= v8 )
      goto LABEL_13;
    v12 = (_WORD *)((char *)v7 + v16);
    v17 = *(unsigned __int16 *)((char *)v7 + v16);
    a3 = (__int64)v12 + v17 + 2;
    v15 = *v12;
    if ( (int)v12 + (int)v17 + 3 - (int)v7 >= v8 )
      goto LABEL_13;
    a3 = *(unsigned __int16 *)a3;
    if ( (unsigned int)v12 + (_DWORD)a3 + (unsigned __int16)v15 + 4 - 1 - (unsigned int)v7 >= v8 || !(_WORD)v15 )
      goto LABEL_13;
    if ( *v7 )
      return v12;
    v14 = *(_BYTE *)v10;
  }
  if ( !v14 )
    return v12;
  a3 = v14;
  if ( v14 + (unsigned int)*(unsigned __int16 *)((char *)v12 + (unsigned __int16)v15 + 2) + v15 + 4 > 0x60D )
  {
LABEL_12:
    if ( a4 )
      return nullptr;
LABEL_13:
    sub_7172E0(a1, a2, a3);
  }
  a2 = (signed __int64)v12;
  v26 = v14;
  a1 = (__int64)v4 + v14 + 2;
  sub_715BB0((void *)a1, v12, 0);
  v18 = (_BYTE *)a1;
  v19 = v26;
  *v4 = *v12 + v26;
  while ( 1 )
  {
    do
    {
      if ( v10 == v9 )
        goto LABEL_12;
      a2 = *((unsigned __int8 *)v10 - 4);
      v10 -= 2;
      v20 = v19 - (_DWORD)a2;
      a3 = (unsigned int)a2;
    }
    while ( (int)v20 <= 0 );
    a2 = (unsigned __int16)v10[1];
    a1 = *((unsigned int *)v7 - 2);
    if ( (unsigned int)a2 >= (unsigned int)a1 )
      goto LABEL_13;
    v21 = (char *)v7 + a2;
    v22 = *(unsigned __int16 *)((char *)v7 + a2);
    a2 += (signed __int64)v7 + v22 + 2;
    if ( (int)a2 + 1 - (int)v7 >= (unsigned int)a1 )
      goto LABEL_13;
    a2 = &v21[v22 + 3 + *(unsigned __int16 *)a2] - (char *)v7;
    if ( (unsigned int)a2 >= (unsigned int)a1 )
      goto LABEL_13;
    if ( (int)v20 > v22 )
      goto LABEL_12;
    a2 = (signed __int64)(v21 + 2);
    a1 = (int)v20;
    if ( (int)v20 < v22 && (unsigned __int8)v21[v20 + 2] >= *v18 )
      goto LABEL_12;
    v18 = (char *)v4 + (unsigned __int8)a3 + 2;
    if ( v20 >= 8 )
    {
      *(_QWORD *)v18 = *(_QWORD *)(v21 + 2);
      *(_QWORD *)&v18[v20 - 8] = *(_QWORD *)(a2 + v20 - 8);
      v23 = (_BYTE *)((unsigned __int64)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      v24 = (char *)(a2 - (v18 - v23));
      v25 = (v20 + (_DWORD)v18 - (_DWORD)v23) >> 3;
      qmemcpy(v23, v24, 8LL * v25);
      a2 = (signed __int64)&v24[8 * v25];
      a1 = (__int64)&v23[8 * v25];
    }
    else if ( (v20 & 4) != 0 )
    {
      *(_DWORD *)v18 = *(_DWORD *)(v21 + 2);
      *(_DWORD *)&v18[v20 - 4] = *(_DWORD *)(a2 + v20 - 4);
    }
    else if ( v20 )
    {
      *v18 = v21[2];
      if ( (v20 & 2) != 0 )
        *(_WORD *)((char *)v4 + (unsigned __int8)a3 + v20) = *(_WORD *)&v21[v20];
    }
    if ( !(_BYTE)a3 )
      return v4;
    v19 = a3;
  }
}

