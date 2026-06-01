__int64 __fastcall sub_190CAD0(__int64 *a1, unsigned __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r12
  unsigned __int64 v6; // r13
  _WORD *v7; // r14
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  _QWORD v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = a2;
  if ( *(char *)(a2 + 2) >= 0 )
  {
    v5 = *a1;
    sub_18C74E0(v5, 0, *(_QWORD *)(*(_QWORD *)(v5 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 520), 4);
    v6 = *(_QWORD *)(a2 + 16);
    v19[0] = 0;
    if ( (*(_WORD *)v6 & 0x1FF) == 0x14 && (v7 = *(_WORD **)(v6 + 24), (*v7 & 0x1FF) == 0x45) )
    {
      v8 = *(_QWORD *)(v6 + 24);
      v9 = sub_1990C90(a1, v8, 0, v19);
      if ( v9 > 1 )
      {
        v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
        v9 = v6;
        if ( v7 != (_WORD *)v10 )
        {
          v8 = *(unsigned int *)(v6 + 16);
          v9 = sub_190C990(*a1, v8, *(_DWORD *)(v6 + 20), v10, a3, a4);
        }
      }
    }
    else
    {
      v8 = v6;
      v9 = sub_190CCA0(a1, v6);
    }
    v11 = v19[0];
    if ( v19[0] )
    {
      v12 = sub_EEC8C0(v4, v8, a3);
      v4 = sub_1944A80(*a1, v11, *(unsigned int *)(v4 + 24), (*(_BYTE *)(v4 + 2) >> 3) & 0xF, v12);
    }
    else if ( v9 == 1 )
    {
      v4 = 1;
    }
    else
    {
      v18 = v9 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_QWORD *)(v4 + 16) != v18 )
        v4 = sub_1934340(*a1, v18, *(unsigned int *)(v4 + 24), (*(_BYTE *)(v4 + 2) >> 3) & 0xF);
    }
    sub_190D5E0(v5);
    return v4;
  }
  v14 = *(_QWORD *)(a2 + 16);
  v15 = sub_1988430(a1, v14);
  v16 = v15;
  if ( !v15 )
    return 1;
  if ( v15 == v14 )
    return v4;
  v17 = sub_EEC8C0(a2, v14, a3);
  return sub_1944A80(*a1, v16, *(unsigned int *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF, v17);
}
