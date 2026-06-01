__int64 __fastcall sub_B90220(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // rcx
  unsigned int *v5; // rbp
  unsigned int v6; // edx
  unsigned int v7; // ebx
  unsigned int *v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int8 v15; // [rsp+1h] [rbp-59h]
  unsigned __int8 v16; // [rsp+1h] [rbp-59h]
  unsigned int v17; // [rsp+Eh] [rbp-4Ch] BYREF
  char v18[72]; // [rsp+12h] [rbp-48h] BYREF

  if ( a2 == -1 )
    return 1;
  v3 = a1 + 960;
  v4 = *(_QWORD *)(a1 + 1000);
  v17 = a2;
  v5 = (unsigned int *)(v4 + 56LL * a2);
  if ( !*((_BYTE *)v5 + 52) )
  {
    v12 = *(_DWORD *)(a1 + 1088);
    v13 = *v5;
    *((_BYTE *)v5 + 52) = 1;
    v5[10] = v12;
    *(_DWORD *)(a1 + 1088) = v12 + 1;
    v14 = v5[1];
    *(_DWORD *)(a1 + 1092) = a2;
    sub_3EBB80((__int64)v18, 32 * v14 + *(_QWORD *)(a1 + 984), *(_QWORD *)(a1 + 984) + 32 * v13);
    if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v5 + 2), (__int64)v18) )
    {
      sub_25A130(v18);
      v15 = sub_B8E480(v3, a2);
      sub_B76360((unsigned int **)(a1 + 1096), &v17);
      result = v15;
      if ( !v15 )
        return result;
      v4 = *(_QWORD *)(a1 + 1000);
    }
    else
    {
      sub_25A130(v18);
      sub_B76360((unsigned int **)(a1 + 1096), &v17);
      v4 = *(_QWORD *)(a1 + 1000);
    }
  }
  v17 = a2 + 1;
  v7 = a2 + 1;
  v6 = a2 + 1;
  v8 = (unsigned int *)(v4 + 56LL * (a2 + 1));
  if ( !*((_BYTE *)v8 + 52) )
  {
    v9 = *(_DWORD *)(a1 + 1088);
    *((_BYTE *)v8 + 52) = 1;
    v10 = *(_QWORD *)(a1 + 984);
    v8[10] = v9;
    *(_DWORD *)(a1 + 1092) = v6;
    v11 = *v8;
    *(_DWORD *)(a1 + 1088) = v9 + 1;
    sub_3EBB80((__int64)v18, 32LL * v8[1] + v10, v10 + 32 * v11);
    if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v8 + 2), (__int64)v18) )
    {
      sub_25A130(v18);
      v16 = sub_B8E480(v3, v7);
      sub_B76360((unsigned int **)(a1 + 1096), &v17);
      return v16;
    }
    sub_25A130(v18);
    sub_B76360((unsigned int **)(a1 + 1096), &v17);
  }
  return 1;
}

