void __fastcall sub_3E0DD0(__int64 a1, int a2, int a3, int a4, unsigned int *a5)
{
  unsigned int v5; // eax
  __int64 *v6; // rsi
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax

  if ( a2 != 6 )
    return;
  v5 = *a5;
  if ( *a5 > 0x2F )
  {
    v13 = *((__int64 **)a5 + 1);
    v14 = v13 + 1;
    *((_QWORD *)a5 + 1) = v13 + 1;
    v7 = *v13;
LABEL_12:
    v15 = v14 + 1;
LABEL_13:
    *((_QWORD *)a5 + 1) = v15 + 1;
    goto LABEL_6;
  }
  v6 = (__int64 *)(*((_QWORD *)a5 + 2) + v5);
  *a5 = v5 + 8;
  v7 = *v6;
  if ( v5 + 8 > 0x2F )
  {
    v14 = *((_QWORD **)a5 + 1);
    goto LABEL_12;
  }
  *a5 = v5 + 16;
  if ( v5 + 16 > 0x2F )
  {
    v15 = *((_QWORD **)a5 + 1);
    goto LABEL_13;
  }
  *a5 = v5 + 24;
LABEL_6:
  v8 = *(_QWORD **)(a1 + 8LL * a3 + 56);
  v9 = *(_QWORD *)(a1 + 8LL * a4 + 56);
  v10 = v8[8];
  if ( v10 )
  {
    if ( v9 != v10 )
      sub_3E0B10();
  }
  else
  {
    v8[8] = v9;
  }
  v11 = v8[6];
  v12 = v8[5];
  if ( v8[7] < (unsigned __int64)(v11 + 1) )
  {
    v16 = qvector_reserve(v8 + 5, v12, v11 + 1, 8);
    v8[5] = v16;
    v12 = v16;
    v11 = v8[6];
  }
  *(_QWORD *)(v12 + 8 * v11) = v7;
  ++v8[6];
}
