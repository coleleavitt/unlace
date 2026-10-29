/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F30
// Address: 0x0000000000043F30

//----- (0000000000043F30) ----------------------------------------------------
__int64 __fastcall sub_43F30(
        unsigned __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        unsigned int a6,
        double a7,
        double a8,
        char *s,
        unsigned int a10)
{
  int v10; // ebp
  __int64 v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v12[1] = __readfsqword(0x28u);
  v10 = sub_9ED20(a1, a2, a3, a4, a5, a6, s, a10, v12);
  if ( v10 > 0 && v12[0] && !(unsigned __int8)sub_43480(a1, v12[0], 0, a7, a8) )
  {
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
    return (unsigned int)-2;
  }
  return (unsigned int)v10;
}
