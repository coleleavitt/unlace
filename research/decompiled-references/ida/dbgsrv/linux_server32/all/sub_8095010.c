/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8095010
// Address: 0x08095010

//----- (08095010) --------------------------------------------------------
void __cdecl sub_8095010(void **a1)
{
  if ( a1 )
  {
    sub_8094E40((int)a1);
    if ( *a1 != a1 + 6 )
      operator delete(*a1, 4 * (_DWORD)a1[1]);
    operator delete(a1, 0x1Cu);
  }
}
