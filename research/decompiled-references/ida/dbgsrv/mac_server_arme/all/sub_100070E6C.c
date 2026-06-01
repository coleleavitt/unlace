/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070E6C
// Address: 0x0000000100070E6C

//----- (0000000100070E6C) ----------------------------------------------------
void __fastcall sub_100070E6C(
        _QWORD *a1,
        char a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9)
{
  size_t v11; // x20
  void *v12; // x0
  void *v13; // [xsp+8h] [xbp-448h] BYREF
  size_t v14; // [xsp+10h] [xbp-440h]
  __int64 v15; // [xsp+18h] [xbp-438h]
  const char **v16; // [xsp+20h] [xbp-430h]
  char __s[1024]; // [xsp+28h] [xbp-428h] BYREF

  v16 = &a9;
  vqmakepath(__s, 1024, a3, &a9);
  if ( (a2 & 4) == 0 || qisdir(__s) )
  {
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
    v11 = strlen(__s);
    v12 = nullptr;
    if ( v11 != -1 )
    {
      v12 = qvector_reserve(&v13, nullptr, v11 + 1, 1u);
      v13 = v12;
    }
    v14 = v11 + 1;
    memmove(v12, __s, v11);
    *((_BYTE *)v13 + v11) = 0;
    sub_100015DAC(a1, (__int64)&v13);
    if ( v13 )
    {
      v14 = 0;
      qfree(v13);
    }
  }
}
