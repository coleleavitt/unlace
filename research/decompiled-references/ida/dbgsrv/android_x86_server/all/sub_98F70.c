/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98F70
// Address: 0x00098F70

//----- (00098F70) --------------------------------------------------------
int sub_98F70(char *s, ...)
{
  void **p_pad1; // edi
  int v2; // esi
  va_list __varargs; // [esp+28h] [ebp+Ch] BYREF

  va_start(__varargs, s);
  p_pad1 = &_sF.__pad1;
  if ( dword_13C2AC )
    p_pad1 = (void **)dword_13C2AC;
  v2 = qvfprintf((FILE *)p_pad1, s, __varargs);
  fflush((FILE *)p_pad1);
  return v2;
}
// 13C2AC: using guessed type int dword_13C2AC;
// 13E950: using guessed type FILE _sF;
