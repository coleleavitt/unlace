QT::QTreeWidgetItem *__fastcall TStructureOffsetsForm::load_register_paths(
        __int64 a1,
        __int64 a2,
        const char **a3,
        QT::QTreeWidgetItem *a4)
{
  __int64 v4; // r12
  const char *v5; // rbp
  __int64 v7; // rax
  size_t v8; // rax
  const char *v9; // r13
  size_t v10; // rdx
  double v11; // xmm0_8
  QT::QTreeWidgetItem *v12; // rbx
  const char *v13; // rbp
  const char *v15; // [rsp+8h] [rbp-50h] BYREF
  void *ptr[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *a3;
  ptr[3] = (void *)__readfsqword(0x28u);
  *a3 = nullptr;
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 )
  {
    v8 = v7 - 1;
    v9 = *(const char **)a2;
    v10 = v8 >> 63;
  }
  else
  {
    LOBYTE(v10) = 0;
    v8 = 0;
    v9 = &s1;
  }
  if ( !v9 || (_BYTE)v10 )
  {
    v8 = 0;
    if ( v9 )
      v8 = strlen(v9);
  }
  v11 = QT::QString::fromUtf8(ptr, v8, v9);
  v15 = v5;
  v12 = sub_391B50(v4, a4, (const QT::QString *)ptr, &v15);
  v13 = v15;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v13 )
    (*(void (__fastcall **)(const char *, double))(*(_QWORD *)v13 + 8LL))(v13, v11);
  return v12;
}
