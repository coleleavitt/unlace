void __fastcall sub_548170(
        QT::QMetaObject *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v14; // rdx
  QT::QColor *v15; // rsi
  unsigned __int64 (__fastcall *v16)(QT::QMetaObject *, __int64, __int64, __int64, void **); // rax
  QT::QColor *v17; // rax
  QT::QColor *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // edx
  __int64 v25; // rax
  char v26; // al
  void *v27; // rax
  void *v28; // rax
  void *v29; // rdx
  QT::QColor *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  void (*v33)(void); // rax
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int64 v35; // [rsp+8h] [rbp-70h]
  __int64 v36; // [rsp+10h] [rbp-68h]
  __int128 v37; // [rsp+40h] [rbp-38h]
  __int128 v38; // [rsp+50h] [rbp-28h] BYREF
  void **p_ptr; // [rsp+60h] [rbp-18h]
  unsigned __int64 v40; // [rsp+68h] [rbp-10h]

  v40 = __readfsqword(0x28u);
  if ( a2 )
  {
    switch ( a2 )
    {
      case 7:
        v17 = *(QT::QColor **)a4;
        if ( (_DWORD)a3 != 20 || **(_DWORD **)(a4 + 8) )
          *(_QWORD *)v17 = 0;
        else
          *(_QWORD *)v17 = &unk_8C33A0;
        break;
      case 5:
        v14 = *(_QWORD *)(a4 + 8);
        v15 = *(QT::QColor **)a4;
        v16 = *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v14;
        if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, int, __int64, void **))v14 == sub_547EF0 )
        {
          if ( !*(_QWORD *)(v14 + 8) )
            *(_DWORD *)v15 = 0;
        }
        else if ( (char *)v16 == (char *)sub_547F50 )
        {
          if ( !*(_QWORD *)(v14 + 8) )
            *(_DWORD *)v15 = 1;
        }
        else if ( v16 == sub_547FB0 )
        {
          if ( !*(_QWORD *)(v14 + 8) )
            *(_DWORD *)v15 = 2;
        }
        else if ( (char *)v16 == (char *)sub_548010 )
        {
          if ( !*(_QWORD *)(v14 + 8) )
            *(_DWORD *)v15 = 3;
        }
        else if ( v16 == sub_548030 && !*(_QWORD *)(v14 + 8) )
        {
          *(_DWORD *)v15 = 4;
        }
        break;
      case 1:
        v18 = *(QT::QColor **)a4;
        if ( (_DWORD)a3 == 2 )
        {
          *(_QWORD *)&v38 = sub_524FA0((__int64)a1 + 40, 2165563906LL, 0);
          *((_QWORD *)&v38 + 1) = v22;
          *(_QWORD *)&v37 = v38;
          *(_QWORD *)v18 = v38;
          *((_QWORD *)&v37 + 1) = v22;
          *(_QWORD *)((char *)v18 + 6) = *(_QWORD *)((char *)&v38 + 6);
          return;
        }
        if ( (int)a3 <= 2 )
        {
          if ( (_DWORD)a3 )
          {
            if ( (_DWORD)a3 != 1 )
              return;
            v19 = (__int64)a1 + 40;
            v20 = 2165563905LL;
          }
          else
          {
            v19 = (__int64)a1 + 40;
            v20 = 2165563904LL;
          }
          *(_QWORD *)&v38 = sub_524FA0(v19, v20, 0);
          *((_QWORD *)&v38 + 1) = v21;
          *(_QWORD *)v18 = v38;
          *(_QWORD *)((char *)v18 + 6) = *(_QWORD *)((char *)&v38 + 6);
          return;
        }
        if ( (_DWORD)a3 == 3 )
        {
          *(_QWORD *)&v38 = sub_524FA0((__int64)a1 + 40, 2165563907LL, 0);
          *((_QWORD *)&v38 + 1) = v23;
          *(_QWORD *)&v37 = v38;
          *(_QWORD *)v18 = v38;
          *((_QWORD *)&v37 + 1) = v23;
          *(_QWORD *)((char *)v18 + 6) = *(_QWORD *)((char *)&v37 + 6);
        }
        break;
      case 2:
        if ( (_DWORD)a3 == 2 )
        {
          sub_524FF0((__int64)a1 + 40, 2165563906LL, *(QT::QColor **)a4, 0);
        }
        else if ( (int)a3 > 2 )
        {
          if ( (_DWORD)a3 == 3 )
            sub_524FF0((__int64)a1 + 40, 2165563907LL, *(QT::QColor **)a4, 0);
        }
        else if ( (_DWORD)a3 )
        {
          if ( (_DWORD)a3 == 1 )
            sub_524FF0((__int64)a1 + 40, 2165563905LL, *(QT::QColor **)a4, 0);
        }
        else
        {
          sub_524FF0((__int64)a1 + 40, 2165563904LL, *(QT::QColor **)a4, 0);
        }
        break;
    }
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        v24 = **(_DWORD **)(a4 + 16);
        v25 = *(_QWORD *)(a4 + 8);
        p_ptr = &ptr;
        *(_QWORD *)&v38 = 0;
        LODWORD(ptr) = v24;
        *((_QWORD *)&v38 + 1) = v25;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_8974E0, nullptr, (int)&v38, a5);
        break;
      case 1LL:
        v26 = **(_BYTE **)(a4 + 8);
        *((_QWORD *)&v38 + 1) = &ptr;
        *(_QWORD *)&v38 = 0;
        LOBYTE(ptr) = v26;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_8974E0,
          (const QT::QMetaObject *)((char *)&dword_0 + 1),
          (int)&v38,
          a5);
        break;
      case 2LL:
        v27 = **(void ***)(a4 + 8);
        *((_QWORD *)&v38 + 1) = &ptr;
        *(_QWORD *)&v38 = 0;
        ptr = v27;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_8974E0,
          (const QT::QMetaObject *)((char *)&dword_0 + 2),
          (int)&v38,
          a5);
        break;
      case 3LL:
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_8974E0,
          (const QT::QMetaObject *)((char *)&dword_0 + 3),
          0,
          a5);
        break;
      case 4LL:
        v28 = **(void ***)(a4 + 8);
        *((_QWORD *)&v38 + 1) = &ptr;
        *(_QWORD *)&v38 = 0;
        ptr = v28;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_8974E0, (const QT::QMetaObject *)&byte_4, (int)&v38, a5);
        break;
      case 5LL:
        sub_4A4730(a1, a6, a7, a8, a9, a10, a11, a12, a13);
        break;
      case 6LL:
        sub_4A7BF0(a1, **(_QWORD **)(a4 + 8));
        break;
      case 7LL:
        sub_49EB90((__int64)&ptr, (__int64)a1);
        goto LABEL_57;
      case 8LL:
        sub_49EA20((__int64)&ptr, (__int64)a1);
