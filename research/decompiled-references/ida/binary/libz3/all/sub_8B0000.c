__int64 __fastcall sub_8B0000(__int64 a1, unsigned int a2, char a3, __int64 *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // r12
  int v11; // ebp
  int *v12; // rdx
  __int64 i; // rax
  int v14; // esi
  unsigned int v15; // ebx
  unsigned int v16; // r13d
  int *v17; // r11
  unsigned int v18; // r10d
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rdx
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rsi
  char v25; // al
  unsigned int v27; // [rsp+4h] [rbp-54h]
  int *v29; // [rsp+10h] [rbp-48h]
  char v30; // [rsp+10h] [rbp-48h]
  unsigned int v31; // [rsp+18h] [rbp-40h]
  unsigned int v32; // [rsp+18h] [rbp-40h]
  char v33; // [rsp+1Fh] [rbp-39h]

  v7 = *(_QWORD *)(a1 + 1592);
  if ( v7 )
    v27 = *(_DWORD *)(v7 - 4);
  else
    v27 = 0;
  v8 = 232LL * a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 1480) + 16LL * (*(_DWORD *)(v7 + v8) & 0x1FFFFFFF));
  v10 = (__int64 *)(*(_QWORD *)(a1 + 1480) + 16LL * (*(_DWORD *)(v7 + v8) & 0x1FFFFFFF));
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 - 4);
    v12 = (int *)(v9 + 32);
    for ( i = 0; ; i = v15 )
    {
      if ( (_DWORD)i == v11 )
        return (unsigned int)-1;
      v14 = *v12;
      v15 = i + 1;
      v12 += 10;
      if ( v14 != -1 )
        break;
    }
    v16 = v27;
    while ( 1 )
    {
      v17 = (int *)(v9 + 40 * i);
      v18 = v17[8];
      v19 = *v17;
      if ( a3 )
        v19 = (unsigned int)v19 >> 31;
      else
        LOBYTE(v19) = v19 > 0;
      if ( a2 != v18 )
        break;
LABEL_17:
      i = v15;
      if ( v9 )
      {
        v21 = v9 + 40LL * v15;
        while ( v15 < *(_DWORD *)(v9 - 4) )
        {
          v22 = *(_DWORD *)(v21 + 32);
          ++v15;
          v21 += 40;
          if ( v22 != -1 )
            break;
          i = v15;
        }
      }
      if ( v11 == (_DWORD)i )
      {
        if ( v16 < v27 )
          return v16;
        return (unsigned int)-1;
      }
      v15 = i + 1;
    }
    v20 = *(_QWORD *)(a1 + 1592) + 232LL * v18;
    if ( (_BYTE)v19 )
    {
      if ( *(char *)(v20 + 3) >= 0 )
        goto LABEL_15;
      v23 = v20 + 136;
      v33 = a3;
      v24 = v20 + 8;
      v29 = v17;
      v31 = v17[8];
    }
    else
    {
      if ( (*(_BYTE *)(v20 + 3) & 0x40) == 0 )
      {
LABEL_15:
        if ( v18 >= v16 )
          goto LABEL_16;
LABEL_29:
        v30 = a3;
        v32 = v18;
        sub_8ADE80(*a4, (__int64)(a4 + 1), v17);
        v9 = *v10;
        v16 = v32;
        a3 = v30;
        goto LABEL_17;
      }
      v33 = a3;
      v23 = v20 + 8;
      v24 = v20 + 72;
      v29 = v17;
      v31 = v17[8];
    }
    v25 = sub_8AEDF0(a1 + 736, v24, v23);
    v18 = v31;
    v17 = v29;
    a3 = v33;
    if ( !v25 || v31 >= v16 )
    {
LABEL_16:
      v9 = *v10;
      goto LABEL_17;
    }
    goto LABEL_29;
  }
  return (unsigned int)-1;
}

