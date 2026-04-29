_QWORD *__fastcall sub_5AFE0(_QWORD *a1, int *a2)
{
  int v3; // r10d
  int v4; // r9d
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx
  _DWORD *v7; // rsi
  unsigned __int64 v8; // r12
  _DWORD *v9; // rdx
  unsigned __int64 v10; // rcx
  _QWORD *result; // rax
  _QWORD *v12; // rax

  v3 = a2[1];
  v4 = *a2;
  if ( a1[3] )
  {
    v5 = a1[1];
    v6 = v3 ^ v4;
    v7 = *(_DWORD **)(*a1 + 8 * (v6 % v5));
    v8 = v6 % v5;
    if ( !v7 )
      goto LABEL_12;
    v9 = *(_DWORD **)v7;
    v10 = *(_QWORD *)(*(_QWORD *)v7 + 16LL);
    while ( v6 != v10 || v9[2] != v4 || v9[3] != v3 )
    {
      if ( !*(_QWORD *)v9 )
        goto LABEL_12;
      v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
      v7 = v9;
      if ( v10 % v5 != (v3 ^ v4) % v5 )
        goto LABEL_12;
      v9 = *(_DWORD **)v9;
    }
    if ( !v7 )
      goto LABEL_12;
    result = *(_QWORD **)v7;
    if ( !*(_QWORD *)v7 )
      goto LABEL_12;
  }
  else
  {
    result = (_QWORD *)a1[2];
    if ( !result )
    {
LABEL_14:
      v6 = v3 ^ v4;
      v8 = v6 % a1[1];
LABEL_12:
      v12 = (_QWORD *)operator new(0x18u);
      *v12 = 0;
      v12[1] = *(_QWORD *)a2;
      return sub_5AE20((__int64)a1, v8, v6, v12, 1u);
    }
    while ( *((_DWORD *)result + 2) != v4 || *((_DWORD *)result + 3) != v3 )
    {
      result = (_QWORD *)*result;
      if ( !result )
        goto LABEL_14;
    }
  }
  return result;
}
