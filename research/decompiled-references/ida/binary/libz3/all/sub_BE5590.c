__int64 __fastcall sub_BE5590(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 *v6; // r14
  __int64 v7; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rsi
  __int64 v15; // rdi
  char v18; // [rsp+Eh] [rbp-3Ah] BYREF
  char v19; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v20; // [rsp+10h] [rbp-38h] BYREF
  __int64 v21; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(*a1 + 8656LL);
  if ( !v3 )
    return 0;
  v5 = *a2;
  if ( (unsigned int)v5 >= *(_DWORD *)(v3 - 4) )
    return 0;
  v6 = *(__int64 **)(v3 + 8 * v5);
  if ( !v6 )
    return 0;
  v7 = a1[1];
  v9 = v6;
  v20 = 0;
  v21 = v7;
  do
  {
    v12 = a1[7];
    if ( v12
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v12 + 352LL))(v12, v9, &v20)
      && (unsigned __int8)sub_1666AE0(a1 + 2, v20, a3, &v18)
      || (v10 = a1[8]) != 0
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v10 + 352LL))(v10, v9, &v20)
      && (unsigned __int8)sub_1666AE0(a1 + 2, v20, a3, &v19)
      || (v11 = a1[9]) != 0 && (unsigned __int8)sub_A736E0(v11, v9, a3) )
    {
      v13 = 1;
      goto LABEL_14;
    }
    v9 = (__int64 *)v9[2];
  }
  while ( v9 != v6 );
  v13 = 0;
LABEL_14:
  v14 = v20;
  if ( !v20 )
    return v13;
  v15 = v21;
  if ( (*(_DWORD *)(v20 + 8))-- != 1 )
    return v13;
  sub_15D7BC0(v15, v14);
  return v13;
}

