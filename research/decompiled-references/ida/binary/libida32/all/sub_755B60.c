__int64 __fastcall sub_755B60(_QWORD *a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v7; // r12
  const char *v8; // rsi
  const char *v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned __int64 v12; // rax
  unsigned int *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rdi
  const char *v16; // rsi
  const char *v17; // rdi
  void *v19; // rdi
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a2 + 24);
  if ( v3 >= a1[7] )
    return 0;
  v4 = *(_QWORD *)(a2 + 32);
  v7 = a1[6] + 176 * v3;
  if ( a3 )
    *(_QWORD *)(a2 + 32) = ++v4;
  if ( v4 >= *(_QWORD *)(v7 + 32) )
    return 0;
  while ( 1 )
  {
    v13 = (unsigned int *)(5 * v4 + *(_QWORD *)(v7 + 24));
    v14 = *v13;
    if ( *((_BYTE *)v13 + 4) )
    {
      v8 = haystack;
      if ( *(_QWORD *)(a2 + 8) )
        v8 = *(const char **)a2;
      v9 = haystack;
      v10 = a1[6] + 176 * v14;
      if ( *(_QWORD *)(v10 + 8) )
        v9 = *(const char **)v10;
      v11 = sub_81B200(v9, v8);
LABEL_11:
      if ( (_BYTE)v11 )
        break;
      goto LABEL_12;
    }
    v15 = a1[5];
    ptr = nullptr;
    v21 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **, _QWORD, _QWORD))(*(_QWORD *)v15 + 16LL))(
            v15,
            &ptr,
            (unsigned int)v14,
            0) )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, unsigned __int64, _QWORD, _QWORD))(*a1 + 112LL))(
        a1,
        *(unsigned int *)(a2 + 24),
        v4,
        (unsigned int)v14,
        0);
      memmove(
        (void *)(5 * v4 + *(_QWORD *)(v7 + 24)),
        (const void *)(5 * v4 + *(_QWORD *)(v7 + 24) + 5),
        5LL * *(_QWORD *)(v7 + 32) - 5 - 5 * v4);
      v19 = ptr;
      v12 = *(_QWORD *)(v7 + 32) - 1LL;
      *(_QWORD *)(v7 + 32) = v12;
      if ( v19 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v19);
        v12 = *(_QWORD *)(v7 + 32);
      }
      goto LABEL_13;
    }
    v16 = haystack;
    if ( *(_QWORD *)(a2 + 8) )
      v16 = *(const char **)a2;
    v17 = haystack;
    if ( (_QWORD)v21 )
      v17 = (const char *)ptr;
    v11 = sub_81B200(v17, v16);
    if ( !ptr )
      goto LABEL_11;
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
    if ( (_BYTE)v11 )
      break;
LABEL_12:
    v12 = *(_QWORD *)(v7 + 32);
    ++v4;
LABEL_13:
    if ( v4 >= v12 )
      return 0;
  }
  *(_QWORD *)(a2 + 32) = v4;
  return v11;
}

