/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43FF70
// Address: 0x0043FF70

//----- (0043FF70) --------------------------------------------------------
int __thiscall sub_43FF70(int this, int a2, int a3)
{
  sub_44D9E0((char *)this, a2, 0);
  sub_44AC60(this + 112, 0, 1000);
  *(_DWORD *)this = &off_48DC58;
  *(_DWORD *)(this + 112) = &off_48DC68;
  *(_DWORD *)(this + 168) = -1;
  *(_DWORD *)(this + 172) = 0;
  *(_DWORD *)(this + 176) = -1;
  *(_BYTE *)(this + 180) = 0;
  *(_DWORD *)(this + 184) = 0;
  *(_OWORD *)(this + 188) = 0;
  *(_QWORD *)(this + 204) = 0;
  *(_DWORD *)(this + 212) = -1;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = -1;
  *(_BYTE *)(this + 224) = 0;
  *(_DWORD *)(this + 228) = 0;
  *(_OWORD *)(this + 232) = 0;
  *(_QWORD *)(this + 248) = 0;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 260) = a3;
  sub_44DBD0(this);
  *(_DWORD *)(this + 132) = sub_442990;
  sub_44D7B0(*(_DWORD *)(this + 72), 100, (int)sub_446910, this);
  return this;
}
// 48DC58: using guessed type int (__stdcall *off_48DC58)(char);
// 48DC68: using guessed type int (__stdcall *off_48DC68)(int);
