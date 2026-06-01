unsigned __int64 __fastcall sub_114B20(TView *this, int *a2, int a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // eax
  bool v20; // zf
  _QWORD *v21; // rbp
  TGroup *v22; // rdi
  unsigned __int64 v23; // rdx
  _QWORD *v24; // r15
  std::__detail::_List_node_base *v25; // rax
  void (*v26)(); // rax
  _QWORD *v27; // rax
  std::__detail::_List_node_base *v28; // rax
  void (*v29)(); // rax
  int v31; // edx
  int Extent; // eax
  int v33; // edx
  struct _Unwind_Exception *v34; // rbp
  _QWORD *v35; // [rsp+10h] [rbp-88h]
  unsigned __int64 v36; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v37[4]; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  TGroup::TGroup(this, a2 + 3);
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 20) = (char *)this + 144;
  *((_QWORD *)this + 21) = (char *)this + 144;
  *(_QWORD *)this = &off_238598;
  *((_QWORD *)this + 16) = off_238660;
  *((_QWORD *)this + 27) = (char *)this + 200;
  *((_QWORD *)this + 28) = (char *)this + 200;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0;
  *((_QWORD *)this + 29) = 0;
  *((_QWORD *)this + 23) = &off_235A00;
  *((_QWORD *)this + 30) = 0;
  sub_1770B0((_DWORD)this + 184, a3, v5, v6, v7, v8);
  *((_QWORD *)this + 32) = this;
  *((_QWORD *)this + 37) = (char *)this + 280;
  *((_QWORD *)this + 38) = (char *)this + 280;
  *((_QWORD *)this + 23) = &off_231C20;
  *((_DWORD *)this + 70) = 0;
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 39) = 0;
  *((_QWORD *)this + 33) = &off_235A00;
  *((_QWORD *)this + 40) = 0;
  sub_1770B0((_DWORD)this + 264, 0, v9, v10, v11, v12);
  *((_QWORD *)this + 33) = &off_231C20;
  *((_QWORD *)this + 47) = (char *)this + 360;
  *((_QWORD *)this + 48) = (char *)this + 360;
  *((_QWORD *)this + 42) = this;
  *((_DWORD *)this + 90) = 0;
  *((_QWORD *)this + 46) = 0;
  *((_QWORD *)this + 49) = 0;
  *((_QWORD *)this + 43) = &off_235A00;
  *((_QWORD *)this + 50) = 0;
  sub_1770B0((_DWORD)this + 344, 0, v13, v14, v15, v16);
  *((_QWORD *)this + 43) = &off_231C20;
  *((_QWORD *)this + 52) = this;
  v17 = *(_QWORD *)(a2 + 1);
  v18 = *a2;
  *((_BYTE *)this + 48) = 12;
  *((_QWORD *)this + 53) = v17;
  *((_DWORD *)this + 108) = v18;
  *((_QWORD *)this + 57) = (char *)this + 448;
  *((_QWORD *)this + 56) = (char *)this + 448;
  *((_QWORD *)this + 55) = &off_231BE0;
  if ( (unsigned int)v17 >= 0xFFFFFFFE )
  {
    LODWORD(v17) = TView::getExtent(this);
    LODWORD(v17) = 20 * (v31 - (int)v17) / 100;
  }
  *((_DWORD *)this + 106) = v17;
  v19 = *((_DWORD *)this + 107);
  if ( v19 >= 0xFFFFFFFE )
  {
    Extent = TView::getExtent(this);
    v19 = 20 * (v33 - Extent) / 100;
  }
  v20 = *((_BYTE *)this + 248) == 0;
  *((_DWORD *)this + 107) = v19;
  if ( !v20 )
  {
    v34 = (struct _Unwind_Exception *)sub_1145B0();
    *((_QWORD *)this + 55) = &off_231BE0;
    sub_9A190((_QWORD *)this + 55);
    *((_QWORD *)this + 43) = &off_235A00;
    sub_9A070((_QWORD *)this + 43);
    *((_QWORD *)this + 33) = &off_235A00;
    sub_9A070((_QWORD *)this + 33);
    *((_QWORD *)this + 23) = &off_235A00;
    sub_9A070((_QWORD *)this + 23);
    sub_9A070((_QWORD *)this + 16);
    TGroup::~TGroup(this);
    _Unwind_Resume(v34);
  }
  v21 = *((_QWORD **)this + 30);
  v22 = (TGroup *)v21[7];
  if ( v22 )
  {
    TGroup::removeView(v22, *((const TView **)this + 30));
    v21[7] = 0;
  }
  v37[1] = TView::getExtent(this);
  v37[2] = v23;
  TWindow::handleEvent();
  TGroup::insert(this, (TView *)v21);
  sub_1646D0(v21, this);
  v24 = (_QWORD *)operator new(0x20u);
  *v24 = off_231C58;
  v24[1] = this;
  v24[2] = sub_1143E0;
  v24[3] = 0;
  v25 = (std::__detail::_List_node_base *)operator new(0x18u);
  *((_QWORD *)v25 + 2) = v24;
  std::__detail::_List_node_base::_M_hook(v25, (TView *)((char *)this + 448));
  v36 = (unsigned __int64)this + 440;
  sub_99EC0((_QWORD *)this + 17, &v36);
  v26 = *(void (**)())(v21[137] + 16LL);
  if ( v26 != nullsub_1 )
    ((void (__fastcall *)(_QWORD *))v26)(v21 + 137);
  v27 = (_QWORD *)operator new(0x20u);
  *v27 = off_231C98;
  v27[1] = this;
  v27[2] = sub_1149A0;
  v27[3] = 0;
  v35 = v27;
  v28 = (std::__detail::_List_node_base *)operator new(0x18u);
  *((_QWORD *)v28 + 2) = v35;
  std::__detail::_List_node_base::_M_hook(v28, (std::__detail::_List_node_base *)(v21 + 138));
  v37[0] = (unsigned __int64)(v21 + 137);
  sub_99EC0((_QWORD *)this + 17, v37);
  v29 = *(void (**)())(v21[137] + 24LL);
  if ( v29 != nullsub_2 )
    ((void (__fastcall *)(_QWORD *))v29)(v21 + 137);
  return v38 - __readfsqword(0x28u);
}

