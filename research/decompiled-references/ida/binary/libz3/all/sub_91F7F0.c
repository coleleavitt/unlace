__int64 __fastcall sub_91F7F0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  int v10; // edx
  int v11; // edx
  void *v12; // rdi
  int v13; // edx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r15
  void *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // r13
  void *v22; // r15
  void *v23; // r15
  __int64 v24; // rsi

  v3 = *(_QWORD *)(a1 + 328);
  if ( !v3 )
    return result;
  v4 = *(unsigned int *)(v3 - 4);
  if ( a2 >= (unsigned int)v4 )
    goto LABEL_16;
  v6 = (unsigned int)(v4 - 1);
  result = 9 * v6;
  v8 = 72 * v6;
  v9 = 72 * (v6 - ((unsigned int)v4 - a2 - 1));
  while ( 1 )
  {
    v16 = v3 + v8;
    v17 = qword_1C7F2C0;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 8LL * *(unsigned __int16 *)(v3 + v8))
        + 80LL * *(unsigned __int16 *)(v3 + v8 + 2);
    *(_DWORD *)v18 = *(_DWORD *)(v3 + v8 + 4);
    if ( (*(_BYTE *)(v3 + v8 + 12) & 1) != 0 )
      break;
    v10 = *(_DWORD *)(v16 + 8);
    *(_BYTE *)(v18 + 12) &= ~1u;
    *(_DWORD *)(v18 + 8) = v10;
    if ( (*(_BYTE *)(v16 + 28) & 1) != 0 )
      goto LABEL_11;
LABEL_5:
    v11 = *(_DWORD *)(v16 + 24);
    v12 = qword_1C7F2C0;
    *(_BYTE *)(v18 + 28) &= ~1u;
    *(_DWORD *)(v18 + 24) = v11;
    if ( (*(_BYTE *)(v16 + 44) & 1) != 0 )
      goto LABEL_12;
LABEL_6:
    v13 = *(_DWORD *)(v16 + 40);
    *(_BYTE *)(v18 + 44) &= ~1u;
    *(_DWORD *)(v18 + 40) = v13;
    if ( (*(_BYTE *)(v16 + 60) & 1) != 0 )
      goto LABEL_13;
LABEL_7:
    v14 = *(_DWORD *)(v16 + 56);
    v15 = v8 - 72;
    *(_BYTE *)(v18 + 60) &= ~1u;
    *(_DWORD *)(v18 + 56) = v14;
    v3 = *(_QWORD *)(a1 + 328);
    if ( v9 == v8 )
      goto LABEL_14;
LABEL_8:
    v8 = v15;
  }
  result = sub_182C690(v17, v18 + 8, v16 + 8);
  if ( (*(_BYTE *)(v16 + 28) & 1) == 0 )
    goto LABEL_5;
LABEL_11:
  result = sub_182C690(v17, v18 + 24, v16 + 24);
  v12 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v16 + 44) & 1) == 0 )
    goto LABEL_6;
LABEL_12:
  result = sub_182C690(v12, v18 + 40, v16 + 40);
  if ( (*(_BYTE *)(v16 + 60) & 1) == 0 )
    goto LABEL_7;
LABEL_13:
  result = sub_182C690(v12, v18 + 56, v16 + 56);
  v3 = *(_QWORD *)(a1 + 328);
  v15 = v8 - 72;
  if ( v9 != v8 )
    goto LABEL_8;
LABEL_14:
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
LABEL_16:
    v19 = 72LL * a2;
    v20 = v3 + v19;
    v21 = v3 + 72 * v4;
    if ( v19 != 72 * v4 )
    {
      do
      {
        v22 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 40);
        sub_182CBA0(v22, v20 + 56);
        v23 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 8);
        v24 = v20 + 24;
        v20 += 72;
        sub_182CBA0(v23, v24);
      }
      while ( v21 != v20 );
      v3 = *(_QWORD *)(a1 + 328);
    }
    *(_DWORD *)(v3 - 4) = a2;
    return a2;
  }
  return result;
}

