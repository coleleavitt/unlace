__int64 __fastcall sub_36DB0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  char v6; // r15
  __int64 v9; // r12
  __int64 *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rsi
  char *v13; // rdi
  __int64 v14; // rbx
  __int64 result; // rax
  char v16; // dl
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]

  v6 = a5;
  v9 = a2;
  v10 = *(__int64 **)(a1 + 8);
  v11 = v10[1];
  v12 = *v10;
  if ( v10[2] < (unsigned __int64)(v11 + 1) )
  {
    v19 = a3;
    v18 = qvector_reserve((__int64)v10, v12, v11 + 1, 12);
    v11 = v10[1];
    a3 = v19;
    *v10 = v18;
    v12 = v18;
  }
  v13 = (char *)&s1;
  v14 = v12 + 12 * v11;
  *(_QWORD *)v14 = 0;
  *(_WORD *)(v14 + 8) = 0;
  ++v10[1];
  if ( *(_QWORD *)(a3 + 16) )
    v13 = *(char **)(a3 + 8);
  result = sub_36610(v13, 1, (_WORD *)(v14 + 4), *(_BYTE *)(a1 + 28));
  *(_DWORD *)v14 = result;
  if ( (_DWORD)result == -1 )
  {
    if ( !under_debugger )
      interr(10382);
    BUG();
  }
  if ( !*(_WORD *)(v14 + 6) )
  {
    result = 8 * (unsigned int)get_dtype_size();
    *(_WORD *)(v14 + 4) = 0;
    *(_WORD *)(v14 + 6) = result;
  }
  *(_BYTE *)(v14 + 9) = v9;
  if ( !a5 && (unsigned int)v9 <= 7 )
  {
    v16 = 0;
    if ( (dword_8B1A0[v9] & *(_DWORD *)(a1 + 24)) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 16);
      v16 = 2;
      if ( *(_WORD *)(v17 + 24) == 11 && *(_BYTE *)(v17 + 81) == 1 )
        v16 = 2 * (*(_WORD *)(v17 + 46) != *(_WORD *)(v17 + 86));
    }
    result = (unsigned int)(dword_8B1C0[v9] & *(_DWORD *)(a1 + 24));
    v6 = v16 | 1;
    if ( !(_DWORD)result )
      v6 = v16;
  }
  *(_BYTE *)(v14 + 8) = v6;
  return result;
}
