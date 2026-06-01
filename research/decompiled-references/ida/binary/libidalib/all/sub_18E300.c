void __fastcall sub_18E300(TEditor *a1)
{
  *(_QWORD *)a1 = &off_23EA38;
  TEditor::~TEditor(a1);
  operator delete(a1, 0xF8u);
}

