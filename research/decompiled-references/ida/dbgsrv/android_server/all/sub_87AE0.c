/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87AE0
// Address: 0x0000000000087AE0

//----- (0000000000087AE0) ----------------------------------------------------
__int64 __fastcall sub_87AE0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // x19
  void *v3; // x20
  void *v4; // x0
  void *ptr; // [xsp+0h] [xbp-40h] BYREF
  char v7; // [xsp+10h] [xbp-30h]
  __int64 v8; // [xsp+18h] [xbp-28h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *a2;
  sub_87B74(a1, a2, (__int64)&ptr);
  v3 = ptr;
  ptr = nullptr;
  if ( v3 )
  {
    if ( v7 )
    {
      v4 = *((void **)v3 + 5);
      if ( v4 )
      {
        *((_QWORD *)v3 + 6) = 0;
        qfree(v4);
        *((_QWORD *)v3 + 5) = 0;
        *((_QWORD *)v3 + 7) = 0;
      }
      if ( (*((_BYTE *)v3 + 16) & 1) != 0 )
        operator delete(*((void **)v3 + 4));
    }
    operator delete(v3);
  }
  return v2;
}
