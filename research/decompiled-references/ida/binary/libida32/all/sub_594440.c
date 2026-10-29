unsigned __int64 __fastcall sub_594440(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // r14
  const void *v9; // r8
  void *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rax
  const void *v13; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a2 + 8) <= 1u )
  {
    v11 = add_encoding((int)"<deleted>");
    *(_DWORD *)(a1 + 24) = v11;
    del_encoding(v11);
  }
  else
  {
    *(_DWORD *)(a1 + 24) = add_encoding(*(_QWORD *)a2);
  }
  if ( a2 != a1 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    if ( v7 > 1 )
    {
      v9 = *(const void **)a2;
      v10 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) < v7 )
      {
        v13 = *(const void **)a2;
        v12 = qvector_reserve(a1, *(_QWORD *)a1, *(_QWORD *)(a2 + 8), 1);
        v9 = v13;
        *(_QWORD *)a1 = v12;
        v10 = (void *)v12;
      }
      *(_QWORD *)(a1 + 8) = v7;
      memmove(v10, v9, v7 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v7 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  return sub_593F60(
           (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 8LL) + 600LL),
           *(_DWORD *)(a4 + 12),
           *(_DWORD *)(a3 + 12),
           *(_DWORD *)(a2 + 24),
           *(_DWORD *)(a1 + 24),
           1);
}

