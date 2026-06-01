unsigned int *__fastcall sub_1AEFBB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rdi
  int v18; // esi
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int *result; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int *v24; // rdi
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r10
  __int64 v36; // [rsp+8h] [rbp-40h] BYREF
  __int64 v37[6]; // [rsp+18h] [rbp-30h] BYREF

  v36 = a2;
  v7 = sub_1AEE450(a2);
  v10 = *(unsigned int *)(a1 + 344);
  v36 = v7;
  if ( !(_DWORD)v10
    || (v11 = *(_QWORD *)(a1 + 336) + 6776 * v10 - 6776, *(_QWORD *)(v11 + 6768) != *(_QWORD *)(a1 + 328))
    || (v12 = *(unsigned int *)(v11 + 8), v13 = *(unsigned int *)(a1 + 27504), (unsigned int)v12 <= (unsigned int)v13)
    || (v14 = v12 - v13) == 0 )
  {
    BUG();
  }
  v15 = *(_QWORD *)v11 + 1688 * (v14 - 1);
  if ( (*(_BYTE *)v15 & 1) != 0 )
  {
    v17 = v15 + 8;
    v18 = 7;
  }
  else
  {
    v16 = *(_DWORD *)(v15 + 16);
    v17 = *(_QWORD *)(v15 + 8);
    if ( !v16 )
    {
      v20 = 0;
      goto LABEL_17;
    }
    v18 = v16 - 1;
  }
  v19 = v18 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v20 = v17 + 40LL * v19;
  v8 = *(_QWORD *)v20;
  if ( v7 == *(_QWORD *)v20 )
  {
LABEL_9:
    result = (unsigned int *)(v20 + 8);
    v22 = 2LL * (*(_DWORD *)(v20 + 8) == 52);
    goto LABEL_10;
  }
  v9 = 1;
  v35 = 0;
  if ( v8 != -4096 )
  {
    while ( 1 )
    {
      if ( v8 == -8192 && !v35 )
        v35 = v20;
      v19 = v18 & (v9 + v19);
      v20 = v17 + 40LL * v19;
      v8 = *(_QWORD *)v20;
      if ( v7 == *(_QWORD *)v20 )
        goto LABEL_9;
      if ( v8 == -4096 )
      {
        if ( v35 )
          v20 = v35;
        break;
      }
      v9 = (unsigned int)(v9 + 1);
    }
  }
LABEL_17:
  v37[0] = v20;
  v26 = (*(_DWORD *)v15 >> 1) + 1;
  if ( (*(_BYTE *)v15 & 1) != 0 )
  {
    v28 = 24;
    v27 = 8;
  }
  else
  {
    v27 = *(_DWORD *)(v15 + 16);
    v28 = 3 * v27;
  }
  v29 = (unsigned int)(4 * v26);
  if ( (unsigned int)v29 >= (unsigned int)v28 )
  {
    v27 *= 2;
    goto LABEL_26;
  }
  v29 = v27 - (v26 + *(_DWORD *)(v15 + 4));
  v28 = v27 >> 3;
  if ( (unsigned int)v29 <= (unsigned int)v28 )
  {
LABEL_26:
    sub_1AEB110(v15, v27, v28, v29, v8, v9);
    sub_1AE63C0(v15, &v36, v37);
    v26 = (*(_DWORD *)v15 >> 1) + 1;
  }
  *(_DWORD *)v15 = *(_DWORD *)v15 & 1 | (2 * v26);
  v30 = v37[0];
  if ( *(_QWORD *)v37[0] != -4096 )
    --*(_DWORD *)(v15 + 4);
  v31 = v36;
  result = (unsigned int *)(v30 + 8);
  v22 = 0;
  *(_OWORD *)result = 0;
  *((_QWORD *)result - 1) = v31;
  *((_OWORD *)result + 1) = 0;
  *result = 106;
  *((_QWORD *)result + 1) = 0;
LABEL_10:
  *(_QWORD *)result = 36;
  *((_QWORD *)result + 2) = a4;
  *((_QWORD *)result + 1) = v22 | a3 & 0xFFFFFFFFFFFFFFFDLL;
  *((_BYTE *)result + 24) = 0;
  if ( a4 )
  {
    v23 = *(unsigned int *)(a1 + 344);
    v24 = nullptr;
    if ( (_DWORD)v23 )
    {
      v25 = *(_QWORD *)(a1 + 336) + 6776 * v23 - 6776;
      if ( *(_QWORD *)(v25 + 6768) == *(_QWORD *)(a1 + 328) )
      {
        v32 = *(unsigned int *)(v25 + 8);
        v33 = *(unsigned int *)(a1 + 27504);
        if ( (unsigned int)v32 > (unsigned int)v33 )
        {
          v34 = v32 - v33;
          if ( v34 )
            v24 = (unsigned int *)(*(_QWORD *)v25 + 1688 * (v34 - 1));
        }
      }
    }
    v37[0] = *(_QWORD *)(a4 + 16);
    result = sub_1AEE150(v24, v37);
    *(_QWORD *)result = 36;
    *((_QWORD *)result + 1) = v22 | a4 & 0xFFFFFFFFFFFFFFFDLL;
    *((_QWORD *)result + 2) = 0;
    *((_BYTE *)result + 24) = 0;
  }
  return result;
}
