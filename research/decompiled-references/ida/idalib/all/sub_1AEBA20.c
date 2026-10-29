__int64 __fastcall sub_1AEBA20(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  _DWORD *v7; // rdi
  _DWORD *v8; // r14
  _DWORD *v9; // rdi
  _DWORD *v10; // r14
  _DWORD *v11; // rdi
  _DWORD *v12; // r14
  _DWORD *v13; // rdi
  _DWORD *v14; // r14
  __int64 result; // rax
  _DWORD *v16; // rdi
  __int64 v17; // r12
  _DWORD *v18; // rdx
  _DWORD *v19; // rdi
  __int64 v20; // r12
  _DWORD *v21; // rdx
  _DWORD *v22; // rdi
  _DWORD *v23; // r12
  bool v24; // zf

  v4 = 0xF0F0F0F0F0F0F0F1LL * ((a2 - a1) >> 3);
  v5 = a1;
  if ( v4 >> 2 <= 0 )
  {
LABEL_11:
    if ( v4 != 2 )
    {
      if ( v4 != 3 )
      {
        if ( v4 != 1 )
          return a2;
LABEL_19:
        v22 = *(_DWORD **)(v5 + 8);
        v23 = &v22[14 * *(unsigned int *)(v5 + 16)];
        v24 = v23 == sub_1AE9410(v22, (__int64)v23, a3);
        result = v5;
        if ( v24 )
          return a2;
        return result;
      }
      v16 = *(_DWORD **)(v5 + 8);
      v17 = (__int64)&v16[14 * *(unsigned int *)(v5 + 16)];
      v18 = sub_1AE9410(v16, v17, a3);
      result = v5;
      if ( (_DWORD *)v17 != v18 )
        return result;
      v5 += 136;
    }
    v19 = *(_DWORD **)(v5 + 8);
    v20 = (__int64)&v19[14 * *(unsigned int *)(v5 + 16)];
    v21 = sub_1AE9410(v19, v20, a3);
    result = v5;
    if ( (_DWORD *)v20 != v21 )
      return result;
    v5 += 136;
    goto LABEL_19;
  }
  v6 = a1 + 544 * (v4 >> 2);
  while ( 1 )
  {
    v13 = *(_DWORD **)(v5 + 8);
    v14 = &v13[14 * *(unsigned int *)(v5 + 16)];
    if ( v14 != sub_1AE9410(v13, (__int64)v14, a3) )
      return v5;
    v7 = *(_DWORD **)(v5 + 144);
    v8 = &v7[14 * *(unsigned int *)(v5 + 152)];
    if ( v8 != sub_1AE9410(v7, (__int64)v8, a3) )
      return v5 + 136;
    v9 = *(_DWORD **)(v5 + 280);
    v10 = &v9[14 * *(unsigned int *)(v5 + 288)];
    if ( v10 != sub_1AE9410(v9, (__int64)v10, a3) )
      return v5 + 272;
    v11 = *(_DWORD **)(v5 + 416);
    v12 = &v11[14 * *(unsigned int *)(v5 + 424)];
    if ( v12 != sub_1AE9410(v11, (__int64)v12, a3) )
      return v5 + 408;
    v5 += 544;
    if ( v6 == v5 )
    {
      v4 = 0xF0F0F0F0F0F0F0F1LL * ((a2 - v5) >> 3);
      goto LABEL_11;
    }
  }
}
