__int64 __fastcall sub_4DA280(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __m128 v14; // xmm0
  int v15; // eax
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  bool v18; // zf
  _DWORD *v19; // rbx
  void (__fastcall *v20)(_QWORD *); // rax
  unsigned int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // r13
  unsigned int v25; // eax
  __int64 **v26; // r12
  void (__fastcall *v27)(_QWORD *); // rax
  void (__fastcall *v28)(void *); // rdx
  void (__fastcall *v29)(_QWORD *); // rax
  _BYTE *v30; // rax
  _BYTE *v31; // rsi
  unsigned __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // r14
  unsigned __int64 v35; // r12
  size_t v36; // r14
  __int64 v37; // r12
  size_t v38; // r15
  _BYTE *v39; // [rsp+0h] [rbp-78h] BYREF
  __int128 v40; // [rsp+8h] [rbp-70h]
  __int64 v41; // [rsp+20h] [rbp-58h] BYREF
  __int128 v42; // [rsp+28h] [rbp-50h]
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  v14 = 0;
  v15 = *a1;
  v16 = *((_QWORD *)a1 + 6);
  v43 = __readfsqword(0x28u);
  v39 = nullptr;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  if ( (v15 & 3) == 1 )
  {
    if ( v16 <= 1 )
      goto LABEL_3;
    v30 = (_BYTE *)qvector_reserve(&v39, 0, 12, 1);
    a4 = 0x3D3C3F287C625C28LL;
    v39 = v30;
    *(_QWORD *)&v40 = 12;
    qmemcpy(v30, "(\\b|(?<=_))", 11);
    v31 = v39;
    v39[11] = 0;
    v32 = *((_QWORD *)a1 + 6);
    if ( v32 )
    {
      v36 = v32 - 1;
      if ( v32 != 1 )
      {
        v37 = v40;
        v38 = v32 - 1;
        if ( (_QWORD)v40 )
        {
          v37 = v40 - 1;
          v38 = v36 + v40 - 1;
          v32 += v40 - 1;
        }
        if ( *((_QWORD *)&v40 + 1) < v32 )
        {
          v39 = (_BYTE *)qvector_reserve(&v39, v31, v32, 1);
          v31 = v39;
        }
        *(_QWORD *)&v40 = v32;
        v31[v38] = 0;
        memcpy(&v39[v37], *((const void **)a1 + 5), v36);
        v31 = v39;
      }
    }
    v33 = v40;
    if ( (_QWORD)v40 )
    {
      v34 = v40 + 9;
      v35 = v40 + 10;
      v33 = v40 - 1;
    }
    else
    {
      v35 = 11;
      v34 = 10;
    }
    if ( *((_QWORD *)&v40 + 1) < v35 )
    {
      v39 = (_BYTE *)qvector_reserve(&v39, v31, v35, 1);
      v31 = v39;
    }
    *(_QWORD *)&v40 = v35;
    v31[v34] = 0;
    a2 = 10537;
    qmemcpy(&v39[v33], "(\\b|(?=_))", 10);
  }
  else
  {
    if ( v16 < 2 )
      goto LABEL_3;
    a2 = *((_QWORD *)a1 + 5);
    v39 = (_BYTE *)qvector_reserve(&v39, 0, v16, 1);
    *(_QWORD *)&v40 = v16;
    memmove(v39, (const void *)a2, v16 - 1);
    v39[v16 - 1] = 0;
  }
  v22 = *a1 & 0x20;
  if ( (unsigned __int64)v40 > 1 )
  {
    v23 = operator new(0x30u);
    v14 = 0;
    v24 = v23 + 16;
    a2 = (__int64)v39;
    v19 = (_DWORD *)v23;
    *(_DWORD *)(v23 + 8) = 1;
    *(_QWORD *)v23 = &refcnted_regex_t___vtable;
    *(_OWORD *)(v23 + 16) = 0;
    *(_OWORD *)(v23 + 32) = 0;
    v25 = qregcomp(v23 + 16, a2, (v22 >> 5) ^ 1);
    if ( !v25 )
    {
      a3 = *((_QWORD *)a1 + 9);
      if ( !a3 )
        goto LABEL_31;
      v18 = (*(_DWORD *)(a3 + 8))-- == 1;
      if ( !v18 )
        goto LABEL_31;
      goto LABEL_27;
    }
    a2 = v25;
    sub_4D85A0((__int64)v19, v25, &v41);
    if ( v19 )
    {
      v20 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v19 + 16LL);
      if ( v20 == refcnted_regex_t__::vfunc_2 )
      {
        *(_QWORD *)v19 = &refcnted_regex_t___vtable;
        qregfree(v24);
        a2 = 48;
        operator delete(v19, 0x30u);
        a3 = *((_QWORD *)a1 + 9);
        if ( !a3 )
          goto LABEL_11;
      }
      else
      {
        v20(v19);
        a3 = *((_QWORD *)a1 + 9);
        if ( !a3 )
          goto LABEL_11;
      }
    }
    else
    {
      a3 = *((_QWORD *)a1 + 9);
      if ( !a3 )
        goto LABEL_11;
    }
    v18 = (*(_DWORD *)(a3 + 8))-- == 1;
    if ( v18 )
      goto LABEL_5;
LABEL_10:
    *((_QWORD *)a1 + 9) = 0;
    goto LABEL_11;
  }
