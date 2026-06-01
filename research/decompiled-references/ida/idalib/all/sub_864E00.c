int *__fastcall sub_864E00(int *a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  int *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rdi
  void *v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // rdi
  int v15; // eax
  int v16; // r9d
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // edx
  int v20; // r10d
  unsigned int v22; // eax
  int v23; // esi
  char *v24; // rax

  v6 = a1;
  v7 = *(_QWORD *)(a3 + 216);
  v8 = *(unsigned __int16 *)(a3 + 208);
  if ( !sub_8648E0(a1 - 1, 0, a2, a3) )
    return nullptr;
  v9 = (unsigned int)(*(_DWORD *)(a3 + 236) + 8) >> 3;
  v10 = (void *)(**(__int64 (__fastcall ***)(__int64, _QWORD))a3)(v9, *(_QWORD *)(*(_QWORD *)a3 + 16LL));
  if ( !v10 )
  {
    *a2 = 121;
    *(_QWORD *)(a3 + 168) = (unsigned int)v6[2] | ((unsigned __int64)(unsigned int)v6[1] << 32);
    return nullptr;
  }
  v11 = v7 + 16 * v8;
  v14 = (char *)memset(v10, 0, (unsigned int)v9);
  while ( 1 )
  {
    v15 = *v6;
    LOWORD(v15) = 0;
    if ( v15 != -2145910784 )
      break;
LABEL_8:
    v16 = 1;
    v17 = *(_QWORD *)(a3 + 216) + 16LL * (unsigned int)v6[1];
    v18 = *(_QWORD *)v17;
    do
    {
      while ( 1 )
      {
        if ( *(_QWORD *)v17 == v18 )
        {
          v19 = *(_DWORD *)(v17 + 8);
          v20 = 1 << (v19 & 7);
          v12 = (unsigned __int64)&v14[v19 >> 3];
          v13 = *(unsigned __int8 *)v12;
          if ( ((unsigned __int8)v20 & (unsigned __int8)v13) == 0 )
            break;
        }
        v17 += 16LL;
        if ( v17 >= v11 )
          goto LABEL_13;
      }
      v13 = v20 | (unsigned int)v13;
      v17 += 16LL;
      v16 = 0;
      *(_BYTE *)v12 = v13;
    }
    while ( v17 < v11 );
LABEL_13:
    if ( v16 )
      *(_QWORD *)v6 = 2149122048LL;
    else
      *a4 += 5LL;
LABEL_18:
    v6 += 2;
  }
  while ( 1 )
  {
    if ( v15 == -2145845248 )
    {
      v22 = v6[1];
      v13 = v22 & 7;
      v23 = 1 << (v22 & 7);
      v24 = &v14[v22 >> 3];
      v12 = (unsigned __int8)*v24;
      if ( ((unsigned __int8)v23 & (unsigned __int8)v12) != 0 )
      {
        v6[1] = 0;
      }
      else
      {
        v12 = v23 | (unsigned int)v12;
        *v24 = v12;
        *a4 += 3LL;
      }
      goto LABEL_18;
    }
    if ( v15 != -2146041856 )
      break;
    v15 = v6[3];
    v6 += 3;
    LOWORD(v15) = 0;
    if ( v15 == -2145910784 )
      goto LABEL_8;
  }
  (*(void (__fastcall **)(char *, _QWORD, unsigned __int64, __int64, __int64))(*(_QWORD *)a3 + 8LL))(
    v14,
    *(_QWORD *)(*(_QWORD *)a3 + 16LL),
    v12,
    v13,
    1);
  return v6 - 1;
}
