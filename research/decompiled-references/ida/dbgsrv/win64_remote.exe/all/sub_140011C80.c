/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140011C80
// Address: 0x0000000140011C80

//----- (0000000140011C80) ----------------------------------------------------
void __fastcall sub_140011C80(__int64 a1, void *a2, __int64 a3)
{
  void *v3; // rax

  v3 = a2;
  if ( (unsigned __int64)(8 * a3) >= 0x1000 )
  {
    if ( (unsigned __int64)a2 - *((_QWORD *)a2 - 1) - 8 > 0x1F )
      invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    v3 = *((void **)a2 - 1);
  }
  j_j_free(v3);
}
