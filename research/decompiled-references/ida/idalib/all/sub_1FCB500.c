__int64 __fastcall sub_1FCB500(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 v5; // rax
  __int64 *v6; // r12
  __int64 v7; // rsi
  unsigned int **v8; // r12
  unsigned int **v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int *v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 result; // rax
  unsigned __int64 v22; // rbp
  __int64 v23; // rbp
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-40h]

  v3 = (__int64 *)(a2 + 48);
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 16));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 20));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 2) & 8) != 0);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  v5 = *(unsigned int *)(a2 + 16);
  v6 = (__int64 *)(a2 + 48 + v5 * 8);
  if ( &v3[v5] != v3 )
  {
    do
    {
      v7 = *v3++;
      sub_1F92A90(*(_QWORD *)(a1 + 16), v7, *(_QWORD *)(a1 + 24));
    }
    while ( v6 != v3 );
    v5 = *(unsigned int *)(a2 + 16);
  }
  v8 = (unsigned int **)(a2 + v5 * 8 + 48);
  v9 = &v8[*(unsigned int *)(a2 + 20)];
  v10 = *(_QWORD *)(a1 + 24);
  if ( v9 != v8 )
  {
    while ( 1 )
    {
      v16 = *v8;
      v17 = **v8;
      if ( !(_DWORD)v17 )
        break;
      if ( (unsigned int)(v17 - 1) > 1 )
      {
        sub_9B9C90(v10, 3);
        sub_9B9C90(*(_QWORD *)(a1 + 24), *((unsigned __int8 *)v16 + 24));
        if ( *((_BYTE *)v16 + 24) )
        {
          sub_1F740B0(*(_QWORD *)(a1 + 16), *((_QWORD *)v16 + 4), *((_QWORD *)v16 + 5), *(_QWORD *)(a1 + 24));
        }
        else
        {
          sub_183F100(a1 + 32, *((_QWORD *)v16 + 1));
          if ( (v16[1] & 1) != 0 )
          {
            v10 = *(_QWORD *)(a1 + 24);
            goto LABEL_21;
          }
        }
        v23 = *((_QWORD *)v16 + 2);
        sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(v23 + 8) & 1);
        sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(v23 + 8) & 2) != 0);
        if ( (*(_BYTE *)(v23 + 8) & 1) == 0 )
        {
          sub_1FC6F20(a1 + 8, (__int64 *)v23);
          v10 = *(_QWORD *)(a1 + 24);
          goto LABEL_21;
        }
LABEL_20:
        v10 = *(_QWORD *)(a1 + 24);
LABEL_21:
        if ( v9 == ++v8 )
          goto LABEL_22;
      }
      else
      {
        sub_9B9C90(v10, v17);
        sub_9B9C90(*(_QWORD *)(a1 + 24), v16[10]);
        v18 = *((_QWORD *)v16 + 1);
        if ( v16[10] == 1 )
          sub_1FC2170(a1 + 8, v18 & 0xFFFFFFFFFFFFFFFCLL);
        else
          sub_183F100(a1 + 32, v18 & 0xFFFFFFFFFFFFFFFCLL);
        v10 = *(_QWORD *)(a1 + 24);
        if ( *v16 == 2 )
        {
          sub_1F6F570(*(_QWORD **)(a1 + 16), v16[4], *(_QWORD *)(a1 + 24));
          v19 = *((_QWORD *)v16 + 3);
          if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v20 = *(_QWORD *)(a1 + 24);
            if ( (v19 & 4) != 0 )
            {
              sub_9B9C90(v20, 2);
              sub_1FC2170(a1 + 8, *((_QWORD *)v16 + 3) & 0xFFFFFFFFFFFFFFF8LL);
              v10 = *(_QWORD *)(a1 + 24);
            }
            else
            {
              sub_9B9C90(v20, 1);
              sub_1F95F90(a1 + 8, *((_QWORD *)v16 + 3) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (int)v16[10] <= 3 )
                goto LABEL_20;
              sub_183F100(a1 + 32, *((_QWORD *)v16 + 4));
              v10 = *(_QWORD *)(a1 + 24);
            }
          }
          else
          {
            v24 = *(_QWORD *)(a1 + 24);
            v25 = *(unsigned int *)(v24 + 8);
            if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(v24 + 12) )
            {
              sub_2237220(*(_QWORD *)(a1 + 24), v24 + 16, v25 + 1, 8);
              v25 = *(unsigned int *)(v24 + 8);
            }
            *(_QWORD *)(*(_QWORD *)v24 + 8 * v25) = 0;
            ++*(_DWORD *)(v24 + 8);
            v10 = *(_QWORD *)(a1 + 24);
          }
        }
LABEL_11:
        if ( v9 == ++v8 )
          goto LABEL_22;
      }
    }
    v11 = *(unsigned int *)(v10 + 8);
    if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(v10 + 12) )
    {
      v26 = v10;
      sub_2237220(v10, v10 + 16, v11 + 1, 8);
      v10 = v26;
      v11 = *(unsigned int *)(v26 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v10 + 8 * v11) = 0;
    ++*(_DWORD *)(v10 + 8);
    sub_9B9C90(*(_QWORD *)(a1 + 24), v16[4]);
    if ( v16[4] == 1 )
    {
      v22 = *((_QWORD *)v16 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      sub_1F740B0(*(_QWORD *)(a1 + 16), *(_QWORD *)v22, *(_QWORD *)(v22 + 8), *(_QWORD *)(a1 + 24));
      sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v22 + 16), *(_QWORD *)(a1 + 24));
      sub_1F740B0(*(_QWORD *)(a1 + 16), *(_QWORD *)(v22 + 24), *(_QWORD *)(v22 + 32), *(_QWORD *)(a1 + 24));
    }
    else
    {
      sub_1F9A760((__int64 *)(a1 + 8), (__int64 *)(*((_QWORD *)v16 + 1) & 0xFFFFFFFFFFFFFFF8LL), v12, v13, v14, v15);
    }
    v10 = *(_QWORD *)(a1 + 24);
    goto LABEL_11;
  }
LABEL_22:
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 32), v10);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 36), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 40), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 292;
  return result;
}
