__int64 __fastcall sub_838C10(__int64 a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // r12
  _DWORD *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rax
  bool v7; // bl
  __int64 v8; // rdx
  unsigned int v9; // ebx
  _QWORD *v10; // rdi
  __int64 (__fastcall *v11)(_QWORD *, unsigned int); // rax
  int **v12; // rbx
  int **v13; // r12
  int **v14; // rsi
  __int64 result; // rax
  unsigned int v16; // ebx
  unsigned int *v17; // rbx
  unsigned int *v18; // r12
  unsigned int v19; // esi
  __int64 v20; // rcx
  int *v21; // rdx
  unsigned int *v22; // rbx
  unsigned int *i; // r12
  unsigned int v24; // edx
  __int64 v25; // rsi
  __int64 v26; // rcx

  v2 = *(_QWORD *)(a1 + 472);
  if ( *(_BYTE *)(*(_QWORD *)v2 + 2756LL) )
  {
    if ( (unsigned int)sub_1010850(*(_QWORD *)(a1 + 496)) == 1 )
      return sub_82FEE0(a1);
    v2 = *(_QWORD *)(a1 + 472);
  }
  v3 = *(_DWORD **)sub_1021DF0(v2);
  if ( v3 )
  {
    v4 = &v3[18 * *(v3 - 1)];
    while ( v4 != v3 )
    {
      while ( 1 )
      {
        v8 = (unsigned int)sub_831BA0((_QWORD *)a1, v3);
        v9 = v8;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4 * v8) != 1 )
          break;
LABEL_10:
        v3 += 18;
        if ( v4 == v3 )
          goto LABEL_14;
      }
      sub_7F15F0(*(_QWORD *)(a1 + 80) + 160LL, v8);
      v10 = *(_QWORD **)(a1 + 24);
      v11 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v10 + 48LL);
      if ( v11 == sub_784580 )
      {
        v5 = v10[412];
        v6 = v9 >> 1;
        if ( v5 && (unsigned int)v6 < *(_DWORD *)(v5 - 4) )
        {
          v7 = !(v9 & 1);
          *(_BYTE *)(v10[431] + v6) = v7;
          *(_BYTE *)(v10[432] + v6) = v7;
        }
        goto LABEL_10;
      }
      v3 += 18;
      v11(v10, v9);
    }
  }
LABEL_14:
  v12 = *(int ***)sub_1021DE0(*(_QWORD *)(a1 + 472));
  if ( v12 )
  {
    v13 = &v12[5 * *((unsigned int *)v12 - 1)];
    while ( v13 != v12 )
    {
      v14 = v12;
      v12 += 5;
      sub_8376F0(a1, v14);
    }
  }
  result = sub_7E4EB0(a1);
  if ( *(_BYTE *)(result + 264) )
  {
    v16 = *(_DWORD *)(a1 + 392);
    result = sub_7E4EB0(a1);
    if ( v16 < *(_DWORD *)(result + 344) )
    {
      v17 = *(unsigned int **)sub_1021E10(*(_QWORD *)(a1 + 472));
      if ( v17 )
      {
        v18 = &v17[18 * *(v17 - 1)];
        while ( v18 != v17 )
        {
          v19 = *v17;
          v20 = (__int64)(v17 + 10);
          v21 = (int *)(v17 + 2);
          v17 += 18;
          sub_82F480(a1, v19, v21, v20);
        }
      }
      result = sub_1021E00(*(_QWORD *)(a1 + 472));
      v22 = *(unsigned int **)result;
      if ( *(_QWORD *)result )
      {
        result = 5LL * *(v22 - 1);
        for ( i = &v22[10 * *(v22 - 1)]; i != v22; result = sub_82F0A0(a1, v25, v24, v26, 0) )
        {
          v24 = v22[1];
          v25 = *v22;
          v26 = (__int64)(v22 + 2);
          v22 += 10;
        }
      }
    }
  }
  return result;
}

