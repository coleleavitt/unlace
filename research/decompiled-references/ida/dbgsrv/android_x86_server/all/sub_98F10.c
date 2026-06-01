/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98F10
// Address: 0x00098F10

//----- (00098F10) --------------------------------------------------------
int __cdecl sub_98F10(char *s, __gnuc_va_list __varargs)
{
  void **p_pad1; // edi
  int v3; // esi

  p_pad1 = &_sF.__pad1;
  if ( dword_13C2AC )
    p_pad1 = (void **)dword_13C2AC;
  v3 = qvfprintf((FILE *)p_pad1, s, __varargs);
  fflush((FILE *)p_pad1);
  return v3;
}
// 13C2AC: using guessed type int dword_13C2AC;
// 13E950: using guessed type FILE _sF;
