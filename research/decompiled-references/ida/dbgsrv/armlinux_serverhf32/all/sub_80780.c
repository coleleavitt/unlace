/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80780
// Address: 0x00080780

//----- (00080780) --------------------------------------------------------
void __fastcall __noreturn sub_80780(_BYTE *a1)
{
  if ( a1 )
  {
    sub_8065C((int)a1);
    if ( *a1 == 71
      && a1[1] == 78
      && a1[2] == 85
      && a1[3] == 67
      && a1[4] == 67
      && a1[5] == 43
      && a1[6] == 43
      && (unsigned __int8)a1[7] <= 1u )
    {
      sub_7FEC8(*((void (__fastcall **)(_DWORD))a1 - 5));
    }
  }
  sub_7FF18();
}
