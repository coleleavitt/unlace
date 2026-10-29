unsigned __int64 __fastcall sub_B7BE0(TView *this)
{
  unsigned __int16 Color; // ax
  unsigned __int16 v2; // ax
  _BYTE v4[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v5; // [rsp+408h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  Color = TView::getColor(this, 2u);
  TDrawBuffer::moveChar((TDrawBuffer *)v4, 0, 0x9095E2u, Color, *((_WORD *)this + 8));
  v2 = strlen((const char *)this + 72);
  TDrawBuffer::moveBuf((TDrawBuffer *)v4, 0, (char *)this + 72, 0x1Bu, v2);
  TView::writeLine(this, 0, 0, *((_WORD *)this + 8), 1, v4);
  return v5 - __readfsqword(0x28u);
}

