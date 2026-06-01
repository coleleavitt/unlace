unsigned __int64 __fastcall sub_1F4BCD0(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  bool v12; // zf
  unsigned __int64 v13; // rbx
  int v14; // ecx
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 result; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // r14

  sub_1F4B4A0((__int64)a1, a2);
  v6 = a1[2];
  v7 = *(unsigned int *)(v6 + 24);
  v8 = *(_QWORD *)(v6 + 16);
  v9 = *(_QWORD *)(v6 + 32);
  v10 = *(_QWORD *)(v6 + 8);
  v11 = (unsigned int)(v7 + 1);
  v12 = *(_QWORD *)(v8 + 856) == 0;
  *(_DWORD *)(v6 + 24) = v11;
  v13 = *(_QWORD *)(v9 + 8 * v7);
  if ( !v12 )
  {
    sub_1EDF870(v10, v8);
    v6 = a1[2];
    v11 = *(unsigned int *)(v6 + 24);
    v9 = *(_QWORD *)(v6 + 32);
  }
  v14 = __ROR4__(v13, 1);
  v15 = HIDWORD(v13);
  if ( v15 )
  {
    v4 = (unsigned int)(v15 - 1);
    v8 = *(_QWORD *)(*(_QWORD *)(v8 + 3320) + 8 * v4);
  }
  if ( v14 )
    v14 = v14 + *(_DWORD *)(v8 + 1648) - 2;
  *(_DWORD *)(a2 + 64) = v14;
  v12 = *(_QWORD *)(v9 + 8 * v11) == 0;
  v16 = (unsigned int)(v11 + 1);
  *(_DWORD *)(v6 + 24) = v16;
  if ( !v12 )
  {
    v25 = *(_QWORD **)(*a1 + 144);
    v26 = v25[294];
    v25[304] += 56LL;
    v27 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v28 = v27 + 56;
    if ( v25[295] >= v27 + 56 && v26 )
    {
      v25[294] = v28;
      v29 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v29 = sub_986170((__int64)(v25 + 294), 56, 56, 3, v4, v5);
      v27 = v29 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)(v29 + 48) = 0;
    *(_OWORD *)(v29 + 16) = 0;
    *(_OWORD *)(v29 + 32) = 0;
    *(_QWORD *)(v29 + 24) = 0;
    *(_QWORD *)(v29 + 40) = 0;
    *(_OWORD *)v29 = 0;
    sub_1F197E0(a1[2], v29, v28, v16, v4, v5);
    v30 = a1[2];
    v31 = *(unsigned int *)(v30 + 24);
    v32 = *(_QWORD *)(v30 + 16);
    v33 = *(_QWORD *)(v30 + 8);
    *(_DWORD *)(v30 + 24) = v31 + 1;
    v34 = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 8 * v31);
    *(_QWORD *)(v29 + 40) = sub_1F6A0A0(v33, v32);
    *(_DWORD *)(v29 + 48) = v34;
    *(_QWORD *)(a2 + 56) = v27 | 4;
    v6 = a1[2];
    v16 = *(unsigned int *)(v6 + 24);
  }
  if ( *(_DWORD *)(v6 + 40) > (unsigned int)v16 )
  {
    v19 = *(_QWORD **)(v6 + 8);
    v20 = *(_QWORD *)(v6 + 16);
    *(_DWORD *)(v6 + 24) = v16 + 1;
    v21 = sub_1F15160(v19, v20, *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v16));
    if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      result = (unsigned __int64)sub_A81BC0(*(_QWORD **)(*a1 + 144), v21, 0, v22, v23, v24);
      v17 = *(_QWORD *)(a2 + 56);
      if ( (v17 & 4) != 0 )
        goto LABEL_13;
LABEL_10:
      result &= ~4uLL;
      *(_QWORD *)(a2 + 56) = result;
      return result;
    }
  }
  v17 = *(_QWORD *)(a2 + 56);
  result = 0;
  if ( (v17 & 4) == 0 )
    goto LABEL_10;
LABEL_13:
  *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF8LL) + 32) = result;
  return result;
}
