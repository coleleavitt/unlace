__int64 __fastcall sub_14AA20(__int64 a1)
{
  int Ticks; // eax
  int v2; // edx
  TView *v3; // rbp
  TView *v4; // rbp
  int v6; // edx
  __int64 v7; // rbp
  int v8; // edx
  __int64 v9; // rbp
  unsigned __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  int v11; // [rsp+8h] [rbp-40h]
  int v12; // [rsp+Ch] [rbp-3Ch]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  Ticks = getTicks();
  v2 = dword_252F70 - Ticks;
  if ( dword_252F70 - Ticks < 0 )
    v2 = Ticks - dword_252F70;
  if ( v2 > 2 )
  {
    v3 = qword_252F68;
    dword_252F70 = Ticks;
    if ( qword_252F68 )
    {
      if ( !(unsigned __int8)print_auto_state() )
        goto LABEL_6;
    }
    else
    {
      HIDWORD(v10) = (unsigned __int64)TView::getExtent((TView *)(a1 + 8)) >> 32;
      LODWORD(v10) = v6 - 21;
      v11 = v6 - 10;
      v12 = HIDWORD(v10) + 1;
      v7 = operator new(0x90u);
      TView::TView(v7, &v10);
      *(_BYTE *)(v7 + 80) = 0;
      *(_QWORD *)v7 = &off_239038;
      *(_DWORD *)(v7 + 76) = 8;
      *(_BYTE *)(v7 + 48) = 5;
      TWindow::setState();
      TWindow::setState();
      qword_252F68 = (TView *)v7;
      if ( !TFileList::getKey((TFileList *)TProgram::application, (const char *)v7) )
      {
        qword_252F68 = nullptr;
        return 1;
      }
      TGroup::insert((TGroup *)(a1 + 8), qword_252F68);
      v3 = qword_252F68;
      if ( !(unsigned __int8)print_auto_state() )
      {
LABEL_6:
        v4 = qword_252F60;
        if ( qword_252F60 )
          goto LABEL_7;
LABEL_14:
        HIDWORD(v10) = (unsigned __int64)TView::getExtent((TView *)(a1 + 8)) >> 32;
        v11 = v8;
        LODWORD(v10) = v8 - 9;
        v12 = HIDWORD(v10) + 1;
        v9 = operator new(0x50u);
        TView::TView(v9, &v10);
        *(_BYTE *)(v9 + 48) = 5;
        *(_QWORD *)v9 = &off_238F78;
        *(_DWORD *)(v9 + 72) = 3;
        TWindow::setState();
        qword_252F60 = (TView *)v9;
        TGroup::insert((TGroup *)(a1 + 8), (TView *)v9);
        v4 = qword_252F60;
LABEL_7:
        v11 = 0;
        v10 = 0xFFFFFFFF00000000LL;
        get_auto_display();
        if ( v11 != *((_DWORD *)v4 + 18) )
        {
          *((_DWORD *)v4 + 18) = v11;
          TView::drawView(v4);
        }
        return 1;
      }
    }
    TView::drawView(v3);
    v4 = qword_252F60;
    if ( qword_252F60 )
      goto LABEL_7;
    goto LABEL_14;
  }
  return 0;
}

