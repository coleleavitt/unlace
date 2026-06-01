__int64 __fastcall sub_1FC7D20(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r13
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r14d
  int i; // r12d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // r15
  int v22; // r14d
  int j; // r12d
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // [rsp+0h] [rbp-48h]
  __int64 v27; // [rsp+0h] [rbp-48h]
  __int64 v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+8h] [rbp-40h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  v2 = 0;
  v3 = a1 + 32;
  sub_1FC4AC0(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 80));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 40), *(_QWORD *)(a1 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 48));
  result = *(unsigned int *)(a2 + 16);
  v26 = a1 + 48;
  v8 = (unsigned int)(result - 1);
  if ( (_DWORD)result )
  {
    while ( 1 )
    {
      sub_1F80F20(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8 * v2), *(_QWORD *)(a1 + 24), v4, v5, v6);
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8 * v2);
      v10 = *(unsigned int *)(a1 + 40);
      if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        v31 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8 * v2);
        sub_2237220(v3, v26, v10 + 1, 8);
        v10 = *(unsigned int *)(a1 + 40);
        v9 = v31;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v10) = v9;
      ++*(_DWORD *)(a1 + 40);
      v11 = sub_EEDDB0(a2, v2);
      v4 = *(unsigned int *)(a1 + 40);
      if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        v30 = v11;
        sub_2237220(v3, v26, v4 + 1, 8);
        v4 = *(unsigned int *)(a1 + 40);
        v12 = *(_QWORD *)(a1 + 32);
        v11 = v30;
      }
      else
      {
        v12 = *(_QWORD *)(a1 + 32);
      }
      *(_QWORD *)(v12 + 8 * v4) = v11;
      result = v2 + 1;
      ++*(_DWORD *)(a1 + 40);
      if ( v8 == v2 )
        break;
      ++v2;
    }
  }
  v13 = *(_DWORD *)(a2 + 20);
  if ( v13 )
  {
    for ( i = 0; i != v13; ++i )
    {
      while ( 1 )
      {
        sub_1F80F20(
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + i)),
          *(_QWORD *)(a1 + 24),
          (unsigned int)(*(_DWORD *)(a2 + 16) + i),
          v5,
          v6);
        v16 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + i));
        v17 = *(unsigned int *)(a1 + 40);
        if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + i));
          sub_2237220(v3, a1 + 48, v17 + 1, 8);
          v17 = *(unsigned int *)(a1 + 40);
          v16 = v27;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v17) = v16;
        ++*(_DWORD *)(a1 + 40);
        result = sub_EEDDC0(a2, i);
        v15 = *(unsigned int *)(a1 + 40);
        if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          break;
        ++i;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v15) = result;
        ++*(_DWORD *)(a1 + 40);
        if ( i == v13 )
          goto LABEL_16;
      }
      v28 = result;
      sub_2237220(v3, a1 + 48, v15 + 1, 8);
      result = v28;
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 40))++) = v28;
    }
  }
LABEL_16:
  v18 = *(_DWORD *)(a2 + 24);
  if ( v18 )
  {
    result = *(unsigned int *)(a1 + 40);
    v19 = 0;
    v20 = 8LL * (unsigned int)(v18 - 1) + 8;
    do
    {
      v21 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + v19);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(v3, a1 + 48, result + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v21;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v21;
      }
      v19 += 8;
      result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = result;
    }
    while ( v19 != v20 );
  }
  v22 = *(_DWORD *)(a2 + 80);
  if ( v22 )
  {
    for ( j = 0; j != v22; ++j )
    {
      while ( 1 )
      {
        v24 = (unsigned int)(*(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20) + j);
        sub_1F80F20(
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8 * v24),
          *(_QWORD *)(a1 + 24),
          v24,
          v5,
          v6);
        result = sub_EEDDE0(a2, j);
        v25 = *(unsigned int *)(a1 + 40);
        if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          break;
        ++j;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v25) = result;
        ++*(_DWORD *)(a1 + 40);
        if ( j == v22 )
          goto LABEL_26;
      }
      v29 = result;
      sub_2237220(v3, a1 + 48, v25 + 1, 8);
      result = v29;
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 40))++) = v29;
    }
  }
LABEL_26:
  *(_DWORD *)(a1 + 224) = 169;
  return result;
}
