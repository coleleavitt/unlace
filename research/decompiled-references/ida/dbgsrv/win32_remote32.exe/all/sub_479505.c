/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479505
// Address: 0x00479505

//----- (00479505) --------------------------------------------------------
char sub_479505()
{
  unsigned int i; // esi

  for ( i = 0; i < 0x200; i += 4 )
  {
    if ( *(LPCRITICAL_SECTION *)((char *)&dword_4B7B38 + i) )
    {
      sub_473375(*(LPCRITICAL_SECTION *)((char *)&dword_4B7B38 + i));
      *(LPCRITICAL_SECTION *)((char *)&dword_4B7B38 + i) = nullptr;
    }
  }
  return 1;
}
