/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BF40
// Address: 0x000000000006BF40

//----- (000000000006BF40) ----------------------------------------------------
void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sub_6BF40(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        signed __int64 a4)
{
  if ( a1[3] - a2 < a4 )
  {
    if ( !(_BYTE)under_debugger )
      interr(276);
    BUG();
  }
  memcpy(a3, (const void *)(*a1 + a2), a4);
}
// 158B40: using guessed type __int64 under_debugger;
