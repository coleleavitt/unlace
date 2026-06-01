/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F050
// Address: 0x0040F050

//----- (0040F050) --------------------------------------------------------
int __userpurge sub_40F050@<eax>(__m128i a1@<xmm0>, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  int v4; // ecx
  int v5; // edx
  bool v6; // bl
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-4h]

  if ( a4 != 1 )
    return -1;
  if ( !a2[50] && (a2[84] & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  a4 = a3;
  sub_408C10(a2 + 151, &v8, &a4);
  v4 = v9;
  if ( *(_BYTE *)(v9 + 13) || a3 < *(_DWORD *)(v9 + 16) )
    v4 = a2[151];
  v5 = 0;
  if ( v4 != a2[151] )
    v5 = v4 + 20;
  if ( !v5 )
    return -1;
  v6 = sub_417270(v5, a1, 1u);
  if ( !v6 )
    sub_43C950(a1, (int)a2, (int)"%d: (set_step) SetThreadContext failed", a3);
  return 2 * v6 - 1;
}
// 4B70F0: using guessed type char byte_4B70F0;
