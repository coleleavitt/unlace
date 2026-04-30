unsigned __int64 __fastcall sub_3D5350(QT::QPlainTextEdit *this)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // bp
  __int64 v4; // r13
  __int64 v5; // r13
  __int64 v6; // r13
  void *v8; // r15
  void *v9; // rdi
  void *v10; // r15
  void *v11; // rdi
  void *v12; // r15
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-98h] BYREF
  void *src; // [rsp+8h] [rbp-90h]
  int v19[4]; // [rsp+10h] [rbp-88h]
  void *v20; // [rsp+20h] [rbp-78h]
  __int64 v21[2]; // [rsp+28h] [rbp-70h]
  void *v22; // [rsp+38h] [rbp-60h]
  int v23[4]; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  sub_526DE0(this);
  v17 = 0;
  src = nullptr;
  v20 = nullptr;
  v22 = nullptr;
  *(_OWORD *)v19 = 0;
  *(_OWORD *)v21 = 0;
  *(_OWORD *)v23 = 0;
  v3 = sub_3D0D20(this, &v17, 0x801u, nullptr);
  if ( v3 )
  {
    copy_tinfo_t((char *)this + 184, &v17, v2);
    v4 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 > 1u )
    {
      v8 = src;
      v9 = *((void **)this + 24);
      if ( *((_QWORD *)this + 26) < *(_QWORD *)v19 )
      {
        v16 = qvector_reserve((char *)this + 192, *((_QWORD *)this + 24), *(_QWORD *)v19, 1);
        *((_QWORD *)this + 24) = v16;
        v9 = (void *)v16;
      }
      *((_QWORD *)this + 25) = v4;
      memmove(v9, v8, v4 - 1);
      *(_BYTE *)(*((_QWORD *)this + 24) + v4 - 1) = 0;
    }
    else
    {
      *((_QWORD *)this + 25) = 0;
    }
    v5 = v21[0];
    if ( v21[0] > 1uLL )
    {
      v10 = v20;
      v11 = *((void **)this + 27);
      if ( *((_QWORD *)this + 29) < v21[0] )
      {
        v15 = qvector_reserve((char *)this + 216, *((_QWORD *)this + 27), v21[0], 1);
        *((_QWORD *)this + 27) = v15;
        v11 = (void *)v15;
      }
      *((_QWORD *)this + 28) = v5;
      memmove(v11, v10, v5 - 1);
      *(_BYTE *)(*((_QWORD *)this + 27) + v5 - 1) = 0;
    }
    else
    {
      *((_QWORD *)this + 28) = 0;
    }
    v6 = *(_QWORD *)v23;
    if ( *(_QWORD *)v23 > 1u )
    {
      v12 = v22;
      v13 = *((void **)this + 30);
      if ( *((_QWORD *)this + 32) < *(_QWORD *)v23 )
      {
        v14 = qvector_reserve((char *)this + 240, *((_QWORD *)this + 30), *(_QWORD *)v23, 1);
        *((_QWORD *)this + 30) = v14;
        v13 = (void *)v14;
      }
      *((_QWORD *)this + 31) = v6;
      memmove(v13, v12, v6 - 1);
      *(_BYTE *)(*((_QWORD *)this + 30) + v6 - 1) = 0;
    }
    else
    {
      *((_QWORD *)this + 31) = 0;
    }
    sub_3D26C0(this, nullptr);
  }
  sub_4719B0(this, v3);
  if ( v22 )
  {
    *(_QWORD *)v23 = 0;
    qfree(v22, (const char *)v3);
  }
  if ( v20 )
  {
    v21[0] = 0;
    qfree(v20, (const char *)v3);
  }
  if ( src )
  {
    *(_QWORD *)v19 = 0;
    qfree(src, (const char *)v3);
  }
  clear_tinfo_t(&v17);
  return v24 - __readfsqword(0x28u);
}
