/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000FD10
// Address: 0x000000010000FD10

//----- (000000010000FD10) ----------------------------------------------------
bool __fastcall sub_10000FD10(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rsi

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 <= a2 )
  {
    *(_OWORD *)a3 = 0;
    *(_DWORD *)(a3 + 16) = 0;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(v5 + 20 * v3 + 16);
    *(_OWORD *)a3 = *(_OWORD *)(v5 + 20 * v3);
  }
  return v4 > v3;
}