LABEL_57:
        v29 = ptr;
        v30 = *(QT::QColor **)a4;
        if ( *(_QWORD *)a4 )
        {
          v29 = *(void **)v30;
          *(_QWORD *)v30 = ptr;
          ptr = v29;
          v31 = *((_QWORD *)v30 + 1);
          *((_QWORD *)v30 + 1) = v35;
          v35 = v31;
          v32 = *((_QWORD *)v30 + 2);
          *((_QWORD *)v30 + 2) = v36;
          v36 = v32;
        }
        if ( v29 )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)v29, 1u) )
            free(ptr);
        }
        break;
      case 9LL:
        sub_4A9020((__int64)a1, *(__int64 **)(a4 + 8), a6, a7, a8, a9, a10, a11, a12, a13);
        break;
      case 10LL:
        sub_4A7790((__int64)a1);
        break;
      case 11LL:
        sub_4A8890(a1, a6, a7, a8, a9, a10, a11, a12, a13);
        break;
      case 12LL:
        sub_49BDA0(a1);
        break;
      case 13LL:
        sub_49E920((__int64)a1, a6);
        break;
      case 14LL:
        v33 = *(void (**)(void))(*(_QWORD *)a1 + 776LL);
        if ( v33 != nullsub_308 )
          v33();
        break;
      case 15LL:
        sub_49E190(a1);
        break;
      case 16LL:
        sub_49E1A0((__int64)a1);
        break;
      case 17LL:
        sub_4A4480((__int64)a1);
        break;
      case 18LL:
        sub_49EAC0((__int64)a1);
        break;
      case 20LL:
        (*(void (__fastcall **)(QT::QMetaObject *, _QWORD))(*(_QWORD *)a1 + 784LL))(a1, *(_QWORD *)(a4 + 8));
        break;
      case 21LL:
        sub_4A8880(a1, a6, a7, a8, a9, a10, a11, a12, a13);
        break;
      default:
        return;
    }
  }
}
