/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98EC0
// Address: 0x00098EC0

//----- (00098EC0) --------------------------------------------------------
size_t __cdecl sub_98EC0(void *ptr, size_t n)
{
  void **p_pad1; // ecx

  p_pad1 = &_sF.__pad1;
  if ( dword_13C2AC )
    p_pad1 = (void **)dword_13C2AC;
  return qfwrite((FILE *)p_pad1, ptr, n);
}
// 13C2AC: using guessed type int dword_13C2AC;
// 13E950: using guessed type FILE _sF;
