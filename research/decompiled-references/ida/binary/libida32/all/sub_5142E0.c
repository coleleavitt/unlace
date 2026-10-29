__int64 __fastcall sub_5142E0(__int64 a1, __int64 a2, unsigned int a3)
{
  char aflags; // bp
  __int64 v4; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  aflags = get_aflags(a3);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 2;
  if ( v4 )
    v5 = v4-- + 1;
  v6 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < v5 )
  {
    v12 = qvector_reserve(a1, v6, v5, 1);
    *(_QWORD *)a1 = v12;
    v6 = v12;
  }
  *(_QWORD *)(a1 + 8) = v5;
  *(_BYTE *)(v6 + v4) = (aflags & 4) == 0 ? 46 : 80;
  *(_BYTE *)(*(_QWORD *)a1 + v4 + 1) = 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 2;
  v9 = (aflags & 8) == 0 ? 46 : 87;
  if ( v7 )
    v8 = v7-- + 1;
  v10 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < v8 )
  {
    v13 = qvector_reserve(a1, v10, v8, 1);
    *(_QWORD *)a1 = v13;
    v10 = v13;
  }
  *(_QWORD *)(a1 + 8) = v8;
  *(_BYTE *)(v10 + v7) = v9;
  *(_BYTE *)(*(_QWORD *)a1 + v7 + 1) = 0;
  return a1;
}

