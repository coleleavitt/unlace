/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80E40
// Address: 0x00080E40

//----- (00080E40) --------------------------------------------------------
void __fastcall __noreturn sub_80E40(_BYTE *a1)
{
  if ( a1 )
  {
    sub_81294((int)a1);
    if ( *a1 == 71
      && a1[1] == 78
      && a1[2] == 85
      && a1[3] == 67
      && a1[4] == 67
      && a1[5] == 43
      && a1[6] == 43
      && (unsigned __int8)a1[7] <= 1u )
    {
      sub_809F0(*((void (__fastcall **)(_DWORD))a1 - 5));
    }
  }
  sub_80A40();
}
