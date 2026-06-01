__int64 __fastcall sub_19CF970(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-30h]

  if ( (*(_BYTE *)(a2[290] + 107LL) & 4) == 0 || (*(_BYTE *)(a3 + 29) & 1) == 0 )
    goto LABEL_3;
  v18 = a4;
  v13 = sub_B8C3D0(a3, (__int64)a2, a3, a4, a5, a6);
  a4 = v18;
  v14 = *v13;
  v15 = *v13 + 8LL * *((unsigned int *)v13 + 2);
  if ( *v13 >= v15 )
  {
    if ( v14 == v15 )
    {
LABEL_3:
      v8 = 0;
      goto LABEL_4;
    }
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 99 )
    {
      v17 = v15 + 8;
      do
      {
        v15 = v17;
        if ( v14 == v17 )
          goto LABEL_3;
        v17 += 8LL;
      }
      while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 99 );
    }
  }
  else
  {
    v16 = *v13;
    while ( 1 )
    {
      v14 = v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 99 )
        break;
      v16 += 8LL;
      if ( v15 == v16 )
        goto LABEL_3;
    }
  }
  v8 = 4LL * (v14 != v15);
LABEL_4:
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v9 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  *(_DWORD *)a1 = 1;
  v10 = *(_QWORD *)(v9 + 8) & 7LL | (*(__int64 *)(v9 + 8) >> 3) & 1;
  if ( v10 )
    v11 = sub_F64F00(a4, v9, v10, a4, a5) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v11 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 16) = sub_A73320(a2, v11);
  *(_QWORD *)(a1 + 32) = v8 | a3 & 0xFFFFFFFFFFFFFFFBLL;
  return a1;
}
