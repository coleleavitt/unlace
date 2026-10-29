__int64 __fastcall sub_14B200(__int64 a1)
{
  int Ticks; // eax
  int v2; // edx
  TView *v3; // rbp
  TView *v4; // rbp
  int v6; // edx
  __int64 v7; // rbp
  int v8; // edx
  __int64 v9; // rbp
  int v10; // [rsp+0h] [rbp-48h] BYREF
  int v11; // [rsp+4h] [rbp-44h]
  __int64 v12; // [rsp+8h] [rbp-40h]
  int v13; // [rsp+10h] [rbp-38h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  Ticks = getTicks();
  v2 = dword_254120 - Ticks;
  if ( dword_254120 - Ticks < 0 )
    v2 = Ticks - dword_254120;
  if ( v2 > 2 )
  {
    v3 = qword_254118;
    dword_254120 = Ticks;
    if ( qword_254118 )
    {
      if ( !(unsigned __int8)print_auto_state() )
        goto LABEL_6;
    }
    else
    {
      v11 = (unsigned __int64)TView::getExtent((TView *)(a1 + 8)) >> 32;
      v10 = v6 - 21;
      LODWORD(v12) = v6 - 10;
      HIDWORD(v12) = v11 + 1;
      v7 = operator new(0x98u);
      TView::TView(v7, &v10);
      *(_BYTE *)(v7 + 84) = 0;
      *(_QWORD *)v7 = &off_23A038;
      *(_DWORD *)(v7 + 80) = 8;
      *(_BYTE *)(v7 + 48) = 5;
      TWindow::setState();
      TWindow::setState();
      qword_254118 = (TView *)v7;
      if ( !TFileList::getKey((TFileList *)TProgram::application, (const char *)v7) )
      {
        qword_254118 = nullptr;
        return 1;
      }
      TGroup::insert((TGroup *)(a1 + 8), qword_254118);
      v3 = qword_254118;
      if ( !(unsigned __int8)print_auto_state() )
      {
LABEL_6:
        v4 = qword_254110;
        if ( qword_254110 )
          goto LABEL_7;
LABEL_14:
        v11 = (unsigned __int64)TView::getExtent((TView *)(a1 + 8)) >> 32;
        LODWORD(v12) = v8;
        v10 = v8 - 9;
        HIDWORD(v12) = v11 + 1;
        v9 = operator new(0x50u);
        TView::TView(v9, &v10);
        *(_BYTE *)(v9 + 48) = 5;
        *(_QWORD *)v9 = &off_239F78;
        *(_DWORD *)(v9 + 72) = 3;
        TWindow::setState();
        qword_254110 = (TView *)v9;
        TGroup::insert((TGroup *)(a1 + 8), (TView *)v9);
        v4 = qword_254110;
LABEL_7:
        v10 = 0;
        v12 = -1;
        v13 = 0;
        get_auto_display();
        if ( v13 != *((_DWORD *)v4 + 18) )
        {
          *((_DWORD *)v4 + 18) = v13;
          TView::drawView(v4);
        }
        return 1;
      }
    }
    TView::drawView(v3);
    v4 = qword_254110;
    if ( qword_254110 )
      goto LABEL_7;
    goto LABEL_14;
  }
  return 0;
}

