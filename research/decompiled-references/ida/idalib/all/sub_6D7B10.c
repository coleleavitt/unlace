__int64 __fastcall sub_6D7B10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  _DWORD *v8; // rax
  size_t v9; // rbp
  const void *v10; // r12
  void *v11; // rax

  v3 = *(_QWORD *)(a3 + 120);
  if ( (v3 & 4) == 0
    && (v4 = v3 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (v6 = *(_QWORD *)(v4 + 40), (v6 & 7) == 0)
    && (v7 = v6 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (v8 = *(_DWORD **)(v7 + 16), v9 = (unsigned int)*v8, v10 = v8 + 4, *v8) )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v11 = (void *)qvector_reserve(a1, 0, v9 + 1, 1);
    *(_QWORD *)(a1 + 8) = v9 + 1;
    *(_QWORD *)a1 = v11;
    memmove(v11, v10, v9);
    *(_BYTE *)(*(_QWORD *)a1 + v9) = 0;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
  }
  return a1;
}
