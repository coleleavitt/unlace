/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4031A0
// Address: 0x004031A0

//----- (004031A0) --------------------------------------------------------
void __thiscall sub_4031A0(HMODULE **this)
{
  HMODULE *v2; // esi
  int v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // ecx
  HMODULE *v5; // esi
  HMODULE v6; // eax
  HMODULE v7; // eax
  HMODULE v8; // eax

  v2 = *this;
  if ( *this )
  {
    v3 = (int)v2[1];
    if ( v3 <= 1 )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v2[2];
      if ( v4 )
      {
        (**v4)(v4, 1);
        v2[2] = nullptr;
      }
      if ( *v2 )
      {
        FreeLibrary(*v2);
        *v2 = nullptr;
      }
    }
    else
    {
      v2[1] = (HMODULE)(v3 - 1);
      *this = nullptr;
    }
  }
  v5 = *this;
  if ( *this )
  {
    if ( !--dword_4B69A8 && byte_4B69AC )
    {
      CoUninitialize();
      byte_4B69AC = 0;
    }
    v6 = v5[10];
    if ( v6 )
    {
      v5[11] = nullptr;
      sub_453A20(v6);
      v5[10] = nullptr;
      v5[12] = nullptr;
    }
    v7 = v5[7];
    if ( v7 )
    {
      v5[8] = nullptr;
      sub_453A20(v7);
      v5[7] = nullptr;
      v5[9] = nullptr;
    }
    v8 = v5[4];
    if ( v8 )
    {
      v5[5] = nullptr;
      sub_453A20(v8);
      v5[4] = nullptr;
      v5[6] = nullptr;
    }
    sub_4627F2(v5);
    *this = nullptr;
  }
}
// 4B69A8: using guessed type int dword_4B69A8;
// 4B69AC: using guessed type char byte_4B69AC;
