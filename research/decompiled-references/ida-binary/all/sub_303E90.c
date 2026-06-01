unsigned __int64 __fastcall sub_303E90(QT::QApplication *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  const char **v6; // rbp
  const char *v7; // r15
  size_t v8; // rax
  size_t v9; // r12
  const char *v10; // r15
  size_t v11; // rax
  size_t v12; // r12
  void *v14; // rdi
  size_t v15; // rdx
  int v16; // [rsp+0h] [rbp-98h]
  size_t v17; // [rsp+8h] [rbp-90h]
  int v18; // [rsp+10h] [rbp-88h]
  int v19; // [rsp+18h] [rbp-80h]
  void *v20; // [rsp+20h] [rbp-78h] BYREF
  __int128 v21; // [rsp+28h] [rbp-70h]
  void *dest; // [rsp+38h] [rbp-60h] BYREF
  __int128 v23; // [rsp+40h] [rbp-58h]
  int v24; // [rsp+50h] [rbp-48h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  sub_482750(this);
  *((_QWORD *)this + 86) = 0;
  *((_QWORD *)this + 90) = 0;
  *(_QWORD *)this = &ida_app_t___vtable;
  *((_QWORD *)this + 2) = &unk_8872E0;
  *((_QWORD *)this + 85) = &unk_8873F8;
  *((_QWORD *)this + 87) = ida_app_t___vtable_at__696;
  *((_WORD *)this + 372) = 257;
  *((_DWORD *)this + 187) = 0;
  *(_OWORD *)((char *)this + 728) = 0;
  *((_QWORD *)this + 88) = 0;
  *((_QWORD *)this + 89) = 0;
  v18 = (_DWORD)this + 752;
  sub_419FD0((char *)this + 752);
  *((_WORD *)this + 508) = 0;
  v19 = (_DWORD)this + 1056;
  *(_QWORD *)this = &IDAApplication___vtable;
  *((_QWORD *)this + 2) = IDAApplication___vtable_at__16;
  *((_QWORD *)this + 85) = IDAApplication___vtable_at__680;
  *((_QWORD *)this + 94) = IDAApplication___vtable_at__752;
  *((_QWORD *)this + 138) = (char *)this + 1088;
  *((_QWORD *)this + 139) = (char *)this + 1088;
  *((_QWORD *)this + 87) = IDAApplication___vtable_at__696;
  *((_DWORD *)this + 255) = 0;
  *((_QWORD *)this + 128) = 0;
  *((_DWORD *)this + 272) = 0;
  *((_QWORD *)this + 137) = 0;
  *((_QWORD *)this + 140) = 0;
  *((_DWORD *)this + 284) = 0;
  *((_QWORD *)this + 143) = 0;
  *((_QWORD *)this + 144) = (char *)this + 1136;
  *((_QWORD *)this + 145) = (char *)this + 1136;
  *((_QWORD *)this + 146) = 0;
  *((_QWORD *)this + 147) = 0;
  *((_DWORD *)this + 296) = 0;
  *((_BYTE *)this + 1188) = 1;
  *(_OWORD *)((char *)this + 1032) = 0;
  *(_OWORD *)((char *)this + 1048) = 0;
  *(_OWORD *)((char *)this + 1064) = 0;
  *((_QWORD *)this + 132) = qvector_reserve((char *)this + 1056, 0, 1000, 8);
  v6 = (const char **)&off_8639A0;
  do
  {
    v7 = *v6;
    v20 = nullptr;
    dest = nullptr;
    v24 = 0;
    v21 = 0;
    v23 = 0;
    if ( v7 )
    {
      v8 = strlen(v7);
      v9 = v8;
      if ( v8 )
      {
        v17 = v8 + 1;
        v20 = (void *)qvector_reserve(&v20, 0, v8 + 1, 1);
        *(_QWORD *)&v21 = v17;
        memmove(v20, v7, v9);
        *((_BYTE *)v20 + v9) = 0;
      }
    }
    v10 = v6[1];
    if ( v10 && (v11 = strlen(v6[1]), (v12 = v11) != 0) )
    {
      v14 = dest;
      v15 = v11 + 1;
      if ( *((_QWORD *)&v23 + 1) < v11 + 1 )
      {
        v17 = v11 + 1;
        dest = (void *)qvector_reserve(&dest, dest, v15, 1);
        v15 = v17;
        v14 = dest;
      }
      *(_QWORD *)&v23 = v15;
      memmove(v14, v10, v12);
      *((_BYTE *)dest + v12) = 0;
    }
    else
    {
      *(_QWORD *)&v23 = 0;
    }
    v24 = *((_DWORD *)v6 + 4);
    sub_47A3F0(
      (_DWORD)this,
      (unsigned int)&v20,
      v2,
      v3,
      v4,
      v5,
      v16,
      v17,
      v18,
      v19,
      (_DWORD)v20,
      v21,
      *((__int64 *)&v21 + 1));
    if ( dest )
    {
      *(_QWORD *)&v23 = 0;
      qfree(dest, (const char *)&v20);
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20, (const char *)&v20);
    }
    v6 += 3;
  }
  while ( &algn_8639E0[8] != (_BYTE *)v6 );
  sub_414320(this);
  QT::QObject::connect(
    &v20,
    this,
    "2commitDataRequest(QSessionManager&)",
    this,
    "1on_commitDataRequest(QSessionManager&)",
    1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v20);
  return v25 - __readfsqword(0x28u);
}
