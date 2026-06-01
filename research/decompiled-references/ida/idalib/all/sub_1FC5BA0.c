__int64 __fastcall sub_1FC5BA0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  int v15; // eax
  int v16; // edx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+8h] [rbp-40h]

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 32));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 36));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 24), v4, v5, v6, v7);
  result = *(unsigned int *)(a2 + 32);
  if ( (_DWORD)result )
  {
    v9 = a2 + 40;
    v10 = a2 + 16LL * (unsigned int)(result - 1) + 56;
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(a1 + 24);
        v12 = *(unsigned int *)(v11 + 8);
        v13 = *(_QWORD *)(v9 + 8) & 3LL;
        if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 12) )
        {
          v24 = *(_QWORD *)(v9 + 8) & 3LL;
          sub_2237220(*(_QWORD *)(a1 + 24), v11 + 16, v12 + 1, 8);
          v12 = *(unsigned int *)(v11 + 8);
          v13 = v24;
        }
        *(_QWORD *)(*(_QWORD *)v11 + 8 * v12) = v13;
        ++*(_DWORD *)(v11 + 8);
        sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)v9, *(_QWORD *)(a1 + 24));
        sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v9 + 4), *(_QWORD *)(a1 + 24));
        v14 = *(_QWORD *)(v9 + 8);
        v15 = v14 & 3;
        if ( v15 != 2 )
          break;
        v20 = sub_BF9AD0(v9);
        result = sub_1F80F20(*(_QWORD *)(a1 + 16), v20, *(_QWORD *)(a1 + 24), v21, v22, v23);
LABEL_5:
        v9 += 16;
        if ( v10 == v9 )
          goto LABEL_11;
      }
      if ( v15 != 3 )
      {
        if ( v15 == 1 )
          result = sub_1F92A90(*(_QWORD *)(a1 + 16), v14 & 0xFFFFFFFFFFFFFFFCLL, *(_QWORD *)(a1 + 24));
        else
          result = sub_9B9C90(*(_QWORD *)(a1 + 24), (unsigned int)(v14 >> 2));
        goto LABEL_5;
      }
      v9 += 16;
      result = sub_1F9DE70((__int64 *)(a1 + 8), v14 & 0xFFFFFFFFFFFFFFFCLL);
    }
    while ( v10 != v9 );
  }
LABEL_11:
  v16 = *(_DWORD *)(a2 + 36);
  if ( v16 )
  {
    result = *(unsigned int *)(a1 + 40);
    v17 = 8LL * (unsigned int)(v16 - 1) + 8;
    v18 = 0;
    do
    {
      v19 = *(_QWORD *)(v18 + a2 + 16LL * *(unsigned int *)(a2 + 32) + 40);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, result + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v19;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v19;
      }
      v18 += 8;
      result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = result;
    }
    while ( v18 != v17 );
  }
  *(_DWORD *)(a1 + 224) = 182;
  return result;
}
