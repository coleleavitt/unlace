/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000187C
// Address: 0x000000010000187C

//----- (000000010000187C) ----------------------------------------------------
void __fastcall __noreturn sub_10000187C(_Unwind_Exception *a1)
{
  __int64 v1; // x19
  _QWORD **v2; // x20
  _QWORD **v3; // x21
  _QWORD **v4; // x22
  _QWORD **v5; // x23

  v5 = v2;
  sub_10000BC90(v1 + 1904, *v4);
  sub_1000018E0((_QWORD *)(v1 + 1880));
  sub_10000BC38(v1 + 1856, *v3);
  sub_10000BBAC(v1 + 1832, *v5);
  sub_100001924((_QWORD *)(v1 + 1768));
  sub_1000092EC(v1 + 1560);
  sub_100001980((char **)(v1 + 1520));
  sub_10000940C(v1);
  _Unwind_Resume(a1);
}
// 10000187C: variable 'v2' is possibly undefined
// 100001888: variable 'v1' is possibly undefined
// 100001884: variable 'v4' is possibly undefined
// 100001898: variable 'v3' is possibly undefined
