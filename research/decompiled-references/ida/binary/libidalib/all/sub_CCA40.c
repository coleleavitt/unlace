void __fastcall sub_CCA40(char *a1)
{
  const char *v1; // rbx
  char *v2; // rax

  if ( qword_252120 )
  {
    v1 = a1;
    if ( !a1 )
    {
      v1 = "";
      qfree();
      v2 = (char *)qstrdup();
      goto LABEL_6;
    }
    if ( !qword_252110 || strcmp(a1, qword_252110) )
    {
      qfree();
      v2 = (char *)qstrdup();
LABEL_6:
      qword_252110 = v2;
      TWindow::setTitle(qword_252120, v1);
      TView::drawView(qword_252120);
    }
  }
}

