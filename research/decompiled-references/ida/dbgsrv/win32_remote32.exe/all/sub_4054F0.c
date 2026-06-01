/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4054F0
// Address: 0x004054F0

//----- (004054F0) --------------------------------------------------------
int __thiscall sub_4054F0(int *this, int a2, int a3, int a4)
{
  int v4; // eax
  _DWORD v6[8]; // [esp+8h] [ebp-20h] BYREF

  v6[3] = a3;
  v6[0] = &off_489A48;
  v6[2] = this;
  v6[4] = a4;
  v4 = *this;
  v6[1] = a2;
  v6[7] = 0;
  return (*(int (__thiscall **)(int *, int, int, _DWORD *))(v4 + 4))(this, a2, 2, v6);
}
// 489A48: using guessed type int (__stdcall *off_489A48)(int);
