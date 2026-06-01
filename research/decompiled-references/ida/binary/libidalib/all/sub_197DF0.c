__int64 __fastcall sub_197DF0(__int64 **this, __int16 *a2, double a3, double a4, __m128 a5)
{
  __int16 v5; // ax
  __int16 v6; // ax
  __int64 *v8; // rax

  v5 = *a2;
  if ( *a2 == 256 )
  {
    if ( a2[4] != 11 )
      return sub_19FDC0((TView *)this);
    goto LABEL_15;
  }
  if ( v5 == 512 )
  {
    if ( a2[4] != 31 )
      return sub_19FDC0((TView *)this);
LABEL_7:
    sub_1974D0(*(this + 22), a3, a4, a5);
    if ( (*((_BYTE *)this + 29) & 2) != 0 )
      ((void (__fastcall *)(__int64 **, __int64))(*this)[18])(this, 4);
    return TView::clearEvent(this, a2);
  }
  if ( v5 == 1 )
  {
    if ( (a2[8] & 2) == 0 )
      return sub_19FDC0((TView *)this);
    goto LABEL_7;
  }
  if ( v5 != 16 )
    return sub_19FDC0((TView *)this);
  v6 = a2[4];
  if ( v6 == 283 )
  {
LABEL_15:
    v8 = *this;
    if ( (*((_BYTE *)this + 29) & 2) != 0 )
      ((void (__fastcall *)(__int64 **, __int64))v8[18])(this, 11);
    else
      ((void (__fastcall *)(__int64 **))v8[23])(this);
    return TView::clearEvent(this, a2);
  }
  if ( v6 == 7181 )
    goto LABEL_7;
  return sub_19FDC0((TView *)this);
}

