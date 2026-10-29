/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024CA0
// Address: 0x0000000100024CA0

//----- (0000000100024CA0) ----------------------------------------------------
__int64 __fastcall sub_100024CA0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool v4; // cf
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  unsigned __int64 v7; // r15
  __int64 *v9; // [rsp+0h] [rbp-30h]

  v9 = a1 + 1;
  v2 = a1[2];
  v3 = 0;
  v4 = v2 == 0;
  v5 = v2 - 1;
  if ( !v4 )
    v3 = v5;
  if ( !v4 && v5 != 0 )
  {
    v6 = *v9;
    v7 = 0;
    do
    {
      *(_BYTE *)(v6 + v7) = __toupper(*(unsigned __int8 *)(v6 + v7));
      ++v7;
    }
    while ( v7 < v3 );
  }
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 8) = a1[1];
  *(_QWORD *)(a2 + 16) = a1[2];
  *(_QWORD *)(a2 + 24) = a1[3];
  *(_OWORD *)v9 = 0;
  a1[3] = 0;
  return 0;
}
