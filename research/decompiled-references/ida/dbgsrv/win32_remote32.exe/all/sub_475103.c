/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475103
// Address: 0x00475103

//----- (00475103) --------------------------------------------------------
int __usercall sub_475103@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        __m128i a3@<xmm0>,
        const WCHAR *a4,
        unsigned __int16 *a5,
        int a6)
{
  int v7; // esi
  int v8; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  if ( !a4 || (a2 = (int)a5) == 0 || (a1 = 0, !*a5) )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 0;
  }
  if ( !*a4 )
  {
    *sub_46B984() = 22;
    return 0;
  }
  sub_47C445(&v8);
  if ( !v8 )
  {
    *sub_46B984() = 24;
    return 0;
  }
  ms_exc.registration.TryLevel = 0;
  v7 = sub_47C9AD(0, a3, a4, a5, a6, v8);
  ms_exc.registration.TryLevel = -2;
  if ( !v7 )
    sub_47C4AE(v8);
  sub_4695AA(v8);
  return v7;
}
