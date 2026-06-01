__int64 __fastcall sub_444E10(int a1)
{
  __int64 *v1; // rbx
  QT::QWidget *v2; // r14
  _QWORD *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // r14d
  const char *v9; // [rsp-10h] [rbp-140h]
  _QWORD v10[7]; // [rsp+0h] [rbp-130h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-F8h]
  __int64 v12; // [rsp+40h] [rbp-F0h] BYREF
  __int128 v13; // [rsp+48h] [rbp-E8h]
  unsigned __int64 v14; // [rsp+58h] [rbp-D8h]
  _BYTE v15[168]; // [rsp+60h] [rbp-D0h] BYREF
  _QWORD v16[5]; // [rsp+108h] [rbp-28h] BYREF

  v1 = v16;
  v16[0] = __readfsqword(0x28u);
  v12 = 0;
  v2 = (QT::QWidget *)operator new(0x9F0u);
  v13 = 0;
  v14 = 0xFFFFFFFF00000000LL;
  v3 = v15;
  do
  {
    *v3 = 0;
    v3 += 7;
    *((_OWORD *)v3 - 3) = 0;
    *(v3 - 4) = 0;
    *(_OWORD *)(v3 - 3) = 0;
    *((_DWORD *)v3 - 2) = -1;
  }
  while ( v16 != v3 );
  sub_444AF0(v2, nullptr, 0, 0x20u, (__int64)&v12, 9, a1);
  do
  {
    v4 = *(v1 - 4);
    v1 -= 7;
    if ( v4 )
    {
      v1[4] = 0;
      qfree(v4, v9);
    }
    v5 = *v1;
    if ( *v1 )
    {
      v1[1] = 0;
      qfree(v5, v9);
    }
  }
  while ( v1 != (__int64 *)v15 );
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, v9);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *, const char *))(*QT::QCoreApplication::self + 224LL))(
         QT::QCoreApplication::self,
         v9);
  sub_4436A0((QT::QWidget *)v10, v6, "Choose worklist", v2);
  if ( (unsigned int)sub_53AB40((QT::QWidget *)v10) == 1 )
    v7 = v11;
  else
    v7 = -1;
  v10[2] = ui_dialog_t___vtable_at__16;
  v10[0] = &ui_dialog_t___vtable;
  QT::QDialog::~QDialog((QT::QDialog *)v10);
  return v7;
}
