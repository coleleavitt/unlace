/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A330
// Address: 0x0040A330

//----- (0040A330) --------------------------------------------------------
void __thiscall sub_40A330(void **this)
{
  int v2; // eax
  int v3; // edi
  int *v4; // esi
  void *v5; // ecx
  void *v6; // [esp-4h] [ebp-24h]
  int v7; // [esp+10h] [ebp-10h]

  if ( *this )
  {
    v2 = (int)*(this + 1);
    v7 = v2;
    if ( v2 )
    {
      v3 = 0;
      do
      {
        v4 = (int *)((char *)*this + v3);
        if ( *v4 >= -1 )
        {
          v5 = (void *)v4[2];
          if ( v5 )
          {
            v4[3] = 0;
            sub_453A20(v5);
            v2 = v7;
            v4[2] = 0;
            v4[4] = 0;
          }
          *v4 = -2;
        }
        v3 += 24;
        v7 = --v2;
      }
      while ( v2 );
    }
    v6 = *this;
    *(this + 1) = nullptr;
    sub_453A20(v6);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
