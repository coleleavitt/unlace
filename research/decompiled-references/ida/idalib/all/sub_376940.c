__int64 __fastcall sub_376940(__int64 a1, __int64 a2)
{
  char *v2; // r12
  size_t v4; // r13
  const char *i; // rdi
  __int64 v7; // rcx
  void **p_ptr; // rdx
  int v10; // eax
  _DWORD *v11; // rsi
  int v12; // r8d
  __int64 v13; // rax
  const char *v14; // r15
  size_t v15; // rax
  size_t v16; // rbp
  void *v17; // rax
  int v18; // [rsp+0h] [rbp-A0h]
  size_t v19; // [rsp+0h] [rbp-A0h]
  void *ptr; // [rsp+18h] [rbp-88h] BYREF
  __int128 v21; // [rsp+20h] [rbp-80h]
  __int64 (__fastcall **v22)(); // [rsp+38h] [rbp-68h] BYREF
  void *v23; // [rsp+40h] [rbp-60h]
  __int128 v24; // [rsp+48h] [rbp-58h]
  unsigned __int64 v25; // [rsp+60h] [rbp-40h]

  v2 = nullptr;
  v4 = *(_QWORD *)(a1 + 16);
  v25 = __readfsqword(0x28u);
  v21 = 0;
  ptr = nullptr;
  if ( !v4 || (v2 = (char *)qalloc_or_throw(v4), memcpy(v2, *(const void **)(a1 + 8), v4), *v2 != 48) || v2[1] )
  {
    for ( i = (const char *)qstrtok(v2, ","); i; i = (const char *)qstrtok(nullptr, ",") )
    {
      v10 = strtol(i, nullptr, 10);
      v11 = ptr;
      v12 = v10;
      v13 = v21;
      if ( *((_QWORD *)&v21 + 1) < (unsigned __int64)(v21 + 1) )
      {
        v18 = v12;
        ptr = (void *)qvector_reserve(&ptr, ptr, v21 + 1, 4);
        v11 = ptr;
        v12 = v18;
        v13 = v21;
      }
      v11[v13] = v12;
      *(_QWORD *)&v21 = v21 + 1;
    }
  }
  v23 = nullptr;
  v22 = &off_2B25910;
  v7 = *(unsigned int *)(a1 + 40);
  p_ptr = &ptr;
  v24 = 0;
  if ( !(_QWORD)v21 )
    p_ptr = nullptr;
  if ( !(unsigned int)print_decls(&v22, 0, p_ptr, v7) )
  {
    free_idcv(a2);
LABEL_7:
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    goto LABEL_8;
  }
  v14 = haystack;
  if ( (_QWORD)v24 )
    v14 = (const char *)v23;
  free_idcv(a2);
  if ( !v14 )
    goto LABEL_7;
  v15 = strlen(v14);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  v16 = v15;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v15 )
  {
    v19 = v15 + 1;
    v17 = (void *)qvector_reserve(a2 + 8, 0, v15 + 1, 1);
    *(_QWORD *)(a2 + 8) = v17;
    *(_QWORD *)(a2 + 16) = v19;
    memmove(v17, v14, v16);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v16) = 0;
  }
LABEL_8:
  v22 = &off_2B25910;
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( v2 )
    qfree(v2);
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
  }
  return 0;
}
