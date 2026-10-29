__int64 __fastcall sub_741CD0(__int64 a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // r13
  unsigned __int16 *v6; // rbp
  int v7; // r14d
  int v8; // r14d
  int v9; // r15d
  int v10; // ebx
  unsigned __int16 *v11; // r15
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned __int16 *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned __int16 *v24; // rax
  __int64 v25; // rdi
  unsigned __int16 *v26; // r8
  int v27; // eax
  unsigned __int8 v28; // [rsp+Fh] [rbp-39h]

  v4 = a1;
  v6 = a3;
  v7 = *(__int16 *)(a1 + 4);
  LOBYTE(a3) = a4 >= 0 && v7 > a4;
  if ( (_BYTE)a3 )
  {
    v22 = a4;
    v10 = a4;
    v23 = *(_DWORD *)(a1 - 8);
    v24 = (unsigned __int16 *)*(unsigned __int16 *)(a1 + 6 * v22 + 10);
    v13 = v24;
    if ( (unsigned int)v24 >= v23
      || (v13 = (unsigned __int16 *)((char *)v24 + a1),
          v28 = (unsigned __int8)a3,
          v25 = *(unsigned __int16 *)((char *)v24 + a1),
          v26 = (unsigned __int16 *)((char *)v13 + v25 + 2),
          a1 = (__int64)v13 + v25 - v4 + 3,
          (unsigned int)a1 >= v23)
      || (a1 = *v26, (unsigned int)v13 + (_DWORD)a1 + *v13 + 4 - 1 - (unsigned int)v4 >= v23) )
    {
LABEL_34:
      sub_743130(a1, v13, a3);
    }
    a1 = (__int64)v6;
    v27 = sub_73D600(v6, v13);
    LODWORD(a3) = v28;
    if ( !v27 )
      goto LABEL_11;
    if ( v27 <= 0 )
    {
      v8 = v10 - 1;
      if ( v10 )
      {
        v9 = 0;
        if ( v8 > 7 )
          goto LABEL_13;
        v10 = 0;
LABEL_4:
        v11 = (unsigned __int16 *)(v4 + 6LL * v10 + 10);
        while ( 1 )
        {
          v12 = (unsigned __int16 *)*v11;
          a3 = (unsigned __int16 *)*(unsigned int *)(v4 - 8);
          v13 = v12;
          if ( (unsigned int)v12 >= (unsigned int)a3 )
            goto LABEL_34;
          v13 = (unsigned __int16 *)((char *)v12 + v4);
          v14 = *(unsigned __int16 *)((char *)v12 + v4);
          a1 = (__int64)v12 + v4 + v14 + 2;
          v15 = *(unsigned __int16 *)((char *)v12 + v4);
          if ( (int)v13 + (int)v14 + 3 - (int)v4 >= (unsigned int)a3
            || (unsigned int)v13 + *(unsigned __int16 *)a1 + v15 + 4 - 1 - (unsigned int)v4 >= (unsigned int)a3 )
          {
            goto LABEL_34;
          }
          a1 = (__int64)v6;
          v16 = sub_73D600(v6, v13);
          if ( v16 <= 0 )
            break;
          ++v10;
          v11 += 3;
          if ( v10 > v8 )
            goto LABEL_19;
        }
        LOBYTE(a3) = v16 == 0;
        goto LABEL_11;
      }
      v9 = 0;
    }
    else
    {
      v9 = v10 + 1;
      v8 = v7 - 1;
      if ( v10 + 1 <= v8 )
      {
        if ( v8 - v9 > 7 )
          goto LABEL_13;
        ++v10;
        goto LABEL_4;
      }
    }
    v10 = v9;
    LODWORD(a3) = 0;
    goto LABEL_11;
  }
  v8 = v7 - 1;
  v9 = 0;
  if ( v8 <= 7 )
  {
    v10 = 0;
    if ( v8 < 0 )
      goto LABEL_11;
    goto LABEL_4;
  }
  while ( 1 )
  {
LABEL_13:
    a3 = (unsigned __int16 *)*(unsigned int *)(v4 - 8);
    v10 = (v8 + v9) / 2;
    v18 = (unsigned __int16 *)*(unsigned __int16 *)(v4 + 6LL * v10 + 10);
    v13 = v18;
    if ( (unsigned int)v18 >= (unsigned int)a3 )
      goto LABEL_34;
    v13 = (unsigned __int16 *)((char *)v18 + v4);
    v19 = *(unsigned __int16 *)((char *)v18 + v4);
    a1 = (__int64)v18 + v4 + v19 + 2;
    v20 = *(unsigned __int16 *)((char *)v18 + v4);
    if ( (int)v13 + (int)v19 + 3 - (int)v4 >= (unsigned int)a3
      || (unsigned int)v13 + *(unsigned __int16 *)a1 + v20 + 4 - 1 - (unsigned int)v4 >= (unsigned int)a3 )
    {
      goto LABEL_34;
    }
    a1 = (__int64)v6;
    v21 = sub_73D600(v6, v13);
    if ( !v21 )
      break;
    if ( v21 >= 0 )
    {
      v9 = v10 + 1;
      v10 = v9;
      if ( v8 < v9 )
        goto LABEL_19;
    }
    else
    {
      v8 = v10 - 1;
      if ( v10 - 1 < v9 )
      {
LABEL_19:
        LODWORD(a3) = 0;
        goto LABEL_11;
      }
    }
  }
  LODWORD(a3) = 1;
LABEL_11:
  *(_DWORD *)a2 = v10;
  *(_WORD *)(a2 + 6) = 0;
  *(_BYTE *)(a2 + 4) = (_BYTE)a3;
  return (unsigned int)a3;
}
