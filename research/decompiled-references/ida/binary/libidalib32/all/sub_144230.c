void __fastcall sub_144230(TWindow *this, _QWORD *a2)
{
  TWindow **v3; // rdi
  TWindow **v4; // rdx
  unsigned int v5; // eax

  *(_QWORD *)this = *a2;
  v3 = (TWindow **)qword_252F00;
  v4 = (TWindow **)(qword_252F00 + 8 * xmmword_252F08);
  if ( (TWindow **)qword_252F00 != v4 )
  {
    while ( this != *v3 )
    {
      if ( v4 == ++v3 )
        goto LABEL_7;
    }
    if ( v4 != v3 )
    {
      memmove(v3, v3 + 1, (char *)v4 - (char *)v3 - 8);
      *(_QWORD *)&xmmword_252F08 = xmmword_252F08 - 1;
    }
  }
LABEL_7:
  v5 = *((__int16 *)this + 72) - 1;
  if ( v5 <= 8 )
    byte_252EF0[v5] = 0;
  TWindow::~TWindow(this);
}

