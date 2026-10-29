/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: open_linput
// Address: 0x0007B684

//----- (0007B684) --------------------------------------------------------
_DWORD *__fastcall open_linput(const char *a1, int a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r5
  _DWORD *v5; // r4
  FILE *v7; // r0
  FILE *v8; // r5

  if ( !a2 )
  {
    v7 = fopenRB(a1);
    v3 = nullptr;
    if ( v7 )
    {
      v8 = v7;
      v3 = operator new(0x30u);
      *v3 = 1;
      v3[2] = v8;
    }
    return v3;
  }
  v2 = (_DWORD *)sub_705C8();
  v3 = nullptr;
  if ( !v2 )
    return v3;
  v4 = v2;
  if ( v2[4] == -1 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v2 + 8))(v2);
    return nullptr;
  }
  else
  {
    v5 = operator new(0x30u);
    *v5 = 2;
    v5[2] = v4;
    sub_7B454((int)v5);
    return v5;
  }
}
