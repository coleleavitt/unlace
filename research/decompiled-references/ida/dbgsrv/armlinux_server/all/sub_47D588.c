/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D588
// Address: 0x000000000047D588

//----- (000000000047D588) ----------------------------------------------------
__int64 __fastcall sub_47D588(const char *a1, const char *a2, char a3)
{
  int v5; // w0
  const char *v8; // x0
  _BYTE v9[80]; // [xsp+38h] [xbp-58h] BYREF
  __int64 v10; // [xsp+88h] [xbp-8h]

  if ( !a2 || !*a2 )
    sub_47D4F8(-1, "Missing %s path\n", a1);
  v5 = a3 & 0xF;
  if ( v5 == 2 )
  {
    if ( !(unsigned __int8)sub_4902C8(a2) )
      sub_47D4F8(-1, "The %s directory \"%s\" does not exist\n", a1, a2);
  }
  else if ( v5 == 3 )
  {
    if ( !(unsigned int)sub_4901F0(a2, (__int64)v9) )
      sub_47D4F8(-1, "The %s path %s already exists", a1, a2);
  }
  else if ( v5 == 1 && !(unsigned __int8)sub_490268(a2) )
  {
    sub_47D4F8(-1, "The %s file \"%s\" does not exist\n", a1, a2);
  }
  if ( (a3 & 0x10) != 0 )
  {
    if ( (unsigned int)sub_4901F0(a2, (__int64)v9) )
    {
      v8 = (const char *)sub_487060(-1);
      sub_47D4F8(-1, "The %s file \"%s\" could not be queried: %s\n", a1, a2, v8);
    }
    if ( (v9[12] & 7) != 0 )
      sub_47D4F8(-1, "The %s file \"%s\" is world-accessible; exiting\n", a1, a2);
  }
  return v10 ^ _stack_chk_guard;
}
