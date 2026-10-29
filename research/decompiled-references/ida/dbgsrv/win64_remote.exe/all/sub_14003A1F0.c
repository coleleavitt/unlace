/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003A1F0
// Address: 0x000000014003A1F0

//----- (000000014003A1F0) ----------------------------------------------------
__int64 __fastcall sub_14003A1F0(__int64 a1)
{
  __int64 v1; // rbx

  if ( *(_BYTE *)(a1 + 720) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(302);
  }
  v1 = *(_QWORD *)(a1 + 648);
  *(_QWORD *)(a1 + 648) = 0;
  sub_14003B360(a1, 0, 0);
  return v1;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
