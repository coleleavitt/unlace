__int64 __fastcall sub_69CAE0(__int64 a1, const char *a2, __int64 a3, __int64 *a4)
{
  char *v6; // rax
  void *v7; // r13
  const char *v8; // r14
  const char *v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // ebp
  void *v12; // r15
  size_t v13; // rax
  size_t v14; // rbx
  void *v16; // rdi
  size_t v17; // r13
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v21 = 0;
  ptr = nullptr;
  v6 = sub_69C980(a2, (__int64)&ptr);
  v7 = ptr;
  v8 = v6;
  if ( !v6 )
    goto LABEL_16;
  v9 = haystack;
  v10 = *(_QWORD *)(a1 + 8);
  if ( (_QWORD)v21 )
    v9 = (const char *)ptr;
  v19 = *((_QWORD *)&v21 + 1);
  v11 = sub_632AC0(a1, v10, v9);
  if ( v11 )
  {
    v12 = v7;
    if ( a3 )
    {
      v12 = *(void **)a3;
      *(_QWORD *)a3 = v7;
      *(__m128 *)(a3 + 8) = _mm_loadh_ps((const double *)&v19);
    }
    if ( a4 )
    {
      v13 = strlen(v8);
      v14 = v13;
      if ( v13 )
      {
        v16 = (void *)*a4;
        v17 = v13 + 1;
        if ( a4[2] < v13 + 1 )
        {
          v18 = qvector_reserve(a4, *a4, v13 + 1, 1);
          *a4 = v18;
          v16 = (void *)v18;
        }
        a4[1] = v17;
        memmove(v16, v8, v14);
        *(_BYTE *)(*a4 + v14) = 0;
      }
      else
      {
        a4[1] = 0;
      }
    }
  }
  else
  {
LABEL_16:
    v12 = v7;
    v11 = 0;
  }
  if ( v12 )
    qfree(v12);
  return v11;
}

