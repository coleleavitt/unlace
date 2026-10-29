__int64 __fastcall sub_1882A0(__int64 a1, const char *a2, __int64 a3)
{
  size_t v3; // rax
  char *v4; // r10
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // r14
  char *v9; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rax

  v3 = strlen(a2);
  v4 = *(char **)a1;
  v5 = v3;
  v6 = 15;
  if ( *(_QWORD *)a1 != a1 + 16 )
    v6 = *(_QWORD *)(a1 + 16);
  if ( v6 < v5 )
  {
    v11 = 0x7FFFFFFFFFFFFFFFLL;
    v12 = 2 * v6;
    if ( v12 <= 0x7FFFFFFFFFFFFFFFLL )
      v11 = v12;
    if ( v5 >= v12 )
      v11 = v5;
    if ( v11 + 1 < 0 )
      std::__throw_bad_alloc();
    v7 = (_BYTE *)operator new(v11 + 1);
    v8 = v7;
    if ( v5 == 1 )
      *v7 = *a2;
    else
      qmemcpy(v7, a2, v5);
    if ( a1 + 16 != *(_QWORD *)a1 )
      operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 16) = v11;
  }
  else if ( a2 < v4 || &v4[*(_QWORD *)(a1 + 8)] < a2 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
        *v4 = *a2;
      else
        qmemcpy(v4, a2, v5);
    }
  }
  else
  {
    std::string::_M_replace_cold();
  }
  v9 = *(char **)a1;
  *(_QWORD *)(a1 + 8) = v5;
  v9[v5] = 0;
  return a3;
}

