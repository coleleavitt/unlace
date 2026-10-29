unsigned int *__fastcall sub_1AEF810(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        char a7)
{
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rdi
  int v22; // esi
  unsigned int v23; // edx
  __int64 v24; // rcx
  unsigned int *result; // rax
  int v26; // edx
  __int64 v27; // rbp
  __int64 v28; // rax
  unsigned int *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // esi
  int v33; // eax
  unsigned int v34; // esi
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r11
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43[2]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v44[8]; // [rsp+18h] [rbp-40h] BYREF

  v12 = sub_1AEE450(a2);
  v43[0] = v12;
  if ( a4 == 100 )
  {
    result = sub_1AEE150((unsigned int *)a1, v43);
    v31 = *((_QWORD *)result + 1);
    *result = 100;
    *((_QWORD *)result + 2) = 0;
    result[1] = a6;
    *((_QWORD *)result + 1) = v31 & 3 | a3;
    return result;
  }
  v15 = *(unsigned int *)(a1 + 344);
  if ( !(_DWORD)v15
    || (v16 = *(_QWORD *)(a1 + 336) + 6776 * v15 - 6776, *(_QWORD *)(v16 + 6768) != *(_QWORD *)(a1 + 328))
    || (v17 = *(unsigned int *)(v16 + 8), v18 = *(unsigned int *)(a1 + 27504), (unsigned int)v17 <= (unsigned int)v18)
    || (v19 = v17 - v18) == 0 )
  {
    BUG();
  }
  v20 = *(_QWORD *)v16 + 1688 * (v19 - 1);
  if ( (*(_BYTE *)v20 & 1) != 0 )
  {
    v21 = v20 + 8;
    v22 = 7;
  }
  else
  {
    v32 = *(_DWORD *)(v20 + 16);
    v21 = *(_QWORD *)(v20 + 8);
    if ( !v32 )
    {
      v24 = 0;
      goto LABEL_20;
    }
    v22 = v32 - 1;
  }
  v23 = v22 & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
  v24 = v21 + 40LL * v23;
  v13 = *(_QWORD *)v24;
  if ( v12 == *(_QWORD *)v24 )
    goto LABEL_9;
  v14 = 1;
  v39 = 0;
  if ( v13 == -4096 )
  {
LABEL_20:
    v44[0] = v24;
    v33 = (*(_DWORD *)v20 >> 1) + 1;
    if ( (*(_BYTE *)v20 & 1) != 0 )
    {
      v35 = 24;
      v34 = 8;
    }
    else
    {
      v34 = *(_DWORD *)(v20 + 16);
      v35 = 3 * v34;
    }
    v36 = (unsigned int)(4 * v33);
    if ( (unsigned int)v35 <= (unsigned int)v36 )
    {
      v34 *= 2;
    }
    else
    {
      v35 = v34 - (v33 + *(_DWORD *)(v20 + 4));
      v36 = v34 >> 3;
      if ( (unsigned int)v35 > (unsigned int)v36 )
        goto LABEL_24;
    }
    sub_1AEB110(v20, v34, v36, v35, v13, v14);
    sub_1AE63C0(v20, v43, v44);
    v33 = (*(_DWORD *)v20 >> 1) + 1;
LABEL_24:
    *(_DWORD *)v20 = *(_DWORD *)v20 & 1 | (2 * v33);
    v37 = v44[0];
    if ( *(_QWORD *)v44[0] != -4096 )
      --*(_DWORD *)(v20 + 4);
    v38 = v43[0];
    *(_DWORD *)(v37 + 12) = a6;
    v27 = 2;
    *(_OWORD *)(v37 + 24) = 0;
    *(_QWORD *)v37 = v38;
    result = (unsigned int *)(v37 + 8);
    *(_DWORD *)(v37 + 8) = 106;
    *(_QWORD *)(v37 + 16) = 0;
    v26 = 106;
    if ( a4 == 52 )
      goto LABEL_11;
    goto LABEL_10;
  }
  while ( 1 )
  {
    if ( v13 == -8192 && !v39 )
      v39 = v24;
    v23 = v22 & (v14 + v23);
    v24 = v21 + 40LL * v23;
    v13 = *(_QWORD *)v24;
    if ( v12 == *(_QWORD *)v24 )
      break;
    if ( v13 == -4096 )
    {
      if ( v39 )
        v24 = v39;
      goto LABEL_20;
    }
    v14 = (unsigned int)(v14 + 1);
  }
LABEL_9:
  result = (unsigned int *)(v24 + 8);
  v26 = *(_DWORD *)(v24 + 8);
  *(_DWORD *)(v24 + 12) = a6;
  if ( a4 == 52 )
  {
    if ( v26 == 36 )
    {
      *(_QWORD *)(v24 + 16) |= 2uLL;
      return result;
    }
    v27 = 2;
    goto LABEL_11;
  }
LABEL_10:
  v27 = 2LL * (v26 == 52);
LABEL_11:
  *result = a4;
  *((_QWORD *)result + 2) = a5;
  *((_QWORD *)result + 1) = v27 | a3 & 0xFFFFFFFFFFFFFFFDLL;
  *((_BYTE *)result + 24) = a7;
  if ( a5 )
  {
    v28 = *(unsigned int *)(a1 + 344);
    v29 = nullptr;
    if ( (_DWORD)v28 )
    {
      v30 = *(_QWORD *)(a1 + 336) + 6776 * v28 - 6776;
      if ( *(_QWORD *)(v30 + 6768) == *(_QWORD *)(a1 + 328) )
      {
        v40 = *(unsigned int *)(v30 + 8);
        v41 = *(unsigned int *)(a1 + 27504);
        if ( (unsigned int)v40 > (unsigned int)v41 )
        {
          v42 = v40 - v41;
          if ( v42 )
            v29 = (unsigned int *)(*(_QWORD *)v30 + 1688 * (v42 - 1));
        }
      }
    }
    v44[0] = *(_QWORD *)(a5 + 16);
    result = sub_1AEE150(v29, v44);
    result[1] = a6;
    *result = a4;
    *((_QWORD *)result + 1) = v27 | a5 & 0xFFFFFFFFFFFFFFFDLL;
    *((_QWORD *)result + 2) = 0;
    *((_BYTE *)result + 24) = a7;
  }
  return result;
}
