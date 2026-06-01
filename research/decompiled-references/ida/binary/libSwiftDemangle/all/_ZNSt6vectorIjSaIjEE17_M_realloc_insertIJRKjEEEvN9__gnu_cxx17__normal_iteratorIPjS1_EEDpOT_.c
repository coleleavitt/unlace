void __fastcall std::vector<unsigned int>::_M_realloc_insert<unsigned int const&>(__int64 a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v4; // r12
  _BYTE *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  bool v8; // cf
  unsigned __int64 v9; // rax
  signed __int64 v10; // rdx
  char *v11; // rbx
  char *v12; // r13
  signed __int64 v13; // r12
  char *v14; // rcx
  char *v15; // r12
  unsigned __int64 v16; // rbx
  char *v17; // rax
  signed __int64 v18; // [rsp+0h] [rbp-48h]
  _DWORD *v19; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_BYTE **)a1;
  v6 = (v4 - *(_QWORD *)a1) >> 2;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_insert");
  v7 = 1;
  if ( v6 )
    v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  v8 = __CFADD__(v7, v6);
  v9 = v7 + v6;
  v10 = a2 - v5;
  if ( v8 )
  {
    v16 = 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( !v9 )
    {
      v11 = nullptr;
      v12 = nullptr;
      goto LABEL_7;
    }
    if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
      v9 = 0x1FFFFFFFFFFFFFFFLL;
    v16 = 4 * v9;
  }
  v19 = a3;
  v17 = (char *)operator new(v16);
  v10 = a2 - v5;
  a3 = v19;
  v12 = v17;
  v11 = &v17[v16];
LABEL_7:
  *(_DWORD *)&v12[v10] = *a3;
  if ( v10 > 0 )
  {
    v18 = v10;
    memmove(v12, v5, v10);
    v10 = v18;
  }
  v13 = v4 - (_QWORD)a2;
  v14 = &v12[v10 + 4];
  if ( v13 > 0 )
    v14 = (char *)memmove(&v12[v10 + 4], a2, v13);
  v15 = &v14[v13];
  if ( v5 )
    operator delete(v5, *(_QWORD *)(a1 + 16) - (_QWORD)v5);
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = v15;
  *(_QWORD *)(a1 + 16) = v11;
}

