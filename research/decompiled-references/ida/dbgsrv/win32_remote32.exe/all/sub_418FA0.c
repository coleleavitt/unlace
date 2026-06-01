/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418FA0
// Address: 0x00418FA0

//----- (00418FA0) --------------------------------------------------------
char __thiscall sub_418FA0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  bool v6; // cc

  v3 = (*(int (__stdcall **)(_DWORD *, int))(*this + 320))(this, a2);
  v4 = 4;
  if ( v3 )
    v4 = v3;
  if ( v4 >= 8 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(2777);
  }
  *(this + 32) = v4;
  *((_BYTE *)this + 480) = 0;
  sub_415BB0(this);
  (*(void (__thiscall **)(_DWORD *))(*this + 292))(this);
  if ( *(this + 80) == -1 || *(this + 81) == -1 )
    goto LABEL_10;
  v5 = *(this + 67);
  v6 = v5 <= 0;
  if ( !v5 )
    v6 = *(this + 79) <= 0;
  if ( v6 )
  {
LABEL_10:
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30016);
  }
  nullsub_1(1);
  return 1;
}
// 4015F0: using guessed type int __cdecl nullsub_1(_DWORD);
// 4B70F0: using guessed type char byte_4B70F0;
