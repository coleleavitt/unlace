/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfilesize
// Address: 0x00000000000BD5A0

//----- (00000000000BD5A0) ----------------------------------------------------
const char *__fastcall qfilesize(const char *result)
{
  int v1; // w0
  _BYTE v2[40]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v3; // [xsp+30h] [xbp-40h]
  __int64 v4; // [xsp+58h] [xbp-18h]

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( result )
  {
    qstat(result, (__int64)v2);
    if ( v1 )
      return nullptr;
    else
      return (const char *)v3;
  }
  return result;
}
// BD5C0: variable 'v1' is possibly undefined
