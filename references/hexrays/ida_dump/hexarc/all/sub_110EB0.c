__int64 __fastcall sub_110EB0(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  int *v9; // r12
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  char v16; // cl
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  _DWORD *v20; // rbp
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  _DWORD *v24; // [rsp+10h] [rbp-48h] BYREF
  __int64 v25; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v26[7]; // [rsp+20h] [rbp-38h] BYREF

  v26[1] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_1196C0(a3 + 12, &v23, 0) )
    return 0;
  v7 = a1[1];
  v24 = (_DWORD *)a1[2];
  v8 = sub_122D80(v7, a3 + 8, &v24, 0);
  v9 = (int *)v8;
  if ( !v8 )
    return 0;
  if ( *(_DWORD *)v8 == 9 && *(_BYTE *)(v8 + 32) == 4 )
    v9 = *(int **)(v8 + 40);
  a1[15] = 0;
  *((_DWORD *)a1 + 32) = 0;
  *((_WORD *)a1 + 66) = 0;
  a1[3] = 0;
  a1[14] = 0;
  *((_OWORD *)a1 + 3) = 0;
  v10 = v9[17];
  v11 = a3[17];
  v12 = 8 * v10;
  if ( v11 < v10 )
    v12 = 8 * v11;
  *((_DWORD *)a1 + 30) = v12;
  v13 = v23;
  v14 = (int)v23;
  *((_DWORD *)a1 + 32) = v23;
  if ( v13 != v14 )
    return 0;
  v15 = (__int64)v24;
  v16 = 0;
  if ( v24 != a3 )
  {
    a1[7] = v24;
    if ( *(_BYTE *)(v15 + 64) == 14 )
    {
      v21 = sub_11EF10(*(_QWORD *)(v15 + 72) + 16LL, *a1, a3 + 8, 0);
      v15 = (__int64)v24;
      v16 = 4 * v21;
    }
  }
  if ( (unsigned __int8)sub_110160(a1, v15, v9, v16) )
  {
    if ( *((_DWORD *)a1 + 32) != *((_DWORD *)a1 + 30) - 1 )
    {
      if ( *a3 != 24 )
        return sub_1100E0((__int64)a1, 1);
      v17 = a1[3];
      if ( v17 )
      {
        if ( *(_DWORD *)(v17 + 36) < *(_DWORD *)(v17 + 68) / 2 )
          return sub_1100E0((__int64)a1, 1);
      }
      if ( a2 && 8 * (*(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 68)) > (int)v23 )
        return sub_1100E0((__int64)a1, 1);
    }
    return 0;
  }
  if ( *v9 == 19 )
  {
    if ( !sub_110CB0(a1, (__int64)v24, (__int64)v9) )
      return 0;
  }
  else
  {
    if ( *v9 != 12 )
      return 0;
    v18 = sub_116220(v9, &v25, 23);
    v19 = v18;
    if ( !v18
      || *(_BYTE *)(v18 + 32) != 4
      || *(_BYTE *)v25 != 4
      || !(unsigned __int8)sub_1196C0(v18 + 48, v26, 0)
      || v26[0] != 1
      || !(unsigned __int8)sub_110160(a1, (__int64)v24, *(int **)(v25 + 8), 0) )
    {
      return 0;
    }
    if ( *a3 == 24 )
    {
      v22 = a1[3];
      if ( (!v22 || *(_DWORD *)(v22 + 36) >= *(_DWORD *)(v22 + 68) / 2)
        && (!a2 || 8 * (*(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 68)) <= (int)v23) )
      {
        return 0;
      }
    }
    v20 = *(_DWORD **)(v19 + 40);
    if ( *v20 != 13
      || !(unsigned __int8)sub_11F4A0(v20 + 12, v25, 0)
      || !(unsigned __int8)sub_1283C0(*a1, a1[1], (_DWORD)v24, (int)v20 + 32, (_DWORD)v24, (int)a1 + 32, 1) )
    {
      return 0;
    }
  }
  return sub_1105A0((__int64)a1);
}
