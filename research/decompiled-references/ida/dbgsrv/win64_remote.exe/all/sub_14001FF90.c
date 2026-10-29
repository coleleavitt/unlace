/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001FF90
// Address: 0x000000014001FF90

//----- (000000014001FF90) ----------------------------------------------------
__int64 __fastcall sub_14001FF90(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  FILE *v4; // rdx
  char *v5; // rdi
  void *v6; // rax
  void *Block[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 < qword_1400CAFB0 && (v4 = *((FILE **)qword_1400CAFA8 + v3)) != nullptr )
  {
    *(_OWORD *)Block = 0;
    v9 = 0;
    if ( sub_1400649C0((__int64)Block, v4) >= 0 )
    {
      v5 = (char *)Block[1] - 1;
      if ( !Block[1] )
        v5 = nullptr;
      if ( (unsigned __int64)(v5 + 2) <= v9 )
      {
        v6 = Block[0];
      }
      else
      {
        v6 = sub_14005ABE0((__int64)Block, Block[0], (unsigned __int64)(v5 + 2), 1u);
        Block[0] = v6;
      }
      Block[1] = v5 + 2;
      *((_BYTE *)v6 + (_QWORD)v5 + 1) = 0;
      v5[(unsigned __int64)Block[0]] = 10;
      *(_BYTE *)a2 = 7;
      *(void **)(a2 + 8) = Block[0];
      *(void **)(a2 + 16) = Block[1];
      *(_QWORD *)(a2 + 24) = v9;
      *(_OWORD *)Block = 0;
      v9 = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = -1;
    }
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 1400CAFB0: using guessed type __int64 qword_1400CAFB0;
