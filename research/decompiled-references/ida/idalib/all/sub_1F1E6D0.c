unsigned __int64 __fastcall sub_1F1E6D0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 result; // rax
  __int64 v14; // rbx
  int *v15; // rbp
  __int64 v16; // r13
  int v17; // esi

  *(_DWORD *)a3 = sub_1EE7490(*a1);
  if ( !sub_1F194E0(*a1, a2, v4, v5, v6, v7) )
    v8 = 0;
  *(_QWORD *)(a3 + 8) = v8;
  *(_DWORD *)(a3 + 20) = sub_1EE7490(*a1);
  *(_DWORD *)(a3 + 16) = sub_1EE7490(*a1);
  *(_DWORD *)(a3 + 24) = sub_1EE7490(*a1);
  *(_DWORD *)(a3 + 28) = sub_1EE7490(*a1);
  result = *(unsigned int *)(a2 + 20);
  if ( (_DWORD)result )
  {
    v14 = a3 + 32;
    v15 = (int *)(a2 + 48);
    v16 = a3 + 8LL * (unsigned int)(result - 1) + 40;
    do
    {
      v17 = *v15;
      v14 += 8;
      v15 += 6;
      result = sub_1F1E5E0(*a1, v17 & 0x7FFFFFFF, v9, v10, v11, v12);
      *(_QWORD *)(v14 - 8) = result;
    }
    while ( v16 != v14 );
  }
  return result;
}
