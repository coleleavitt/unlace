/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430F10
// Address: 0x00430F10

//----- (00430F10) --------------------------------------------------------
void __thiscall sub_430F10(void **this)
{
  int v2; // eax
  int v3; // edi
  void **v4; // esi
  void *v5; // [esp-4h] [ebp-24h]
  int v6; // [esp+10h] [ebp-10h]

  if ( *this )
  {
    v2 = (int)*(this + 1);
    v6 = v2;
    if ( v2 )
    {
      v3 = 0;
      do
      {
        v4 = (void **)((char *)*this + v3);
        if ( *v4 )
        {
          sub_415F90(v4, 0);
          sub_453A20(*v4);
          v2 = v6;
          *v4 = nullptr;
          v4[2] = nullptr;
        }
        v3 += 28;
        v6 = --v2;
      }
      while ( v2 );
    }
    v5 = *this;
    *(this + 1) = nullptr;
    sub_453A20(v5);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
