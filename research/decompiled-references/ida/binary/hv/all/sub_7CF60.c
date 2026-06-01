__int64 __fastcall sub_7CF60(__int64 *a1, __int64 a2, void *a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 (__fastcall *v7)(__int64, void *); // rax
  __int64 v8; // rax
  const char *v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  size_t v13; // r13
  void *v14; // rdi
  size_t v15; // r14
  __int64 v16; // rax

  v7 = **(__int64 (__fastcall ***)(__int64, void *))a2;
  if ( v7 == sub_7CD20 )
    v8 = sub_958B0(*(FILE **)(a2 + 8), a3);
  else
    v8 = ((__int64 (__fastcall *)(__int64, void *, __int64))v7)(a2, a3, a4);
  LOBYTE(v4) = v8 == a4;
  if ( v8 == a4 )
    return v4;
  v10 = (const char *)sub_978C0(0xFFFFFFFFLL);
  v11 = v10;
  if ( (unsigned __int64)a1[4] <= 1 )
  {
    if ( v10 )
    {
      v12 = strlen(v10);
      v13 = v12;
      if ( v12 )
      {
        v14 = (void *)*a1;
        v15 = v12 + 1;
        if ( a1[2] < v12 + 1 )
        {
          v16 = sub_96080(a1, *a1, v12 + 1, 1);
          *a1 = v16;
          v14 = (void *)v16;
        }
        a1[1] = v15;
        memmove(v14, v11, v13);
        *(_BYTE *)(*a1 + v13) = 0;
        return v4;
      }
    }
    a1[1] = 0;
    return v4;
  }
  else
  {
    sub_17D80((char **)a1);
    return v4;
  }
}

