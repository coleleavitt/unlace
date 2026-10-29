/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407288
// Address: 0x0000000000407288

//----- (0000000000407288) ----------------------------------------------------
__int64 __fastcall sub_407288(__int64 a1, int a2)
{
  FILE *v2; // x0
  FILE *v3; // x20
  unsigned int v4; // w19
  double v5; // d0
  double v6; // d1
  const char *v7; // x19
  char *v8; // x0
  void *ptr; // [xsp+50h] [xbp-1020h] BYREF
  unsigned __int64 v11; // [xsp+58h] [xbp-1018h]
  __int64 v12; // [xsp+60h] [xbp-1010h]
  char v13[4096]; // [xsp+68h] [xbp-1008h] BYREF

  sub_49B748(v13, 0x1000u, "/proc/%u/maps", a2);
  v2 = sub_48DE20(v13);
  if ( v2 )
  {
    v3 = v2;
    v4 = 0;
    ptr = nullptr;
    v11 = 0;
    v12 = 0;
    while ( (sub_490E28((__int64)&ptr, v3) & 0x8000000000000000LL) == 0 )
    {
      if ( v11 > 1 )
      {
        if ( (unsigned int)sub_49B8B8((const char *)ptr, "%a-%a ", v5, v6) == 2 )
        {
          v7 = (const char *)&qword_4B2D48;
          if ( v11 )
            v7 = (const char *)ptr;
          v8 = strchr(v7, 45);
          if ( v8 )
          {
            if ( (unsigned __int64)(v8 - v7 - 9) <= 0xFFFFFFFFFFFFFFF5LL )
            {
              v4 = 8;
              break;
            }
          }
        }
        v4 = 4;
      }
    }
    sub_4906A0(v3);
    if ( ptr )
    {
      v11 = 0;
      j__free(ptr);
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
// 40732C: variable 'v5' is possibly undefined
// 40732C: variable 'v6' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
