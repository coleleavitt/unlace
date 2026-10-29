_QWORD *__fastcall sub_13978F0(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *result; // rax

  v1 = *(unsigned int *)(a1 + 8);
  if ( v1 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v1 + 1, 16);
    v1 = *(unsigned int *)(a1 + 8);
  }
  v2 = (_QWORD *)(*(_QWORD *)a1 + 16 * v1);
  *v2 = 10;
  v2[1] = 2;
  v3 = *(unsigned int *)(a1 + 12);
  v4 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v4;
  if ( v4 + 1 > v3 )
  {
    sub_2237220(a1, a1 + 16, v4 + 1, 16);
    v4 = *(unsigned int *)(a1 + 8);
  }
  v5 = (_QWORD *)(*(_QWORD *)a1 + 16 * v4);
  *v5 = 32;
  v5[1] = 2;
  v6 = *(unsigned int *)(a1 + 12);
  v7 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v7;
  if ( v7 + 1 > v6 )
  {
    sub_2237220(a1, a1 + 16, v7 + 1, 16);
    v7 = *(unsigned int *)(a1 + 8);
  }
  v8 = (_QWORD *)(*(_QWORD *)a1 + 16 * v7);
  *v8 = 32;
  v8[1] = 2;
  v9 = *(unsigned int *)(a1 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    sub_2237220(a1, a1 + 16, v10 + 1, 16);
    v10 = *(unsigned int *)(a1 + 8);
  }
  result = (_QWORD *)(*(_QWORD *)a1 + 16 * v10);
  *result = 32;
  result[1] = 2;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
