/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100058FE0
// Address: 0x0000000100058FE0

//----- (0000000100058FE0) ----------------------------------------------------
void __fastcall __noreturn sub_100058FE0(
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

  sub_100006678(v22);
  sub_100006678((_QWORD *)(v18 + 432));
  sub_100009610(v18 + 296);
  sub_10000973C(v18 + 256, *v20);
  sub_100006678((_QWORD *)(v18 + 232));
  sub_10004EE40((char **)(v18 + 208));
  sub_100009794(v18 + 184, *v19);
  sub_1000018E0((_QWORD *)(v18 + 160));
  sub_10000B7DC((char **)(v18 + 128));
  sub_100059090(v21);
  sub_1000097EC(a11, *v16);
  sub_100009878(a12, *v15);
  sub_1000099CC(v17);
  sub_100016D78(a13);
  free_debug_event(a14);
  sub_100009A88(v14 + 120);
  sub_1000590D4(v14 + 72);
  sub_100009C0C(a10);
  _Unwind_Resume(a1);
}
// 100058FE8: variable 'v22' is possibly undefined
// 100058FEC: variable 'v18' is possibly undefined
// 100058FFC: variable 'v20' is possibly undefined
// 100059018: variable 'v19' is possibly undefined
// 100059038: variable 'v21' is possibly undefined
// 10005903C: variable 'v16' is possibly undefined
// 100059048: variable 'v15' is possibly undefined
// 100059058: variable 'v17' is possibly undefined
// 10005906C: variable 'v14' is possibly undefined
