/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000467D4
// Address: 0x00000001000467D4

//----- (00000001000467D4) ----------------------------------------------------
__int64 __fastcall sub_1000467D4(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // x19
  char *v3; // x20
  void *v4; // x0
  void *__p; // [xsp+0h] [xbp-30h] BYREF
  char v7; // [xsp+10h] [xbp-20h]

  v2 = *a2;
  sub_100046884(a1, a2, (__int64)&__p);
  v3 = (char *)__p;
  __p = nullptr;
  if ( v3 )
  {
    if ( v7 == 1 )
    {
      v4 = *((void **)v3 + 5);
      if ( v4 )
      {
        *((_QWORD *)v3 + 6) = 0;
        qfree(v4);
        *((_QWORD *)v3 + 5) = 0;
        *((_QWORD *)v3 + 7) = 0;
      }
      if ( v3[39] < 0 )
        operator delete(*((void **)v3 + 2));
    }
    operator delete(v3);
  }
  return v2;
}
