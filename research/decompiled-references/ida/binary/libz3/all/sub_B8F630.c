__int64 __fastcall sub_B8F630(__int64 a1, double a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  bool (__fastcall *v4)(__int64); // rax
  unsigned int v5; // edx
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  unsigned int *v11; // r14
  unsigned int v12; // r12d
  unsigned int *v13; // r14
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdx
  char v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  char v22; // r14
  unsigned int v23; // [rsp+Ch] [rbp-5Ch] BYREF
  char v24[88]; // [rsp+10h] [rbp-58h] BYREF

  result = *(unsigned __int8 *)(a1 + 944);
  if ( (_BYTE)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    result = 0;
    if ( qword_1C7ED78 == *(_QWORD *)(v3 + 8984) )
      result = *(unsigned __int8 *)(v3 + 2416) ^ 1u;
  }
  if ( (_BYTE)result )
  {
    while ( 1 )
    {
      v4 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL);
      if ( v4 == sub_B79DB0 )
        break;
      while ( 1 )
      {
        result = ((__int64 (__fastcall *)(__int64))v4)(a1);
        if ( !(_BYTE)result )
          return result;
        v5 = *(_DWORD *)(a1 + 1368);
        result = *(_QWORD *)(a1 + 1360);
LABEL_9:
        v7 = *(unsigned int *)(result + 4LL * v5);
        *(_DWORD *)(a1 + 1368) = v5 + 1;
        v8 = *(_QWORD *)(a1 + 1352) + 16 * v7;
        if ( *(_BYTE *)(v8 + 4) )
          break;
        v9 = *(_DWORD *)(v8 + 12);
        if ( v9 != -1 )
          goto LABEL_11;
        v4 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL);
        if ( v4 == sub_B79DB0 )
          goto LABEL_6;
      }
      v9 = *(_DWORD *)(v8 + 8);
      if ( v9 == -1 )
        continue;
LABEL_11:
      v10 = *(_QWORD *)(a1 + 1000);
      v23 = v9;
      v11 = (unsigned int *)(v10 + 56LL * v9);
      if ( !*((_BYTE *)v11 + 52) )
      {
        v18 = *(_DWORD *)(a1 + 1088);
        v19 = *v11;
        *((_BYTE *)v11 + 52) = 1;
        v20 = *(_QWORD *)(a1 + 984);
        v11[10] = v18;
        *(_DWORD *)(a1 + 1088) = v18 + 1;
        v21 = v11[1];
        *(_DWORD *)(a1 + 1092) = v9;
        sub_3EBB80((__int64)v24, 32 * v21 + v20, v20 + 32 * v19);
        if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v11 + 2), (__int64)v24) )
        {
          sub_25A130(v24);
          v22 = sub_B8E480(a1 + 960, v9);
          sub_B76360((unsigned int **)(a1 + 1096), &v23);
          if ( !v22 )
            goto LABEL_15;
          v10 = *(_QWORD *)(a1 + 1000);
        }
        else
        {
          sub_25A130(v24);
          sub_B76360((unsigned int **)(a1 + 1096), &v23);
          v10 = *(_QWORD *)(a1 + 1000);
        }
      }
      v23 = v9 + 1;
      v12 = v9 + 1;
      v13 = (unsigned int *)(v10 + 56LL * v12);
      if ( *((_BYTE *)v13 + 52) )
        continue;
      v14 = *(_DWORD *)(a1 + 1088);
      *((_BYTE *)v13 + 52) = 1;
      v15 = *(_QWORD *)(a1 + 984);
      v13[10] = v14;
      *(_DWORD *)(a1 + 1092) = v12;
      v16 = *v13;
      *(_DWORD *)(a1 + 1088) = v14 + 1;
      sub_3EBB80((__int64)v24, 32LL * v13[1] + v15, v15 + 32 * v16);
      if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v13 + 2), (__int64)v24) )
      {
        sub_25A130(v24);
        v17 = sub_B8E480(a1 + 960, v12);
        sub_B76360((unsigned int **)(a1 + 1096), &v23);
        if ( v17 )
          continue;
LABEL_15:
        sub_B763A0(a1 + 960, a1 + 1328);
        return sub_B86380(a1, a1 + 1328, a2);
      }
      sub_25A130(v24);
      sub_B76360((unsigned int **)(a1 + 1096), &v23);
    }
LABEL_6:
    result = *(_QWORD *)(a1 + 1360);
    v5 = *(_DWORD *)(a1 + 1368);
    if ( result )
      v6 = *(_DWORD *)(result - 4);
    else
      v6 = 0;
    if ( v5 != v6 )
      goto LABEL_9;
  }
  return result;
}

