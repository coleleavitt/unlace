unsigned __int64 __fastcall sub_753EB0(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  void (*v4)(); // r13
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r12
  _QWORD *v8; // r12
  size_t v9; // rax
  size_t v10; // rbp
  _QWORD *v12; // rsi
  void *v13; // rdi
  size_t v14; // r13
  __int64 v15; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v2 = *a1;
  v18 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = *(void (**)())(v2 + 136);
  v17 = 0;
  if ( !a2 )
  {
    v8 = (_QWORD *)a1[5];
    v12 = v8 + 2;
    if ( v4 == nullsub_217 )
    {
LABEL_6:
      v8[3] = 0;
      return v18 - __readfsqword(0x28u);
    }
    goto LABEL_9;
  }
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  ptr = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
  *(_QWORD *)&v17 = v6;
  memmove(ptr, a2, v7);
  *((_BYTE *)ptr + v7) = 0;
  v8 = (_QWORD *)a1[5];
  if ( v4 != nullsub_217 )
  {
    v12 = v8 + 2;
LABEL_9:
    ((void (__fastcall *)(__int64 *, _QWORD *, void **))v4)(a1, v12, &ptr);
    if ( ptr )
    {
      *(_QWORD *)&v17 = 0;
      qfree(ptr);
    }
    v8 = (_QWORD *)a1[5];
    if ( !a2 )
      goto LABEL_6;
    v9 = strlen(a2);
    v10 = v9;
    if ( !v9 )
      goto LABEL_6;
    goto LABEL_13;
  }
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
    v8 = (_QWORD *)a1[5];
  }
  v9 = strlen(a2);
  v10 = v9;
  if ( !v9 )
    goto LABEL_6;
LABEL_13:
  v13 = (void *)v8[2];
  v14 = v9 + 1;
  if ( v8[4] < v9 + 1 )
  {
    v15 = qvector_reserve(v8 + 2, v8[2], v14, 1);
    v8[2] = v15;
    v13 = (void *)v15;
  }
  v8[3] = v14;
  memmove(v13, a2, v10);
  *(_BYTE *)(v8[2] + v10) = 0;
  return v18 - __readfsqword(0x28u);
}

