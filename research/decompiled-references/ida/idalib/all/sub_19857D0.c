__int64 __fastcall sub_19857D0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r13
  unsigned __int16 *v10; // rsi
  unsigned __int64 v11; // r14
  int v12; // edx
  unsigned __int16 *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r14
  int v19; // r15d
  int v20; // r9d
  int v21; // ebx
  int v22; // eax
  int v24; // eax
  int v25; // [rsp+4h] [rbp-44h]

  v6 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
  if ( v6 == 1 )
    return 1;
  v7 = *(unsigned __int16 **)(a2 + 32);
  v8 = v6;
  if ( v7 )
  {
    v9 = sub_190CCA0(a1, v7, a3, a4);
    if ( v9 == 1 )
      return 1;
  }
  else
  {
    v9 = 0;
  }
  v10 = *(unsigned __int16 **)(a2 + 40);
  if ( v10 )
  {
    v11 = sub_190CCA0(a1, v10, a3, a4);
    if ( v11 != 1 )
      goto LABEL_6;
    return 1;
  }
  v11 = 0;
LABEL_6:
  v12 = *(_DWORD *)(a2 + 16);
  if ( v12 )
  {
    v15 = *(_QWORD *)(a2 + 24);
    v16 = v8 & 0xFFFFFFFFFFFFFFFELL;
    v18 = v11 & 0xFFFFFFFFFFFFFFFELL;
    v17 = v9 & 0xFFFFFFFFFFFFFFFELL;
    if ( v15 != v16 )
    {
      v19 = *(_DWORD *)(a2 + 64);
LABEL_15:
      v24 = sub_EEC140(v15);
      return sub_1AA4090(*(_QWORD *)(*a1 + 744), v16, v24, v17, *(_DWORD *)(a2 + 56), v18, v19);
    }
    goto LABEL_17;
  }
  v13 = *(unsigned __int16 **)(a2 + 48);
  if ( !v13 )
  {
    v15 = *(_QWORD *)(a2 + 24);
    v16 = v8 & 0xFFFFFFFFFFFFFFFELL;
    v18 = v11 & 0xFFFFFFFFFFFFFFFELL;
    v17 = v9 & 0xFFFFFFFFFFFFFFFELL;
    if ( v15 != v16 )
    {
      v19 = *(_DWORD *)(a2 + 64);
      goto LABEL_11;
    }
LABEL_17:
    v14 = 0;
    goto LABEL_18;
  }
  v14 = sub_190CCA0(a1, v13, a3, a4);
  if ( v14 == 1 )
    return 1;
  v15 = *(_QWORD *)(a2 + 24);
  v16 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v17 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v18 = v11 & 0xFFFFFFFFFFFFFFFELL;
  v12 = *(_DWORD *)(a2 + 16);
  v13 = (unsigned __int16 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
  if ( v16 != v15 )
    goto LABEL_10;
LABEL_18:
  if ( *(_QWORD *)(a2 + 32) != v17 || *(_QWORD *)(a2 + 40) != v18 )
  {
    v15 = v16;
    v13 = (unsigned __int16 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_10;
  }
  if ( v12 != 1 )
  {
    v15 = v16;
    v13 = (unsigned __int16 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_QWORD *)(a2 + 48) != (v14 & 0xFFFFFFFFFFFFFFFELL) )
    {
LABEL_10:
      v19 = *(_DWORD *)(a2 + 64);
      if ( !v12 )
      {
LABEL_11:
        v20 = *(_DWORD *)(a2 + 60);
        v21 = *(_DWORD *)(a2 + 56);
        v25 = v20;
        v22 = sub_EEC140(v15);
        return sub_1B176A0(*(_QWORD *)(*a1 + 760), v16, v22, v17, v21, v25, v18, (__int64)v13, v19);
      }
      goto LABEL_15;
    }
  }
  return a2;
}
