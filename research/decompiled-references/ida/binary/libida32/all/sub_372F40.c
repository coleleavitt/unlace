__int64 __fastcall sub_372F40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // r12
  size_t v8; // r13
  const char *i; // rdi
  __int64 v11; // rcx
  void **p_ptr; // rdx
  int v14; // eax
  _DWORD *v15; // rsi
  int v16; // r8d
  __int64 v17; // rax
  const char *v18; // r15
  size_t v19; // rax
  size_t v20; // rbp
  void *v21; // rax
  int v22; // [rsp+0h] [rbp-A0h]
  size_t v23; // [rsp+0h] [rbp-A0h]
  void *ptr; // [rsp+18h] [rbp-88h] BYREF
  __int128 v25; // [rsp+20h] [rbp-80h]
  __int64 (__fastcall **v26)(); // [rsp+38h] [rbp-68h] BYREF
  void *v27; // [rsp+40h] [rbp-60h]
  __int128 v28; // [rsp+48h] [rbp-58h]
  unsigned __int64 v29; // [rsp+60h] [rbp-40h]

  v6 = nullptr;
  v8 = *(_QWORD *)(a1 + 16);
  v29 = __readfsqword(0x28u);
  v25 = 0;
  ptr = nullptr;
  if ( !v8
    || (v6 = (char *)qalloc_or_throw(v8, a2, a3, a4, a5, a6), memcpy(v6, *(const void **)(a1 + 8), v8), *v6 != 48)
    || v6[1] )
  {
    for ( i = (const char *)qstrtok(v6, ","); i; i = (const char *)qstrtok(nullptr, ",") )
    {
      v14 = strtol(i, nullptr, 10);
      v15 = ptr;
      v16 = v14;
      v17 = v25;
      if ( *((_QWORD *)&v25 + 1) < (unsigned __int64)(v25 + 1) )
      {
        v22 = v16;
        ptr = (void *)qvector_reserve(&ptr, ptr, v25 + 1, 4);
        v15 = ptr;
        v16 = v22;
        v17 = v25;
      }
      v15[v17] = v16;
      *(_QWORD *)&v25 = v25 + 1;
    }
  }
  v27 = nullptr;
  v26 = &off_2AFC830;
  v11 = *(unsigned int *)(a1 + 40);
  p_ptr = &ptr;
  v28 = 0;
  if ( !(_QWORD)v25 )
    p_ptr = nullptr;
  if ( !(unsigned int)print_decls(&v26, 0, p_ptr, v11) )
  {
    free_idcv(a2);
LABEL_7:
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    goto LABEL_8;
  }
  v18 = haystack;
  if ( (_QWORD)v28 )
    v18 = (const char *)v27;
  free_idcv(a2);
  if ( !v18 )
    goto LABEL_7;
  v19 = strlen(v18);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  v20 = v19;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v19 )
  {
    v23 = v19 + 1;
    v21 = (void *)qvector_reserve(a2 + 8, 0, v19 + 1, 1);
    *(_QWORD *)(a2 + 8) = v21;
    *(_QWORD *)(a2 + 16) = v23;
    memmove(v21, v18, v20);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v20) = 0;
  }
LABEL_8:
  v26 = &off_2AFC830;
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  if ( v6 )
    qfree(v6);
  if ( ptr )
  {
    *(_QWORD *)&v25 = 0;
    qfree(ptr);
  }
  return 0;
}

