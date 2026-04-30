unsigned __int64 __fastcall sub_51DD00(
        QT::QWidget *this,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v11; // eax
  size_t v12; // r12
  int v14; // eax
  size_t v15; // r12
  _DWORD *v16; // rax
  unsigned int v17; // ebp
  QT::QWidget *v18; // rdi
  double v19; // xmm0_8
  const char *v20; // rsi
  double v21; // xmm4_8
  double v22; // xmm5_8
  void *v25; // rbx
  void (__fastcall *v26)(void *); // rdx
  void (__fastcall *v27)(void *, double); // rax
  char *v28; // rdi
  void *v29; // rax
  const void *v30; // rsi
  void *v31; // rax
  const void *v32; // rsi
  __int64 v33; // [rsp+0h] [rbp-98h] BYREF
  __int128 v34; // [rsp+8h] [rbp-90h]
  char v35[8]; // [rsp+20h] [rbp-78h] BYREF
  void *v36; // [rsp+28h] [rbp-70h]
  __int128 v37; // [rsp+30h] [rbp-68h]
  int v38; // [rsp+40h] [rbp-58h]
  void *v39; // [rsp+48h] [rbp-50h]
  __int128 v40; // [rsp+50h] [rbp-48h]
  __int64 v41; // [rsp+60h] [rbp-38h]
  void *v42; // [rsp+68h] [rbp-30h]
  unsigned __int64 v43; // [rsp+78h] [rbp-20h]

  v11 = *((_DWORD *)this + 26);
  v12 = *((_QWORD *)this + 15);
  v43 = __readfsqword(0x28u);
  v37 = 0;
  *(_DWORD *)v35 = v11;
  v36 = nullptr;
  if ( v12 )
  {
    v31 = (void *)qalloc_or_throw(v12);
    v32 = *((const void **)this + 14);
    *((_QWORD *)&v37 + 1) = v12;
    v36 = v31;
    memcpy(v31, v32, v12);
    *(_QWORD *)&v37 = v12;
  }
  v14 = *((_DWORD *)this + 34);
  v15 = *((_QWORD *)this + 19);
  v39 = nullptr;
  v40 = 0;
  v38 = v14;
  if ( v15 )
  {
    v29 = (void *)qalloc_or_throw(v15);
    v30 = *((const void **)this + 18);
    v39 = v29;
    *((_QWORD *)&v40 + 1) = v15;
    memcpy(v29, v30, v15);
    *(_QWORD *)&v40 = v15;
  }
  v41 = *((_QWORD *)this + 21);
  v16 = *((_DWORD **)this + 22);
  v42 = v16;
  if ( v16 )
    ++v16[2];
  v17 = a2 | 0x80000000;
  if ( *((_DWORD *)this + 26) != v17 )
  {
    *((_DWORD *)this + 26) = v17;
    sub_51D250((__int64)this, v17);
  }
  sub_51D3E0((__int64)this);
  v18 = *((QT::QWidget **)this + 8);
  v19 = 0.0;
  v33 = 0;
  v34 = 0;
  sub_51CCB0(v18, &v33, (__int64)this, 0.0);
  sub_51C1E0(*((QT::QLineEdit **)this + 8), &v33);
  QT::QWidget::update(this);
  v20 = v35;
  sub_51D9C0((__int64)this, v35, 0.0, a4, a5, a6, v21, v22, a9, a10);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    v19 = qfree(v33, v35);
  }
  if ( v42 )
  {
    if ( (*((_DWORD *)v42 + 2))-- == 1 )
    {
      v25 = v42;
      v26 = **(void (__fastcall ***)(void *))v42;
      if ( v26 == refcnted_regex_t__::vfunc_0 )
      {
        if ( v42 )
        {
          v27 = *(void (__fastcall **)(void *, double))(*(_QWORD *)v42 + 16LL);
          if ( (char *)v27 == (char *)refcnted_regex_t__::vfunc_2 )
          {
            v28 = (char *)v42 + 16;
            *(_QWORD *)v42 = &refcnted_regex_t___vtable;
            qregfree(v28);
            v20 = (const char *)&dword_30;
            operator delete(v25, 0x30u);
          }
          else
          {
            v27(v42, v19);
          }
        }
      }
      else
      {
        ((void (__fastcall *)(void *, double))v26)(v42, v19);
      }
    }
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    v19 = qfree(v39, v20, v19);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36, v20, v19);
  }
  return v43 - __readfsqword(0x28u);
}
