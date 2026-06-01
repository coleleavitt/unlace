__int64 __fastcall sub_B93A30(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *v3; // r13
  __int64 v4; // rax
  unsigned int *v5; // rbp
  __int64 v6; // rbx
  unsigned int *v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int8 v14; // [rsp+1h] [rbp-69h]
  unsigned __int8 v15; // [rsp+1h] [rbp-69h]
  unsigned int v16; // [rsp+Eh] [rbp-5Ch] BYREF
  char v17[88]; // [rsp+12h] [rbp-58h] BYREF

  if ( a2 == -1 )
    return 1;
  v3 = (_QWORD *)(a1 + 968);
  v4 = *(_QWORD *)(a1 + 1008);
  v16 = a2;
  v5 = (unsigned int *)(v4 + ((unsigned __int64)a2 << 6));
  if ( !*((_BYTE *)v5 + 60) )
  {
    v11 = *(_DWORD *)(a1 + 1096);
    v12 = *v5;
    *((_BYTE *)v5 + 60) = 1;
    v5[12] = v11;
    *(_DWORD *)(a1 + 1096) = v11 + 1;
    v13 = *(_QWORD *)(a1 + 992);
    *(_DWORD *)(a1 + 1100) = a2;
    sub_89AC50((__int64)v17, v13 + 40LL * v5[1], v13 + 40 * v12);
    if ( (unsigned __int8)sub_89B840((__int64)(v5 + 2), (__int64)v17) )
    {
      sub_25A130(v17);
      v14 = sub_B916A0(v3, a2);
      sub_B76360((unsigned int **)(a1 + 1104), &v16);
      result = v14;
      if ( !v14 )
        return result;
      v4 = *(_QWORD *)(a1 + 1008);
    }
    else
    {
      sub_25A130(v17);
      sub_B76360((unsigned int **)(a1 + 1104), &v16);
      v4 = *(_QWORD *)(a1 + 1008);
    }
  }
  v16 = a2 + 1;
  v6 = a2 + 1;
  v7 = (unsigned int *)(v4 + (v6 << 6));
  if ( !*((_BYTE *)v7 + 60) )
  {
    v8 = *(_DWORD *)(a1 + 1096);
    v9 = *v7;
    *((_BYTE *)v7 + 60) = 1;
    v7[12] = v8;
    *(_DWORD *)(a1 + 1096) = v8 + 1;
    v10 = *(_QWORD *)(a1 + 992);
    *(_DWORD *)(a1 + 1100) = v6;
    sub_89AC50((__int64)v17, v10 + 40LL * v7[1], v10 + 40 * v9);
    if ( (unsigned __int8)sub_89B840((__int64)(v7 + 2), (__int64)v17) )
    {
      sub_25A130(v17);
      v15 = sub_B916A0(v3, v6);
      sub_B76360((unsigned int **)(a1 + 1104), &v16);
      return v15;
    }
    sub_25A130(v17);
    sub_B76360((unsigned int **)(a1 + 1104), &v16);
  }
  return 1;
}

