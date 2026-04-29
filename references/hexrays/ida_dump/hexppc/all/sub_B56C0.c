__int64 __fastcall sub_B56C0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r14
  const void *v9; // rbx
  void *v10; // rdi
  __int64 v11; // rax

  v5 = a2[3];
  if ( v5 > 1 )
  {
    if ( a1 != a2 + 2 )
    {
      v9 = (const void *)a2[2];
      v10 = (void *)*a1;
      if ( a1[2] < v5 )
      {
        v11 = qvector_reserve(a1, v10, v5, 1);
        *a1 = v11;
        v10 = (void *)v11;
      }
      a1[1] = v5;
      memmove(v10, v9, v5 - 1);
      *(_BYTE *)(*a1 + v5 - 1) = 0;
    }
    return 1;
  }
  else if ( (get_tinfo_property(a2[8], 2) & 0x2F) == 0xD )
  {
    return sub_B5780(a1, a2 + 8, 0, a4, a3);
  }
  else
  {
    return 0;
  }
}
