__int64 __fastcall sub_B93800(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  _QWORD *v6; // r13
  unsigned int *v7; // r12
  __int64 v8; // rbx
  unsigned int *v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  char v16; // r12
  char v17; // bl
  unsigned int v18; // [rsp+Ch] [rbp-5Ch] BYREF
  char v19[88]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_DWORD *)(a2 + 12);
  if ( *(_BYTE *)(a2 + 4) )
    v3 = *(_DWORD *)(a2 + 8);
  if ( v3 == -1 )
    return 1;
  v5 = *(_QWORD *)(a1 + 1008);
  v18 = v3;
  v6 = (_QWORD *)(a1 + 968);
  v7 = (unsigned int *)(v5 + ((unsigned __int64)v3 << 6));
  if ( !*((_BYTE *)v7 + 60) )
  {
    v13 = *(_DWORD *)(a1 + 1096);
    v14 = *v7;
    *((_BYTE *)v7 + 60) = 1;
    v7[12] = v13;
    *(_DWORD *)(a1 + 1096) = v13 + 1;
    v15 = *(_QWORD *)(a1 + 992);
    *(_DWORD *)(a1 + 1100) = v3;
    sub_89AC50((__int64)v19, v15 + 40LL * v7[1], v15 + 40 * v14);
    if ( (unsigned __int8)sub_89B840((__int64)(v7 + 2), (__int64)v19) )
    {
      sub_25A130(v19);
      v16 = sub_B916A0(v6, v3);
      sub_B76360((unsigned int **)(a1 + 1104), &v18);
      if ( !v16 )
        goto LABEL_12;
      v5 = *(_QWORD *)(a1 + 1008);
    }
    else
    {
      sub_25A130(v19);
      sub_B76360((unsigned int **)(a1 + 1104), &v18);
      v5 = *(_QWORD *)(a1 + 1008);
    }
  }
  v18 = v3 + 1;
  v8 = v3 + 1;
  v9 = (unsigned int *)(v5 + (v8 << 6));
  if ( *((_BYTE *)v9 + 60) )
    return 1;
  v10 = *(_DWORD *)(a1 + 1096);
  v11 = *v9;
  *((_BYTE *)v9 + 60) = 1;
  v9[12] = v10;
  *(_DWORD *)(a1 + 1096) = v10 + 1;
  v12 = *(_QWORD *)(a1 + 992);
  *(_DWORD *)(a1 + 1100) = v8;
  sub_89AC50((__int64)v19, v12 + 40LL * v9[1], v12 + 40 * v11);
  if ( !(unsigned __int8)sub_89B840((__int64)(v9 + 2), (__int64)v19) )
  {
    sub_25A130(v19);
    sub_B76360((unsigned int **)(a1 + 1104), &v18);
    return 1;
  }
  sub_25A130(v19);
  v17 = sub_B916A0(v6, v8);
  sub_B76360((unsigned int **)(a1 + 1104), &v18);
  if ( v17 )
    return 1;
LABEL_12:
  sub_B77490((__int64)v6, a1 + 1336);
  sub_B86E00(a1, a1 + 1336, a3);
  return 0;
}

