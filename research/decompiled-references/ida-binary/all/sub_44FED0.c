__int64 sub_44FED0()
{
  __int64 v0; // rax
  QT::QWidget *Child_helper; // rbx
  __int64 *v3; // rbp
  _QWORD *v4; // rax
  void *v5; // rsi
  const char *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // [rsp+0h] [rbp-108h] BYREF
  __int128 v10; // [rsp+8h] [rbp-100h]
  __int64 v11; // [rsp+18h] [rbp-F0h]
  _BYTE v12[112]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v13[6]; // [rsp+90h] [rbp-78h] BYREF
  int v14; // [rsp+C0h] [rbp-48h]
  _QWORD v15[8]; // [rsp+C8h] [rbp-40h] BYREF

  v15[0] = __readfsqword(0x28u);
  v0 = sub_41A4D0("Local files");
  if ( !v0 || (Child_helper = (QT::QWidget *)QT::qt_qFindChild_helper(v0, 0, 0, &off_876A60, 1)) == nullptr )
  {
    v9 = 0;
    v11 = -4294967268LL;
    v3 = v15;
    v10 = 0;
    v4 = v12;
    do
    {
      *v4 = 0;
      v4 += 7;
      *((_OWORD *)v4 - 3) = 0;
      *(v4 - 4) = 0;
      *(_OWORD *)(v4 - 3) = 0;
      *((_DWORD *)v4 - 2) = -1;
    }
    while ( v15 != v4 );
    v5 = (void *)v13[0];
    if ( v13[2] <= 0xEu )
    {
      v13[0] = qvector_reserve(v13, v13[0], 15, 1);
      v5 = (void *)v13[0];
    }
    v13[1] = 15;
    qmemcpy(v5, "Delete file...", 14);
    *(_BYTE *)(v13[0] + 14LL) = 0;
    v14 = sub_47A0E0(QT::QCoreApplication::self, "delete_file", "resources/icons/actions");
    v6 = (const char *)operator new(0x9E8u);
    sub_4538C0(v6, "Local files", &v9);
    Child_helper = (QT::QWidget *)operator new(0x48u);
    sub_5226F0(Child_helper);
    *(_QWORD *)Child_helper = &files_dirtree_widget_host_t___vtable;
    *((_QWORD *)Child_helper + 2) = files_dirtree_widget_host_t___vtable_at__16;
    do
    {
      v7 = *(v3 - 4);
      v3 -= 7;
      if ( v7 )
      {
        v3[4] = 0;
        qfree(v7, v6);
      }
      v8 = *v3;
      if ( *v3 )
      {
        v3[1] = 0;
        qfree(v8, v6);
      }
    }
    while ( v3 != (__int64 *)v12 );
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v9, v6);
    }
  }
  sub_42D340((const char *)Child_helper);
  return 1;
}
