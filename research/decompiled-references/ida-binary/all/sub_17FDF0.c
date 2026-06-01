unsigned __int64 __fastcall sub_17FDF0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  const char *v16; // rdi
  _BYTE *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rbp
  void *v21; // r13
  size_t v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  void *src; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v27[2]; // [rsp+10h] [rbp-68h] BYREF
  void *dest; // [rsp+20h] [rbp-58h] BYREF
  __int128 v29; // [rsp+28h] [rbp-50h]
  char v30; // [rsp+38h] [rbp-40h]
  unsigned __int64 v31; // [rsp+48h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v2 = QT::QCoreApplication::self;
  v3 = QT::QCoreApplication::self + 2;
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 48LL))(QT::QCoreApplication::self + 2);
  if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))(v2[2] + 56LL))(v3, v4) != 54 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(unsigned int *)(a2 + 4);
    if ( v5 || (_DWORD)v6 )
    {
      src = *(void **)(a2 + 8);
      v7 = v6 + v5;
      v8 = unpack_ds(&src, v7, 1);
      qfree(v8, v7, v9, v10, v11);
      v12 = unpack_ds(&src, v7, 1);
      qfree(v12, v7, v13, v14, v15);
      unpack_dq(&src, v7);
      unpack_dq(&src, v7);
      if ( qword_8CF010 )
        sub_341670(*((QT::QWidget **)qword_8CF010 + 87));
      v16 = (const char *)src;
      v17 = src;
      while ( (unsigned __int64)v17 < v7 )
      {
        if ( !*v17++ )
        {
          src = v17;
          if ( v16 )
          {
            v19 = sub_17FC20(v16);
            v20 = v19;
            if ( v19 )
            {
              sub_479090(v3, v19, 1);
              v21 = src;
              QT::QEvent::QEvent(v27, 2003);
              v27[0] = ISerializedPositionEvent___vtable;
              dest = nullptr;
              v30 = 0;
              v29 = 0;
              v22 = v7 - (_QWORD)v21;
              if ( v22 )
              {
                dest = (void *)qvector_reserve(&dest, 0, v22, 1);
                memset((char *)dest + v29, 0, v22 - v29);
                *(_QWORD *)&v29 = v22;
                memcpy(dest, v21, v22);
              }
              sub_51B5E0(v20, v27);
              v27[0] = ISerializedPositionEvent___vtable;
              if ( dest )
              {
                *(_QWORD *)&v29 = 0;
                qfree(dest, v27, v23, v24, v25);
              }
              QT::QEvent::~QEvent((QT::QEvent *)v27);
            }
          }
          return v31 - __readfsqword(0x28u);
        }
      }
    }
  }
  return v31 - __readfsqword(0x28u);
}
