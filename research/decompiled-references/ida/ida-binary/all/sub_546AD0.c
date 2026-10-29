__int64 __fastcall sub_546AD0(QT::QMetaObject *a1, int a2, __int64 a3, __int64 a4, void **a5)
{
  void **v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  _DWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rdx
  void **v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  void *v17; // [rsp+8h] [rbp-40h]
  void *v18; // [rsp+10h] [rbp-38h]
  int v19[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  unsigned __int64 v21; // [rsp+38h] [rbp-10h]

  v21 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 7 )
    {
      v6 = *(void ***)a4;
      if ( (_DWORD)a3 == 5 && **(_DWORD **)(a4 + 8) <= 1u )
        *v6 = &unk_8C33A0;
      else
        *v6 = nullptr;
    }
    else if ( a2 == 5 )
    {
      v8 = *(_QWORD *)(a4 + 8);
      v9 = *(_DWORD **)a4;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v8 == sub_546800 )
      {
        if ( !*(_QWORD *)(v8 + 8) )
          *v9 = 0;
      }
      else if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v8 == sub_546850
             && !*(_QWORD *)(v8 + 8) )
      {
        *v9 = 1;
      }
    }
    return v21 - __readfsqword(0x28u);
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        v10 = *(_QWORD *)(a4 + 8);
        *(_QWORD *)v19 = 0;
        v20 = v10;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_895EA0, nullptr, (int)v19, a5);
        return v21 - __readfsqword(0x28u);
      case 1LL:
        v11 = *(_QWORD *)(a4 + 8);
        *(_QWORD *)v19 = 0;
        v20 = v11;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_895EA0,
          (const QT::QMetaObject *)((char *)&dword_0 + 1),
          (int)v19,
          a5);
        return v21 - __readfsqword(0x28u);
      case 2LL:
        QT::QString::fromUtf8(&ptr, 13, "Tabular views");
        v12 = ptr;
        v13 = *(void ***)a4;
        if ( *(_QWORD *)a4 )
        {
          v12 = *v13;
          *v13 = ptr;
          v14 = v13[1];
          ptr = v12;
          v13[1] = v17;
          v17 = v14;
          v15 = v13[2];
          v13[2] = v18;
          v18 = v15;
        }
        if ( v12 )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)v12, 1u) )
            free(ptr);
        }
        return v21 - __readfsqword(0x28u);
      case 3LL:
        result = (*(__int64 (__fastcall **)(QT::QMetaObject *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 840LL))(
                   a1,
                   *(_QWORD *)(a4 + 8),
                   **(unsigned int **)(a4 + 16),
                   **(unsigned int **)(a4 + 24));
        break;
      case 4LL:
        result = sub_48F660(a1, *(_QWORD *)(a4 + 8));
        break;
      case 5LL:
        result = sub_48FF50(a1);
        break;
      default:
        return v21 - __readfsqword(0x28u);
    }
  }
  return result;
}
