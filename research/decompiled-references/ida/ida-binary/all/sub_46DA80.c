__int64 __fastcall sub_46DA80(QT::QPlainTextEdit *a1, int a2, __int64 *a3)
{
  void *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+8h] [rbp-20h]
  __int64 v11; // [rsp+10h] [rbp-18h]
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0:
      QT::QString::fromUtf8(&ptr, 10, "Text input");
      goto LABEL_3;
    case 1:
      return sub_3495D0((__int64)a1, *(_QWORD *)a3[1]);
    case 2:
      sub_349740((__int64)&ptr);
LABEL_3:
      v4 = ptr;
      v5 = *a3;
      if ( *a3 )
      {
        v4 = *(void **)v5;
        *(_QWORD *)v5 = ptr;
        ptr = v4;
        v6 = *(_QWORD *)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v10;
        v10 = v6;
        v7 = *(_QWORD *)(v5 + 16);
        *(_QWORD *)(v5 + 16) = v11;
        v11 = v7;
      }
      if ( v4 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v4, 1u) )
          free(ptr);
      }
      return v12 - __readfsqword(0x28u);
    case 5:
      return sub_349B90((__int64)a1, *(__int64 **)a3[1]);
    case 6:
      return sub_349620(a1, a3[1]);
    default:
      return v12 - __readfsqword(0x28u);
  }
}
