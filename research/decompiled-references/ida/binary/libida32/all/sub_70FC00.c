__int64 __fastcall sub_70FC00(__int64 *a1, __int64 a2, void *a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 (__fastcall *v9)(__int64, void *); // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const char *v14; // rax
  const char *v15; // rbx
  size_t v16; // rax
  size_t v17; // r13
  void *v18; // rdi
  size_t v19; // r14
  __int64 v20; // rax

  v9 = **(__int64 (__fastcall ***)(__int64, void *))a2;
  if ( v9 == sub_70F9B0 )
    v10 = qfwrite(*(FILE **)(a2 + 8), a3);
  else
    v10 = ((__int64 (__fastcall *)(__int64, void *, __int64))v9)(a2, a3, a4);
  LOBYTE(v4) = v10 == a4;
  if ( v10 == a4 )
    return v4;
  v14 = (const char *)qstrerror(0xFFFFFFFFLL, a3, v11, v12);
  v15 = v14;
  if ( (unsigned __int64)a1[4] <= 1 )
  {
    if ( v14 )
    {
      v16 = strlen(v14);
      v17 = v16;
      if ( v16 )
      {
        v18 = (void *)*a1;
        v19 = v16 + 1;
        if ( a1[2] < v16 + 1 )
        {
          v20 = qvector_reserve(a1, *a1, v16 + 1, 1);
          *a1 = v20;
          v18 = (void *)v20;
        }
        a1[1] = v19;
        memmove(v18, v15, v17);
        *(_BYTE *)(*a1 + v17) = 0;
        return v4;
      }
    }
    a1[1] = 0;
    return v4;
  }
  else
  {
    sub_3573A0((char **)a1);
    return v4;
  }
}

