__int64 __fastcall sub_896540(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx

  if ( a2 == 3 )
    return 0;
  if ( a2 > 1 )
  {
    if ( a2 == 2 )
      sub_898EE0(*(_QWORD *)a1, **(_QWORD **)a1 * *(unsigned int *)(a1 + 40), a3);
    goto LABEL_5;
  }
  v4 = *(__int64 **)a1;
  v5 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 92) = 1;
  v6 = *v4;
  if ( 16LL * *(_QWORD *)(a1 + 24) )
  {
    do
    {
      v8 = 4LL * (unsigned int)(*(_DWORD *)(v5 + 4) - *(_DWORD *)v5);
      if ( *(_DWORD *)(v5 + 4) != *(_DWORD *)v5 && *(_QWORD *)(v5 + 8) != v6 && *(_BYTE *)(a1 + 92) )
      {
        sub_8990B0(*(_QWORD *)a1);
        v8 = 4LL * (unsigned int)(*(_DWORD *)(v5 + 4) - *(_DWORD *)v5);
      }
      *(_QWORD *)(v5 + 8) = v6;
      v6 += v8;
      v5 += 16;
      v7 = *(_QWORD *)(a1 + 16);
    }
    while ( v5 != v7 + 16LL * *(_QWORD *)(a1 + 24) );
    if ( *(_QWORD *)(a1 + 24) )
    {
      v9 = v5 - 16;
      if ( v7 != v5 )
      {
LABEL_15:
        v6 = *(_QWORD *)(v9 + 8) + 4LL * (unsigned int)(*(_DWORD *)(v9 + 4) - *(_DWORD *)v9);
        goto LABEL_16;
      }
LABEL_20:
      v9 = *(_QWORD *)(a1 + 80);
      goto LABEL_15;
    }
    v6 = **(_QWORD **)a1;
  }
  else if ( *(_QWORD *)(a1 + 24) )
  {
    goto LABEL_20;
  }
LABEL_16:
  v10 = sub_8962A0(a1, v6);
  result = 4;
  if ( !v10 )
  {
LABEL_5:
    sub_8964D0(a1);
    return 0;
  }
  return result;
}

