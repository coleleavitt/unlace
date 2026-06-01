__int64 __fastcall sub_91B10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  const char *v11; // rax
  const char *v12; // rbp
  size_t v13; // rax
  size_t v14; // r13
  void *v15; // rdi
  size_t v16; // r14
  __int64 v17; // rax

  v8 = sub_923E0(a2, a3, a4);
  v9 = v8;
  if ( v8 != a4 && a5 )
  {
    v9 = -1;
    sub_8F860(3u);
  }
  else if ( v8 >= 0 )
  {
    return v9;
  }
  v11 = (const char *)sub_978C0(0xFFFFFFFFLL);
  v12 = v11;
  if ( (unsigned __int64)a1[4] <= 1 )
  {
    if ( v11 )
    {
      v13 = strlen(v11);
      v14 = v13;
      if ( v13 )
      {
        v15 = (void *)*a1;
        v16 = v13 + 1;
        if ( a1[2] < v13 + 1 )
        {
          v17 = sub_96080(a1, *a1, v13 + 1, 1);
          *a1 = v17;
          v15 = (void *)v17;
        }
        a1[1] = v16;
        memmove(v15, v12, v14);
        *(_BYTE *)(*a1 + v14) = 0;
        return v9;
      }
    }
    a1[1] = 0;
    return v9;
  }
  else
  {
    sub_17D80((char **)a1);
    return v9;
  }
}

