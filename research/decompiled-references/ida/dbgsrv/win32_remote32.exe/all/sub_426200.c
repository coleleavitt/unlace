/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426200
// Address: 0x00426200

//----- (00426200) --------------------------------------------------------
void __thiscall sub_426200(void **this)
{
  int v2; // eax
  int v3; // edi
  char *v4; // esi
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
        v4 = (char *)*this + v3;
        v5 = *(void **)v4;
        if ( *(_DWORD *)v4 )
        {
          *((_DWORD *)v4 + 1) = 0;
          sub_453A20(v5);
          v2 = v7;
          *(_DWORD *)v4 = 0;
          *((_DWORD *)v4 + 2) = 0;
        }
        v3 += 16;
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
