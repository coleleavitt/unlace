__int64 __fastcall sub_7D7620(__int64 a1, char a2, __int64 *a3)
{
  char v4; // al
  void *v7; // rsi
  unsigned __int64 v8; // r12
  const void *v9; // r14
  void *v10; // rdi
  void *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( a1 )
  {
    v4 = *(_BYTE *)(a1 + 8);
    if ( v4 == a2 )
      return a1;
    if ( v4 == 11 && a3 != (__int64 *)(a1 + 16) )
    {
      v8 = *(_QWORD *)(a1 + 24);
      if ( v8 < 2 )
      {
        a3[1] = 0;
      }
      else
      {
        v9 = *(const void **)(a1 + 16);
        v10 = (void *)*a3;
        if ( a3[2] < v8 )
        {
          v14 = qvector_reserve(a3, *a3, v8, 1);
          *a3 = v14;
          v10 = (void *)v14;
        }
        a3[1] = v8;
        memmove(v10, v9, v8 - 1);
        *(_BYTE *)(*a3 + v8 - 1) = 0;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( (unsigned __int64)a3[1] <= 1 )
    {
      v7 = (void *)*a3;
      if ( (unsigned __int64)a3[2] <= 0xD )
      {
        v12 = qvector_reserve(a3, v7, 14, 1);
        *a3 = v12;
        v7 = (void *)v12;
      }
      a3[1] = 14;
      qmemcpy(v7, "Unknown error", 13);
      *(_BYTE *)(*a3 + 13) = 0;
    }
  }
  else
  {
    v11 = (void *)*a3;
    if ( (unsigned __int64)a3[2] <= 0xB )
    {
      v13 = qvector_reserve(a3, v11, 12, 1);
      *a3 = v13;
      v11 = (void *)v13;
    }
    a3[1] = 12;
    qmemcpy(v11, "No response", 11);
    *(_BYTE *)(*a3 + 11) = 0;
  }
  return 0;
}
