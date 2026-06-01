__int64 *__fastcall sub_1F87B10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  bool v16; // zf
  __int64 *v17; // rdx
  __int64 v18; // rdi
  __int64 *v19; // rsi
  __int64 *result; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rcx
  __int64 *v23; // r10
  int v24; // edi
  __int64 v25; // rdi
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v27; // [rsp+8h] [rbp-30h] BYREF

  v7 = (unsigned int)a3;
  v9 = *a1;
  v26 = a2;
  v10 = *(_DWORD *)(v9 + 440);
  if ( !v10 )
  {
    v27 = nullptr;
    goto LABEL_28;
  }
  a5 = v10 - 1;
  v11 = *(_QWORD *)(v9 + 424);
  v12 = a5 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v13 = (__int64 *)(v11 + 16LL * v12);
  v14 = *v13;
  if ( a2 != *v13 )
  {
    a6 = 1;
    v23 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( !v23 && v14 == -8192 )
          v23 = v13;
        v12 = a5 & (a6 + v12);
        v13 = (__int64 *)(v11 + 16LL * v12);
        v14 = *v13;
        if ( a2 == *v13 )
          goto LABEL_3;
        if ( v14 == -4096 )
        {
          if ( v23 )
            v13 = v23;
          break;
        }
        a6 = (unsigned int)(a6 + 1);
      }
    }
    v24 = *(_DWORD *)(v9 + 432);
    a3 = 3 * v10;
    v27 = v13;
    a4 = (unsigned int)(v24 + 1);
    if ( 4 * (int)a4 < (unsigned int)a3 )
    {
      v25 = v9;
      a3 = v10 - *(_DWORD *)(v9 + 436) - (unsigned int)a4;
      a6 = v10 >> 3;
      a5 = a2;
      if ( (unsigned int)a3 > (unsigned int)a6 )
      {
LABEL_24:
        v16 = *v13 == -4096;
        *(_DWORD *)(v9 + 432) = a4;
        if ( !v16 )
          --*(_DWORD *)(v9 + 436);
        *v13 = a5;
        v9 = v25;
        v15 = v13 + 1;
        *v15 = 0;
        goto LABEL_4;
      }
LABEL_29:
      sub_1F85BC0(v9 + 424, v10, a3, a4, a5, a6);
      sub_1F747D0((__int64 *)(v9 + 424), &v26, &v27);
      a5 = v26;
      v25 = *a1;
      LODWORD(a4) = *(_DWORD *)(v9 + 432) + 1;
      v13 = v27;
      goto LABEL_24;
    }
LABEL_28:
    v10 *= 2;
    goto LABEL_29;
  }
LABEL_3:
  v15 = v13 + 1;
LABEL_4:
  v16 = *(_BYTE *)(v9 + 468) == 0;
  *v15 = v7;
  if ( v16 )
    goto LABEL_13;
  v17 = *(__int64 **)(v9 + 448);
  v18 = *(unsigned int *)(v9 + 460);
  v19 = &v17[v18];
  if ( v17 != v19 )
  {
    result = *(__int64 **)(v9 + 448);
    if ( a2 == *v17 )
      goto LABEL_12;
    do
    {
      if ( v19 == ++result )
        break;
    }
    while ( a2 != *result );
  }
  if ( (unsigned int)v18 >= *(_DWORD *)(v9 + 456) )
  {
LABEL_13:
    result = (__int64 *)sub_2236760(v9 + 448, a2);
    v17 = *(__int64 **)(v9 + 448);
    if ( !*(_BYTE *)(v9 + 468) )
    {
      v21 = &v17[*(unsigned int *)(v9 + 456)];
      goto LABEL_15;
    }
  }
  else
  {
    *(_DWORD *)(v9 + 460) = v18 + 1;
    *v19 = a2;
    v17 = *(__int64 **)(v9 + 448);
    result = &v17[v18];
  }
LABEL_12:
  v21 = &v17[*(unsigned int *)(v9 + 460)];
LABEL_15:
  if ( v21 != result && (unsigned __int64)*result >= 0xFFFFFFFFFFFFFFFELL )
  {
    ++result;
    do
    {
      v22 = result;
      if ( v21 == result )
        break;
      ++result;
    }
    while ( (unsigned __int64)*v22 >= 0xFFFFFFFFFFFFFFFELL );
  }
  return result;
}
