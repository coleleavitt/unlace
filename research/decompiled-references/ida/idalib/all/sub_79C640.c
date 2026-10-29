__int64 __fastcall sub_79C640(__int64 a1, const char *a2, __int64 a3, unsigned __int64 a4, __int64 *a5)
{
  __int64 idc_class; // r15
  int v7; // ebx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _BYTE *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r15
  unsigned int v13; // r12d
  char *v14; // rbx
  __int64 v15; // rsi
  _QWORD *v17; // rax
  const char *v18; // rax
  const char *v19; // rbx
  size_t v20; // rax
  size_t v21; // r15
  size_t v22; // r12
  void *v23; // rdi
  __int64 v24; // rax
  size_t na; // [rsp+8h] [rbp-128h]
  unsigned int n; // [rsp+8h] [rbp-128h]
  char *s; // [rsp+28h] [rbp-108h]
  void *ptr; // [rsp+30h] [rbp-100h] BYREF
  __int128 v30; // [rsp+38h] [rbp-F8h]
  char v31[8]; // [rsp+D0h] [rbp-60h] BYREF
  __int128 v32; // [rsp+D8h] [rbp-58h]
  __int64 v33; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v34; // [rsp+F8h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  if ( a2 )
  {
    idc_class = find_idc_class(a2);
    if ( !idc_class )
    {
      v7 = 1536;
      set_error_string(0, a2);
      goto LABEL_36;
    }
  }
  else
  {
    idc_class = 0;
  }
  v31[0] = 2;
  v33 = 0;
  v32 = 0;
  v7 = idcv_object(v31, idc_class);
  if ( !v7 )
  {
    if ( idc_class )
    {
      ptr = nullptr;
      v30 = 0;
      if ( a2 )
      {
        na = strlen(a2);
        ptr = (void *)qvector_reserve(&ptr, 0, na + 1, 1);
        *(_QWORD *)&v30 = na + 1;
        memmove(ptr, a2, na);
        *((_BYTE *)ptr + na) = 0;
      }
      n = sub_791D20(idc_class, (__int64)&ptr);
      if ( n != -1 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v30 = 0;
          qfree(ptr);
        }
        v8 = a4 + 1;
        if ( a4 == -1 )
        {
          v17 = (_QWORD *)operator new[](8u);
          *v17 = 0;
          s = (char *)(v17 + 1);
          copy_idcv(v17 + 1);
        }
        else if ( (a4 + 1) >> 59 )
        {
          s = (char *)qalloc_or_throw(0x7FFFFFFFFFFFFFFFLL);
          copy_idcv(s);
        }
        else
        {
          if ( v8 >> 58 )
            v9 = (_QWORD *)operator new[](0xFFFFFFFFFFFFFFFFLL);
          else
            v9 = (_QWORD *)operator new[](32 * v8 + 8);
          *v9 = a4 + 1;
          s = (char *)(v9 + 1);
          v10 = v9 + 1;
          v11 = (__int64)&v10[32 * a4 + 32];
          do
          {
            *v10 = 2;
            v10 += 32;
            *(_OWORD *)(v10 - 24) = 0;
            *((_QWORD *)v10 - 1) = 0;
          }
          while ( (_BYTE *)v11 != v10 );
          copy_idcv(s);
        }
        v12 = 0;
        while ( v12 < a4 )
        {
          v12 = ++v7;
          copy_idcv(&s[32 * v7]);
        }
        sub_7977F0((__int64)&ptr, 0, 0);
        v13 = sub_79BFB0(&ptr, nullptr, n, (int)a4 + 1, (__int64)s, a1, a5);
        if ( s )
        {
          v14 = &s[32 * *((_QWORD *)s - 1)];
          if ( s == v14 )
          {
            v15 = 0;
          }
          else
          {
            do
            {
              v14 -= 32;
              free_idcv(v14);
            }
            while ( s != v14 );
            v15 = 32LL * *((_QWORD *)s - 1);
          }
          operator delete[](s - 8, v15 + 8);
        }
        sub_797950((__int64)&ptr);
        goto LABEL_29;
      }
      if ( ptr )
      {
        *(_QWORD *)&v30 = 0;
        qfree(ptr);
      }
    }
    move_idcv(a1, v31);
    v13 = 1;
LABEL_29:
    free_idcv(v31);
    return v13;
  }
  free_idcv(v31);
LABEL_36:
  set_qerrno((unsigned int)v7);
  sub_799220(a1);
  if ( a5 )
  {
    v18 = (const char *)qstrerror(0xFFFFFFFFLL);
    v19 = v18;
    if ( v18 && (v20 = strlen(v18), (v21 = v20) != 0) )
    {
      v22 = v20 + 1;
      v23 = (void *)*a5;
      if ( a5[2] < v20 + 1 )
      {
        v24 = qvector_reserve(a5, *a5, v22, 1);
        *a5 = v24;
        v23 = (void *)v24;
      }
      a5[1] = v22;
      memmove(v23, v19, v21);
      *(_BYTE *)(*a5 + v21) = 0;
    }
    else
    {
      a5[1] = 0;
    }
  }
  return 0;
}
