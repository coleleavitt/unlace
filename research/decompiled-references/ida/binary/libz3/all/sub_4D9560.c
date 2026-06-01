_DWORD *__fastcall sub_4D9560(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // r9
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  _DWORD *v6; // rdi
  __int64 v7; // rax
  _DWORD *result; // rax
  _DWORD *v9; // rdx

  v1 = *(_QWORD **)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = v1[2];
  v4 = v1[3];
  v5 = v1[4];
  v6 = (_DWORD *)(4 * v2 + v3);
  v7 = 4LL * (unsigned int)*v6;
  *(_DWORD *)(v4 + v7) -= *(_DWORD *)(v4 + 4 * v2);
  result = (_DWORD *)(v5 + v7);
  v9 = (_DWORD *)(4 * v2 + v5);
  *v6 = v2;
  LODWORD(v4) = *v9;
  *v9 = *result;
  *result = v4;
  return result;
}

