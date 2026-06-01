__int64 __fastcall sub_12A19C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbp
  _QWORD *v7; // r12
  __int64 v8; // r13
  const char *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbp
  _QWORD *v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  const char *v19; // rbp
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD v23[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v23[0] = 3129;
  v4 = sub_21B6DA0(a2, v23, 1);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_5;
  while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3129) )
  {
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    v8 = 0;
    v9 = "-lc++";
  }
  else
  {
    do
    {
      v8 = *v6;
      v10 = *(_QWORD *)(*v6 + 16LL);
      if ( !v10 )
        v10 = *v6;
      ++v6;
      *(_BYTE *)(v10 + 44) |= 1u;
      if ( v6 == v7 )
        break;
      while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3129) )
      {
        if ( v7 == ++v6 )
          goto LABEL_13;
      }
    }
    while ( v7 != v6 );
LABEL_13:
    v9 = "-lc++_p";
  }
  v11 = *(unsigned int *)(a3 + 8);
  if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v11 + 1, 8);
    v11 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v11) = v9;
  ++*(_DWORD *)(a3 + 8);
  v23[0] = 671;
  v12 = sub_21B6DA0(a2, v23, 1);
  v13 = *(_QWORD *)(a2 + 8);
  v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
  v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
  if ( v14 == v15 )
    goto LABEL_20;
  while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 671) )
  {
    if ( v15 == ++v14 )
      goto LABEL_20;
  }
  if ( v14 == v15 )
  {
LABEL_20:
    v16 = *(unsigned int *)(a3 + 8);
    v17 = *(unsigned int *)(a3 + 12);
    v18 = v16 + 1;
    if ( v8 )
    {
LABEL_36:
      if ( v18 > v17 )
      {
        sub_2237220(a3, a3 + 16, v18, 8);
        v19 = "-lpthread_p";
        *(_QWORD *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8)) = "-lc++abi_p";
      }
      else
      {
        v19 = "-lpthread_p";
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v16) = "-lc++abi_p";
      }
      result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = result;
      goto LABEL_39;
    }
  }
  else
  {
    do
    {
      v21 = *v14;
      if ( *(_QWORD *)(*v14 + 16LL) )
        v21 = *(_QWORD *)(*v14 + 16LL);
      ++v14;
      *(_BYTE *)(v21 + 44) |= 1u;
      if ( v14 == v15 )
        break;
      while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 671) )
      {
        if ( v15 == ++v14 )
          goto LABEL_33;
      }
    }
    while ( v14 != v15 );
LABEL_33:
    v22 = *(unsigned int *)(a3 + 8);
    if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v22 + 1) )
    {
      sub_2237220(a3, a3 + 16, v22 + 1, 8);
      v22 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v22) = "-lc++experimental";
    v17 = *(unsigned int *)(a3 + 12);
    v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v16;
    v18 = v16 + 1;
    if ( v8 )
      goto LABEL_36;
  }
  if ( v18 > v17 )
  {
    sub_2237220(a3, a3 + 16, v18, 8);
    v19 = "-lpthread";
    *(_QWORD *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8)) = "-lc++abi";
  }
  else
  {
    v19 = "-lpthread";
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v16) = "-lc++abi";
  }
  result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = result;
LABEL_39:
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, result + 1, 8);
    result = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = v19;
  ++*(_DWORD *)(a3 + 8);
  return result;
}
