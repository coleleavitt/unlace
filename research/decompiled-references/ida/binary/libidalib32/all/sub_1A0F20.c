void __fastcall sub_1A0F20(TEditor *a1)
{
  *(_QWORD *)a1 = &off_23DA38;
  TEditor::~TEditor(a1);
  operator delete(a1, 0xF8u);
}

