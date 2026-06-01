__int64 __fastcall sub_17672A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int16 *v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int16 *v7; // rsi
  __int64 v8; // r15
  int v9; // edx
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbp
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdi
  int v18; // ecx
  int v19; // r9d
  int v20; // ebx
  int v21; // eax
  int v23; // ebx
  int v24; // eax
  int v25; // [rsp+8h] [rbp-40h]
  int v26; // [rsp+8h] [rbp-40h]
  int v27; // [rsp+Ch] [rbp-3Ch]

  v3 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  if ( v3 == 1 )
    return 1;
  v4 = *(unsigned __int16 **)(a2 + 32);
  v5 = v3;
  if ( v4 )
  {
    v6 = sub_175B800(a1, v4);
    if ( v6 == 1 )
      return 1;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(unsigned __int16 **)(a2 + 40);
  if ( v7 )
  {
    v8 = sub_175B800(a1, v7);
    if ( v8 != 1 )
      goto LABEL_6;
    return 1;
  }
  v8 = 0;
LABEL_6:
  v9 = *(_DWORD *)(a2 + 16);
  if ( v9 )
  {
    v13 = *a1;
    v16 = v8 & 0xFFFFFFFFFFFFFFFELL;
    v14 = v5 & 0xFFFFFFFFFFFFFFFELL;
    v15 = v6 & 0xFFFFFFFFFFFFFFFELL;
    v17 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v13 + 12632) )
    {
      v18 = *(_DWORD *)(a2 + 64);
      goto LABEL_17;
    }
    goto LABEL_19;
  }
  v10 = *(_QWORD *)(a2 + 48);
  if ( !v10 )
  {
    v13 = *a1;
    v16 = v8 & 0xFFFFFFFFFFFFFFFELL;
    v14 = v5 & 0xFFFFFFFFFFFFFFFELL;
    v15 = v6 & 0xFFFFFFFFFFFFFFFELL;
    v17 = *(_QWORD *)(a2 + 24);
    v9 = *(_DWORD *)(v13 + 12632);
    if ( v9 )
    {
      v18 = *(_DWORD *)(a2 + 64);
      goto LABEL_13;
    }
LABEL_19:
    v12 = 0;
    goto LABEL_10;
  }
  v11 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 48));
  v12 = v11;
  if ( v11 == 1 )
    return 1;
  v13 = *a1;
  v14 = v5 & 0xFFFFFFFFFFFFFFFELL;
  v15 = v6 & 0xFFFFFFFFFFFFFFFELL;
  v16 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v9 = *(_DWORD *)(a2 + 16);
  v17 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v13 + 12632) )
  {
    v10 = v11 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_12;
  }
LABEL_10:
  if ( v14 != v17 || *(_QWORD *)(a2 + 32) != v15 || *(_QWORD *)(a2 + 40) != v16 )
  {
    v10 = v12 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_12;
  }
  if ( v9 != 1 )
  {
    v10 = v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_QWORD *)(a2 + 48) != v10 )
    {
LABEL_12:
      v18 = *(_DWORD *)(a2 + 64);
      if ( !v9 )
      {
LABEL_13:
        v19 = *(_DWORD *)(a2 + 60);
        v20 = *(_DWORD *)(a2 + 56);
        v27 = v18;
        v25 = v19;
        v21 = sub_EEC140(v17);
        return sub_1B176A0(*(_QWORD *)(v13 + 760), v14, v21, v15, v20, v25, v16, v10, v27);
      }
LABEL_17:
      v26 = v18;
      v23 = *(_DWORD *)(a2 + 56);
      v24 = sub_EEC140(v17);
      return sub_1AA4090(*(_QWORD *)(v13 + 744), v14, v24, v15, v23, v16, v26);
    }
  }
  return a2;
}
