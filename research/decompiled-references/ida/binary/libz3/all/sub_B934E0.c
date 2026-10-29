__int64 __fastcall sub_B934E0(__int64 a1, double a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  bool (__fastcall *v4)(__int64); // rax
  unsigned int v5; // edx
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // rax
  unsigned int *v11; // r12
  __int64 v12; // r15
  unsigned int *v13; // r12
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  char v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  char v21; // r12
  unsigned int v22; // [rsp+Ch] [rbp-6Ch] BYREF
  char v23[104]; // [rsp+10h] [rbp-68h] BYREF

  result = *(unsigned __int8 *)(a1 + 952);
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
      if ( v4 == sub_B79E20 )
        break;
      while ( 1 )
      {
        result = ((__int64 (__fastcall *)(__int64))v4)(a1);
        if ( !(_BYTE)result )
          return result;
        v5 = *(_DWORD *)(a1 + 1376);
        result = *(_QWORD *)(a1 + 1368);
LABEL_9:
        v7 = *(unsigned int *)(result + 4LL * v5);
        *(_DWORD *)(a1 + 1376) = v5 + 1;
        v8 = *(_QWORD *)(a1 + 1360) + 16 * v7;
        if ( *(_BYTE *)(v8 + 4) )
          break;
        v9 = *(_DWORD *)(v8 + 12);
        if ( v9 != -1 )
          goto LABEL_11;
        v4 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL);
        if ( v4 == sub_B79E20 )
          goto LABEL_6;
      }
      v9 = *(_DWORD *)(v8 + 8);
      if ( v9 == -1 )
        continue;
LABEL_11:
      v10 = *(_QWORD *)(a1 + 1008);
      v22 = v9;
      v11 = (unsigned int *)(v10 + ((unsigned __int64)v9 << 6));
      if ( !*((_BYTE *)v11 + 60) )
      {
        v18 = *(_DWORD *)(a1 + 1096);
        v19 = *v11;
        *((_BYTE *)v11 + 60) = 1;
        v11[12] = v18;
        *(_DWORD *)(a1 + 1096) = v18 + 1;
        v20 = *(_QWORD *)(a1 + 992);
        *(_DWORD *)(a1 + 1100) = v9;
        sub_89AC50((__int64)v23, v20 + 40LL * v11[1], v20 + 40 * v19);
        if ( (unsigned __int8)sub_89B840((__int64)(v11 + 2), (__int64)v23) )
        {
          sub_25A130(v23);
          v21 = sub_B916A0((_QWORD *)(a1 + 968), v9);
          sub_B76360((unsigned int **)(a1 + 1104), &v22);
          if ( !v21 )
            goto LABEL_15;
          v10 = *(_QWORD *)(a1 + 1008);
        }
        else
        {
          sub_25A130(v23);
          sub_B76360((unsigned int **)(a1 + 1104), &v22);
          v10 = *(_QWORD *)(a1 + 1008);
        }
      }
      v22 = v9 + 1;
      v12 = v9 + 1;
      v13 = (unsigned int *)(v10 + (v12 << 6));
      if ( *((_BYTE *)v13 + 60) )
        continue;
      v14 = *(_DWORD *)(a1 + 1096);
      v15 = *v13;
      *((_BYTE *)v13 + 60) = 1;
      v13[12] = v14;
      *(_DWORD *)(a1 + 1096) = v14 + 1;
      v16 = *(_QWORD *)(a1 + 992);
      *(_DWORD *)(a1 + 1100) = v12;
      sub_89AC50((__int64)v23, v16 + 40LL * v13[1], v16 + 40 * v15);
      if ( (unsigned __int8)sub_89B840((__int64)(v13 + 2), (__int64)v23) )
      {
        sub_25A130(v23);
        v17 = sub_B916A0((_QWORD *)(a1 + 968), v12);
        sub_B76360((unsigned int **)(a1 + 1104), &v22);
        if ( v17 )
          continue;
LABEL_15:
        sub_B77490(a1 + 968, a1 + 1336);
        return sub_B86E00(a1, a1 + 1336, a2);
      }
      sub_25A130(v23);
      sub_B76360((unsigned int **)(a1 + 1104), &v22);
    }
LABEL_6:
    result = *(_QWORD *)(a1 + 1368);
    v5 = *(_DWORD *)(a1 + 1376);
    if ( result )
      v6 = *(_DWORD *)(result - 4);
    else
      v6 = 0;
    if ( v5 != v6 )
      goto LABEL_9;
  }
  return result;
}

