unsigned __int64 __fastcall sub_47C5A0(QT::QGuiApplication *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rax
  size_t v6; // rax
  const char *v7; // r12
  size_t v8; // rdx
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v3 = a3;
  v11 = __readfsqword(0x28u);
  v4 = QT::QGuiApplication::clipboard(a1);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    v6 = v5 - 1;
    v7 = *(const char **)a2;
    v8 = v6 >> 63;
  }
  else
  {
    LOBYTE(v8) = 0;
    v6 = 0;
    v7 = &s1;
  }
  if ( !v7 || (_BYTE)v8 )
  {
    v6 = 0;
    if ( v7 )
      v6 = strlen(v7);
  }
  QT::QString::fromUtf8(ptr, v6, v7);
  QT::QClipboard::setText(v4, ptr, v3);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v11 - __readfsqword(0x28u);
}
