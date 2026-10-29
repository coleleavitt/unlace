unsigned __int64 *__fastcall sub_20E4AF0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 *result; // rax
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r11
  _QWORD *v9; // rdx
  _QWORD *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  int v17; // esi
  __int64 v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v22; // rdi
  int v23; // edx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 j; // rax
  __int64 v27; // r10
  __int64 i; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 16);
  v4 = v2 + 16 * v3 - 16;
  result = *(unsigned __int64 **)v4;
  if ( *(_DWORD *)(*(_QWORD *)v4 + 8LL * (unsigned int)(*(_DWORD *)(v4 + 8) - 1) + 4) >= a2 )
  {
    v22 = *(unsigned int *)(v4 + 12);
    v23 = *(_DWORD *)(v4 + 12);
    if ( HIDWORD(result[v22]) < a2 )
    {
      v24 = (unsigned int)(v22 + 1);
      if ( a2 <= HIDWORD(result[v24])
        || (v24 = (unsigned int)(v23 + 2), a2 <= HIDWORD(result[v24]))
        || (v24 = (unsigned int)(v23 + 3), a2 <= HIDWORD(result[v24]))
        || (v24 = (unsigned int)(v23 + 4), a2 <= HIDWORD(result[v24]))
        || (v24 = (unsigned int)(v23 + 5), a2 <= HIDWORD(result[v24]))
        || (v24 = (unsigned int)(v23 + 6), a2 <= HIDWORD(result[v24]))
        || (v24 = (unsigned int)(v23 + 7), a2 <= HIDWORD(result[v24]))
        || (v24 = (unsigned int)(v23 + 8), a2 <= HIDWORD(result[v24]))
        || (v24 = (unsigned int)(v23 + 9), a2 <= HIDWORD(result[v24]))
        || (v24 = (unsigned int)(v23 + 10), a2 <= HIDWORD(result[v24]))
        || (v24 = (unsigned int)(v23 + 11), a2 <= HIDWORD(result[v24])) )
      {
        v23 = v24;
      }
      else
      {
        v23 += 12;
      }
    }
    *(_DWORD *)(v4 + 12) = v23;
    return result;
  }
  *(_DWORD *)(a1 + 16) = v3 - 1;
  if ( (_DWORD)v3 == 2 )
  {
    v13 = *(_QWORD *)a1;
    v12 = *(unsigned int *)(v2 + 12);
    v15 = *(_DWORD *)(*(_QWORD *)a1 + 268LL);
    if ( v15 == (_DWORD)v12 || a2 <= *(_DWORD *)(v13 + 4 * v12 + 176) )
      goto LABEL_11;
    v14 = v12 + 1;
    if ( (_DWORD)v12 + 1 != v15 )
      goto LABEL_22;
LABEL_24:
    v12 = v15;
    goto LABEL_11;
  }
  v6 = v3 - 3;
  if ( (_DWORD)v3 != 3 )
  {
    v7 = v2 + 16LL * v6;
    v8 = *(_QWORD *)v7;
    if ( a2 <= *(_DWORD *)(*(_QWORD *)v7 + 4LL * *(unsigned int *)(v7 + 12) + 128) )
    {
      v27 = 16LL * (unsigned int)(v3 - 2) + v2;
      v8 = *(_QWORD *)v27;
LABEL_45:
      for ( i = *(unsigned int *)(v27 + 12); *(_DWORD *)(v8 + 4 * i + 128) < a2; i = (unsigned int)(i + 1) )
        ;
      *(_DWORD *)(v27 + 12) = i;
      return sub_20E4750(a1, a2);
    }
    v9 = (_QWORD *)(v2 + 16LL * (unsigned int)(v3 - 4));
    while ( 1 )
    {
      *(_DWORD *)(a1 + 16) = v6 + 1;
      if ( v6 == 1 )
        break;
      v10 = v9;
      v11 = *v9;
      v9 -= 2;
      if ( *(_DWORD *)(v11 + 4LL * *((unsigned int *)v10 + 3) + 128) >= a2 )
      {
        v27 = 16LL * v6 + v2;
        goto LABEL_45;
      }
      v8 = v11;
      --v6;
    }
  }
  v12 = *(unsigned int *)(v2 + 12);
  v13 = *(_QWORD *)a1;
  v14 = *(_DWORD *)(v2 + 12);
  if ( *(_DWORD *)(*(_QWORD *)a1 + 4 * v12 + 176) >= a2 )
  {
    v25 = *(_QWORD *)(v2 + 16);
    for ( j = *(unsigned int *)(v2 + 28); *(_DWORD *)(v25 + 4 * j + 128) < a2; j = (unsigned int)(j + 1) )
      ;
    *(_DWORD *)(v2 + 28) = j;
    return sub_20E4750(a1, a2);
  }
  v15 = *(_DWORD *)(v13 + 268);
  if ( (_DWORD)v12 != v15 )
  {
    while ( ++v14 != v15 )
    {
LABEL_22:
      v12 = v14;
      if ( *(_DWORD *)(v13 + 4LL * v14 + 176) >= a2 )
        goto LABEL_11;
    }
    goto LABEL_24;
  }
LABEL_11:
  v16 = a2;
  v17 = *(_DWORD *)(v13 + 264);
  v18 = a1;
  v19 = a1 + 8;
  result = (unsigned __int64 *)*(unsigned int *)(v18 + 20);
  *(_DWORD *)(v18 + 16) = 0;
  if ( v17 )
    v13 += 8;
  v20 = (v12 << 32) | v15;
  if ( !(_DWORD)result )
  {
    result = (unsigned __int64 *)sub_2237220(v19, v18 + 24, 1, 16);
    v2 = *(_QWORD *)(v18 + 8) + 16LL * *(unsigned int *)(v18 + 16);
  }
  *(_QWORD *)v2 = v13;
  *(_QWORD *)(v2 + 8) = v20;
  if ( (*(_DWORD *)(v18 + 16))++ != -1 )
  {
    result = *(unsigned __int64 **)(v18 + 8);
    if ( *((_DWORD *)result + 3) < *((_DWORD *)result + 2) )
    {
      a2 = v16;
      a1 = v18;
      return sub_20E4750(a1, a2);
    }
  }
  return result;
}
