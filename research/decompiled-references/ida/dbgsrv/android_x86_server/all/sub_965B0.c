/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_965B0
// Address: 0x000965B0

//----- (000965B0) --------------------------------------------------------
unsigned int sub_965B0(char *a1, ...)
{
  char *v1; // eax
  char *v3; // [esp+18h] [ebp-20h] BYREF
  int v4; // [esp+1Ch] [ebp-1Ch]
  int v5; // [esp+20h] [ebp-18h]
  va_list v6; // [esp+28h] [ebp-10h]
  unsigned int v7; // [esp+2Ch] [ebp-Ch]
  va_list va; // [esp+44h] [ebp+Ch] BYREF

  va_start(va, a1);
  v7 = __readgsdword(0x14u);
  va_copy(v6, va);
  v3 = nullptr;
  v4 = 0;
  v5 = 0;
  sub_2EA00((int)&v3, a1, (int)va);
  if ( v4 )
    v1 = v3;
  else
    v1 = byte_EF875;
  sub_98F70((char *)&off_EC379, v1);
  sub_333F0();
  if ( v3 )
  {
    v4 = 0;
    qfree(v3);
    v3 = nullptr;
    v5 = 0;
  }
  return __readgsdword(0x14u);
}
// EC379: using guessed type _UNKNOWN *off_EC379;
