/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140025910
// Address: 0x0000000140025910

//----- (0000000140025910) ----------------------------------------------------
__int64 __fastcall sub_140025910(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  v4 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32);
  if ( (unsigned int)sub_14002A220(v4 - 32) )
    return 0;
  v5 = a2[2];
  v6 = *a2;
  v7 = a2[1];
  *a2 = *(_QWORD *)(v4 - 24);
  a2[1] = *(_QWORD *)(v4 - 16);
  a2[2] = *(_QWORD *)(v4 - 8);
  *(_QWORD *)(v4 - 8) = v5;
  *(_QWORD *)(v4 - 24) = v6;
  *(_QWORD *)(v4 - 16) = v7;
  sub_140028BA0(a1);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = 32LL * *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(v8 + v9 - 32) != 5 )
  {
    sub_1400640B0(0x5FCu);
    return 0;
  }
  return *(_QWORD *)(v8 + v9 - 24);
}
