__int64 __fastcall sub_7774B0(__int64 a1, unsigned __int64 a2, __int64 *a3, char *a4)
{
  bool v5; // zf
  char v7; // dl
  __int64 result; // rax
  char v9; // dl
  __int64 v10; // rsi
  __int64 v11; // r12
  void (*v12)(); // r14
  size_t v13; // r13
  size_t v14; // rax
  size_t v15; // rbx
  void *v16; // rdi
  size_t v17; // r13
  __int64 v18; // rax
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v5 = *((_BYTE *)a3 + 8) == 0;
  v21 = __readfsqword(0x28u);
  if ( !v5 )
  {
    if ( sub_777000(a1, a2, a4) != -1 && v9 )
      return 1;
    ptr = nullptr;
    v10 = *a3;
    v20 = 0;
    v11 = *(_QWORD *)(a1 + 48) + 176 * v10;
    v12 = *(void (**)())(*(_QWORD *)a1 + 88LL);
    if ( a4 )
    {
      v13 = strlen(a4);
      ptr = (void *)qvector_reserve(&ptr, 0, v13 + 1, 1);
      *(_QWORD *)&v20 = v13 + 1;
      memmove(ptr, a4, v13);
      *((_BYTE *)ptr + v13) = 0;
      if ( v12 == nullsub_234 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v20 = 0;
          qfree(ptr);
        }
LABEL_11:
        v14 = strlen(a4);
        v15 = v14;
        if ( v14 )
        {
          v16 = *(void **)v11;
          v17 = v14 + 1;
          if ( *(_QWORD *)(v11 + 16) < v14 + 1 )
          {
            v18 = qvector_reserve(v11, *(_QWORD *)v11, v14 + 1, 1);
            *(_QWORD *)v11 = v18;
            v16 = (void *)v18;
          }
          *(_QWORD *)(v11 + 8) = v17;
          memmove(v16, a4, v15);
          *(_BYTE *)(*(_QWORD *)v11 + v15) = 0;
          goto LABEL_13;
        }
LABEL_12:
        *(_QWORD *)(v11 + 8) = 0;
LABEL_13:
        *(_DWORD *)(v11 + 168) |= 1u;
        return 0;
      }
      v10 = *a3;
    }
    else if ( v12 == nullsub_234 )
    {
      goto LABEL_12;
    }
    ((void (__fastcall *)(__int64, __int64, __int64, void **))v12)(a1, v10, v11, &ptr);
    if ( ptr )
    {
      *(_QWORD *)&v20 = 0;
      qfree(ptr);
    }
    if ( !a4 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         *a3,
         a4);
  result = 6;
  if ( v7 )
    return 0;
  return result;
}