LABEL_3:
  v17 = *((_QWORD *)a1 + 9);
  if ( v17 )
  {
    v18 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v18 )
    {
LABEL_5:
      v19 = nullptr;
LABEL_27:
      v26 = *((__int64 ***)a1 + 9);
      a3 = **v26;
      if ( (void (__fastcall *)(void *))a3 == refcnted_regex_t__::vfunc_0 )
      {
        if ( v26 )
        {
          v27 = (void (__fastcall *)(_QWORD *))(*v26)[2];
          if ( v27 == refcnted_regex_t__::vfunc_2 )
          {
            *v26 = (__int64 *)&refcnted_regex_t___vtable;
            qregfree(v26 + 2);
            a2 = 48;
            operator delete(v26, 0x30u);
          }
          else
          {
            v27(*((_QWORD **)a1 + 9));
          }
        }
      }
      else
      {
        ((void (__fastcall *)(_QWORD))a3)(*((_QWORD *)a1 + 9));
      }
LABEL_31:
      *((_QWORD *)a1 + 9) = v19;
      if ( v19 )
      {
        if ( v19[2] )
          goto LABEL_16;
        v28 = **(void (__fastcall ***)(void *))v19;
        if ( v28 == refcnted_regex_t__::vfunc_0 )
        {
          v29 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v19 + 16LL);
          if ( v29 == refcnted_regex_t__::vfunc_2 )
          {
            *(_QWORD *)v19 = &refcnted_regex_t___vtable;
            qregfree(v19 + 4);
            a2 = 48;
            operator delete(v19, 0x30u);
          }
          else
          {
            v29(v19);
          }
        }
        else
        {
          v28(v19);
        }
        v19 = *((_DWORD **)a1 + 9);
        if ( v19 )
          goto LABEL_16;
      }
      goto LABEL_11;
    }
    goto LABEL_10;
  }
LABEL_11:
  if ( *((_QWORD *)a1 + 6) > 1u )
  {
    a2 = (__int64)&s1;
    if ( (_QWORD)v42 )
      a2 = v41;
    sub_169700((int)"invalid regex: %s\n", a2, a3, a4, a5, a6, v14, a8, a9, a10, a11, a12, a13, a14, (char)v39);
  }
  v19 = *((_DWORD **)a1 + 9);
LABEL_16:
  LOBYTE(v19) = v19 != nullptr;
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41, (const char *)a2);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, (const char *)a2);
  }
  return (unsigned int)v19;
}
