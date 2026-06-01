__int64 __fastcall sub_42B1D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  size_t v4; // r13
  const void *v5; // r12
  void *v6; // rdi
  __int64 v8; // r12
  __int64 v9; // rax

  v3 = a2[1];
  if ( v3 )
  {
    v8 = *a2;
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v5 = (const void *)(v8 + 1);
    v4 = v3 - 2;
    if ( v3 == 2 )
      return a1;
    if ( --v3 )
    {
      v9 = qvector_reserve(a1, 0, v3, 1);
      *(_QWORD *)a1 = v9;
      v6 = (void *)v9;
    }
    else
    {
      v6 = nullptr;
      v4 = -1;
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    v4 = -1;
    v5 = &unk_5DBB73;
    *(_QWORD *)(a1 + 16) = 0;
    v6 = nullptr;
  }
  *(_QWORD *)(a1 + 8) = v3;
  memmove(v6, v5, v4);
  *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
  return a1;
}
