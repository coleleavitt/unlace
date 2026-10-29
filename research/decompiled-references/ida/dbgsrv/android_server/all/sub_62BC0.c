/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62BC0
// Address: 0x0000000000062BC0

//----- (0000000000062BC0) ----------------------------------------------------
__int64 __fastcall sub_62BC0(_QWORD *a1)
{
  __int64 v2; // x23
  char *v3; // x20
  _DWORD *v4; // x21
  _QWORD *v5; // x22

  v2 = *(_QWORD *)(a1[43] + 8LL * a1[44] - 8);
  if ( a1[6] )
    v3 = (char *)a1[5];
  else
    v3 = &byte_F154B;
  v4 = operator new(0x20u);
  v4[6] = 0;
  *v4 = 5;
  v5 = operator new(0x18u);
  sub_39140(v5, v3);
  *((_QWORD *)v4 + 1) = v5;
  *((_QWORD *)v4 + 2) = v2;
  *(_QWORD *)(a1[43] + 8LL * a1[44] - 8) = v4;
  return 0;
}
// F154B: using guessed type char byte_F154B;
