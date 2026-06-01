/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403060
// Address: 0x00403060

//----- (00403060) --------------------------------------------------------
bool __thiscall sub_403060(int this)
{
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax
  bool result; // al

  sub_456330(*(HANDLE *)(this + 200));
  *(_DWORD *)(this + 200) = 0;
  sub_402760("PDB: terminated session (%d)\n");
  v2 = *(void **)(this + 204);
  if ( v2 )
  {
    *(_DWORD *)(this + 208) = 0;
    sub_453A20(v2);
    *(_DWORD *)(this + 204) = 0;
    *(_DWORD *)(this + 212) = 0;
  }
  v3 = *(void **)(this + 188);
  if ( v3 )
  {
    *(_DWORD *)(this + 192) = 0;
    sub_453A20(v3);
    *(_DWORD *)(this + 188) = 0;
    *(_DWORD *)(this + 196) = 0;
  }
  sub_4014D0((void **)(this + 116));
  sub_4031A0((HMODULE **)(this + 96));
  v4 = *(void **)(this + 80);
  if ( v4 )
  {
    *(_DWORD *)(this + 84) = 0;
    sub_453A20(v4);
    *(_DWORD *)(this + 80) = 0;
    *(_DWORD *)(this + 88) = 0;
  }
  sub_456330(*(HANDLE *)(this + 28));
  result = sub_456330(*(HANDLE *)(this + 32));
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 16) = 0;
  return result;
}
