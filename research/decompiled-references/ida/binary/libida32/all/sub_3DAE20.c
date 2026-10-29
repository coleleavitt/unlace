void __fastcall sub_3DAE20(__int64 a1, int a2, int a3, int a4, unsigned int *a5)
{
  unsigned int v5; // eax
  int *v6; // rsi
  int v7; // ebp
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  int *v13; // rsi
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // rax

  if ( a2 != 6 )
    return;
  v5 = *a5;
  if ( *a5 > 0x2F )
  {
    v13 = *((int **)a5 + 1);
    v14 = v13 + 2;
    *((_QWORD *)a5 + 1) = v13 + 2;
    v7 = *v13;
LABEL_12:
    v15 = v14 + 2;
LABEL_13:
    *((_QWORD *)a5 + 1) = v15 + 2;
    goto LABEL_6;
  }
  v6 = (int *)(*((_QWORD *)a5 + 2) + v5);
  *a5 = v5 + 8;
  v7 = *v6;
  if ( v5 + 8 > 0x2F )
  {
    v14 = *((_DWORD **)a5 + 1);
    goto LABEL_12;
  }
  *a5 = v5 + 16;
  if ( v5 + 16 > 0x2F )
  {
    v15 = *((_DWORD **)a5 + 1);
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
      sub_3DAC40();
  }
  else
  {
    v8[8] = v9;
  }
  v11 = v8[6];
  v12 = v8[5];
  if ( v8[7] < (unsigned __int64)(v11 + 1) )
  {
    v16 = qvector_reserve(v8 + 5, v12, v11 + 1, 4);
    v8[5] = v16;
    v12 = v16;
    v11 = v8[6];
  }
  *(_DWORD *)(v12 + 4 * v11) = v7;
  ++v8[6];
}

