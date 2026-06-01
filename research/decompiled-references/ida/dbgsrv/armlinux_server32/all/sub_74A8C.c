/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74A8C
// Address: 0x00074A8C

//----- (00074A8C) --------------------------------------------------------
_DWORD *__fastcall sub_74A8C(int a1, int a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  _DWORD *result; // r0
  FILE *v5; // r5
  _DWORD *v6; // r4

  if ( !a2 )
  {
    v5 = sub_75DD0(a1);
    if ( v5 )
    {
      result = sub_808A4(0x30u);
      result[2] = v5;
      *result = 1;
      return result;
    }
    return nullptr;
  }
  v2 = (_DWORD *)sub_6AEA4();
  v3 = v2;
  if ( !v2 )
    return nullptr;
  if ( v2[4] == -1 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v2 + 8))(v2);
    return nullptr;
  }
  else
  {
    v6 = sub_808A4(0x30u);
    v6[2] = v3;
    *v6 = 2;
    sub_74878((int)v6);
    return v6;
  }
}
