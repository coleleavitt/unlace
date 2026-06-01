/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97DB4
// Address: 0x00097DB4

//----- (00097DB4) --------------------------------------------------------
int __fastcall sub_97DB4(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // r0
  int v6[2]; // [sp+0h] [bp-18h] BYREF

  v6[0] = 0;
  if ( sub_946E6((int)a2, v6) || (LODWORD(v4) = *a2, (unsigned int)(a2[1] - *a2) < v6[0]) )
  {
    *a1 = 0;
    a1[1] = 0;
  }
  else
  {
    HIDWORD(v4) = v6[0] + v4;
    *a2 = v6[0] + v4;
    *(_QWORD *)a1 = v4;
  }
  return _stack_chk_guard - v6[1];
}
