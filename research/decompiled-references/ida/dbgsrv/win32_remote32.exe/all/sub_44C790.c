/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C790
// Address: 0x0044C790

//----- (0044C790) --------------------------------------------------------
void *__thiscall sub_44C790(void *this, char a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // [esp-4h] [ebp-18h]

  v4 = *((struct _RTL_CRITICAL_SECTION **)this + 3);
  *(_DWORD *)this = &off_48F600;
  sub_4562A0(v4);
  *(_DWORD *)this = &off_48F5F0;
  sub_44C420((void **)this + 1);
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 48F5F0: using guessed type _UNKNOWN *off_48F5F0;
// 48F600: using guessed type int (__stdcall *off_48F600)(char);
