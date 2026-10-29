__int64 *__fastcall sub_18987A0(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // ebp
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  __int64 v13; // r13
  unsigned int v14; // ebp
  int v15; // eax
  __int64 v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rdi
  __int64 *v21; // [rsp+8h] [rbp-30h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v21 = nullptr;
    goto LABEL_3;
  }
  v13 = *(_QWORD *)a1;
  v14 = v8 - 1;
  v15 = sub_FDE780(*a2);
  v16 = *a2;
  v17 = v14 & v15;
  a3 = (__int64 *)(v13 + 16LL * v17);
  v18 = *a3;
  if ( *a2 == *a3 )
    return a3 + 1;
  if ( v18 != -1 )
  {
    a5 = 1;
    v20 = nullptr;
    while ( 1 )
    {
      if ( v18 == -2 && !v20 )
        v20 = a3;
      a6 = (unsigned int)(a5 + 1);
      v17 = v14 & (a5 + v17);
      a3 = (__int64 *)(v13 + 16LL * v17);
      v18 = *a3;
      if ( v16 == *a3 )
        return a3 + 1;
      if ( v18 == -1 )
      {
        v9 = *(_DWORD *)(a1 + 16);
        v8 = v9;
        if ( !v20 )
          goto LABEL_12;
        a3 = v20;
        goto LABEL_13;
      }
      a5 = (unsigned int)a6;
    }
  }
  v9 = *(_DWORD *)(a1 + 16);
LABEL_12:
  v8 = v9;
LABEL_13:
  v19 = *(_DWORD *)(a1 + 8);
  a4 = 3 * v9;
  v21 = a3;
  v10 = v19 + 1;
  if ( 4 * v10 < (unsigned int)a4 )
  {
    a4 = v9 >> 3;
    if ( v9 - (v10 + *(_DWORD *)(a1 + 12)) > (unsigned int)a4 )
      goto LABEL_5;
    goto LABEL_4;
  }
LABEL_3:
  v9 = 2 * v8;
LABEL_4:
  sub_1898590(a1, v9, (__int64)a3, a4, a5, a6);
  sub_18958C0((__int64 *)a1, a2, &v21);
  a3 = v21;
  v10 = *(_DWORD *)(a1 + 8) + 1;
LABEL_5:
  *(_DWORD *)(a1 + 8) = v10;
  if ( *a3 != -1 )
    --*(_DWORD *)(a1 + 12);
  v11 = *a2;
  a3[1] = 0;
  *a3 = v11;
  return a3 + 1;
}
