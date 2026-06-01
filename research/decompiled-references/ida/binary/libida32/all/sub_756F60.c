__int64 __fastcall sub_756F60(__int64 a1, unsigned int a2, unsigned int *a3, char *a4)
{
  bool v5; // zf
  char v7; // dl
  __int64 result; // rax
  unsigned __int64 v9; // rax
  char v10; // edx^3
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r12
  void (*v15)(); // r14
  size_t v16; // r13
  size_t v17; // rax
  size_t v18; // rbx
  void *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rax
  int v22; // [rsp+1Bh] [rbp-5Dh]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v5 = *((_BYTE *)a3 + 4) == 0;
  v25 = __readfsqword(0x28u);
  if ( !v5 )
  {
    v9 = sub_756AE0(a1, a2, a4);
    LOWORD(v22) = v9;
    BYTE2(v22) = BYTE2(v9);
    v10 = BYTE3(v9);
    v11 = HIDWORD(v9);
    HIBYTE(v22) = v10;
    if ( v22 != -1 && (_BYTE)v11 )
      return 1;
    ptr = nullptr;
    v12 = *a3;
    v24 = 0;
    v13 = v12;
    v14 = *(_QWORD *)(a1 + 48) + 176 * v12;
    v15 = *(void (**)())(*(_QWORD *)a1 + 88LL);
    if ( a4 )
    {
      v16 = strlen(a4);
      ptr = (void *)qvector_reserve(&ptr, 0, v16 + 1, 1);
      *(_QWORD *)&v24 = v16 + 1;
      memmove(ptr, a4, v16);
      *((_BYTE *)ptr + v16) = 0;
      if ( v15 == nullsub_213 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v24 = 0;
          qfree(ptr);
        }
LABEL_11:
        v17 = strlen(a4);
        v18 = v17;
        if ( v17 )
        {
          v19 = *(void **)v14;
          v20 = v17 + 1;
          if ( *(_QWORD *)(v14 + 16) < v17 + 1 )
          {
            v21 = qvector_reserve(v14, *(_QWORD *)v14, v17 + 1, 1);
            *(_QWORD *)v14 = v21;
            v19 = (void *)v21;
          }
          *(_QWORD *)(v14 + 8) = v20;
          memmove(v19, a4, v18);
          *(_BYTE *)(*(_QWORD *)v14 + v18) = 0;
          goto LABEL_13;
        }
LABEL_12:
        *(_QWORD *)(v14 + 8) = 0;
LABEL_13:
        *(_DWORD *)(v14 + 164) |= 1u;
        return 0;
      }
      v13 = *a3;
    }
    else if ( v15 == nullsub_213 )
    {
      goto LABEL_12;
    }
    ((void (__fastcall *)(__int64, __int64, __int64, void **))v15)(a1, v13, v14, &ptr);
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
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

