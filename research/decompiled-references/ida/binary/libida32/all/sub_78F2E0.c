__int64 __fastcall sub_78F2E0(__int64 a1, unsigned __int16 *a2, size_t a3)
{
  const void *v4; // r12
  size_t v5; // rbp
  _BYTE *v6; // rax
  size_t v7; // rbx
  void *v8; // rsi
  __int128 v9; // kr00_16
  void *v10; // rdi
  __int64 v11; // rax
  size_t v13; // r14
  void *v14; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !a2 )
    return -1;
  v4 = a2;
  v5 = a3;
  if ( a3 == -1 )
  {
    v5 = *a2;
    v4 = a2 + 1;
  }
  v6 = memchr(v4, 0, v5);
  if ( v6 )
  {
    v7 = v6 - (_BYTE *)v4;
    if ( !a1 )
      return v7;
    ptr = nullptr;
    v5 = v6 - (_BYTE *)v4;
    v16 = 0;
    if ( !v7 )
      goto LABEL_7;
    v13 = v7 + 1;
    if ( v7 == -1 )
    {
      v5 = -1;
      v14 = nullptr;
      goto LABEL_14;
    }
  }
  else
  {
    if ( !a1 )
      return v5;
    ptr = nullptr;
    v13 = v5 + 1;
    v7 = v5;
    v16 = 0;
    if ( !v5 )
    {
LABEL_7:
      v7 = 0;
      v8 = nullptr;
      v9 = 0u;
      goto LABEL_8;
    }
  }
  ptr = (void *)qvector_reserve(&ptr, 0, v13, 1);
  v14 = ptr;
LABEL_14:
  *(_QWORD *)&v16 = v13;
  memmove(v14, v4, v5);
  *((_BYTE *)ptr + v5) = 0;
  v8 = ptr;
  v9 = v16;
LABEL_8:
  v10 = *(void **)a1;
  v11 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v8;
  *(_OWORD *)(a1 + 8) = v9;
  ptr = v10;
  *((_QWORD *)&v16 + 1) = v11;
  if ( v10 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v10);
  }
  return v7;
}

