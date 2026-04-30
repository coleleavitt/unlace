__int64 __fastcall sub_54E4F0(QT::QMetaObject *a1, int a2, __int64 a3, __int64 a4, void **a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  QT::QColor *v8; // rsi
  QT::QColor *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  void *v14; // rax
  void *v15; // rax
  void *v16; // rdx
  QT::QColor *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+8h] [rbp-70h]
  __int64 v23; // [rsp+10h] [rbp-68h]
  __int128 v24; // [rsp+40h] [rbp-38h]
  __int128 v25; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-10h]

  v26 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v7 = *(_QWORD *)(a4 + 8);
      v8 = *(QT::QColor **)a4;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v7 == sub_54E010 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *(_DWORD *)v8 = 0;
      }
      else if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v7 == sub_54E070
             && !*(_QWORD *)(v7 + 8) )
      {
        *(_DWORD *)v8 = 1;
      }
      return v26 - __readfsqword(0x28u);
    }
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
      {
        if ( (_DWORD)a3 == 2 )
          return sub_524FF0((__int64)a1 + 240, 2165563906LL, *(QT::QColor **)a4, 0);
        if ( (int)a3 > 2 )
        {
          if ( (_DWORD)a3 == 3 )
            return sub_524FF0((__int64)a1 + 240, 2165563907LL, *(QT::QColor **)a4, 0);
        }
        else
        {
          if ( !(_DWORD)a3 )
            return sub_524FF0((__int64)a1 + 240, 2165563904LL, *(QT::QColor **)a4, 0);
          if ( (_DWORD)a3 == 1 )
            return sub_524FF0((__int64)a1 + 240, 2165563905LL, *(QT::QColor **)a4, 0);
        }
      }
      return v26 - __readfsqword(0x28u);
    }
    v9 = *(QT::QColor **)a4;
    if ( (_DWORD)a3 == 1 )
    {
      v11 = (__int64)a1 + 240;
      v12 = 2165563905LL;
    }
    else
    {
      if ( (int)a3 > 1 )
      {
        if ( (_DWORD)a3 == 2 )
        {
          *(_QWORD *)&v25 = sub_524FA0((__int64)a1 + 240, 2165563906LL, 0);
          *((_QWORD *)&v25 + 1) = v20;
          *(_QWORD *)&v24 = v25;
          *(_QWORD *)v9 = v25;
          *((_QWORD *)&v24 + 1) = v20;
          *(_QWORD *)((char *)v9 + 6) = *(_QWORD *)((char *)&v25 + 6);
        }
        else if ( (_DWORD)a3 == 3 )
        {
          *(_QWORD *)&v25 = sub_524FA0((__int64)a1 + 240, 2165563907LL, 0);
          *((_QWORD *)&v25 + 1) = v10;
          *(_QWORD *)&v24 = v25;
          *(_QWORD *)v9 = v25;
          *((_QWORD *)&v24 + 1) = v10;
          *(_QWORD *)((char *)v9 + 6) = *(_QWORD *)((char *)&v24 + 6);
        }
        return v26 - __readfsqword(0x28u);
      }
      if ( (_DWORD)a3 )
        return v26 - __readfsqword(0x28u);
      v11 = (__int64)a1 + 240;
      v12 = 2165563904LL;
    }
    *(_QWORD *)&v25 = sub_524FA0(v11, v12, 0);
    *((_QWORD *)&v25 + 1) = v13;
    *(_QWORD *)v9 = v25;
    *(_QWORD *)((char *)v9 + 6) = *(_QWORD *)((char *)&v25 + 6);
    return v26 - __readfsqword(0x28u);
  }
  switch ( a3 )
  {
    case 0LL:
      v15 = **(void ***)(a4 + 8);
      *((_QWORD *)&v25 + 1) = &ptr;
      *(_QWORD *)&v25 = 0;
      ptr = v15;
      QT::QMetaObject::activate(a1, (QT::QObject *)&off_89D580, nullptr, (int)&v25, a5);
      return v26 - __readfsqword(0x28u);
    case 1LL:
      v14 = **(void ***)(a4 + 8);
      *((_QWORD *)&v25 + 1) = &ptr;
      *(_QWORD *)&v25 = 0;
      ptr = v14;
      QT::QMetaObject::activate(
        a1,
        (QT::QObject *)&off_89D580,
        (const QT::QMetaObject *)((char *)&dword_0 + 1),
        (int)&v25,
        a5);
      return v26 - __readfsqword(0x28u);
    case 2LL:
      result = sub_521FC0((__int64)a1, **(_QWORD **)(a4 + 8));
      break;
    case 3LL:
      sub_522000((__int64)&ptr, (__int64)a1);
      v16 = ptr;
      v17 = *(QT::QColor **)a4;
      if ( *(_QWORD *)a4 )
      {
        v16 = *(void **)v17;
        *(_QWORD *)v17 = ptr;
        ptr = v16;
        v18 = *((_QWORD *)v17 + 1);
        *((_QWORD *)v17 + 1) = v22;
        v22 = v18;
        v19 = *((_QWORD *)v17 + 2);
        *((_QWORD *)v17 + 2) = v23;
        v23 = v19;
      }
      if ( v16 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v16, 1u) )
          free(ptr);
      }
      return v26 - __readfsqword(0x28u);
    case 4LL:
      result = (*(__int64 (__fastcall **)(QT::QMetaObject *))(*(_QWORD *)a1 + 1056LL))(a1);
      break;
    case 5LL:
      result = sub_5220A0((__int64)a1);
      break;
    case 7LL:
      result = sub_51F480(a1);
      break;
    case 8LL:
      result = sub_51F1E0(a1, *(_QWORD *)(a4 + 8));
      break;
    case 9LL:
      result = sub_522FB0(a1);
      break;
    default:
      return v26 - __readfsqword(0x28u);
  }
  return result;
}
