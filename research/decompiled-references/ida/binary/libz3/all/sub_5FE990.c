__int64 __fastcall sub_5FE990(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // r13d
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // r15
  _DWORD *v10; // r14
  _DWORD *v12; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v12 = *(_DWORD **)(*(_QWORD *)(a2 + 40) + 16LL);
  v5 = sub_63D060(a3, v12);
  v6 = v12[8];
  v7 = v5;
  v8 = *(unsigned int *)(a2 + 64);
  if ( !(_DWORD)v8 )
    return 1;
  v9 = a2 + 8 * v8;
  while ( 1 )
  {
    v10 = *(_DWORD **)((*(_QWORD *)(v4 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
    if ( v7 == (unsigned int)sub_63D060(a3, v10) && (v6 < v10[8] || v6 == v10[8] && *v10 >= *v12) )
      break;
    v4 += 8;
    if ( v4 == v9 )
      return 1;
  }
  return 0;
}

