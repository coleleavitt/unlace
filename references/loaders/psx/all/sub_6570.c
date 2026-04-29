__int64 *__fastcall sub_6570(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
  __int64 v6; // rbx
  size_t v7; // rax
  size_t v8; // r12
  void *v10; // rdi
  size_t v11; // r14
  __int64 v12; // rax

  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 184) + 280 * a5;
  if ( v6 && (v7 = strlen((const char *)(*(_QWORD *)(a1 + 184) + 280 * a5)), (v8 = v7) != 0) )
  {
    v10 = (void *)*v5;
    v11 = v7 + 1;
    if ( v5[2] < v7 + 1 )
    {
      v12 = qvector_reserve(v5, *v5, v7 + 1, 1);
      *v5 = v12;
      v10 = (void *)v12;
    }
    v5[1] = v11;
    memmove(v10, (const void *)v6, v8);
    *(_BYTE *)(*v5 + v8) = 0;
  }
  else
  {
    v5[1] = 0;
  }
  sub_46B0(*a2 + 3, (__int64)"%d", *(_DWORD *)(v6 + 16) - *(_DWORD *)(v6 + 12));
  return sub_46B0(*a2 + 6, (__int64)"%s", (const char *)(v6 + 24));
}
