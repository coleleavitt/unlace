unsigned __int64 __fastcall sub_1F1E790(__int64 *a1, __int64 a2, _DWORD *a3)
{
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 result; // rax
  _DWORD *v16; // rbx
  int *v17; // rbp
  __int64 v18; // r13
  int v19; // esi

  v5 = sub_1EE7490(*a1);
  v6 = *a1;
  a3[1] = v5;
  v7 = sub_1EE7490(v6);
  v8 = *a1;
  *a3 = v7;
  v9 = sub_1EE7490(v8);
  v10 = *a1;
  a3[2] = v9;
  a3[3] = sub_1EE7490(v10);
  result = *(unsigned int *)(a2 + 20);
  if ( (_DWORD)result )
  {
    v16 = a3 + 4;
    v17 = (int *)(a2 + 48);
    v18 = (__int64)&a3[2 * (unsigned int)(result - 1) + 6];
    do
    {
      v19 = *v17;
      v16 += 2;
      v17 += 6;
      result = sub_1F1E5E0(*a1, v19 & 0x7FFFFFFF, v11, v12, v13, v14);
      *((_QWORD *)v16 - 1) = result;
    }
    while ( (_DWORD *)v18 != v16 );
  }
  return result;
}
