__int64 __fastcall sub_BE51C0(_QWORD *a1, unsigned int *a2, int *a3, bool *a4)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi

  v5 = *(_QWORD *)(*a1 + 8656LL);
  if ( !v5 )
    return 0;
  v7 = *a2;
  if ( (unsigned int)v7 >= *(_DWORD *)(v5 - 4) )
    return 0;
  v8 = *(_QWORD *)(v5 + 8 * v7);
  if ( !v8 )
    return 0;
  *a4 = 0;
  v10 = sub_15D1F10(a2);
  if ( (unsigned __int8)sub_1673B10(a1 + 4, v10) )
  {
    v11 = a1[10];
    if ( v11 )
      return sub_AB4F30(v11, v8, a3);
  }
  v13 = a1[7];
  if ( v13 )
    return sub_997480(v13, v8, a3, a4);
  v14 = a1[8];
  if ( v14 )
    return sub_99E8B0(v14, v8, a3, a4);
  v15 = a1[9];
  if ( v15 )
    return sub_A73AB0(v15, v8, (__int64)a3, (__int64)a4);
  else
    return 0;
}

