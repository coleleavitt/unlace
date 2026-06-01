/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Backtrace
// Address: 0x000DABD1

//----- (000DABD1) --------------------------------------------------------
int __cdecl Unwind_Backtrace(int (__cdecl *a1)(_DWORD *, int, int, int), int a2)
{
  int v2; // eax
  int v4; // [esp+14h] [ebp-150h]
  _DWORD v5[32]; // [esp+1Ch] [ebp-148h] BYREF
  _BYTE v6[200]; // [esp+9Ch] [ebp-C8h] BYREF
  int retaddr; // [esp+168h] [ebp+4h]

  sub_DA4F0(v5, (int)&a1, retaddr);
  while ( 1 )
  {
    v2 = sub_DA20C(v5, (int)v6);
    if ( v2 != 5 && v2 )
      return 3;
    v4 = v2;
    if ( a1(v5, a2, v2, v2) )
      return 3;
    if ( v4 == 5 )
      break;
    sub_DA1D2((int)v5, (int)v6);
  }
  return 5;
}
