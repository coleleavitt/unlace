__int64 __fastcall sub_143F060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // rax
  void *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  void **v10; // rax
  void *v11; // r12

  v6 = *(_QWORD *)(a1 + 2880);
  v7 = *(void **)(a1 + 1144);
  if ( *(_QWORD *)(a1 + 2872) != v6 && *(void **)(v6 - 16) == v7 )
  {
    sub_1441AE0();
    v7 = *(void **)(a1 + 1144);
  }
  v8 = *(unsigned int *)(a1 + 2404);
  if ( (_DWORD)v8 == 8 )
  {
    *(_QWORD *)(a1 + 1144) = 0;
    if ( v7 )
    {
      sub_1466570(v7, a2, a3);
      operator delete(v7, 0x48u);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 1144) = 0;
    v9 = (unsigned int)(v8 + 1);
    v10 = (void **)(a1 + 8 * v8 + 2408);
    *(_DWORD *)(a1 + 2404) = v9;
    v11 = *v10;
    *v10 = v7;
    if ( v11 )
    {
      sub_1466570(v11, a2, v9);
      operator delete(v11, 0x48u);
    }
  }
  return sub_143B8C0(a1, a2, 1, a4, a5, a6);
}
