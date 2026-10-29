/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003E500
// Address: 0x000000014003E500

//----- (000000014003E500) ----------------------------------------------------
__int64 __fastcall sub_14003E500(const char **a1, unsigned __int64 a2, __int64 a3, char a4)
{
  void *v8; // rax

  v8 = operator new(0x2E0u);
  if ( v8 )
    return sub_140036D10((__int64)v8, a1, a2, a3, a4);
  else
    return 0;
}
