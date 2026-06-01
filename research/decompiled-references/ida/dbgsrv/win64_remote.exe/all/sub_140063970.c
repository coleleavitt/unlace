/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063970
// Address: 0x0000000140063970

//----- (0000000140063970) ----------------------------------------------------
void __fastcall sub_140063970(void *Block)
{
  FILE *v2; // rcx

  if ( Block )
  {
    v2 = *((FILE **)Block + 1);
    if ( *(int *)Block < 2 )
    {
      sub_1400643F0(v2);
    }
    else
    {
      if ( v2 )
        (*((void (__fastcall **)(FILE *, __int64))v2->_ptr + 1))(v2, 1);
      j_free(*((void **)Block + 5));
      j_free(*((void **)Block + 4));
    }
    j_j_free(Block);
  }
}
