__int64 __fastcall sub_1FC62A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r14
  _DWORD *v7; // rbp
  __int64 result; // rax
  _DWORD *i; // r14
  __int64 v10; // r13
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  int v13; // esi
  int v14; // esi
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int16 *)(a2 + 22));
  if ( *(_WORD *)(a2 + 22) )
  {
    v3 = *(unsigned int *)(a1 + 40);
    v4 = (__int64 *)(a2 + 32);
    v5 = a2 + 8LL * ((unsigned int)*(unsigned __int16 *)(a2 + 22) - 1) + 40;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          break;
        ++v4;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v3) = v6;
        v3 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = v3;
        if ( (__int64 *)v5 == v4 )
          goto LABEL_6;
      }
      ++v4;
      sub_2237220(a1 + 32, a1 + 48, v3 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v6;
      v3 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v3;
    }
    while ( v4 != (__int64 *)v5 );
  }
LABEL_6:
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 20) & 1);
  v7 = *(_DWORD **)(a2 + 24);
  result = 3LL * (*(_WORD *)(a2 + 20) >> 1);
  for ( i = &v7[6 * (*(_WORD *)(a2 + 20) >> 1)];
        i != v7;
        result = sub_1F6F570(*(_QWORD **)(a1 + 16), v14, *(_QWORD *)(a1 + 24)) )
  {
    v15 = *(_QWORD *)(a1 + 24);
    if ( *v7 )
    {
      if ( *v7 == 1 )
      {
        sub_9B9C90(*(_QWORD *)(a1 + 24), 2);
        sub_9B9C90(*(_QWORD *)(a1 + 24), (unsigned int)v7[2]);
        v11 = *(_QWORD **)(a1 + 16);
        v12 = *(_QWORD *)(a1 + 24);
        v13 = v7[3];
        goto LABEL_12;
      }
      sub_9B9C90(*(_QWORD *)(a1 + 24), 3);
      sub_9B9C90(*(_QWORD *)(a1 + 24), (unsigned int)v7[2]);
      sub_1F6F570(*(_QWORD **)(a1 + 16), v7[3], *(_QWORD *)(a1 + 24));
    }
    else
    {
      v10 = *((_QWORD *)v7 + 1);
      if ( (v10 & 1) != 0 || !v10 )
      {
        v16 = *(unsigned int *)(v15 + 8);
        if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(v15 + 12) )
        {
          sub_2237220(*(_QWORD *)(a1 + 24), v15 + 16, v16 + 1, 8);
          v16 = *(unsigned int *)(v15 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v15 + 8 * v16) = 0;
        ++*(_DWORD *)(v15 + 8);
        v17 = sub_C00930((__int64)v7);
        sub_1F80F20(*(_QWORD *)(a1 + 16), v17, *(_QWORD *)(a1 + 24), v18, v19, v20);
      }
      else
      {
        sub_9B9C90(*(_QWORD *)(a1 + 24), 1);
        sub_1F92A90(*(_QWORD *)(a1 + 16), v10, *(_QWORD *)(a1 + 24));
      }
    }
    v11 = *(_QWORD **)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 24);
    v13 = v7[4];
LABEL_12:
    sub_1F6F570(v11, v13, v12);
    v14 = v7[5];
    v7 += 6;
  }
  *(_DWORD *)(a1 + 224) = 196;
  return result;
}
