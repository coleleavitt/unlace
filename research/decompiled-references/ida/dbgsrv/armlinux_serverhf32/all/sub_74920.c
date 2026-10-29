/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74920
// Address: 0x00074920

//----- (00074920) --------------------------------------------------------
_DWORD *__fastcall sub_74920(int a1, int a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  _DWORD *result; // r0
  FILE *v5; // r5
  _DWORD *v6; // r4

  if ( !a2 )
  {
    v5 = sub_75C68(a1);
    if ( v5 )
    {
      result = sub_805CC(0x30u);
      result[2] = v5;
      *result = 1;
      return result;
    }
    return nullptr;
  }
  v2 = (_DWORD *)sub_6AD2C();
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
    v6 = sub_805CC(0x30u);
    v6[2] = v3;
    *v6 = 2;
    sub_7470C((int)v6);
    return v6;
  }
}
