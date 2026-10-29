unsigned __int64 __fastcall sub_756240(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int *v18; // rbx
  unsigned int *v19; // rbp
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rsi
  __int64 v24; // rax
  __int64 v26; // [rsp+10h] [rbp-58h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  unsigned int v28; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+70h] [rbp+8h]
  __int64 v31; // [rsp+70h] [rbp+8h]

  v29 = __readfsqword(0x28u);
  v7 = a7;
  if ( a4 == -1 || a5 == -1 )
  {
    if ( !under_debugger )
      interr(3427);
    BUG();
  }
  v8 = *(_QWORD *)(a1 + 48);
  v10 = 5 * a7;
  v11 = 5 * a5;
  v12 = v8 + 176LL * a2;
  v13 = v8 + 176LL * a3;
  if ( a7 )
  {
    v14 = *(_QWORD *)(v13 + 32);
    v15 = *(_QWORD *)(v13 + 24);
    if ( *(_QWORD *)(v13 + 40) < (unsigned __int64)(a7 + v14) )
    {
      v26 = a6;
      v24 = qvector_reserve(v13 + 24, v15, a7 + v14, 5);
      v14 = *(_QWORD *)(v13 + 32);
      v7 = a7;
      *(_QWORD *)(v13 + 24) = v24;
      a6 = v26;
      v15 = v24;
    }
    v30 = v7;
    v27 = a6;
    memmove((void *)(v11 + v15 + v10), (const void *)(v11 + v15), 5 * v14 - v11);
    v7 = v30;
    v16 = 0;
    v17 = v11 + v15;
    if ( v30 )
    {
      do
      {
        *(_DWORD *)(v17 + v16) = *(_DWORD *)(v27 + v16);
        *(_BYTE *)(v17 + v16 + 4) = *(_BYTE *)(v27 + v16 + 4);
        v16 += 5;
      }
      while ( v10 != v16 );
    }
    *(_QWORD *)(v13 + 32) += v30;
  }
  v31 = v7;
  memmove(
    (void *)(*(_QWORD *)(v12 + 24) + 5 * a4),
    (const void *)(*(_QWORD *)(v12 + 24) + 5 * a4 + v10),
    5LL * *(_QWORD *)(v12 + 32) - (5 * a4 + v10));
  *(_QWORD *)(v12 + 32) -= v31;
  v18 = (unsigned int *)(*(_QWORD *)(v13 + 24) + v11);
  v19 = (unsigned int *)((char *)v18 + v10);
  if ( v31 )
  {
    while ( 1 )
    {
      v22 = *v18;
      if ( *((_BYTE *)v18 + 4) )
        break;
      if ( (*(_BYTE *)(v12 + 164) & 4) == 0 )
      {
        sub_753360((_QWORD *)(v12 + 48), v22);
        LODWORD(v22) = *v18;
      }
      v28 = v22;
      if ( (*(_BYTE *)(v13 + 164) & 4) != 0 )
      {
LABEL_15:
        v18 = (unsigned int *)((char *)v18 + 5);
        if ( v18 == v19 )
          goto LABEL_21;
      }
      else
      {
        v18 = (unsigned int *)((char *)v18 + 5);
        sub_753C70((__int64 *)(v13 + 48), &v28);
        if ( v18 == v19 )
          goto LABEL_21;
      }
    }
    v20 = *(_QWORD *)(a1 + 48) + 176 * v22;
    *(_DWORD *)(v20 + 164) |= 1u;
    *(_DWORD *)(v20 + 160) = a3;
    v21 = *v18;
    if ( (*(_BYTE *)(v12 + 164) & 4) == 0 )
    {
      sub_753360((_QWORD *)(v12 + 104), v21);
      v21 = *v18;
    }
    v28 = v21;
    if ( (*(_BYTE *)(v13 + 164) & 4) == 0 )
      sub_753C70((__int64 *)(v13 + 104), &v28);
    goto LABEL_15;
  }
LABEL_21:
  *(_DWORD *)(v12 + 164) |= 1u;
  *(_DWORD *)(v13 + 164) |= 1u;
  return v29 - __readfsqword(0x28u);
}

