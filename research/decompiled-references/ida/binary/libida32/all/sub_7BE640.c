__int64 __fastcall sub_7BE640(__int64 *a1, size_t *a2, size_t a3)
{
  unsigned int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // r15
  size_t v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  const void *v11; // rax
  size_t v12; // rdx
  __int64 v14; // rax

  v5 = unpack_dd(a2);
  v6 = 1;
  if ( v5 )
  {
    v7 = a1[1];
    v8 = v5;
    v9 = *a1;
    v10 = v5 + v7;
    if ( a1[2] < v10 )
    {
      v14 = qvector_reserve(a1, v9, v5 + v7, 1);
      *a1 = v14;
      v9 = v14;
    }
    a1[1] = v10;
    v11 = (const void *)*a2;
    v12 = v8 + *a2;
    if ( __CFADD__(v8, *a2) || a3 < v12 )
    {
      return 0;
    }
    else
    {
      *a2 = v12;
      LOBYTE(v6) = memcpy((void *)(v9 + v7), v11, v8) != nullptr;
    }
  }
  return v6;
}

