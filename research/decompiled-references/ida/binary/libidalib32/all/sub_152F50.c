void __fastcall sub_152F50(TView *this, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int16 v3; // ax
  unsigned int v4; // r12d
  unsigned __int8 ShiftState; // al
  __int16 v6; // ax
  int v7; // r14d
  unsigned __int8 v8; // r15
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rax
  __int64 Extent; // rax
  int v16; // edx
  int v17; // rdx^4
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // rax
  __int64 v22; // rax
  void *v23; // rbp
  __int64 v24; // rax
  void (__fastcall *v25)(void *); // rax
  __int64 Local; // [rsp+10h] [rbp-A8h]
  _BYTE v27[88]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  TWindow::handleEvent();
  v2 = *(_WORD *)a2;
  if ( *(_WORD *)a2 == 16 )
  {
    sub_151C70(a2);
    v2 = *(_WORD *)a2;
    if ( *(_WORD *)a2 != 256 )
    {
      if ( v2 > 0x100u )
        goto LABEL_7;
      if ( v2 == 1 )
        goto LABEL_24;
      if ( v2 != 16 )
        goto LABEL_5;
      if ( !*((_QWORD *)this + 41) )
        goto LABEL_5;
      v4 = sub_19C1E0(a2 + 8);
      ShiftState = getShiftState();
      if ( !(*((unsigned __int8 (__fastcall **)(TView *, _QWORD, _QWORD, _QWORD))this + 41))(
              this,
              v4,
              ShiftState,
              *((_QWORD *)this + 54)) )
        goto LABEL_5;
LABEL_18:
      if ( *((_BYTE *)this + 953) )
LABEL_51:
        TView::drawView(this);
LABEL_19:
      TView::clearEvent(this, a2);
      return;
    }
LABEL_20:
    v6 = *(_WORD *)(a2 + 8);
    switch ( v6 )
    {
      case 521:
        sub_15D6A0((char *)this + 272);
        break;
      case 5100:
        if ( !*(_QWORD *)(a2 + 16) )
          *(_QWORD *)(a2 + 16) = this;
        goto LABEL_19;
      case 520:
        sub_169520(this, 0);
        break;
      default:
        sub_152ED0((__int64)this, a2);
        return;
    }
    goto LABEL_18;
  }
  if ( v2 == 256 )
    goto LABEL_20;
  if ( v2 <= 0x100u )
  {
    if ( v2 != 1 )
    {
LABEL_5:
      *((_DWORD *)this + 218) = 0;
      return;
    }
LABEL_24:
    *((_DWORD *)this + 218) = 0;
    if ( (*(_BYTE *)(a2 + 16) & 2) == 0 )
    {
      v7 = 2;
      if ( (unsigned __int8)sub_15E860(this) )
      {
        v7 = 0;
        sub_15D6A0((char *)this + 272);
      }
      v8 = 0;
      while ( 1 )
      {
        v10 = sub_15B000();
        sub_168960(v27, this, 2 * (unsigned int)v8, v10, 4294934528LL);
        Local = TView::makeLocal(this, a2 + 8);
        if ( v7 == 1 )
        {
          sub_169550(this, 0);
          v7 = 0;
        }
        else
        {
          v7 = v7 != 0;
        }
        if ( *(_WORD *)a2 == 8 )
        {
          if ( (int)Local < 0 )
          {
            v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 224LL);
            if ( v20 == sub_F3370 )
            {
              v21 = sub_15E0E0(this);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 144LL))(v21, 1);
            }
            else
            {
              v20((__int64)this);
            }
          }
          if ( *((_DWORD *)this + 4) <= (int)Local )
          {
            v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 232LL);
            if ( v11 == sub_F33A0 )
            {
              v12 = sub_15E0E0(this);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 144LL))(v12, 0);
            }
            else
            {
              v11((__int64)this);
            }
          }
          if ( Local < 0 )
          {
            v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 192LL);
            if ( v18 == sub_F33C0 )
            {
              v19 = sub_15E0E0(this);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, 1);
            }
            else
            {
              v18((__int64)this);
            }
          }
          if ( *((_DWORD *)this + 5) <= SHIDWORD(Local) )
          {
            v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 200LL);
            if ( v13 == sub_F33F0 )
            {
              v14 = sub_15E0E0(this);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 152LL))(v14, 0);
            }
            else
            {
              v13((__int64)this);
            }
          }
          *((_BYTE *)this + 953) = 1;
        }
        Extent = TView::getExtent(this);
        if ( (int)Local < (int)Extent
          || (int)Local >= v16
          || SHIDWORD(Local) < SHIDWORD(Extent)
          || SHIDWORD(Local) >= v17 )
        {
          if ( !*((_BYTE *)this + 953) )
            goto LABEL_34;
        }
        else
        {
          v9 = sub_15E0E0(this);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 208LL))(
            v9,
            (unsigned int)Local,
            HIDWORD(Local),
            0);
          v8 = sub_15E860(this);
          if ( v8 )
          {
            *((_BYTE *)this + 953) = 1;
          }
          else
          {
            v8 = 1;
            if ( !*((_BYTE *)this + 953) )
              goto LABEL_34;
          }
        }
        TView::drawView(this);
LABEL_34:
        sub_1692D0(v27);
        if ( !(unsigned int)TView::mouseEvent(this, a2, 12) )
          goto LABEL_18;
      }
    }
    message(this, 0x100u, unk_24DEE8, nullptr);
    if ( *((_BYTE *)this + 953) )
      goto LABEL_51;
    goto LABEL_19;
  }
LABEL_7:
  if ( v2 != 512 )
    goto LABEL_5;
  v3 = *(_WORD *)(a2 + 8);
  switch ( v3 )
  {
    case 49:
      (*(void (__fastcall **)(TView *))(*(_QWORD *)this + 384LL))(this);
      return;
    case 50:
      if ( !(unsigned __int8)sub_10E220() )
      {
        v22 = sub_15E0E0(this);
        v23 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 64LL))(v22);
        v24 = sub_15E0E0(this);
        if ( (unsigned __int8)sub_916E0(v24, (__int64)v23) || *((_BYTE *)this + 953) )
          TView::drawView(this);
        if ( v23 )
        {
          v25 = *(void (__fastcall **)(void *))(*(_QWORD *)v23 + 8LL);
          if ( v25 == sub_8E310 )
            operator delete(v23, 0x18u);
          else
            v25(v23);
        }
      }
      break;
    case 28:
      (*(void (__fastcall **)(TView *, __int64))(*(_QWORD *)this + 696LL))(this, a2);
      goto LABEL_18;
  }
}

