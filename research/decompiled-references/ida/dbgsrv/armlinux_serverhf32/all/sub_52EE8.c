/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52EE8
// Address: 0x00052EE8

//----- (00052EE8) --------------------------------------------------------
void __fastcall sub_52EE8(int a1)
{
  __int64 v2; // r4
  void *v3; // t1
  void *v4; // r0

  v2 = *(_QWORD *)(a1 + 44);
  HIDWORD(v2) = v2 + 4 * HIDWORD(v2);
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    do
    {
      v3 = *(void **)v2;
      LODWORD(v2) = v2 + 4;
      sub_77E08(v3);
    }
    while ( HIDWORD(v2) != (_DWORD)v2 );
    HIDWORD(v2) = *(_DWORD *)(a1 + 44);
  }
  if ( HIDWORD(v2) )
  {
    *(_DWORD *)(a1 + 48) = 0;
    sub_77E08((void *)HIDWORD(v2));
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 52) = 0;
  }
  v4 = *(void **)(a1 + 32);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 36) = 0;
    sub_77E08(v4);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
}
