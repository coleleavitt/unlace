/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: open_linput
// Address: 0x00000000000B99F8

//----- (00000000000B99F8) ----------------------------------------------------
_QWORD *__fastcall open_linput(const char *a1, char a2)
{
  _DWORD *v2; // x0
  _DWORD *v3; // x20
  _QWORD *v4; // x19
  FILE *v5; // x0
  FILE *v6; // x20

  if ( (a2 & 1) == 0 )
  {
    v5 = fopenRB(a1);
    if ( v5 )
    {
      v6 = v5;
      v4 = operator new(0x38u);
      *(_DWORD *)v4 = 1;
      v4[1] = v6;
      return v4;
    }
    return nullptr;
  }
  v2 = (_DWORD *)sub_AB1C0();
  if ( !v2 )
    return nullptr;
  v3 = v2;
  if ( v2[4] == -1 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
    return nullptr;
  }
  v4 = operator new(0x38u);
  *(_DWORD *)v4 = 2;
  v4[1] = v3;
  sub_B9778(v4);
  return v4;
}
