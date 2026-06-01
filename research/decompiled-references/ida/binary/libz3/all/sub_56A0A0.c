__int64 __fastcall sub_56A0A0(__int64 a1)
{
  _DWORD *v1; // rax
  _DWORD *v2; // r13
  _DWORD *v3; // rbp
  _QWORD *v4; // r14
  void (__fastcall ****v5)(_QWORD); // rbx
  void (__fastcall ****v6)(_QWORD); // r15
  void (__fastcall ***v7)(_QWORD); // r12
  _DWORD *v8; // rax
  __int64 result; // rax
  __int64 v10; // rdi
  unsigned int v11; // esi
  char *v12; // r13
  _DWORD *v13; // rdx
  int v14; // ecx
  char *v15; // rbx
  char *v16; // rbp
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  __int64 v20; // rbp
  __int64 v21; // rax
  _QWORD *v22; // rdx
  unsigned int v23; // esi

  v1 = *(_DWORD **)(a1 + 32);
  v2 = v1;
  v3 = &v1[8 * *(unsigned int *)(a1 + 40)];
  if ( v1 == v3 )
  {
    if ( *(_DWORD *)(a1 + 44) )
      goto LABEL_33;
  }
  else
  {
    while ( v2[1] != 2 )
    {
      v2 += 8;
      if ( v3 == v2 )
        goto LABEL_39;
    }
    if ( v3 == v2 )
    {
LABEL_39:
      if ( !*(_DWORD *)(a1 + 44) )
        goto LABEL_17;
      v10 = *(unsigned int *)(a1 + 40);
      v12 = (char *)v1;
      v11 = *(_DWORD *)(a1 + 40);
      v13 = &v1[8 * v10];
      goto LABEL_19;
    }
    do
    {
      v4 = *((_QWORD **)v2 + 3);
      v5 = (void (__fastcall ****)(_QWORD))*v4;
      if ( *v4 )
      {
        v6 = &v5[*((unsigned int *)v5 - 1)];
        if ( v6 == v5 )
          goto LABEL_10;
        do
        {
          v7 = *v5++;
          (**v7)(v7);
          sub_186B220(v7);
        }
        while ( v5 != v6 );
        v5 = (void (__fastcall ****)(_QWORD))*v4;
        if ( *v4 )
LABEL_10:
          sub_186B220(v5 - 1);
      }
      sub_186B220(v4);
      v8 = v2 + 8;
      if ( v3 == v2 + 8 )
        break;
      while ( 1 )
      {
        v2 = v8;
        if ( v8[1] == 2 )
          break;
        v8 += 8;
        if ( v3 == v8 )
          goto LABEL_16;
      }
    }
    while ( v3 != v8 );
LABEL_16:
    if ( *(_DWORD *)(a1 + 44) )
      goto LABEL_18;
  }
LABEL_17:
  result = a1;
  if ( !*(_DWORD *)(a1 + 48) )
    return result;
LABEL_18:
  v10 = *(unsigned int *)(a1 + 40);
  v1 = *(_DWORD **)(a1 + 32);
  v11 = *(_DWORD *)(a1 + 40);
  v12 = (char *)v1;
  v13 = &v1[8 * v10];
  if ( v1 != v13 )
  {
LABEL_19:
    v14 = 0;
    do
    {
      while ( v1[1] )
      {
        v1[1] = 0;
        v1 += 8;
        if ( v1 == v13 )
          goto LABEL_23;
      }
      v1 += 8;
      ++v14;
    }
    while ( v1 != v13 );
LABEL_23:
    if ( v11 <= 0x10 || 3 * v11 >= 4 * v14 )
      goto LABEL_33;
    if ( v12 )
    {
      v15 = v12;
      v16 = &v12[32 * v10];
      do
      {
        while ( 1 )
        {
          v17 = *((_QWORD *)v15 + 1);
          if ( !v17 )
            break;
          v15 += 32;
          sub_186B220((void *)(v17 - 8));
          if ( v16 == v15 )
            goto LABEL_29;
        }
        v15 += 32;
      }
      while ( v15 != v16 );
LABEL_29:
      sub_186B220(v12);
      v18 = *(_DWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 32) = 0;
      v19 = v18 >> 1;
      v20 = v18 >> 1;
      *(_DWORD *)(a1 + 40) = v18 >> 1;
      v21 = sub_186B270(32 * v20);
      if ( !v19 )
        goto LABEL_32;
    }
    else
    {
      v23 = v11 >> 1;
      v20 = v23;
      *(_DWORD *)(a1 + 40) = v23;
      *(_QWORD *)(a1 + 32) = 0;
      v21 = sub_186B270(32LL * v23);
    }
    v22 = (_QWORD *)v21;
    do
    {
      *v22 = 0;
      v22 += 4;
      *(v22 - 3) = 0;
      *((_DWORD *)v22 - 4) = 0;
    }
    while ( v22 != (_QWORD *)(v21 + 32 * v20) );
LABEL_32:
    *(_QWORD *)(a1 + 32) = v21;
  }
LABEL_33:
  result = a1;
  *(_QWORD *)(a1 + 44) = 0;
  return result;
}

