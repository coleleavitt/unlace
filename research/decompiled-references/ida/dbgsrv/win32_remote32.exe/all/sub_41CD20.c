/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CD20
// Address: 0x0041CD20

//----- (0041CD20) --------------------------------------------------------
void __thiscall sub_41CD20(_DWORD *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // esi
  int v3; // eax
  bool v4; // zf
  void *v5; // eax
  void *v6; // eax

  if ( *((_BYTE *)this + 77) )
  {
    v2 = dword_4B6B40;
    sub_4562D0(dword_4B6B40);
    v3 = *(this + 1);
    v4 = (*(_DWORD *)(v3 + 72))-- == 1;
    if ( v4 && off_4B406C )
      off_4B406C();
    sub_4562F0(v2);
  }
  *this = 0;
  *(this + 17) = 0;
  *(this + 18) = 0;
  v5 = (void *)*(this + 9);
  if ( v5 )
  {
    *(this + 10) = 0;
    sub_453A20(v5);
    *(this + 9) = 0;
    *(this + 11) = 0;
  }
  v6 = (void *)*(this + 6);
  if ( v6 )
  {
    *(this + 7) = 0;
    sub_453A20(v6);
    *(this + 6) = 0;
    *(this + 8) = 0;
  }
  if ( *(this + 3) )
  {
    sub_422F80(this + 3, 0);
    sub_453A20((void *)*(this + 3));
    *(this + 3) = 0;
    *(this + 5) = 0;
  }
}
// 4B406C: using guessed type int (*off_4B406C)();
