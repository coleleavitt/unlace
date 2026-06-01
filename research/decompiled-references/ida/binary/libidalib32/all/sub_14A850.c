unsigned __int64 __fastcall sub_14A850(TView *this)
{
  unsigned __int16 Color; // bp
  _BYTE v3[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v4; // [rsp+408h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  Color = (char)TView::getColor(this, 2u);
  TDrawBuffer::moveChar((TDrawBuffer *)v3, 0, 0x20u, Color, *((_WORD *)this + 8));
  TDrawBuffer::moveStr((TDrawBuffer *)v3, 0, (const char *)this + 80, Color);
  TView::writeLine(this, 0, 0, *((_WORD *)this + 8), 1, v3);
  return v4 - __readfsqword(0x28u);
}

