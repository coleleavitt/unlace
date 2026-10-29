__int64 __fastcall sub_B8F960(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // r13
  unsigned int *v7; // r12
  unsigned int v8; // ebx
  unsigned int *v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  char v17; // r12
  char v18; // bl
  unsigned int v19; // [rsp+Ch] [rbp-4Ch] BYREF
  char v20[72]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a2 + 12);
  if ( *(_BYTE *)(a2 + 4) )
    v3 = *(_DWORD *)(a2 + 8);
  if ( v3 == -1 )
    return 1;
  v5 = *(_QWORD *)(a1 + 1000);
  v19 = v3;
  v6 = a1 + 960;
  v7 = (unsigned int *)(v5 + 56LL * v3);
  if ( !*((_BYTE *)v7 + 52) )
  {
    v13 = *(_DWORD *)(a1 + 1088);
    v14 = *v7;
    *((_BYTE *)v7 + 52) = 1;
    v15 = *(_QWORD *)(a1 + 984);
    v7[10] = v13;
    *(_DWORD *)(a1 + 1088) = v13 + 1;
    v16 = v7[1];
    *(_DWORD *)(a1 + 1092) = v3;
    sub_3EBB80((__int64)v20, 32 * v16 + v15, v15 + 32 * v14);
    if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v7 + 2), (__int64)v20) )
    {
      sub_25A130(v20);
      v17 = sub_B8E480(v6, v3);
      sub_B76360((unsigned int **)(a1 + 1096), &v19);
      if ( !v17 )
        goto LABEL_12;
      v5 = *(_QWORD *)(a1 + 1000);
    }
    else
    {
      sub_25A130(v20);
      sub_B76360((unsigned int **)(a1 + 1096), &v19);
      v5 = *(_QWORD *)(a1 + 1000);
    }
  }
  v19 = v3 + 1;
  v8 = v3 + 1;
  v9 = (unsigned int *)(v5 + 56LL * v8);
  if ( *((_BYTE *)v9 + 52) )
    return 1;
  v10 = *(_DWORD *)(a1 + 1088);
  *((_BYTE *)v9 + 52) = 1;
  v11 = *(_QWORD *)(a1 + 984);
  v9[10] = v10;
  *(_DWORD *)(a1 + 1092) = v8;
  v12 = *v9;
  *(_DWORD *)(a1 + 1088) = v10 + 1;
  sub_3EBB80((__int64)v20, 32LL * v9[1] + v11, v11 + 32 * v12);
  if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v9 + 2), (__int64)v20) )
  {
    sub_25A130(v20);
    sub_B76360((unsigned int **)(a1 + 1096), &v19);
    return 1;
  }
  sub_25A130(v20);
  v18 = sub_B8E480(v6, v8);
  sub_B76360((unsigned int **)(a1 + 1096), &v19);
  if ( v18 )
    return 1;
LABEL_12:
  sub_B763A0(v6, a1 + 1328);
  sub_B86380(a1, a1 + 1328, a3);
  return 0;
}

