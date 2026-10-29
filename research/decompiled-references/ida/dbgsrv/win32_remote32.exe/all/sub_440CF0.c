/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440CF0
// Address: 0x00440CF0

//----- (00440CF0) --------------------------------------------------------
void __thiscall sub_440CF0(int this)
{
  void *v2; // eax
  void *v3; // eax

  sub_441930((char *)this);
  if ( *(_DWORD *)(this + 152) )
  {
    sub_415F90((_DWORD *)(this + 152), 0);
    sub_453A20(*(void **)(this + 152));
    *(_DWORD *)(this + 152) = 0;
    *(_DWORD *)(this + 160) = 0;
  }
  sub_440A70((void **)(this + 140));
  v2 = *(void **)(this + 120);
  if ( v2 )
  {
    *(_DWORD *)(this + 124) = 0;
    sub_453A20(v2);
    *(_DWORD *)(this + 120) = 0;
    *(_DWORD *)(this + 128) = 0;
  }
  v3 = *(void **)(this + 64);
  if ( v3 )
  {
    *(_DWORD *)(this + 68) = 0;
    sub_453A20(v3);
    *(_DWORD *)(this + 64) = 0;
    *(_DWORD *)(this + 72) = 0;
  }
  if ( *(_DWORD *)(this + 52) )
  {
    sub_447000((_DWORD *)(this + 52), 0);
    sub_453A20(*(void **)(this + 52));
    *(_DWORD *)(this + 52) = 0;
    *(_DWORD *)(this + 60) = 0;
  }
}
