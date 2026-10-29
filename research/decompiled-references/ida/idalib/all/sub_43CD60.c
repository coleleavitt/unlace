__int64 __fastcall sub_43CD60(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  _QWORD *v4; // rax
  size_t v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rbp
  _QWORD *v8; // rax
  size_t v9; // rdx
  __int64 result; // rax

  v2 = a1[6];
  v3 = *(unsigned int *)(a1[10] + 4LL * a2);
  v4 = (_QWORD *)(v2 + 8 * v3);
  v5 = *(_QWORD *)(v2 + 8LL * (unsigned int)(*(_DWORD *)(a1[10] + 4LL * a2) + 1)) - *v4;
  a1[9] += v5;
  memset((void *)(*a1 + *v4), 0, v5);
  *(_DWORD *)(a1[3] + 4 * v3) = -1;
  v6 = a1[19];
  v7 = *(unsigned int *)(a1[23] + 4LL * a2);
  v8 = (_QWORD *)(v6 + 8 * v7);
  v9 = *(_QWORD *)(v6 + 8LL * (unsigned int)(v7 + 1)) - *v8;
  a1[22] += v9;
  memset((void *)(a1[13] + *v8), 0, v9);
  result = a1[16];
  *(_DWORD *)(result + 4 * v7) = -1;
  return result;
}
