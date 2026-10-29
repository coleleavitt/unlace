/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78770
// Address: 0x0000000000078770

//----- (0000000000078770) ----------------------------------------------------
__int64 __fastcall sub_78770(_QWORD *a1, _DWORD *a2, char **a3, double a4, __m128 a5)
{
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbp
  char *v13; // rbx
  char *v14; // rax
  unsigned __int64 v15; // rcx
  char *v16; // rbx
  size_t v17; // r14
  char *v18; // rbp
  void *v19; // rax
  char *v20; // rbx
  const char *v21; // rsi
  void *ptr[2]; // [rsp+0h] [rbp-68h] BYREF
  char *v24; // [rsp+10h] [rbp-58h]
  void *src[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  *a2 = -1;
  *(_OWORD *)src = 0;
  v26 = 0;
  v7 = sub_774F0((__int64)a1, (__int128 *)src, 0.0, a5);
  v8 = v7;
  if ( !v7 )
  {
LABEL_22:
    v5 = 0;
    goto LABEL_23;
  }
  v9 = sub_6D420(*(int *)(v7 + 28));
  v10 = sub_75750(v9, (__int64)src);
  if ( v10 != -1 )
  {
    *a2 = v10;
    LOBYTE(v5) = 1;
    goto LABEL_23;
  }
  LOBYTE(v5) = 1;
  if ( !sub_784D0(a1, v8, (__int64)src, a3, 0.0, a5) )
  {
    set_qerrno(0x58u);
    v11 = sub_6D420(*(int *)(v8 + 28));
    v12 = v11;
    *(_OWORD *)ptr = 0;
    v24 = nullptr;
    v13 = *(char **)(v11 + 40);
    if ( v13 )
    {
      ptr[0] = qalloc_or_throw(*(_QWORD *)(v11 + 40));
      v24 = v13;
      memcpy(ptr[0], *(const void **)(v12 + 32), (size_t)v13);
      ptr[1] = v13;
      v14 = (char *)ptr[0];
      v15 = (unsigned __int64)v13;
      v16 = v13 - 1;
    }
    else
    {
      v15 = 0;
      v14 = nullptr;
      v16 = nullptr;
    }
    if ( v15 < (unsigned __int64)(v16 + 2) )
    {
      v14 = (char *)qvector_reserve((__int64)ptr, v14, (unsigned __int64)(v16 + 2), 1u);
      ptr[0] = v14;
    }
    ptr[1] = v16 + 2;
    v16[(_QWORD)v14] = 46;
    *((_BYTE *)ptr[0] + (unsigned __int64)v16 + 1) = 0;
    if ( src[1] )
    {
      v17 = (size_t)src[1] - 1;
      if ( src[1] != (char *)&dword_0 + 1 )
      {
        v18 = (char *)ptr[1] - 1;
        if ( !ptr[1] )
          v18 = nullptr;
        v19 = ptr[0];
        v20 = &v18[(unsigned __int64)src[1]];
        if ( v24 < &v18[(unsigned __int64)src[1]] )
        {
          v19 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)v20, 1u);
          ptr[0] = v19;
        }
        ptr[1] = v20;
        v18[v17 + (_QWORD)v19] = 0;
        memcpy((char *)ptr[0] + (unsigned __int64)v18, src[0], v17);
      }
    }
    if ( ptr[1] )
      v21 = (const char *)ptr[0];
    else
      v21 = s1;
    set_error_string(0, v21);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v24 = nullptr;
    }
    goto LABEL_22;
  }
LABEL_23:
  if ( src[0] )
  {
    src[1] = nullptr;
    qfree(src[0]);
    src[0] = nullptr;
    v26 = 0;
  }
  return v5;
}
// 78989: variable 'v5' is possibly undefined
// 0: using guessed type int dword_0;
