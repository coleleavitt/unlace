unsigned __int64 __fastcall sub_14A7A0(TView *this)
{
  __int64 v1; // rax
  unsigned __int16 Color; // bp
  _BYTE v4[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v5; // [rsp+408h] [rbp-20h]

  v1 = *((int *)this + 18);
  v5 = __readfsqword(0x28u);
  Color = (char)TView::getColor(this, byte_1D63E5[v1]);
  TDrawBuffer::moveChar((TDrawBuffer *)v4, 0, 0x20u, Color, *((_WORD *)this + 8));
  TDrawBuffer::moveStr((TDrawBuffer *)v4, 0, off_233A60[*((int *)this + 18)], Color);
  TView::writeLine(this, 0, 0, *((_WORD *)this + 8), 1, v4);
  return v5 - __readfsqword(0x28u);
}

