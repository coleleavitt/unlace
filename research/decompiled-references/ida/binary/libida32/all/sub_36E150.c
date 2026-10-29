__int64 __fastcall sub_36E150(__int64 a1, _QWORD *a2)
{
  _QWORD **v2; // rdx
  __int64 v3; // rax
  __int64 *v5; // rbx
  unsigned __int64 v6; // rbp
  const void *v7; // r13
  void *v8; // rdi
  __int64 v9; // rax

  v2 = *(_QWORD ***)a1;
  v3 = ***(_QWORD ***)a1 + 56LL * *a2;
  if ( *(_QWORD *)(v3 + 48) != *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
    return 0;
  v5 = v2[2];
  if ( (__int64 *)v3 != v5 )
  {
    v6 = *(_QWORD *)(v3 + 8);
    if ( v6 < 2 )
    {
      v5[1] = 0;
    }
    else
    {
      v7 = *(const void **)v3;
      v8 = (void *)*v5;
      if ( v5[2] < v6 )
      {
        v9 = qvector_reserve(v2[2], *v5, *(_QWORD *)(v3 + 8), 1);
        *v5 = v9;
        v8 = (void *)v9;
      }
      v5[1] = v6;
      memmove(v8, v7, v6 - 1);
      *(_BYTE *)(*v5 + v6 - 1) = 0;
    }
  }
  return 1;
}

