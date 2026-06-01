/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024D50
// Address: 0x0000000100024D50

//----- (0000000100024D50) ----------------------------------------------------
__int64 __fastcall sub_100024D50(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  bool v4; // cf
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = v2 == 0;
  v5 = v2 - 1;
  if ( !v4 )
    v3 = v5;
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
