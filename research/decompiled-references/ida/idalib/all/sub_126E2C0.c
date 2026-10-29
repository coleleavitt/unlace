__int64 __fastcall sub_126E2C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbp
  _QWORD *v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 result; // rax
  int v16[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v4 = *(unsigned int *)(a3 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v4) = "-lc++";
  ++*(_DWORD *)(a3 + 8);
  v16[0] = 671;
  v5 = sub_21B6DA0(a2, v16, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_7;
  while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 671) )
  {
    if ( v8 == ++v7 )
      goto LABEL_7;
  }
  if ( v8 == v7 )
  {
LABEL_7:
    v9 = *(unsigned int *)(a3 + 8);
    v10 = *(unsigned int *)(a3 + 12);
    v11 = v9 + 1;
  }
  else
  {
    do
    {
      v12 = *v7;
      if ( *(_QWORD *)(*v7 + 16LL) )
        v12 = *(_QWORD *)(*v7 + 16LL);
      ++v7;
      *(_BYTE *)(v12 + 44) |= 1u;
      if ( v7 == v8 )
        break;
      while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 671) )
      {
        if ( v8 == ++v7 )
          goto LABEL_15;
      }
    }
    while ( v8 != v7 );
LABEL_15:
    v13 = *(unsigned int *)(a3 + 8);
    if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v13 + 1, 8);
      v13 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v13) = "-lc++experimental";
    v10 = *(unsigned int *)(a3 + 12);
    v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v9;
    v11 = v9 + 1;
  }
  if ( v11 > v10 )
  {
    sub_2237220(a3, a3 + 16, v11, 8);
    v9 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v9) = "-lc++abi";
  v14 = *(unsigned int *)(a3 + 12);
  result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = result;
  if ( result + 1 > v14 )
  {
    sub_2237220(a3, a3 + 16, result + 1, 8);
    result = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-lunwind";
  ++*(_DWORD *)(a3 + 8);
  return result;
}
