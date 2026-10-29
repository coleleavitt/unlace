unsigned __int64 __fastcall sub_178900(
        TFileDialog *this,
        __int64 a2,
        const char *a3,
        unsigned __int16 a4,
        unsigned __int8 a5)
{
  size_t v8; // rbx
  size_t v9; // rbx
  char v10; // al
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r13
  size_t v20; // r14
  void *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r10
  __int64 v25; // rdx
  void *v26; // rax
  void *v27; // rax
  void *v28; // rax
  size_t n; // [rsp+8h] [rbp-80h]
  _QWORD *v30; // [rsp+10h] [rbp-78h]
  const void **v31; // [rsp+18h] [rbp-70h]
  __int64 v32; // [rsp+20h] [rbp-68h]
  __int64 v33; // [rsp+30h] [rbp-58h] BYREF
  __int128 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  TWindowInit::TWindowInit((char *)this + 4464, TWindow::initFrame);
  TFileDialog::TFileDialog(this, off_234B38, "*", a3, a4, a5);
  *((_QWORD *)this + 539) = 0;
  *(_QWORD *)this = off_23B6C0;
  *((_OWORD *)this + 270) = 0;
  v32 = *(_QWORD *)(a2 + 8);
  if ( v32 )
  {
    v12 = *(_QWORD *)(a2 + 8);
    v13 = qalloc_or_throw();
    *((_QWORD *)this + 539) = v13;
    v14 = v13;
    v15 = 0;
    *((_QWORD *)this + 541) = v12;
    while ( 1 )
    {
      v17 = 48 * v15 + v14;
      v18 = *(_QWORD *)a2 + 48 * v15;
      *(_QWORD *)v17 = 0;
      v19 = v18;
      *(_OWORD *)(v17 + 8) = 0;
      v20 = *(_QWORD *)(v18 + 8);
      if ( v20 )
      {
        v21 = (void *)qalloc_or_throw();
        *(_QWORD *)v17 = v21;
        *(_QWORD *)(v17 + 16) = v20;
        memcpy(v21, *(const void **)v19, v20);
        *(_QWORD *)(v17 + 8) = v20;
      }
      *(_QWORD *)(v17 + 24) = 0;
      *(_OWORD *)(v17 + 32) = 0;
      v16 = *(_QWORD *)(v19 + 32);
      if ( !v16 )
      {
        if ( v32 == ++v15 )
          goto LABEL_21;
        goto LABEL_12;
      }
      v22 = qalloc_or_throw();
      *(_QWORD *)(v17 + 24) = v22;
      v23 = 0;
      *(_QWORD *)(v17 + 40) = v16;
      while ( 1 )
      {
        v24 = v22 + 24 * v23;
        v25 = *(_QWORD *)(v19 + 24) + 24 * v23;
        *(_QWORD *)v24 = 0;
        *(_OWORD *)(v24 + 8) = 0;
        if ( *(_QWORD *)(v25 + 8) )
          break;
        if ( v16 == ++v23 )
          goto LABEL_20;
LABEL_17:
        v22 = *(_QWORD *)(v17 + 24);
      }
      v31 = (const void **)v25;
      v30 = (_QWORD *)(v22 + 24 * v23);
      n = *(_QWORD *)(v25 + 8);
      v26 = (void *)qalloc_or_throw();
      ++v23;
      v30[2] = n;
      *v30 = v26;
      memcpy(v26, *v31, n);
      v30[1] = n;
      if ( v16 != v23 )
        goto LABEL_17;
LABEL_20:
      *(_QWORD *)(v17 + 32) = v16;
      if ( v32 == ++v15 )
      {
LABEL_21:
        *((_QWORD *)this + 540) = v32;
        break;
      }
LABEL_12:
      v14 = *((_QWORD *)this + 539);
    }
  }
  *((_QWORD *)this + 542) = 0;
  *(_OWORD *)((char *)this + 4344) = 0;
  v8 = *(_QWORD *)(a2 + 32);
  if ( v8 )
  {
    v28 = (void *)qalloc_or_throw();
    *((_QWORD *)this + 542) = v28;
    *((_QWORD *)this + 544) = v8;
    memcpy(v28, *(const void **)(a2 + 24), v8);
    *((_QWORD *)this + 543) = v8;
  }
  *((_QWORD *)this + 545) = 0;
  *((_OWORD *)this + 273) = 0;
  v9 = *(_QWORD *)(a2 + 56);
  if ( v9 )
  {
    v27 = (void *)qalloc_or_throw();
    *((_QWORD *)this + 545) = v27;
    *((_QWORD *)this + 547) = v9;
    memcpy(v27, *(const void **)(a2 + 48), v9);
    *((_QWORD *)this + 546) = v9;
  }
  v10 = *(_BYTE *)(a2 + 72);
  *(_OWORD *)((char *)this + 4408) = 0;
  *((_QWORD *)this + 550) = 0;
  *((_BYTE *)this + 4384) = v10;
  *((_QWORD *)this + 555) = 0;
  *((_OWORD *)this + 278) = 0;
  sub_178570(this);
  v33 = 0;
  v34 = 0;
  sub_177BE0((__int64)this + 4312, 0, &v33);
  qstrncpy();
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  return v35 - __readfsqword(0x28u);
}

