QT::QWidget *sub_429C40()
{
  unsigned __int64 *v0; // rax
  void *v1; // rsi
  char *v2; // rbx
  const char *v3; // rsi
  QT::QWidget *v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v9; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v10; // [rsp+8h] [rbp-F0h]
  __int64 v11; // [rsp+18h] [rbp-E0h]
  char v12; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v13[6]; // [rsp+90h] [rbp-68h] BYREF
  int v14; // [rsp+C0h] [rbp-38h]
  unsigned __int64 v15; // [rsp+C8h] [rbp-30h] BYREF

  v15 = __readfsqword(0x28u);
  v9 = 0;
  v11 = -4294967268LL;
  v0 = (unsigned __int64 *)&v12;
  v10 = 0;
  do
  {
    *v0 = 0;
    v0 += 7;
    *((_OWORD *)v0 - 3) = 0;
    *(v0 - 4) = 0;
    *(_OWORD *)(v0 - 3) = 0;
    *((_DWORD *)v0 - 2) = -1;
  }
  while ( &v15 != v0 );
  v1 = (void *)v13[0];
  if ( v13[2] <= 0xEu )
  {
    v13[0] = qvector_reserve(v13, v13[0], 15, 1);
    v1 = (void *)v13[0];
  }
  v13[1] = 15;
  qmemcpy(v1, "Delete file...", 14);
  *(_BYTE *)(v13[0] + 14LL) = 0;
  v14 = sub_47A0E0(QT::QCoreApplication::self, "delete_file", "resources/icons/actions");
  v2 = (char *)operator new(0x9E8u);
  sub_427310(v2, (int)"Vault files", (__int64)&v9);
  v3 = v2;
  v4 = (QT::QWidget *)operator new(0x48u);
  sub_5226F0(v4);
  v5 = v13;
  *(_QWORD *)v4 = &files_dirtree_widget_host_t___vtable;
  *((_QWORD *)v4 + 2) = files_dirtree_widget_host_t___vtable_at__16;
  do
  {
    v6 = v5[3];
    if ( v6 )
    {
      v5[4] = 0;
      qfree(v6, v3);
    }
    v7 = *v5;
    if ( *v5 )
    {
      v5[1] = 0;
      qfree(v7, v3);
    }
    v5 -= 7;
  }
  while ( &v9 - 3 != v5 );
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, v3);
  }
  return v4;
}
