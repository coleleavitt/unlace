/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BE80
// Address: 0x000000000006BE80

//----- (000000000006BE80) ----------------------------------------------------
void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sub_6BE80(_QWORD *a1, __int64 a2, char a3)
{
  if ( a1[1] - a2 <= 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(277);
    BUG();
  }
  *(_BYTE *)(*a1 + a2) = a3;
}
// 158B40: using guessed type __int64 under_debugger;
