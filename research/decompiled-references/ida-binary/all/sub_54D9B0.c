__int64 __fastcall sub_54D9B0(QT::QWidget *a1, int a2, __int64 *a3)
{
  void (*v4)(); // rax
  __int64 result; // rax
  void *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h]
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0:
      QT::QString::fromUtf8(&ptr, 13, "Output window");
      v6 = ptr;
      v7 = *a3;
      if ( *a3 )
      {
        v6 = *(void **)v7;
        *(_QWORD *)v7 = ptr;
        v8 = *(_QWORD *)(v7 + 8);
        ptr = v6;
        *(_QWORD *)(v7 + 8) = v11;
        v11 = v8;
        v9 = *(_QWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 16) = v12;
        v12 = v9;
      }
      if ( v6 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v6, 1u) )
          free(ptr);
      }
      goto LABEL_3;
    case 1:
      return sub_512820(a1);
    case 2:
      return sub_513D20((__int64)a1, *(_QWORD *)a3[1]);
    case 3:
      v4 = *(void (**)())(*(_QWORD *)a1 + 456LL);
      if ( v4 != nullsub_329 )
        goto LABEL_5;
      goto LABEL_3;
    case 4:
      v4 = *(void (**)())(*(_QWORD *)a1 + 464LL);
      if ( v4 == nullsub_330 )
        goto LABEL_3;
LABEL_5:
      result = ((__int64 (*)(void))v4)();
      break;
    default:
LABEL_3:
      result = v13 - __readfsqword(0x28u);
      break;
  }
  return result;
}
