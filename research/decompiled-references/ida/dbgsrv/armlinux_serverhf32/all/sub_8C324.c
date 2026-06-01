/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C324
// Address: 0x0008C324

//----- (0008C324) --------------------------------------------------------
void __fastcall sub_8C324(_DWORD *a1, char a2)
{
  _DWORD *v2; // r2
  size_t v5; // r6
  unsigned int v6; // r3
  size_t v7; // r5
  _DWORD *v8; // r3

  v2 = (_DWORD *)*a1;
  v5 = a1[1];
  if ( (_DWORD *)*a1 == a1 + 2 )
    v6 = 15;
  else
    v6 = a1[2];
  v7 = v5 + 1;
  if ( v5 + 1 > v6 )
  {
    sub_8BECC(a1, v5, 0, nullptr, 1u);
    v2 = (_DWORD *)*a1;
  }
  *((_BYTE *)v2 + v5) = a2;
  v8 = (_DWORD *)*a1;
  a1[1] = v7;
  *((_BYTE *)v8 + v7) = 0;
}
