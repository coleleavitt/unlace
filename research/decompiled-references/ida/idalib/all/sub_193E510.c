__int64 __fastcall sub_193E510(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  int v7; // ebp
  __int64 v8; // rax
  int v9; // r12d
  unsigned __int64 v10; // rsi
  __int64 v11; // r13
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  int v14; // r14d
  int v15; // eax
  int v17; // eax
  int v18; // [rsp+0h] [rbp-48h]
  int v19; // [rsp+0h] [rbp-48h]
  int v20; // [rsp+4h] [rbp-44h]
  __int64 v21; // [rsp+8h] [rbp-40h]

  v5 = sub_1933BC0(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( v5 == 1 )
    return 1;
  v6 = *(_QWORD *)(a2 + 32);
  v7 = v5;
  if ( v6 )
  {
    v8 = sub_1933BC0(a1, v6, a3, a4);
    v9 = v8;
    if ( v8 == 1 )
      return 1;
  }
  else
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 )
  {
    v11 = sub_1933BC0(a1, v10, a3, a4);
    if ( v11 == 1 )
      return 1;
  }
  else
  {
    v11 = 0;
  }
  if ( !*(_DWORD *)(a2 + 16) )
  {
    v12 = *(_QWORD *)(a2 + 48);
    if ( !v12 )
    {
      v14 = *(_DWORD *)(a2 + 64);
      v11 &= ~1uLL;
      goto LABEL_10;
    }
    v13 = sub_1933BC0(a1, *(_QWORD *)(a2 + 48), a3, a4);
    if ( v13 != 1 )
    {
      v14 = *(_DWORD *)(a2 + 64);
      v11 &= ~1uLL;
      v12 = v13 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(a2 + 16) )
      {
LABEL_10:
        v21 = v12;
        v20 = *(_DWORD *)(a2 + 60);
        v18 = *(_DWORD *)(a2 + 56);
        v15 = sub_EEC140(*(_QWORD *)(a2 + 24));
        return sub_1B176A0(*(_QWORD *)(*a1 + 760), v7 & 0xFFFFFFFE, v15, v9 & 0xFFFFFFFE, v18, v20, v11, v21, v14);
      }
      goto LABEL_13;
    }
    return 1;
  }
  v14 = *(_DWORD *)(a2 + 64);
  LODWORD(v11) = v11 & 0xFFFFFFFE;
LABEL_13:
  v19 = *(_DWORD *)(a2 + 56);
  v17 = sub_EEC140(*(_QWORD *)(a2 + 24));
  return sub_1AA4090(*(_QWORD *)(*a1 + 744), v7 & 0xFFFFFFFE, v17, v9 & 0xFFFFFFFE, v19, v11, v14);
}
