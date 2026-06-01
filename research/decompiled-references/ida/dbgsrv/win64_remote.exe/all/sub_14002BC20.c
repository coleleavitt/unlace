/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002BC20
// Address: 0x000000014002BC20

//----- (000000014002BC20) ----------------------------------------------------
__int64 __fastcall sub_14002BC20(__int64 a1, int a2)
{
  _QWORD *v4; // rax

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v4 = operator new(0x58u);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 20) = a2;
  if ( (unsigned __int64)*(int *)(a1 + 20) >= sub_14002DA30()[9] )
    *(_DWORD *)(a1 + 20) = 0;
  return a1;
}
