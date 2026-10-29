__int64 __fastcall sub_53EF30(__int64 a1, int a2, const char **a3, _BYTE *a4)
{
  unsigned int v5; // r12d
  unsigned int *v7; // rax
  const char *v8; // r13
  __int64 v9; // rax
  const char **v10; // r14
  const char *v11; // rsi
  int v12; // eax
  unsigned __int64 v13; // rbp
  __int64 v14; // rdi
  const char *v15; // rdx
  const char *v17; // rbp
  void *v18; // rdi
  const void *v19; // r13
  __int64 v20; // rax
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a2 != 1 )
    return 0;
  v5 = *(_BYTE *)(a1 + 112) & 1;
  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( a4 )
    {
      if ( !*a4 )
      {
        v7 = *(unsigned int **)(a1 + 120);
        if ( v7 )
        {
          set_tinfo(*v7, 0);
          del_named_type(0, *a3, 0);
        }
      }
      copy_tinfo_t(a1 + 128);
    }
    v8 = a3[1];
    v9 = *(_QWORD *)(a1 + 144);
    v10 = (const char **)(a1 + 136);
    if ( v8 )
    {
      v11 = *a3;
      if ( !v9 )
      {
        if ( !*v11 || v10 == a3 )
          goto LABEL_12;
LABEL_21:
        if ( v8 != (_BYTE *)&dword_0 + 1 )
        {
          v17 = *a3;
          v18 = *(void **)(a1 + 136);
          if ( *(_QWORD *)(a1 + 152) < (unsigned __int64)v8 )
          {
            v20 = qvector_reserve(a1 + 136, *(_QWORD *)(a1 + 136), v8, 1);
            *(_QWORD *)(a1 + 136) = v20;
            v18 = (void *)v20;
          }
          *(_QWORD *)(a1 + 144) = v8;
          memmove(v18, v17, (size_t)(v8 - 1));
          v8[*(_QWORD *)(a1 + 136) - 1] = 0;
          goto LABEL_12;
        }
LABEL_28:
        *(_QWORD *)(a1 + 144) = 0;
LABEL_12:
        v13 = *(_QWORD *)(a1 + 72);
        ptr = nullptr;
        v14 = a1 + 128;
        v22 = 0;
        if ( v13 > 1
          && (v19 = *(const void **)(a1 + 64),
              ptr = (void *)qvector_reserve(&ptr, 0, v13, 1),
              *(_QWORD *)&v22 = v13,
              memmove(ptr, v19, v13 - 1),
              v14 = a1 + 128,
              *((char *)ptr + v13 - 1) = 0,
              (_QWORD)v22) )
        {
          v15 = (const char *)ptr;
        }
        else
        {
          v15 = haystack;
        }
        set_tinfo_property4(v14, 5, v15, 0, 0, 0);
        if ( ptr )
        {
          *(_QWORD *)&v22 = 0;
          qfree(ptr);
        }
        return v5;
      }
    }
    else
    {
      v11 = haystack;
      if ( !v9 )
        goto LABEL_12;
    }
    v12 = strcmp(*(const char **)(a1 + 136), v11);
    if ( v10 == a3 || !v12 )
      goto LABEL_12;
    if ( !v8 )
      goto LABEL_28;
    goto LABEL_21;
  }
  return v5;
}

