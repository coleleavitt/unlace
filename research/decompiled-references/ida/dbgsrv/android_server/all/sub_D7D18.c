/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7D18
// Address: 0x00000000000D7D18

//----- (00000000000D7D18) ----------------------------------------------------
void __fastcall sub_D7D18(void *ptr)
{
  if ( ptr < byte_169340 && ptr >= dword_169140 )
    JUMPOUT(0xD7C1C);
  free(ptr);
}
// D7D38: control flows out of bounds to D7C1C
// 169140: using guessed type int dword_169140[];
