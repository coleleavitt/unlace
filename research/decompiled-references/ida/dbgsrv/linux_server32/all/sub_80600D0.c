/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80600D0
// Address: 0x080600D0

//----- (080600D0) --------------------------------------------------------
void __cdecl sub_80600D0(_DWORD *a1, int a2)
{
  int *v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // [esp+0h] [ebp-1Ch]

  v5 = a1[5];
  if ( 11 * ((a1[9] == 0) + ((a1[9] - v5) >> 2) - 1) - 1171354717 * (((a1[6] - a1[7]) >> 2) + ((a1[4] - a1[2]) >> 2)) == 48806446 )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( v5 == *a1 )
  {
    sub_805FED0((int)a1, 1u, 1);
    v5 = a1[5];
  }
  *(_DWORD *)(v5 - 4) = operator new(0x1E4u);
  v2 = (int *)(a1[5] - 4);
  a1[5] = v2;
  v3 = *v2;
  v4 = *v2 + 484;
  a1[3] = v3;
  a1[4] = v4;
  a1[2] = v3 + 440;
  *(_DWORD *)(v3 + 448) = -1;
  *(_BYTE *)(v3 + 452) = 0;
  *(_DWORD *)(v3 + 456) = 0;
  *(_QWORD *)(v3 + 440) = 0xFFFFFFFFLL;
  sub_80C62B0(v3 + 440, a2);
}
