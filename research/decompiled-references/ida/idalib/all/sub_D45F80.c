__int64 __fastcall sub_D45F80(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rdi
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  void *v12; // r12
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v8 = (_QWORD *)(a1 + 384);
  v8[107] = *a3;
  v9 = (void *)sub_D45A20(v8, a2, (__int64)a3, a4, a5, a6);
  v11 = v10;
  v12 = v9;
  v13 = ((unsigned __int64)(unsigned int)v10 + 63) >> 6;
  if ( v13 != 1 )
    memset(v9, 0, 8 * v13);
  v14 = (_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 16);
  *v14 = v12;
  v14[1] = v11;
  return 1;
}
