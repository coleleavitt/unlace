__int64 __fastcall sub_65DDE0(_QWORD *a1, __int64 *a2, double a3, double a4, __int64 a5, char **a6)
{
  char v8; // r12
  unsigned int v9; // eax
  __int64 result; // rax
  __int64 v11; // rdi
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int *v20; // rsi
  __int64 v21; // rdx
  unsigned int *v22; // rcx
  unsigned int *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx

  v8 = **a6;
  v9 = sub_6584F0(*(_QWORD *)(a1[1] + 1672LL), a6, 0, a3, a4);
  if ( !v9 )
    return 0;
  v11 = a1[2];
  v12 = v9;
  if ( !v11 )
    v11 = *(_QWORD *)(*(_QWORD *)(a1[1] + 1672LL) + 8LL);
  v13 = sub_64DE20(v11, v9);
  if ( v13 )
  {
    v14 = v13 + 4;
    if ( *(_BYTE *)(v13 + 4) == 35 && !*(_BYTE *)(v13 + 5) )
      v14 = v13 + 5;
  }
  else
  {
    v20 = (unsigned int *)a1[4];
    v21 = a1[5];
    v22 = &v20[v21];
    v23 = v20;
    if ( v20 == v22 )
      goto LABEL_26;
    while ( v12 != *v23 )
    {
      if ( v22 == ++v23 )
        goto LABEL_26;
    }
    if ( v22 == v23 )
    {
LABEL_26:
      v24 = v21 + 1;
      if ( a1[6] < v24 )
      {
        v25 = qvector_reserve(a1 + 4, v20, v24, 4);
        v26 = a1[5];
        a1[4] = v25;
        v22 = (unsigned int *)(v25 + 4 * v26);
      }
      *v22 = v12;
      ++a1[5];
    }
    v14 = a1[3];
    if ( !v14 )
      return 0;
  }
  v15 = a2[1];
  if ( v15 )
  {
    v16 = v15 + 1;
    v17 = a2[1];
    v18 = *a2;
    --v15;
    if ( a2[2] >= v16 )
      goto LABEL_10;
  }
  else
  {
    v18 = *a2;
    v17 = 1;
    v16 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_10;
  }
  v19 = qvector_reserve(a2, v18, v16, 1);
  *a2 = v19;
  v18 = v19;
LABEL_10:
  a2[1] = v16;
  *(_BYTE *)(v18 + v15) = v8;
  *(_BYTE *)(*a2 + v17) = 0;
  if ( (v8 & 0x3F) != 0x3D && !(unsigned __int8)sub_6B35E0(a2, 0, 0) || (result = sub_6A99B0(a2, v14), !(_BYTE)result) )
  {
    if ( !under_debugger )
      interr(2943);
    BUG();
  }
  return result;
}
