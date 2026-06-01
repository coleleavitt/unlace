/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C240
// Address: 0x0044C240

//----- (0044C240) --------------------------------------------------------
_DWORD *__thiscall sub_44C240(_DWORD *this, char a2)
{
  int v3; // edx
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  struct _RTL_CRITICAL_SECTION *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // eax

  *this = &off_48F610;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 14) = sub_453720();
  *(this + 15) = v3;
  *(this + 16) = 0x1FFFF;
  if ( !a2 )
  {
    v9 = sub_4627C2(0xCu);
    v5 = v9;
    if ( v9 )
    {
      v10 = v9 + 1;
      *v9 = &off_48F5F0;
      v9[1] = 0;
      v9[2] = 0;
      v11 = sub_4627C2(0x18u);
      *v11 = v11;
      v11[1] = v11;
      v11[2] = v11;
      *((_WORD *)v11 + 6) = 257;
      *v10 = v11;
      goto LABEL_8;
    }
LABEL_7:
    v5 = nullptr;
    goto LABEL_8;
  }
  v4 = sub_4627C2(0x10u);
  v5 = v4;
  if ( !v4 )
    goto LABEL_7;
  v6 = v4 + 1;
  *v4 = &off_48F5F0;
  v4[1] = 0;
  v4[2] = 0;
  v7 = sub_4627C2(0x18u);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 6) = 257;
  *v6 = v7;
  *v5 = &off_48F600;
  v8 = sub_456280();
  v5[3] = v8;
  if ( !v8 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1540);
  }
LABEL_8:
  *(this + 12) = v5;
  return this;
}
// 44C2D7: variable 'v3' is possibly undefined
// 48F5F0: using guessed type _UNKNOWN *off_48F5F0;
// 48F600: using guessed type int (__stdcall *off_48F600)(char);
// 48F610: using guessed type int (__stdcall *off_48F610)(char);
// 4B70F0: using guessed type char byte_4B70F0;
