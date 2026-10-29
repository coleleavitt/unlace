/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001740
// Address: 0x0000000100001740

//----- (0000000100001740) ----------------------------------------------------
void __fastcall __noreturn sub_100001740(_Unwind_Exception *a1)
{
  __int64 v1; // x19
  _QWORD **v2; // x20
  _QWORD **v3; // x21
  _QWORD **v4; // x22
  _QWORD **v5; // x23

  v5 = v2;
  sub_10000B338(v1 + 1904, *v4);
  sub_1000017A4((_QWORD *)(v1 + 1880));
  sub_10000B2F4(v1 + 1856, *v3);
  sub_10000B27C(v1 + 1832, *v5);
  sub_1000017E4((_QWORD *)(v1 + 1768));
  sub_100008BCC(v1 + 1560);
  sub_10000183C((char **)(v1 + 1520));
  sub_100008CA4(v1);
  _Unwind_Resume(a1);
}
// 100001740: variable 'v2' is possibly undefined
// 10000174C: variable 'v1' is possibly undefined
// 100001748: variable 'v4' is possibly undefined
// 10000175C: variable 'v3' is possibly undefined
