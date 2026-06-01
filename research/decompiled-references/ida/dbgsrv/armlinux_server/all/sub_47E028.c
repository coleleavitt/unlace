/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E028
// Address: 0x000000000047E028

//----- (000000000047E028) ----------------------------------------------------
unsigned __int64 __fastcall sub_47E028(
        unsigned __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v11; // x1
  char v12; // [xsp+0h] [xbp-40h]
  void *ptr; // [xsp+20h] [xbp-20h] BYREF
  __int64 v14; // [xsp+28h] [xbp-18h]
  __int64 v15; // [xsp+30h] [xbp-10h]

  if ( a3 < 0 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(1225);
  }
  if ( a3 )
  {
    ptr = nullptr;
    v14 = 0;
    v15 = 0;
    sub_47DD00((__int64)&ptr, a2, -1, a3, a5, a6, a7, a8, v12);
    v11 = (unsigned __int8 *)ptr;
    if ( !v14 )
      v11 = (unsigned __int8 *)&qword_4B2D48;
    a1 = sub_493350(a1, v11, a3);
    if ( ptr )
    {
      v14 = 0;
      j__free(ptr);
    }
  }
  return a1;
}
// 47E090: variable 'v12' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
