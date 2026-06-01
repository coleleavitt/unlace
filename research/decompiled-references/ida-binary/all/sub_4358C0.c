__int64 __fastcall open_containing_folder_action_t__::vfunc_0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128 v10; // xmm0
  __int64 vault_filesys; // r12
  __int64 v12; // rbx
  __int64 v13; // r13
  size_t v14; // rax
  const char *p_ptr; // rsi
  const char *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  char v24; // [rsp+0h] [rbp-10B8h]
  _QWORD *v25; // [rsp+10h] [rbp-10A8h]
  _BYTE v26[8]; // [rsp+28h] [rbp-1090h] BYREF
  const char *v27; // [rsp+30h] [rbp-1088h] BYREF
  __int64 v28; // [rsp+38h] [rbp-1080h]
  void *ptr; // [rsp+50h] [rbp-1068h] BYREF
  __int128 v30; // [rsp+58h] [rbp-1060h]
  char s[4104]; // [rsp+70h] [rbp-1048h] BYREF
  unsigned __int64 v32; // [rsp+1078h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v10 = 0;
  v25 = sub_426230(a1, (const char *)a2);
  ptr = nullptr;
  v30 = 0;
  vault_filesys = get_vault_filesys(&ptr, 0, 0);
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    *(double *)v10.m128_u64 = qfree(ptr, nullptr);
  }
  v12 = *(_QWORD *)a2;
  v13 = *(_QWORD *)a2 + 48LL * *(_QWORD *)(a2 + 8);
  if ( v13 != *(_QWORD *)a2 )
  {
    sub_417500((__int64)&v27, (__int64)v25, v12);
    while ( 1 )
    {
      v16 = &s1;
      if ( v28 )
        v16 = v27;
      qdirname(s, 4096, v16);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, char *))(*(_QWORD *)vault_filesys + 88LL))(vault_filesys, s) )
      {
        v14 = strlen(s);
        *(double *)v10.m128_u64 = QT::QString::fromUtf8(&ptr, v14, s);
        p_ptr = (const char *)&ptr;
        QT::QUrl::fromLocalFile((QT::QUrl *)v26, (const QT::QString *)&ptr);
        QT::QDesktopServices::openUrl((QT::QDesktopServices *)v26, (const QT::QUrl *)&ptr);
        QT::QUrl::~QUrl((QT::QUrl *)v26);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
      }
      else
      {
        p_ptr = s;
        sub_169700(
          (int)"Ignoring %s (not a directory)\n",
          (__int64)s,
          v17,
          v18,
          v19,
          v20,
          v10,
          a4,
          a5,
          a6,
          v21,
          v22,
          a9,
          a10,
          v24);
      }
      if ( v27 )
      {
        v28 = 0;
        *(double *)v10.m128_u64 = qfree(v27, p_ptr, *(double *)v10.m128_u64);
      }
      v12 += 48;
      if ( v13 == v12 )
        break;
      sub_417500((__int64)&v27, (__int64)v25, v12);
    }
  }
  return 0;
}
