/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8061440
// Address: 0x08061440

//----- (08061440) --------------------------------------------------------
int __cdecl sub_8061440(_DWORD *a1, int a2)
{
  int v2; // eax
  int *v3; // edx
  int result; // eax
  int v5; // edx
  int v6; // [esp+0h] [ebp-1Ch]

  v6 = a1[9];
  if ( -1171354717 * (((a1[4] - a1[2]) >> 2) + ((a1[6] - a1[7]) >> 2)) + 11 * ((v6 == 0) + ((v6 - a1[5]) >> 2) - 1) == 48806446 )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  if ( (unsigned int)(a1[1] - ((v6 - *a1) >> 2)) <= 1 )
  {
    sub_805FED0((int)a1, 1u, 0);
    v6 = a1[9];
  }
  *(_DWORD *)(v6 + 4) = operator new(0x1E4u);
  v2 = a1[6];
  *(_DWORD *)(v2 + 8) = -1;
  *(_BYTE *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = 0xFFFFFFFFLL;
  sub_80C62B0(v2, a2);
  v3 = (int *)(a1[9] + 4);
  a1[9] = v3;
  result = *v3;
  v5 = *v3 + 484;
  a1[7] = result;
  a1[8] = v5;
  a1[6] = result;
  return result;
}
