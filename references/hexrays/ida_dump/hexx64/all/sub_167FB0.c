__int64 __fastcall sub_167FB0(const __m128i *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  __int64 v9; // r12
  int v10; // r14d
  _DWORD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r10
  __int64 v14; // rbx
  _BOOL4 v15; // eax
  _DWORD *v16; // rdx
  int v17; // edx
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  unsigned int v22; // [rsp+1Ch] [rbp-3Ch]

  if ( (*(_BYTE *)(a3 + 6) & 2) != 0 )
    return 0;
  v19 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( (unsigned __int8)sub_1205A0((_BYTE *)a3, v19, 0, a4, a5, a6) )
    return 0;
  v9 = a1[3].m128i_i64[1];
  v10 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 != 42 || a2 != 42 )
  {
    v12 = sub_32E9E0(a2);
    v13 = a3 + 48;
    v22 = v12;
    v14 = a3 + 32;
    v15 = (unsigned int)(v10 - 43) <= 1;
    v21 = 2 * v15;
    v20 = v13;
    if ( (unsigned int)sub_130580(v19, a1, v9, (_DWORD *)v9, a5, a4, v14, v13, 2 * (unsigned __int8)v15) )
    {
      if ( v10 != a2 )
        return 2 * (unsigned int)(v10 == v22);
    }
    else
    {
      if ( v21 == 2 || !(unsigned int)sub_130580(v19, a1, v9, (_DWORD *)v9, a5, a4, v20, v14, 0) )
        return 0;
      if ( v10 != (unsigned int)sub_32EA00(a2) )
        return 2 * (unsigned int)(v10 == (unsigned int)sub_32EA00(v22));
    }
    return 1;
  }
  if ( (unsigned int)sub_130720(a1, v9, v9 + 32, a5, a4, a3 + 32, 0) )
    return 1;
  if ( *(_BYTE *)(v9 + 32) != 4
    || (v16 = *(_DWORD **)(v9 + 40), *v16 != 6)
    || (v17 = sub_130720(a1, v9, (__int64)(v16 + 8), a5, a4, a3 + 32, 0), result = 2, !v17) )
  {
    if ( *(_BYTE *)(a3 + 32) == 4 )
    {
      v11 = *(_DWORD **)(a3 + 40);
      if ( *v11 == 6 )
        return 2 * (unsigned int)((unsigned int)sub_130720(a1, v9, v9 + 32, a5, a4, (__int64)(v11 + 8), 0) != 0);
    }
    return 0;
  }
  return result;
}
