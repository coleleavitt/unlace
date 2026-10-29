unsigned __int64 __fastcall sub_17A0A0(TView *this)
{
  unsigned __int16 Color; // bp
  _BYTE v3[1024]; // [rsp+0h] [rbp-838h] BYREF
  char v4[1032]; // [rsp+400h] [rbp-438h] BYREF
  unsigned __int64 v5; // [rsp+808h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  Color = TView::getColor(this, 1u);
  qsnprintf();
  TDrawBuffer::moveChar((TDrawBuffer *)v3, 0, 0x20u, Color, *((_WORD *)this + 8));
  TDrawBuffer::moveStr((TDrawBuffer *)v3, 0, v4, Color);
  TView::writeLine(this, 0, 0, *((_WORD *)this + 8), 1, v3);
  return v5 - __readfsqword(0x28u);
}

