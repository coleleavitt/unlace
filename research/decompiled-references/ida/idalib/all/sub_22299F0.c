_BYTE *__fastcall sub_22299F0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _BYTE *v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  _BYTE *result; // rax
  unsigned __int64 v14; // rdx

  v2 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8) - 8;
  if ( *(_BYTE *)(v2 + 4) )
  {
    v3 = *(_QWORD *)(a1 + 160);
    v4 = *(_BYTE **)(v3 + 32);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 24) )
    {
      sub_227BA10(v3, 44);
    }
    else
    {
      *(_QWORD *)(v3 + 32) = v4 + 1;
      *v4 = 44;
    }
    v2 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8) - 8;
  }
  if ( *(_DWORD *)v2 == 1 && *(_DWORD *)(a1 + 168) )
  {
    sub_227BA10(*(_QWORD *)(a1 + 160), 10);
    sub_227D090(*(_QWORD *)(a1 + 160), *(unsigned int *)(a1 + 172));
  }
  if ( *(_QWORD *)(a1 + 152) )
    sub_2229220(a1);
  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(_QWORD *)a1;
  v7 = *(unsigned int *)(a1 + 12);
  v8 = 8 * v5;
  v9 = *(_DWORD *)(a1 + 8);
  *(_BYTE *)(*(_QWORD *)a1 + 8 * v5 - 4) = 1;
  if ( v7 <= v5 )
  {
    v14 = v5 + 1;
    if ( v7 < v14 )
    {
      sub_2237220(a1, a1 + 16, v14, 8);
      v6 = *(_QWORD *)a1;
      v8 = 8LL * *(unsigned int *)(a1 + 8);
    }
    *(_QWORD *)(v6 + v8) = 0;
    v6 = *(_QWORD *)a1;
    v11 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v11;
  }
  else
  {
    v10 = v6 + v8;
    v11 = (unsigned int)(v9 + 1);
    *(_DWORD *)v10 = 0;
    *(_BYTE *)(v10 + 4) = 0;
    *(_DWORD *)(a1 + 8) = v11;
  }
  *(_DWORD *)(v6 + 8 * v11 - 8) = 2;
  v12 = *(_QWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 172) += *(_DWORD *)(a1 + 168);
  result = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v12 + 24) )
    return (_BYTE *)sub_227BA10(v12, 123);
  *(_QWORD *)(v12 + 32) = result + 1;
  *result = 123;
  return result;
}
