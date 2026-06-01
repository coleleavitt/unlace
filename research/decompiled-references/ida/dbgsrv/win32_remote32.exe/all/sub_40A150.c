/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A150
// Address: 0x0040A150

//----- (0040A150) --------------------------------------------------------
void __thiscall sub_40A150(void **this)
{
  void **v1; // esi
  int v2; // ebx
  int v3; // edi
  _DWORD *v4; // esi
  void *v5; // eax
  void *v6; // [esp-4h] [ebp-24h]

  v1 = this;
  if ( *this )
  {
    v2 = (int)*(this + 1);
    if ( v2 )
    {
      v3 = 0;
      do
      {
        v4 = (char *)*v1 + v3;
        v5 = (void *)v4[9];
        if ( v5 )
        {
          v4[10] = 0;
          sub_453A20(v5);
          v4[9] = 0;
          v4[11] = 0;
        }
        v1 = this;
        v3 += 48;
        --v2;
      }
      while ( v2 );
    }
    v6 = *v1;
    v1[1] = nullptr;
    sub_453A20(v6);
    *v1 = nullptr;
    v1[2] = nullptr;
  }
}
