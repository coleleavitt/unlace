/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F87C
// Address: 0x0007F87C

//----- (0007F87C) --------------------------------------------------------
int __fastcall sub_7F87C(int a1)
{
  _DWORD *v2; // r5
  void *v3; // r0
  int v4; // r1
  void (__fastcall *v5)(_BOOL4); // r5
  _BOOL4 v6; // r0

  while ( 1 )
  {
    v2 = (_DWORD *)dword_E0554;
    if ( !dword_E0554 )
      break;
    v3 = *(void **)dword_E0554;
    v4 = *(_DWORD *)(dword_E0554 + 4);
    if ( !v4 )
    {
      if ( v3 )
      {
        *(_DWORD *)(dword_E0554 + 4) = 0;
        qfree(v3);
        v2[2] = 0;
        *v2 = 0;
      }
      qfree(v2);
      break;
    }
    v5 = *((void (__fastcall **)(_BOOL4))v3 + v4 - 1);
    v6 = del_qatexit((int)v5);
    v5(v6);
  }
  dword_E0554 = 0;
  if ( *(_BYTE *)(a1 + 16) )
    exit(*(_DWORD *)(a1 + 12));
  return 0;
}
// E0554: using guessed type int dword_E0554;
