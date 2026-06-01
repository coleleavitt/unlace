/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005F560
// Address: 0x000000014005F560

//----- (000000014005F560) ----------------------------------------------------
__int64 __fastcall sub_14005F560(const char *Src, const char *a2)
{
  _QWORD *v4; // rbx

  v4 = j__calloc_base(1u, 0x90u);
  if ( v4 )
  {
    *errno() = 0;
    if ( (unsigned int)sub_14005FED0(a2, (__int64)(v4 + 4)) && (unsigned int)sub_14005FED0(Src, (__int64)(v4 + 11)) )
    {
      *v4 = v4;
      v4[1] = UserMathErrorFunction;
      v4[2] = sub_140060CF0;
      v4[3] = errno;
      return (__int64)v4;
    }
    free(v4);
  }
  return -1;
}
