/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C28E0
// Address: 0x080C28E0

//----- (080C28E0) --------------------------------------------------------
int __cdecl sub_80C28E0(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  int result; // eax

  v2 = sub_80BBEF0(0);
  a1[4] = v2;
  if ( !(unsigned __int8)sub_80BBF90((int)v2) )
  {
    a1[8] = "irs";
    return 0;
  }
  a1[11] = *(_DWORD *)(a2 + 44);
  result = sub_80C2860((int)a1);
  if ( !(_BYTE)result )
  {
    a1[8] = "openssl";
    return 0;
  }
  return result;
}
