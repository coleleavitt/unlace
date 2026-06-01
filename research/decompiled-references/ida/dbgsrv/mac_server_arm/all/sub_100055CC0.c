/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055CC0
// Address: 0x0000000100055CC0

//----- (0000000100055CC0) ----------------------------------------------------
void __fastcall __noreturn sub_100055CC0(
        _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // x19
  _QWORD **v15; // x20
  _QWORD **v16; // x21
  char **v17; // x23
  __int64 v18; // x24
  _QWORD **v19; // x25
  _QWORD **v20; // x26
  _QWORD *v21; // x27
  _QWORD *v22; // x28

  sub_100006228(v22);
  sub_100006228((_QWORD *)(v18 + 432));
  sub_100008E98(v18 + 296);
  sub_100008FC0(v18 + 256, *v20);
  sub_100006228((_QWORD *)(v18 + 232));
  sub_10004C3B8((char **)(v18 + 208));
  sub_100009004(v18 + 184, *v19);
  sub_1000017A4((_QWORD *)(v18 + 160));
  sub_10000AF04((char **)(v18 + 128));
  sub_100055D70(v21);
  sub_100009048(a11, *v16);
  sub_1000090C0(a12, *v15);
  sub_1000091FC(v17);
  sub_1000159F4(a13);
  free_debug_event(a14);
  sub_1000092B4(v14 + 120);
  sub_100055DB0(v14 + 72);
  sub_100009434(a10);
  _Unwind_Resume(a1);
}
// 100055CC8: variable 'v22' is possibly undefined
// 100055CCC: variable 'v18' is possibly undefined
// 100055CDC: variable 'v20' is possibly undefined
// 100055CF8: variable 'v19' is possibly undefined
// 100055D18: variable 'v21' is possibly undefined
// 100055D1C: variable 'v16' is possibly undefined
// 100055D28: variable 'v15' is possibly undefined
// 100055D38: variable 'v17' is possibly undefined
// 100055D4C: variable 'v14' is possibly undefined
