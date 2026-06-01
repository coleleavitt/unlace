void __fastcall sub_CB4C0(char *a1)
{
  const char *v1; // rbx
  char *v2; // rax

  if ( qword_251040 )
  {
    v1 = a1;
    if ( !a1 )
    {
      v1 = "";
      qfree();
      v2 = (char *)qstrdup();
      goto LABEL_6;
    }
    if ( !qword_251030 || strcmp(a1, qword_251030) )
    {
      qfree();
      v2 = (char *)qstrdup();
LABEL_6:
      qword_251030 = v2;
      TWindow::setTitle(qword_251040, v1);
      TView::drawView(qword_251040);
    }
  }
}

