__int64 __fastcall sub_17671E0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r12
  __int64 v12; // rsi
  int v13; // eax
  int v14; // ebx
  unsigned __int64 v15; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  if ( v7 == 1 )
    return 1;
  v8 = *a1;
  v9 = v6 & 0xFFFFFFFFFFFFFFFELL;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v12 = *(unsigned int *)(v8 + 12632);
  if ( (_DWORD)v12 || v10 != v9 || (result = a2, *(_QWORD *)(a2 + 24) != v11) )
  {
    v13 = sub_EEB7E0(v10, v12, a3);
    v14 = *(_DWORD *)(a2 + 4);
    v15 = v11;
    return sub_1930830(v8, 0, v9, v13, (unsigned int)&v15, 1, v14);
  }
  return result;
}
