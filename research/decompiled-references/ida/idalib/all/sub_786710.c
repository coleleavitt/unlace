__int64 __fastcall sub_786710(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  int v4; // r13d
  _DWORD *v5; // rax
  signed int v6; // r13d
  _DWORD *v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // r12
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  _QWORD *v13; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 256);
  v3 = *(int *)(*(_QWORD *)(a1 + 248) + 4 * v2 - 4);
  if ( v2 )
    *(_QWORD *)(a1 + 256) = v2 - 1;
  v4 = *(_DWORD *)(a1 + 208);
  v5 = (_DWORD *)operator new(0x20u);
  *v5 = a2;
  v6 = v4 - v3;
  v7 = v5;
  v5[6] = 0;
  v8 = qalloc_or_throw(24);
  *(_QWORD *)v8 = 0;
  v9 = (_QWORD *)v8;
  *(_OWORD *)(v8 + 8) = 0;
  *((_QWORD *)v7 + 1) = v8;
  if ( v6 )
  {
    v10 = *(_QWORD *)(v8 + 8);
    v11 = **(_QWORD **)(a1 + 200);
    v12 = v10 + v6;
    if ( __CFADD__(v10, v6) )
    {
      if ( v10 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v10 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)(v8 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
        memcpy((void *)(v10 + *v9), (const void *)(v11 + v3), v6);
        goto LABEL_9;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v15 = *(_QWORD *)v8;
    v16 = *(_QWORD *)(v8 + 8);
    if ( v9[2] < v12 )
    {
      v23 = v9[1];
      v21 = **(_QWORD **)(a1 + 200);
      v19 = v12;
      v17 = qvector_reserve(v9, v15, v12, 1);
      v10 = v23;
      v11 = v21;
      *v9 = v17;
      v15 = v17;
      v12 = v19;
      v16 = v9[1];
    }
    v22 = v10;
    v20 = v11;
    v18 = v12;
    memset((void *)(v15 + v16), 0, v12 - v16);
    v11 = v20;
    v10 = v22;
    v9[1] = v18;
    goto LABEL_8;
  }
LABEL_9:
  v13 = (_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  *((_QWORD *)v7 + 2) = *v13;
  *v13 = v7;
  sub_7844A0(a1, v6);
  return 0;
}
