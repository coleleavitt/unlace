char __fastcall sub_3F8480(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned int a4, int a5, double a6)
{
  __int64 v10; // rax
  unsigned int v11; // r15d
  int v12; // eax
  __int64 v13; // rsi
  int v14; // r13d
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  int v21; // r10d
  __int64 v22; // r13
  int dtype_size; // ebp
  char result; // al
  int v26; // [rsp+Ch] [rbp-3Ch]

  v10 = *(_QWORD *)(a1 + 832);
  v11 = *(_DWORD *)(v10 + 628);
  v26 = *(_DWORD *)(v10 + 620);
  sub_3F55F0(a1, 0xCu, a5);
  v12 = sub_3F6740(a1, a3, a2, v11, 1, a6);
  v13 = a4;
  v14 = v12;
  v15 = sub_3F6740(a1, a4, a2, v11, 1, a6);
  v20 = sub_3EAA70(a1 + 24, v13, v16, v17, v18, v19);
  v21 = v26;
  if ( !v20 )
    v21 = -1;
  sub_1D6250(a1, a2, v14, v15, a5, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL), v21);
  v22 = *(_QWORD *)(a1 + 832);
  dtype_size = get_dtype_size(a2);
  result = sub_11E2E0(0xCu);
  if ( result )
  {
    if ( *(_DWORD *)(v22 + 80) == 8 )
    {
      result = a5 - 8;
      if ( (unsigned int)(a5 - 8) <= 0x107 && dtype_size == 4 )
        return sub_1D6180(a1, 2u, 7u, a5, a5, 0);
    }
  }
  return result;
}
