__int64 __fastcall sub_82DBD0(__int64 *a1)
{
  __int64 v1; // r13
  const void *v3; // r12
  size_t v4; // rax
  size_t v5; // rbp
  __int64 v7; // rsi
  void *v8; // rdi
  size_t v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax

  v1 = qword_2CAD040;
  qmutex_lock(qword_2CAD040);
  if ( qword_2CAD038 )
  {
    v3 = (const void *)(qword_2CAD038 + 8);
    v4 = strlen((const char *)(qword_2CAD038 + 8));
    v5 = v4;
    if ( v4 )
    {
      v8 = (void *)*a1;
      v9 = v4 + 1;
      if ( a1[2] < v4 + 1 )
      {
        v11 = qvector_reserve(a1, *a1, v4 + 1, 1);
        *a1 = v11;
        v8 = (void *)v11;
      }
      a1[1] = v9;
      memmove(v8, v3, v5);
      *(_BYTE *)(*a1 + v5) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  else
  {
    v7 = *a1;
    if ( (unsigned __int64)a1[2] <= 3 )
    {
      v10 = qvector_reserve(a1, v7, 4, 1);
      *a1 = v10;
      v7 = v10;
    }
    a1[1] = 4;
    *(_WORD *)v7 = 25705;
    *(_BYTE *)(v7 + 2) = 97;
    *(_BYTE *)(*a1 + 3) = 0;
  }
  return qmutex_unlock(v1);
}

