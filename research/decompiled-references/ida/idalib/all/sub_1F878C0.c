__int64 *__fastcall sub_1F878C0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  __int64 v7; // rbp
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 *v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rax
  bool v16; // zf
  __int64 *v17; // rdx
  __int64 v18; // r8
  __int64 *v19; // rdi
  __int64 *result; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rcx
  int v23; // r10d
  __int64 *v24; // r11
  int v25; // edi
  int v26; // esi
  __int64 v27; // [rsp+8h] [rbp-40h] BYREF
  __int64 *v28; // [rsp+18h] [rbp-30h] BYREF

  v6 = (__int64 *)(a1 + 424);
  v7 = a2;
  v9 = *(unsigned int *)(a1 + 440);
  v27 = a3;
  if ( !(_DWORD)v9 )
  {
    v28 = nullptr;
    goto LABEL_37;
  }
  v10 = a3;
  a6 = (unsigned int)(v9 - 1);
  v11 = *(_QWORD *)(a1 + 424);
  v12 = a6 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v13 = (__int64 *)(v11 + 16LL * v12);
  v14 = *v13;
  if ( v10 != *v13 )
  {
    v23 = 1;
    v24 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == -8192 && !v24 )
          v24 = v13;
        v12 = a6 & (v23 + v12);
        v13 = (__int64 *)(v11 + 16LL * v12);
        v14 = *v13;
        if ( v10 == *v13 )
          goto LABEL_3;
        if ( v14 == -4096 )
        {
          if ( v24 )
            v13 = v24;
          break;
        }
        ++v23;
      }
    }
    v25 = *(_DWORD *)(a1 + 432);
    v28 = v13;
    a3 = (unsigned int)(v25 + 1);
    a5 = (unsigned int)(4 * a3);
    if ( (unsigned int)a5 < 3 * (int)v9 )
    {
      a5 = (unsigned int)v9 >> 3;
      if ( (int)v9 - *(_DWORD *)(a1 + 436) - (int)a3 > (unsigned int)a5 )
      {
LABEL_24:
        v16 = *v13 == -4096;
        *(_DWORD *)(a1 + 432) = a3;
        if ( !v16 )
          --*(_DWORD *)(a1 + 436);
        *v13 = v10;
        v15 = v13 + 1;
        v10 = v27;
        *v15 = 0;
        goto LABEL_4;
      }
      v26 = v9;
LABEL_38:
      sub_1F85BC0((__int64)v6, v26, a3, v9, a5, a6);
      sub_1F747D0(v6, &v27, &v28);
      v10 = v27;
      LODWORD(a3) = *(_DWORD *)(a1 + 432) + 1;
      v13 = v28;
      goto LABEL_24;
    }
LABEL_37:
    v26 = 2 * v9;
    goto LABEL_38;
  }
LABEL_3:
  v15 = v13 + 1;
LABEL_4:
  v16 = *(_BYTE *)(a1 + 468) == 0;
  *v15 = v7;
  if ( v16 )
    goto LABEL_13;
  v17 = *(__int64 **)(a1 + 448);
  v18 = *(unsigned int *)(a1 + 460);
  v19 = &v17[v18];
  if ( v17 != v19 )
  {
    result = *(__int64 **)(a1 + 448);
    if ( v10 == *v17 )
      goto LABEL_12;
    do
    {
      if ( v19 == ++result )
        break;
    }
    while ( v10 != *result );
  }
  if ( (unsigned int)v18 >= *(_DWORD *)(a1 + 456) )
  {
LABEL_13:
    result = (__int64 *)sub_2236760(a1 + 448, v10);
    v17 = *(__int64 **)(a1 + 448);
    if ( !*(_BYTE *)(a1 + 468) )
    {
      v21 = &v17[*(unsigned int *)(a1 + 456)];
      goto LABEL_15;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 460) = v18 + 1;
    *v19 = v10;
    v17 = *(__int64 **)(a1 + 448);
    result = &v17[v18];
  }
LABEL_12:
  v21 = &v17[*(unsigned int *)(a1 + 460)];
LABEL_15:
  if ( result != v21 && (unsigned __int64)*result >= 0xFFFFFFFFFFFFFFFELL )
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
