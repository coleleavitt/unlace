__int64 __fastcall sub_727C20(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // ax
  const char *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const void *v10; // rbx
  void *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-30h]

  v5 = *(_WORD *)(a3 + 24);
  if ( v5 != 4 )
  {
    if ( v5 != 2 || (v13 = a3, v7 = sub_780220(a2), a3 = v13, *(_QWORD *)(v7 + 8) <= 1u) )
    {
      v6 = (const char *)qstrerror(1348, a2, a3, a4);
      sub_727620(a2, (__int64)"%s", v6);
    }
  }
  if ( (__int64 *)a3 != a1 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    if ( v8 > 1 )
    {
      v10 = *(const void **)a3;
      v11 = (void *)*a1;
      if ( a1[2] < v8 )
      {
        v12 = qvector_reserve(a1, *a1, *(_QWORD *)(a3 + 8), 1);
        *a1 = v12;
        v11 = (void *)v12;
      }
      a1[1] = v8;
      memmove(v11, v10, v8 - 1);
      *(_BYTE *)(*a1 + v8 - 1) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  return 1;
}

