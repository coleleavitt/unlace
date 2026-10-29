void __fastcall sub_6D8480(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  int v6; // eax
  const void *v7; // r15
  void *v8; // rdi
  __int64 v9; // rax

  if ( (__int64 *)a3 != a2 )
  {
    v5 = *(_QWORD *)(a3 + 8);
    if ( v5 > 1 )
    {
      v7 = *(const void **)a3;
      v8 = (void *)*a2;
      if ( a2[2] < v5 )
      {
        v9 = qvector_reserve(a2, *a2, *(_QWORD *)(a3 + 8), 1);
        *a2 = v9;
        v8 = (void *)v9;
      }
      a2[1] = v5;
      memmove(v8, v7, v5 - 1);
      *(_BYTE *)(*a2 + v5 - 1) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  if ( *(_QWORD *)(a1 + 568) )
  {
    v6 = *(_DWORD *)(a3 + 60);
    if ( v6 == 5373 || (unsigned int)(v6 - 5375) <= 2 )
      sub_6D7BA0(a1, (__int64)a2);
  }
}

