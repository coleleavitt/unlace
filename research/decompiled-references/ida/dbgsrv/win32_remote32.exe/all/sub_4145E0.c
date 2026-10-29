/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4145E0
// Address: 0x004145E0

//----- (004145E0) --------------------------------------------------------
bool __userpurge sub_4145E0@<al>(int a1@<ecx>, __m128i a2@<xmm0>, _DWORD *a3)
{
  bool v4; // bl
  void *v5; // eax
  BOOL v6; // eax

  v4 = 1;
  v5 = (void *)*a3;
  if ( *a3 != -1 && v5 )
  {
    v6 = CloseHandle(v5);
    v4 = v6;
    if ( !v6 )
      sub_43C950(a2, a1, (int)"CloseHandle(%08X)", *a3);
    *a3 = -1;
  }
  return v4;
}
