__int64 __fastcall sub_183FB80(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  signed __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // r15
  __int64 v21; // r14
  int v22; // eax
  _QWORD *v23; // rbp
  _QWORD *v24; // rdi
  int v25; // ebp
  int v26; // eax
  __int64 v27; // rax
  _QWORD *v28; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  char v30; // [rsp+17h] [rbp-41h] BYREF
  _DWORD v31[16]; // [rsp+18h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a1 + 3692) <= *(_DWORD *)(a1 + 3688) )
  {
    v28 = (_QWORD *)(a1 + 3696);
    v16 = sub_2237400(a1 + 3680, a1 + 3696, 0, 56, v31);
    v29 = v16;
    v17 = v16 + 56LL * *(unsigned int *)(a1 + 3688);
    *(_OWORD *)v17 = 0;
    *(_OWORD *)(v17 + 16) = 0;
    *(_OWORD *)(v17 + 32) = 0;
    *(_QWORD *)(v17 + 48) = 0;
    *(_QWORD *)(v17 + 16) = 0x400000000LL;
    v18 = *(unsigned int *)(a1 + 3688);
    *(_QWORD *)(v17 + 8) = v17 + 24;
    v19 = *(_QWORD **)(a1 + 3680);
    v20 = &v19[7 * v18];
    if ( v19 != v20 )
    {
      v21 = *(_QWORD *)(a1 + 3680);
      do
      {
        *(_DWORD *)v16 = *(_DWORD *)v21;
        v22 = *(_DWORD *)(v21 + 4);
        *(_DWORD *)(v16 + 16) = 0;
        *(_DWORD *)(v16 + 4) = v22;
        *(_QWORD *)(v16 + 8) = v16 + 24;
        *(_DWORD *)(v16 + 20) = 4;
        if ( *(_DWORD *)(v21 + 16) )
          sub_AEA1F0((char ***)(v16 + 8), (char ***)(v21 + 8));
        v21 += 56;
        v16 += 56;
      }
      while ( v20 != (_QWORD *)v21 );
      v23 = *(_QWORD **)(a1 + 3680);
      v20 = &v23[7 * *(unsigned int *)(a1 + 3688)];
      if ( v20 != v23 )
      {
        do
        {
          while ( 1 )
          {
            v20 -= 7;
            v24 = (_QWORD *)v20[1];
            if ( v24 == v20 + 3 )
              break;
            free(v24);
            if ( v20 == v23 )
              goto LABEL_20;
          }
        }
        while ( v20 != v23 );
LABEL_20:
        v20 = *(_QWORD **)(a1 + 3680);
      }
    }
    v25 = v31[0];
    if ( v28 != v20 )
      free(v20);
    v26 = *(_DWORD *)(a1 + 3688);
    *(_DWORD *)(a1 + 3692) = v25;
    v27 = (unsigned int)(v26 + 1);
    *(_QWORD *)(a1 + 3680) = v29;
    *(_DWORD *)(a1 + 3688) = v27;
    v7 = v29 + 56 * v27 - 56;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 3680) + 56LL * *(unsigned int *)(a1 + 3688);
    *(_OWORD *)v5 = 0;
    *(_OWORD *)(v5 + 16) = 0;
    *(_QWORD *)(v5 + 8) = v5 + 24;
    *(_OWORD *)(v5 + 32) = 0;
    *(_QWORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 16) = 0x400000000LL;
    v6 = (unsigned int)(*(_DWORD *)(a1 + 3688) + 1);
    *(_DWORD *)(a1 + 3688) = v6;
    v7 = *(_QWORD *)(a1 + 3680) + 56 * v6 - 56;
  }
  result = *(_QWORD *)(a2 + 832);
  v9 = *(_QWORD *)(a2 + 840);
  if ( v9
    && (result = sub_1CD3B10(
                   a1,
                   *(_DWORD *)(a2 + 88),
                   *(_DWORD *)(a2 + 80),
                   (int)a2 + 8,
                   0,
                   0,
                   result,
                   v9,
                   (__int64)&v30,
                   (__int64)v31,
                   1),
        (v10 = result) != 0)
    && (*(_DWORD *)(result + 20) & 0x1FFFFFFF) != 0 )
  {
    v11 = sub_BBD7B0(result);
    v12 = *(unsigned int *)(v7 + 20);
    *(_DWORD *)(v7 + 4) = v11;
    v13 = *(unsigned int *)(v7 + 16);
    v14 = 8LL * (*(_DWORD *)(v10 + 20) & 0x1FFFFFFF);
    v15 = v14 >> 3;
    if ( v13 + (v14 >> 3) > v12 )
    {
      sub_2237220(v7 + 8, v7 + 24, v13 + v15, 8);
      v13 = *(unsigned int *)(v7 + 16);
    }
    if ( v10 + 24 != v10 + v14 + 24 )
    {
      memcpy((void *)(*(_QWORD *)(v7 + 8) + 8 * v13), (const void *)(v10 + 24), v14);
      LODWORD(v13) = *(_DWORD *)(v7 + 16);
    }
    *(_DWORD *)(v7 + 16) = v15 + v13;
    result = *(_DWORD *)(v10 + 20) & 0x1FFFFFFF;
    *(_DWORD *)v7 = result;
  }
  else
  {
    *(_DWORD *)(v7 + 4) = a3;
    *(_DWORD *)v7 = 0;
  }
  return result;
}
