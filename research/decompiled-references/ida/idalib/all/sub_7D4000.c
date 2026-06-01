_QWORD *__fastcall sub_7D4000(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  char v6; // al
  void *v8; // rsi
  unsigned __int64 v9; // r13
  const void *v10; // r15
  void *v11; // rdi
  void *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16[2]; // [rsp+0h] [rbp-58h] BYREF
  int v17; // [rsp+8h] [rbp-50h]
  int v18; // [rsp+Ch] [rbp-4Ch]
  void *ptr; // [rsp+18h] [rbp-40h]

  ptr = (void *)__readfsqword(0x28u);
  v18 = a3;
  LOBYTE(v17) = 18;
  *(_QWORD *)v16 = off_2B3B7A0;
  v4 = sub_7BFA10(a1, (unsigned __int8 *)v16, a2);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    v6 = *(_BYTE *)(v4 + 8);
    if ( v6 != 19 )
    {
      if ( v6 == 11 && a2 != v5 + 2 )
      {
        v9 = v5[3];
        if ( v9 < 2 )
        {
          a2[1] = 0;
        }
        else
        {
          v10 = (const void *)v5[2];
          v11 = (void *)*a2;
          if ( a2[2] < v9 )
          {
            v15 = qvector_reserve(a2, *a2, v5[3], 1);
            *a2 = v15;
            v11 = (void *)v15;
          }
          a2[1] = v9;
          memmove(v11, v10, v9 - 1);
          *(_BYTE *)(*a2 + v9 - 1) = 0;
        }
      }
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      if ( (unsigned __int64)a2[1] <= 1 )
      {
        v8 = (void *)*a2;
        if ( (unsigned __int64)a2[2] <= 0xD )
        {
          v13 = qvector_reserve(a2, v8, 14, 1);
          *a2 = v13;
          v8 = (void *)v13;
        }
        a2[1] = 14;
        v5 = nullptr;
        qmemcpy(v8, "Unknown error", 13);
        *(_BYTE *)(*a2 + 13) = 0;
      }
      else
      {
        v5 = nullptr;
      }
    }
  }
  else
  {
    v12 = (void *)*a2;
    if ( (unsigned __int64)a2[2] <= 0xB )
    {
      v14 = qvector_reserve(a2, v12, 12, 1);
      *a2 = v14;
      v12 = (void *)v14;
    }
    a2[1] = 12;
    v5 = nullptr;
    qmemcpy(v12, "No response", 11);
    *(_BYTE *)(*a2 + 11) = 0;
  }
  nullsub_260(v16);
  return v5;
}
