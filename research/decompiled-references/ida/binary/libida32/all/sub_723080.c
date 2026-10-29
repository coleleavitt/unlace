__int64 __fastcall sub_723080(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // r9
  __int64 *v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r12
  signed int v11; // r8d
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  int i; // ecx
  unsigned __int8 v16; // si
  unsigned __int8 v17; // dl
  int v18; // eax
  signed int v19; // r9d
  unsigned __int16 v20; // cx
  __int16 v22; // ax
  unsigned int *v23; // r12
  int v24; // r13d
  __int64 v25; // rdx
  unsigned int *v26; // rsi

  v3 = *(_QWORD *)(a1 + 2664);
  v5 = *(__int64 **)(v3 + 8);
  if ( !v5 && *(__int16 *)(a1 + 1634) > 0 )
  {
    v23 = (unsigned int *)(a1 + 1640);
    v24 = 0;
    do
    {
      v25 = *v23;
      v26 = v23;
      ++v24;
      v23 += 8;
      sub_724B00(a1, v26, v25);
    }
    while ( v24 < *(__int16 *)(a1 + 1634) );
    v3 = *(_QWORD *)(a1 + 2664);
    v5 = *(__int64 **)(v3 + 8);
  }
  v6 = *(unsigned __int8 *)(a1 + 4220);
  v7 = *v5;
  v8 = v3 + 24;
  if ( !(_BYTE)v6 )
  {
    v19 = *(__int16 *)(v7 + 4);
    goto LABEL_19;
  }
  v9 = *(unsigned __int16 *)(a1 + 2672);
  v10 = *a2;
  v11 = *(_DWORD *)(v3 + 24);
  v12 = v10;
  if ( v9 <= v10 )
    v12 = *(unsigned __int16 *)(a1 + 2672);
  v13 = (unsigned int)v12;
  if ( v12 )
  {
    v14 = 0;
    for ( i = 1; ; ++i )
    {
      v16 = *((_BYTE *)a2 + v14 + 2);
      v17 = *(_BYTE *)(a1 + v14 + 2674);
      if ( v16 != v17 )
        break;
      ++v14;
      if ( (int)v13 < i + 1 )
      {
        if ( v9 == v10 )
          goto LABEL_23;
        if ( v9 >= v10 )
        {
LABEL_22:
          v19 = *(_DWORD *)(v3 + 24);
LABEL_19:
          v11 = 0;
          v20 = 0;
          return sub_721A00(v7, v8, (__int64)a2, v20, v11, v19);
        }
LABEL_15:
        v18 = *(unsigned __int16 *)(v7 + 6LL * v11 + 6);
        if ( v18 >= i )
          goto LABEL_29;
        goto LABEL_16;
      }
    }
    if ( v16 < v17 )
      i = -i;
    if ( !i )
      goto LABEL_23;
    if ( i <= 0 )
      goto LABEL_22;
    --i;
    goto LABEL_15;
  }
  if ( v9 != v10 )
  {
    if ( v9 >= v10 )
      goto LABEL_22;
    LOWORD(i) = 0;
LABEL_29:
    LOWORD(v18) = i;
LABEL_16:
    v19 = *(__int16 *)(v7 + 4);
    v20 = v18;
    return sub_721A00(v7, v8, (__int64)a2, v20, v11, v19);
  }
LABEL_23:
  if ( v11 >= (unsigned __int64)*(__int16 *)(v7 + 4) || v11 < 0 )
    sub_723060(v13);
  v22 = *(_WORD *)(v7 + 6LL * v11 + 6);
  *(_BYTE *)(v3 + 28) = 1;
  *(_WORD *)(v3 + 30) = v22;
  return v6;
}

