void __fastcall sub_42C150(__int64 a1, _BYTE *a2)
{
  void *v2; // r14
  signed __int64 v3; // rbx
  __int64 v4; // rbp
  bool v5; // cf
  unsigned __int64 v6; // rbp
  _BYTE *v7; // r12
  __int64 v8; // rbx

  v2 = *(void **)a1;
  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( v3 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v4 = 1;
  if ( v3 )
    v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = __CFADD__(v3, v4);
  v6 = v3 + v4;
  if ( v5 )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v7 = (_BYTE *)operator new(v6);
  v7[v3] = *a2;
  if ( v3 > 0 )
    memcpy(v7, v2, v3);
  v8 = (__int64)&v7[v3 + 1];
  if ( v2 )
    operator delete(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = &v7[v6];
}

