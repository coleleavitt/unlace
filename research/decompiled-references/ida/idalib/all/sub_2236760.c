_QWORD *__fastcall sub_2236760(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  int v5; // ecx
  unsigned int v6; // esi
  __int64 v7; // rdi
  unsigned int v8; // edx
  _QWORD *result; // rax
  __int64 v10; // rcx
  int v11; // r8d
  _QWORD *v12; // r10
  bool v13; // cf

  v4 = *(_DWORD *)(a1 + 8);
  v5 = 2 * v4;
  if ( 4 * (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 16)) >= 3 * v4 )
  {
    v13 = v4 < 0x40;
    v4 = 128;
    if ( !v13 )
      v4 = v5;
  }
  else if ( v4 - *(_DWORD *)(a1 + 12) >= v4 >> 3 )
  {
    goto LABEL_4;
  }
  sub_22365E0(a1, v4);
  v4 = *(_DWORD *)(a1 + 8);
LABEL_4:
  v6 = v4 - 1;
  v8 = v6 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  result = (_QWORD *)(*(_QWORD *)a1 + 8LL * v8);
  v10 = *result;
  if ( *result == -1 )
    goto LABEL_5;
  v11 = 1;
  v12 = nullptr;
  if ( a2 == v10 )
    return result;
  while ( 1 )
  {
    if ( v10 != -2 || v12 )
      result = v12;
    v8 = v6 & (v11 + v8);
    v7 = *(_QWORD *)a1;
    v10 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v8);
    if ( v10 == -1 )
      break;
    if ( a2 == v10 )
      return (_QWORD *)(v7 + 8LL * v8);
    ++v11;
    v12 = result;
    result = (_QWORD *)(v7 + 8LL * v8);
  }
  if ( !result )
  {
    result = (_QWORD *)(v7 + 8LL * v8);
LABEL_5:
    if ( a2 != -1 )
      goto LABEL_6;
    return result;
  }
  if ( *result != a2 )
  {
    if ( *result == -2 )
    {
      --*(_DWORD *)(a1 + 16);
      goto LABEL_7;
    }
LABEL_6:
    ++*(_DWORD *)(a1 + 12);
LABEL_7:
    *result = a2;
  }
  return result;
}
