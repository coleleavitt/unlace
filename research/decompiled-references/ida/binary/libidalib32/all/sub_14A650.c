unsigned __int64 __fastcall sub_14A650(TView *this)
{
  char Color; // al
  unsigned int v2; // edx
  _BYTE v4[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v5; // [rsp+408h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  Color = TView::getColor(this, 2u);
  v2 = 9668322;
  if ( *((int *)this + 18) <= 0 )
    v2 = 9537250;
  TDrawBuffer::moveChar((TDrawBuffer *)v4, 0, v2, Color, *((_WORD *)this + 8));
  TView::writeLine(this, 0, 0, *((_WORD *)this + 8), 1, v4);
  return v5 - __readfsqword(0x28u);
}

