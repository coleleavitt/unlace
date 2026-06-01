/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D3C50
// Address: 0x080D3C50

//----- (080D3C50) --------------------------------------------------------
int __cdecl sub_80D3C50(int a1)
{
  void *v1; // eax
  int result; // eax
  _BYTE v3[16]; // [esp+4h] [ebp-50h] BYREF
  int v4; // [esp+14h] [ebp-40h] BYREF
  _DWORD v5[11]; // [esp+18h] [ebp-3Ch] BYREF
  unsigned int v6; // [esp+44h] [ebp-10h]

  v6 = __readgsdword(0x14u);
  v5[0] = 40;
  memset(&v5[4], 255, 12);
  v5[2] = 0;
  memset(&v5[7], 0, 12);
  v5[1] = 136;
  v5[3] = a1;
  v4 = -1;
  if ( sub_80D14A0() )
    off_811E568(v3);
  v1 = sub_80D2140((int)v5, nullptr);
  if ( v1 )
    sub_80D1E30((__pid_t)v1, &v4, -1);
  if ( sub_80D14A0() )
    off_811E568(v3);
  result = v4;
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
