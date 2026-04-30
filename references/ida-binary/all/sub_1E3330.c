__int64 __fastcall sub_1E3330(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rbx
  const char *v3; // rbp
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  double v6; // xmm0_8
  const char *v8; // [rsp+0h] [rbp-88h] BYREF
  __int128 v9; // [rsp+8h] [rbp-80h]
  void *ptr[4]; // [rsp+20h] [rbp-68h] BYREF
  int v11; // [rsp+40h] [rbp-48h] BYREF
  __int64 v12; // [rsp+48h] [rbp-40h]
  __int128 v13; // [rsp+50h] [rbp-38h]
  unsigned __int64 v14; // [rsp+68h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 220);
  if ( v1 == -1 )
    return 0;
  v8 = nullptr;
  v9 = 0;
  v11 = -2;
  v12 = -1;
  v13 = 0;
  if ( sub_234FE0((unsigned int)dword_8CC428) )
    sub_23F750(v1, &v11);
  sub_24B690(&v8, &v11, v1);
  v2 = QT::QGuiApplication::clipboard((QT::QGuiApplication *)&v8);
  if ( (_QWORD)v9 )
  {
    v5 = v9 - 1;
    v3 = v8;
    v4 = (unsigned __int64)(v9 - 1) >> 63;
    if ( !v8 )
    {
LABEL_17:
      v5 = 0;
      if ( v3 )
        v5 = strlen(v3);
      goto LABEL_7;
    }
  }
  else
  {
    v3 = &s1;
    LOBYTE(v4) = 0;
    v5 = 0;
    if ( !&s1 )
      goto LABEL_17;
  }
  if ( (_BYTE)v4 )
    goto LABEL_17;
LABEL_7:
  v6 = QT::QString::fromUtf8(ptr, v5, v3);
  QT::QClipboard::setText(v2, ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v11 >= -1 && v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, (const char *)ptr, v6);
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8, (const char *)ptr, v6);
  }
  return 1;
}
