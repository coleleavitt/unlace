__int64 __fastcall sub_77C1E0(__int64 a1, char *a2, __int64 a3, unsigned __int64 a4, __int64 *a5)
{
  __int64 idc_class; // r15
  int v7; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax
  _BYTE *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r15
  unsigned int v14; // r12d
  char *v15; // rbx
  __int64 v16; // rsi
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const char *v21; // rax
  const char *v22; // rbx
  size_t v23; // rax
  size_t v24; // r15
  size_t v25; // r12
  void *v26; // rdi
  __int64 v27; // rax
  size_t na; // [rsp+8h] [rbp-128h]
  int n; // [rsp+8h] [rbp-128h]
  char *s; // [rsp+28h] [rbp-108h]
  char *sa; // [rsp+28h] [rbp-108h]
  void *ptr; // [rsp+30h] [rbp-100h] BYREF
  __int128 v34; // [rsp+38h] [rbp-F8h]
  char v35[8]; // [rsp+D0h] [rbp-60h] BYREF
  __int128 v36; // [rsp+D8h] [rbp-58h]
  __int64 v37; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v38; // [rsp+F8h] [rbp-38h]

  s = a2;
  v38 = __readfsqword(0x28u);
  if ( a2 )
  {
    idc_class = find_idc_class(a2);
    if ( !idc_class )
    {
      v7 = 1536;
      set_error_string();
      goto LABEL_36;
    }
  }
  else
  {
    idc_class = 0;
  }
  a2 = (char *)idc_class;
  v35[0] = 2;
  v37 = 0;
  v36 = 0;
  v7 = idcv_object(v35, idc_class);
  if ( !v7 )
  {
    if ( idc_class )
    {
      ptr = nullptr;
      v34 = 0;
      if ( s )
      {
        na = strlen(s);
        ptr = (void *)qvector_reserve(&ptr, 0, na + 1, 1);
        *(_QWORD *)&v34 = na + 1;
        memmove(ptr, s, na);
        *((_BYTE *)ptr + na) = 0;
      }
      n = sub_7718E0(idc_class, (__int64)&ptr);
      if ( n != -1 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v34 = 0;
          qfree(ptr);
        }
        v9 = a4 + 1;
        if ( a4 == -1 )
        {
          v18 = (_QWORD *)operator new[](8u);
          *v18 = 0;
          sa = (char *)(v18 + 1);
          copy_idcv(v18 + 1);
        }
        else if ( (a4 + 1) >> 59 )
        {
          sa = (char *)qalloc_or_throw(0x7FFFFFFFFFFFFFFFLL, (const char *)&ptr, v8, v9);
          copy_idcv(sa);
        }
        else
        {
          if ( v9 >> 58 )
            v10 = (_QWORD *)operator new[](0xFFFFFFFFFFFFFFFFLL);
          else
            v10 = (_QWORD *)operator new[](32 * v9 + 8);
          *v10 = a4 + 1;
          sa = (char *)(v10 + 1);
          v11 = v10 + 1;
          v12 = (__int64)&v11[32 * a4 + 32];
          do
          {
            *v11 = 2;
            v11 += 32;
            *(_OWORD *)(v11 - 24) = 0;
            *((_QWORD *)v11 - 1) = 0;
          }
          while ( (_BYTE *)v12 != v11 );
          copy_idcv(sa);
        }
        v13 = 0;
        while ( v13 < a4 )
        {
          v13 = ++v7;
          copy_idcv(&sa[32 * v7]);
        }
        sub_7773B0((__int64)&ptr, 0, 0);
        v14 = sub_77BB40(&ptr, nullptr, n, (int)a4 + 1, (__int64)sa, a1, (__int64)a5);
        if ( sa )
        {
          v15 = &sa[32 * *((_QWORD *)sa - 1)];
          if ( sa == v15 )
          {
            v16 = 0;
          }
          else
          {
            do
            {
              v15 -= 32;
              free_idcv(v15);
            }
            while ( sa != v15 );
            v16 = 32LL * *((_QWORD *)sa - 1);
          }
          operator delete[](sa - 8, v16 + 8);
        }
        sub_777510((__int64)&ptr);
        goto LABEL_29;
      }
      if ( ptr )
      {
        *(_QWORD *)&v34 = 0;
        qfree(ptr);
      }
    }
    move_idcv(a1, v35);
    v14 = 1;
LABEL_29:
    free_idcv(v35);
    return v14;
  }
  free_idcv(v35);
LABEL_36:
  set_qerrno((unsigned int)v7, a2);
  sub_778DE0(a1);
  if ( a5 )
  {
    v21 = (const char *)qstrerror(0xFFFFFFFFLL, a2, v19, v20);
    v22 = v21;
    if ( v21 && (v23 = strlen(v21), (v24 = v23) != 0) )
    {
      v25 = v23 + 1;
      v26 = (void *)*a5;
      if ( a5[2] < v23 + 1 )
      {
        v27 = qvector_reserve(a5, *a5, v25, 1);
        *a5 = v27;
        v26 = (void *)v27;
      }
      a5[1] = v25;
      memmove(v26, v22, v24);
      *(_BYTE *)(*a5 + v24) = 0;
    }
    else
    {
      a5[1] = 0;
    }
  }
  return 0;
}

