__int64 __fastcall sub_12B77D0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbp
  _QWORD *v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rax
  void *v22; // rsi
  void *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // [rsp+8h] [rbp-60h]
  void *v28[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v29; // [rsp+20h] [rbp-48h] BYREF
  char v30; // [rsp+30h] [rbp-38h]

  sub_11C3610(a1, (__int64)a2, a3);
  sub_1131310((__int64)v28, a1);
  v5 = *(unsigned int *)(a3 + 8);
  if ( v30 )
  {
    if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v5 + 1, 8);
      v5 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "-rpath";
    v21 = *a2;
    v22 = v28[0];
    v23 = v28[1];
    ++*(_DWORD *)(a3 + 8);
    v24 = (*(__int64 (__fastcall **)(__int64 *, void *, void *))(v21 + 16))(a2, v22, v23);
    v25 = *(unsigned int *)(a3 + 8);
    if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v27 = v24;
      sub_2237220(a3, a3 + 16, v25 + 1, 8);
      v25 = *(unsigned int *)(a3 + 8);
      v24 = v27;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v25) = v24;
    v5 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    v26 = v30 == 0;
    *(_DWORD *)(a3 + 8) = v5;
    if ( !v26 && v28[0] != &v29 )
    {
      operator delete(v28[0]);
      v5 = *(unsigned int *)(a3 + 8);
    }
  }
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v5 + 1, 8);
    v5 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "-lc++";
  ++*(_DWORD *)(a3 + 8);
  LODWORD(v28[0]) = 671;
  v6 = sub_21B6DA0(a2, v28, 1);
  v7 = a2[1];
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 == v9 )
    goto LABEL_8;
  while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 671) )
  {
    if ( v9 == ++v8 )
      goto LABEL_8;
  }
  if ( v8 == v9 )
  {
LABEL_8:
    v10 = *(unsigned int *)(a3 + 8);
    v11 = *(unsigned int *)(a3 + 12);
    v12 = v10 + 1;
  }
  else
  {
    do
    {
      v13 = *v8;
      if ( *(_QWORD *)(*v8 + 16LL) )
        v13 = *(_QWORD *)(*v8 + 16LL);
      ++v8;
      *(_BYTE *)(v13 + 44) |= 1u;
      if ( v8 == v9 )
        break;
      while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 671) )
      {
        if ( v9 == ++v8 )
          goto LABEL_16;
      }
    }
    while ( v8 != v9 );
LABEL_16:
    v14 = *(unsigned int *)(a3 + 8);
    if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v14 + 1) )
    {
      sub_2237220(a3, a3 + 16, v14 + 1, 8);
      v14 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v14) = "-lc++experimental";
    v11 = *(unsigned int *)(a3 + 12);
    v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v10;
    v12 = v10 + 1;
  }
  if ( v12 > v11 )
  {
    sub_2237220(a3, a3 + 16, v12, 8);
    v10 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) = "-lc++abi";
  v15 = *(unsigned int *)(a3 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v16;
  if ( v16 + 1 > v15 )
  {
    sub_2237220(a3, a3 + 16, v16 + 1, 8);
    v16 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v16) = "-lunwind";
  v17 = *(unsigned int *)(a3 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v18;
  if ( v18 + 1 > v17 )
  {
    sub_2237220(a3, a3 + 16, v18 + 1, 8);
    v18 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v18) = "-lpthread";
  v19 = *(unsigned int *)(a3 + 12);
  result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = result;
  if ( result + 1 > v19 )
  {
    sub_2237220(a3, a3 + 16, result + 1, 8);
    result = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-ldl";
  ++*(_DWORD *)(a3 + 8);
  return result;
}
