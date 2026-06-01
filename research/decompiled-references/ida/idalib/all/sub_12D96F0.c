__int64 __fastcall sub_12D96F0(__int64 a1, int a2, unsigned __int64 a3)
{
  _DWORD *v3; // r14
  unsigned __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ecx
  _DWORD *v10; // rax
  bool v11; // zf
  unsigned int v12; // edx
  bool v13; // cl
  __int64 v15; // r14
  __int64 v16; // r15
  int v17; // edi
  unsigned int v18; // eax
  int *v19; // rsi
  unsigned __int64 v20; // r14
  int *v21; // rdx
  char *v22; // rax
  __int64 v23; // rdx
  char *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdx
  char *v27; // rdx
  char *v28; // r9
  __int64 v29; // rcx
  int v30; // edx
  int v31; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v32; // [rsp+10h] [rbp-58h] BYREF
  __int64 v33; // [rsp+18h] [rbp-50h]
  __m128 v34[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (_DWORD *)(a1 + 32);
  v4 = HIDWORD(a3);
  v5 = a3;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
  {
    v8 = a1 + 32;
    do
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v7 + 32);
        if ( (int)a3 < v9 || *(_DWORD *)(v7 + 36) > HIDWORD(a3) && (_DWORD)a3 == v9 )
          break;
        v7 = *(_QWORD *)(v7 + 24);
        if ( !v7 )
          goto LABEL_8;
      }
      v8 = v7;
      v7 = *(_QWORD *)(v7 + 16);
    }
    while ( v7 );
  }
  else
  {
    v8 = a1 + 32;
  }
LABEL_8:
  if ( *(_QWORD *)(a1 + 48) == v8
    || (v10 = (_DWORD *)std::_Rb_tree_decrement(v8), v11 = v5 == v10[8], (signed int)v5 < v10[8])
    || (v12 = v10[9], v13 = v5 == v10[8], LOBYTE(v5) = v13 && v12 > (unsigned int)v4, v11 && v12 > (unsigned int)v4)
    || v12 + v10[14] <= (unsigned int)v4
    || !v13
    || v3 == v10
    || v12 == (_DWORD)v4 )
  {
    v5 = sub_1020490(*(_QWORD *)a1, a2, nullptr);
    if ( !(_BYTE)v5 )
      return 1;
    v31 = 0;
    v33 = 0;
    sub_12D9370(a1, a2, &v31, (__int64)&v32);
    v15 = *(unsigned int *)(a1 + 88);
    v16 = *(_QWORD *)(a1 + 72);
    if ( (_DWORD)v15 )
    {
      v34[0].m128_i32[0] = v31;
      v17 = v15 - 1;
      v18 = (v15 - 1) & sub_101AC30(v34);
      v19 = (int *)(v16 + 56LL * v18);
      if ( v31 == *v19 )
      {
LABEL_20:
        sub_12D8750(v34, v19, (int *)(*(_QWORD *)(a1 + 72) + 56LL * *(unsigned int *)(a1 + 88)), a1 + 72, 1);
        v20 = v34[0].m128_u64[0];
        goto LABEL_21;
      }
      v15 = *(unsigned int *)(a1 + 88);
      if ( *v19 != -1 )
      {
        v30 = 1;
        do
        {
          v18 = v17 & (v30 + v18);
          v19 = (int *)(v16 + 56LL * v18);
          if ( *v19 == v31 )
            goto LABEL_20;
          ++v30;
        }
        while ( *v19 != -1 );
      }
      v16 = *(_QWORD *)(a1 + 72);
    }
    sub_12D8750(v34, (int *)(v16 + 56 * v15), (int *)(v16 + 56 * v15), a1 + 72, 1);
    v20 = v34[0].m128_u64[0];
LABEL_21:
    v21 = (int *)(*(_QWORD *)(a1 + 72) + 56LL * *(unsigned int *)(a1 + 88));
    sub_12D8750(v34, v21, v21, a1 + 72, 1);
    if ( v34[0].m128_u64[0] == v20 )
      return v5;
    v22 = *(char **)(v20 + 8);
    v23 = 16LL * *(unsigned int *)(v20 + 16);
    v24 = &v22[v23];
    v25 = v23 >> 4;
    v26 = v23 >> 6;
    if ( v26 )
    {
      v27 = &v22[64 * v26];
      while ( v32 != *(_QWORD *)v22 || v33 == *((_QWORD *)v22 + 1) )
      {
        v28 = v22 + 16;
        if ( v32 == *((_QWORD *)v22 + 2) && v33 != *((_QWORD *)v22 + 3)
          || (v28 = v22 + 32, v32 == *((_QWORD *)v22 + 4)) && v33 != *((_QWORD *)v22 + 5)
          || (v28 = v22 + 48, v32 == *((_QWORD *)v22 + 6)) && v33 != *((_QWORD *)v22 + 7) )
        {
          v22 = v28;
          goto LABEL_36;
        }
        v22 += 64;
        if ( v22 == v27 )
        {
          v25 = (v24 - v22) >> 4;
          goto LABEL_30;
        }
      }
      goto LABEL_36;
    }
LABEL_30:
    switch ( v25 )
    {
      case 2LL:
        v29 = v32;
        break;
      case 3LL:
        v29 = v32;
        if ( v32 == *(_QWORD *)v22 && v33 != *((_QWORD *)v22 + 1) )
        {
LABEL_36:
          if ( v24 != v22 )
            return 0;
          return v5;
        }
        v22 += 16;
        break;
      case 1LL:
        v29 = v32;
LABEL_34:
        if ( v29 != *(_QWORD *)v22 || v33 == *((_QWORD *)v22 + 1) )
          return v5;
        goto LABEL_36;
      default:
        return v5;
    }
    if ( v29 != *(_QWORD *)v22 || v33 == *((_QWORD *)v22 + 1) )
    {
      v22 += 16;
      goto LABEL_34;
    }
    goto LABEL_36;
  }
  return v5;
}
