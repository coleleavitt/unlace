/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432750
// Address: 0x0000000000432750

//----- (0000000000432750) ----------------------------------------------------
__int64 __fastcall sub_432750(__int64 a1, __int64 *a2)
{
  __int64 v3; // x2
  const char *v4; // x1
  const char *v5; // x1
  unsigned int v6; // w20
  void *ptr; // [xsp+20h] [xbp-20h] BYREF
  __int64 v9; // [xsp+28h] [xbp-18h]
  __int64 v10; // [xsp+30h] [xbp-10h]

  v3 = *(_QWORD *)(a1 + 16);
  ptr = nullptr;
  v9 = 0;
  v10 = 0;
  if ( v3 )
    v4 = *(const char **)(a1 + 8);
  else
    v4 = (const char *)&qword_4B2D48;
  if ( (unsigned __int8)sub_440820(nullptr, v4, (__int64)&ptr, 0) )
  {
    v6 = 0;
    a2[1] = 1;
  }
  else
  {
    v5 = (const char *)&qword_4B2D48;
    if ( v9 )
      v5 = (const char *)ptr;
    v6 = sub_4325E8(a2, v5);
  }
  if ( ptr )
  {
    v9 = 0;
    j__free(ptr);
  }
  return v6;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
