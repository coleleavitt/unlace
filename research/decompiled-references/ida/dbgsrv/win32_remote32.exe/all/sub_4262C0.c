/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4262C0
// Address: 0x004262C0

//----- (004262C0) --------------------------------------------------------
void __thiscall sub_4262C0(void **this)
{
  void **v1; // esi
  int v2; // ebx
  int v3; // edi
  char *v4; // esi
  void *v5; // eax
  void *v6; // eax
  void *v7; // [esp-4h] [ebp-24h]

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
        v5 = *((void **)v4 + 3);
        if ( v5 )
        {
          *((_DWORD *)v4 + 4) = 0;
          sub_453A20(v5);
          *((_DWORD *)v4 + 3) = 0;
          *((_DWORD *)v4 + 5) = 0;
        }
        v6 = *(void **)v4;
        if ( *(_DWORD *)v4 )
        {
          *((_DWORD *)v4 + 1) = 0;
          sub_453A20(v6);
          *(_DWORD *)v4 = 0;
          *((_DWORD *)v4 + 2) = 0;
        }
        v1 = this;
        v3 += 24;
        --v2;
      }
      while ( v2 );
    }
    v7 = *v1;
    v1[1] = nullptr;
    sub_453A20(v7);
    *v1 = nullptr;
    v1[2] = nullptr;
  }
}
