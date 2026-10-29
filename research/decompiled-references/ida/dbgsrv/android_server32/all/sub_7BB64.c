/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BB64
// Address: 0x0007BB64

//----- (0007BB64) --------------------------------------------------------
_DWORD *__fastcall sub_7BB64(int a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r1
  _DWORD *v6; // r5

  v4 = operator new(0x18u);
  *v4 = &off_DB200;
  v4[4] = a2;
  v4[5] = a1;
  v4[2] = qfilelength(a1);
  v4[3] = v5;
  if ( v5 < 0 || (int)v4[4] < 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v4 + 8))(v4);
    return nullptr;
  }
  else
  {
    v6 = operator new(0x30u);
    *v6 = 4;
    v6[2] = v4;
    sub_7B454((int)v6);
    return v6;
  }
}
// 7BB86: variable 'v5' is possibly undefined
// DB200: using guessed type _UNKNOWN *off_DB200;
